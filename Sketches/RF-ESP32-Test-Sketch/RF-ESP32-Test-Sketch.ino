#include "optimised_rf_model.h"
#include "test_data.h"

// Scaling parameters (RobustScaler: (x - median) / IQR)
double medians[] = {8081.0, 40.0, 0.0, 36182, 0.00000596};
double iqrs[] = {37192.0, 1.0, 13333333.33333333, 28282.0, 0.00024295};

void setup() {
  Serial.begin(115200);
  while(!Serial);
  delay(2000);
  
  Serial.println("--- Starting Hardware Evaluation ---");

  // Starting 1000-sample Batch Test
  int tp = 0, tn = 0, fp = 0, fn = 0; // Confusion Matrix counters
  unsigned long total_latency = 0;
  unsigned long min_latency = 1000000;
  unsigned long max_latency = 0;
  int num_samples = 1000;

  for (int i = 0; i < num_samples; i++) {
    double scaled_input[5];
    double outcomes[2];
    
    unsigned long start_time = micros();
    
    // Scale the raw sample
    for(int j = 0; j < 5; j++) {
      scaled_input[j] = (raw_samples[i][j] - medians[j]) / iqrs[j];
    }
    
    // Run Inference
    score(scaled_input, outcomes);
    
    unsigned long end_time = micros();
    unsigned long current_latency = end_time - start_time;

    // --- Track Min/Max ---
    if (current_latency < min_latency) min_latency = current_latency;
    if (current_latency > max_latency) max_latency = current_latency;

    total_latency += current_latency;

    // Confusion Matrix Logic
    int actual = true_labels[i];
    int predicted = (outcomes[1] > 0.5) ? 1 : 0;

    if (predicted == 1 && actual == 1) tp++;
    else if (predicted == 0 && actual == 0) tn++;
    else if (predicted == 1 && actual == 0) fp++;
    else if (predicted == 0 && actual == 1) fn++;
  }

// --- STATISTICAL ANALYSIS ---
  float precision = (float)tp / (tp + fp);
  float recall = (float)tp / (tp + fn);
  float f1_score = 2 * ((precision * recall) / (precision + recall));
  float final_accuracy = ((float)(tp + tn) / num_samples) * 100.0;
  float average_latency = (float)total_latency / num_samples;

  Serial.println("---------- CONFUSION MATRIX ----------");
  Serial.printf("TP: %d | FN: %d\n", tp, fn);
  Serial.printf("FP: %d | TN: %d\n", fp, tn);
  Serial.println("-------------- METRICS ---------------");
  Serial.print("Precision: "); Serial.println(precision, 4);
  Serial.print("Recall:    "); Serial.println(recall, 4);
  Serial.print("F1-Score:  "); Serial.println(f1_score, 4);
  Serial.print("Accuracy:  "); Serial.print(final_accuracy, 2); Serial.println("%");
  Serial.print("Avg Latency: "); Serial.print(average_latency, 2); Serial.println(" us");
  Serial.print("Min Latency: "); Serial.print(min_latency); Serial.println(" us");
  Serial.print("Max Latency: "); Serial.print(max_latency); Serial.println(" us");
  Serial.println("---------------------------------------");
}

void loop() {
  // Empty
}