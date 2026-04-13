#include "optimised_rf_model.h"
#include "test_data.h"

// Scaling parameters (RobustScaler: (x - median) / IQR)
double medians[] = {23.0, 40.0, 41427.5, 0.0, 5.0067901611328125e-06};
double iqrs[] = {8058.0, 20.0, 21923.0, 57.966870001565105, 0.0002338886260986328};

void setup() {
  Serial.begin(115200);
  while(!Serial);
  delay(2000);
  
  Serial.println("--- Starting Hardware Evaluation ---");

  // Test on RAW samples using the scaling parameters
  Serial.println("Running 10 Raw Validation Tests...");
  for(int i = 0; i < 10; i++) {
    Serial.print("Sample #"); Serial.println(i);
    runInference(raw_samples[i]); 
  }

  // Test on BATCH PRE-SCALED samples
  Serial.println("\nStarting 500-sample Batch Test...");
  int correct_predictions = 0;
  unsigned long total_latency = 0;
  int num_samples = 500;

  for (int i = 0; i < num_samples; i++) {
    double outcomes[2]; // [0] = Benign, [1] = Attack
    
    // --- MEASURE PERFORMANCE ---
    unsigned long start_time = micros();
    score(large_test_set[i], outcomes);
    unsigned long end_time = micros();
    // ---------------------------

    total_latency += (end_time - start_time);

    // --- CHECK ACCURACY ---
    int actual = true_labels[i];
    int predicted = (outcomes[1] > 0.5) ? 1 : 0;

    if (predicted == actual) {
      correct_predictions++;
    }
  }

  // --- STATISTICAL ANALYSIS ---
  float final_accuracy = ((float)correct_predictions / num_samples) * 100.0;
  float average_latency = (float)total_latency / num_samples;

  Serial.println("---------------------------------------");
  Serial.print("Average Latency: ");
  Serial.print(average_latency, 2);
  Serial.println(" microseconds");

  Serial.print("On-Device Accuracy: ");
  Serial.print(final_accuracy, 2);
  Serial.println("%");

  Serial.print("Total Correct: ");
  Serial.print(correct_predictions);
  Serial.print("/");
  Serial.println(num_samples);
  Serial.println("---------------------------------------");
  Serial.println("Evaluation Complete.");
}

void runInference(double* raw_input) {
  int num_features = 5;
  double scaled_input[num_features];

  double outcomes[2];

  // Scaling Step
  for(int i = 0; i < num_features; i++) {
    scaled_input[i] = (raw_input[i] - medians[i]) / iqrs[i];
  }

  // Inference Step + Timing
  unsigned long start_time = micros();
  score(scaled_input, outcomes);
  unsigned long end_time = micros();

  // Extract the Attack Probability (Index 1)
  double attack_probability = outcomes[1];

  // Output Results
  Serial.print("Attack Probability: ");
  Serial.println(attack_probability, 4);
  
  if (attack_probability > 0.5) {
    Serial.println("RESULT: [!] ATTACK DETECTED");
  } else {
    Serial.println("RESULT: [OK] BENIGN TRAFFIC");
  }

  Serial.print("Inference Latency: ");
  Serial.print(end_time - start_time);
  Serial.println(" microseconds");
  Serial.println("---------------------------------------");
}

void loop() {
  // Empty
}