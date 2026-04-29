#include <string.h>
void add_vectors(double *v1, double *v2, int size, double *result) {
    for(int i = 0; i < size; ++i)
        result[i] = v1[i] + v2[i];
}
void mul_vector_number(double *v1, double num, int size, double *result) {
    for(int i = 0; i < size; ++i)
        result[i] = v1[i] * num;
}
void score(double * input, double * output) {
    double var0[2];
    double var1[2];
    double var2[2];
    double var3[2];
    double var4[2];
    double var5[2];
    if (input[0] <= -0.21530167758464813) {
        if (input[1] <= 8.0) {
            if (input[2] <= 0.012466837144529563) {
                if (input[0] <= -0.21667294204235077) {
                    if (input[1] <= -20.0) {
                        memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        if (input[3] <= 0.21126511693000793) {
                            if (input[2] <= 0.000013520943866751622) {
                                memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        }
                    }
                } else {
                    if (input[3] <= 0.6512269377708435) {
                        if (input[3] <= -0.8985573947429657) {
                            if (input[0] <= -0.21606797724962234) {
                                memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[4] <= -0.018155054189264774) {
                                if (input[3] <= -0.8942260146141052) {
                                    memcpy(var5, (double[]){0.8, 0.2}, 2 * sizeof(double));
                                } else {
                                    if (input[4] <= -3.6413150019943714) {
                                        memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[4] <= -0.020117762498557568) {
                                            if (input[4] <= -0.021099116653203964) {
                                                memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[3] <= 0.5741991400718689) {
                                                    memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                } else {
                                                    if (input[3] <= 0.5781238973140717) {
                                                        memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        } else {
                                            memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[3] <= 0.5739869773387909) {
                                    if (input[0] <= -0.21625618636608124) {
                                        if (input[3] <= -0.4252528101205826) {
                                            if (input[3] <= -0.42732125520706177) {
                                                if (input[3] <= -0.8969662487506866) {
                                                    memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[3] <= 0.6501485109329224) {
                                        if (input[4] <= 0.9631991982460022) {
                                            if (input[4] <= -0.0142296371050179) {
                                                if (input[3] <= 0.5769217014312744) {
                                                    memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[4] <= 0.9607458412647247) {
                                                    if (input[4] <= -0.009813542477786541) {
                                                        memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[3] <= 0.5781592428684235) {
                                                            memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[3] <= 0.5799448490142822) {
                                                        memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[3] <= 0.5781062245368958) {
                                                memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[0] <= -0.21625618636608124) {
                            memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        } else {
                            memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    }
                }
            } else {
                memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        } else {
            if (input[4] <= -0.001962708483915776) {
                if (input[0] <= -0.21625618636608124) {
                    if (input[4] <= -0.009813542477786541) {
                        if (input[4] <= -0.0142296371050179) {
                            if (input[2] <= 0.0000064633902638888685) {
                                memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[3] <= -0.6740152798593044) {
                                    memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    if (input[2] <= 0.000030285241336969193) {
                                        if (input[3] <= 0.18739835172891617) {
                                            memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[2] <= 0.000026744339265860617) {
                                                if (input[4] <= -625.8115641679615) {
                                                    if (input[3] <= 0.4585602134466171) {
                                                        memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[2] <= 0.000006463251338573173) {
                                memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[4] <= -0.005888125626370311) {
                            if (input[3] <= 0.8733823597431183) {
                                if (input[2] <= 0.00000646304488327587) {
                                    memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[4] <= -0.008341511245816946) {
                                    if (input[3] <= 0.8769181668758392) {
                                        memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[3] <= 0.875397801399231) {
                                        if (input[3] <= 0.8743016719818115) {
                                            memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[3] <= -0.0842231810092926) {
                                if (input[2] <= 0.000006448040494433371) {
                                    memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[3] <= 0.7356976270675659) {
                                    if (input[2] <= 0.0000064638807089067996) {
                                        memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[3] <= 0.8027720749378204) {
                                        if (input[3] <= 0.758645087480545) {
                                            memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[4] <= -0.0034347398905083537) {
                                                if (input[2] <= 0.0000065245694713667035) {
                                                    memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[2] <= 0.000006471470442193095) {
                                            memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                if (input[4] <= 0.9396467208862305) {
                    if (input[4] <= 0.8130520284175873) {
                        if (input[4] <= 0.034838076680898666) {
                            if (input[2] <= 0.000006463922318289406) {
                                memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[2] <= 0.9000044497106501) {
                                memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[3] <= 0.8572590351104736) {
                            if (input[4] <= 0.8807654678821564) {
                                if (input[2] <= 0.000006475213922385592) {
                                    memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[4] <= 0.9013738930225372) {
                                    if (input[2] <= 0.000006564708201040048) {
                                        memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[4] <= 0.9062806665897369) {
                                        if (input[2] <= 0.000006502360747617786) {
                                            memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[2] <= 0.00000646690250505344) {
                                            memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[2] <= 0.000008867078577168286) {
                                                memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[3] <= -0.02856940869241953) {
                                                    if (input[3] <= -0.07704547047615051) {
                                                        memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[4] <= 0.852796882390976) {
                                if (input[2] <= 0.9000021535719043) {
                                    memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[2] <= 0.0000064848850342968944) {
                                    memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if (input[2] <= 0.000008118865480355453) {
                        if (input[2] <= 0.0000010039647122539463) {
                            if (input[3] <= 0.39233435690402985) {
                                if (input[0] <= -0.2162965163588524) {
                                    memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    if (input[4] <= 25039.32421875) {
                                        memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[1] <= 23.5) {
                                            memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[0] <= -0.21636373549699783) {
                                memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[2] <= 0.000004216301022097468) {
                                    memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[1] <= 21.0) {
                            if (input[4] <= 4031.3665771484375) {
                                if (input[1] <= 18.0) {
                                    memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    if (input[3] <= -0.06880701705813408) {
                                        if (input[4] <= 124.91363906860352) {
                                            memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[4] <= 268.3945007324219) {
                                                if (input[2] <= 0.000008780710231803823) {
                                                    memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[4] <= 0.9612365067005157) {
                                            if (input[3] <= 0.411569207906723) {
                                                memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[2] <= 1.1250043781133172) {
                                                    if (input[4] <= 0.9592738151550293) {
                                                        memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[3] <= 0.4409518539905548) {
                                                            memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[0] <= -0.21625618636608124) {
                                    memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    }
                }
            }
        }
    } else {
        if (input[0] <= -0.000013443751413433347) {
            if (input[4] <= 107.77183532714844) {
                if (input[1] <= 22.05555534362793) {
                    if (input[2] <= 0.012416452951583778) {
                        if (input[4] <= 0.973503440618515) {
                            if (input[3] <= 0.26635316014289856) {
                                if (input[3] <= -0.08938547223806381) {
                                    if (input[2] <= 0.0000032877576359169325) {
                                        memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[0] <= -0.2094402015209198) {
                                    if (input[2] <= 0.0000197519166249549) {
                                        if (input[3] <= 0.9246870577335358) {
                                            memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[4] <= -0.010794897098094225) {
                                                if (input[4] <= -0.0142296371050179) {
                                                    memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[4] <= -58565.0546875) {
                                        memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[4] <= -1696.9480483606458) {
                                            if (input[4] <= -5883.213134765625) {
                                                memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[0] <= -0.2102333828806877) {
                                memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[4] <= -1211834.0625) {
                        if (input[4] <= -1212927.0625) {
                            memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        }
                    } else {
                        memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[3] <= 0.6196167171001434) {
                    if (input[3] <= 0.2697298675775528) {
                        if (input[0] <= -0.21453538537025452) {
                            if (input[2] <= 0.0000047571024879289325) {
                                if (input[0] <= -0.21511346101760864) {
                                    if (input[4] <= 12832.632202148438) {
                                        memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[1] <= 26.0) {
                                if (input[2] <= 0.000054411100222750974) {
                                    memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[2] <= 0.0000102549292932963) {
                            if (input[0] <= -0.06076575443148613) {
                                if (input[4] <= 4111.677734375) {
                                    memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    if (input[1] <= 6.0) {
                                        if (input[3] <= 0.48939256370067596) {
                                            memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[1] <= 24.800000190734863) {
                                if (input[1] <= 23.59523868560791) {
                                    memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    if (input[0] <= -0.06076575443148613) {
                                        memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[3] <= 0.4925217628479004) {
                                    memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if (input[0] <= -0.180092491209507) {
                        if (input[4] <= 7437.993896484375) {
                            if (input[3] <= 0.7677321434020996) {
                                memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    } else {
                        memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[3] <= -1.2783926129341125) {
                memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
            } else {
                if (input[4] <= -43208.4267578125) {
                    memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    if (input[1] <= 9.0) {
                        if (input[4] <= 121551.4755859375) {
                            if (input[2] <= 0.000001872528400781448) {
                                if (input[0] <= 0.5519063323736191) {
                                    if (input[0] <= 0.16023607552051544) {
                                        memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[4] <= -41.173208236694336) {
                                    if (input[3] <= -0.8709072768688202) {
                                        memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[4] <= 224433.0859375) {
                                memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[3] <= 0.20730500668287277) {
                            memcpy(var5, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            memcpy(var5, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        }
                    }
                }
            }
        }
    }
    double var6[2];
    if (input[1] <= 1.2000000476837158) {
        if (input[0] <= -0.21548988670110703) {
            if (input[3] <= 0.6508910357952118) {
                if (input[0] <= -0.21667294204235077) {
                    memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[4] <= -0.018155054189264774) {
                        if (input[2] <= 0.000001955464995262446) {
                            if (input[4] <= -0.020117762498557568) {
                                if (input[4] <= -0.021099116653203964) {
                                    memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    if (input[3] <= 0.5741991400718689) {
                                        if (input[3] <= -0.8942260146141052) {
                                            if (input[3] <= -0.9023937582969666) {
                                                memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var6, (double[]){0.75, 0.25}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[3] <= 0.5781238973140717) {
                                            memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[3] <= -0.8982568383216858) {
                            memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        } else {
                            if (input[3] <= 0.5739869773387909) {
                                if (input[3] <= -0.4253942370414734) {
                                    if (input[4] <= 0.965161919593811) {
                                        if (input[4] <= -0.015210991259664297) {
                                            if (input[4] <= -0.01619234587997198) {
                                                if (input[3] <= -0.4424368888139725) {
                                                    if (input[3] <= -0.8969662487506866) {
                                                        memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[3] <= -0.4301676005125046) {
                                                    if (input[3] <= -0.8936602771282196) {
                                                        memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            if (input[4] <= 0.9612365067005157) {
                                                if (input[4] <= -0.009813542477786541) {
                                                    if (input[3] <= -0.4361608028411865) {
                                                        if (input[3] <= -0.867618978023529) {
                                                            memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[4] <= -0.0034347398905083537) {
                                                        if (input[3] <= -0.4409341663122177) {
                                                            if (input[4] <= -0.005888125626370311) {
                                                                memcpy(var6, (double[]){0.5681818181818182, 0.4318181818181818}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var6, (double[]){0.8333333333333334, 0.16666666666666666}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[3] <= -0.43941375613212585) {
                                                            if (input[3] <= -0.816844642162323) {
                                                                memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[4] <= 0.9631991982460022) {
                                                    if (input[3] <= -0.8262145519256592) {
                                                        memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[3] <= -0.4460257440805435) {
                                                            memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[3] <= -0.883547842502594) {
                                                        memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[3] <= -0.4794215261936188) {
                                                            memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[3] <= -0.893094539642334) {
                                            memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[4] <= 0.9759568274021149) {
                                                if (input[3] <= -0.4337034076452255) {
                                                    memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[3] <= -0.44874832034111023) {
                                                    memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if (input[3] <= -0.38206279277801514) {
                                        if (input[4] <= 1138.436197847128) {
                                            memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[0] <= -0.21625618636608124) {
                                            memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[4] <= 0.9612365067005157) {
                                    if (input[4] <= -0.01619234587997198) {
                                        if (input[3] <= 0.6501485109329224) {
                                            if (input[3] <= 0.5770631432533264) {
                                                memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[3] <= 0.6486104428768158) {
                                            if (input[3] <= 0.5781592428684235) {
                                                memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[4] <= 0.9695780277252197) {
                                        if (input[4] <= 0.9671246409416199) {
                                            if (input[4] <= 0.965161919593811) {
                                                if (input[3] <= 0.6465243101119995) {
                                                    if (input[3] <= 0.5781062245368958) {
                                                        memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[3] <= 0.6450039148330688) {
                                                memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[3] <= 0.6330882012844086) {
                                            if (input[4] <= 119488.11678314209) {
                                                if (input[4] <= 0.9798822402954102) {
                                                    if (input[3] <= 0.5951134860515594) {
                                                        memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[4] <= 820.1839952468872) {
                    if (input[1] <= -20.0) {
                        memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[3] <= 0.87371826171875) {
                        memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[0] <= -0.000013443751413433347) {
                if (input[0] <= -0.1404872015118599) {
                    if (input[4] <= -3.5691855140030384) {
                        memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        if (input[4] <= 4819.940673828125) {
                            if (input[1] <= -20.0) {
                                if (input[3] <= 0.9767873585224152) {
                                    if (input[0] <= -0.21511346101760864) {
                                        memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[2] <= 0.000004514006832323503) {
                                    memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    if (input[4] <= -0.007360157091170549) {
                                        if (input[2] <= 0.012401208167830191) {
                                            memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[4] <= 226419.4375) {
                                memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if (input[3] <= -0.18616080284118652) {
                        memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[3] <= -1.2777208089828491) {
                    if (input[3] <= -1.2789230346679688) {
                        memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[0] <= 0.39167025685310364) {
                        if (input[2] <= 0.002584881745860912) {
                            if (input[4] <= -21.10598685219884) {
                                memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[2] <= 0.000002689656639631721) {
                                    memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    if (input[4] <= 111242.31710767746) {
                                        memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[4] <= 3456675.640625) {
                            if (input[4] <= -730.2080688476562) {
                                if (input[0] <= 1.3315094709396362) {
                                    if (input[3] <= -0.4037196636199951) {
                                        memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    }
                }
            }
        }
    } else {
        if (input[4] <= -0.001962708483915776) {
            if (input[2] <= 0.000006411227332137059) {
                if (input[1] <= 14.67307710647583) {
                    memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[4] <= -955058.71875) {
                        memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        if (input[4] <= -90182.88671875) {
                            if (input[3] <= 0.38464392721652985) {
                                memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[4] <= -274565.359375) {
                                    memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    }
                }
            } else {
                if (input[0] <= -0.21625618636608124) {
                    if (input[1] <= 24.0) {
                        if (input[1] <= 18.0) {
                            memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            if (input[2] <= 0.00003149114581901813) {
                                if (input[2] <= 0.000009989817954192404) {
                                    memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    if (input[4] <= -2344.9146118164062) {
                                        memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[4] <= -1320.6089477539062) {
                                            memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[3] <= 0.4585602134466171) {
                                                memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                }
                            } else {
                                memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[2] <= 0.000010852170817088336) {
                        if (input[4] <= -18936.6259765625) {
                            if (input[3] <= 0.7576903998851776) {
                                memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[0] <= -0.05568401888012886) {
                            if (input[1] <= 16.75) {
                                memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[3] <= 0.16476910561323166) {
                                memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        }
                    }
                }
            }
        } else {
            if (input[2] <= 0.000008117546258290531) {
                if (input[0] <= -0.2162965163588524) {
                    memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    if (input[1] <= 22.5) {
                        if (input[3] <= 0.5263418555259705) {
                            if (input[1] <= 19.0) {
                                memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[0] <= -0.21553021669387817) {
                                    memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    if (input[0] <= -0.12657291442155838) {
                                        memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[3] <= 0.6129693686962128) {
                                if (input[4] <= 1243833.25) {
                                    if (input[4] <= 11690.783203125) {
                                        if (input[3] <= 0.5872286260128021) {
                                            if (input[4] <= 11683.09423828125) {
                                                if (input[3] <= 0.5550880432128906) {
                                                    if (input[3] <= 0.5416165888309479) {
                                                        memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[3] <= 0.6038823127746582) {
                                                memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[3] <= 0.5446220338344574) {
                                            memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[2] <= 0.0000021366108740039635) {
                                                if (input[0] <= -0.06076575443148613) {
                                                    memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[4] <= 1218233.0) {
                                                    if (input[3] <= 0.5956792235374451) {
                                                        memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[3] <= 0.6114489734172821) {
                                                            memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[4] <= 1230189.5625) {
                                                        memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[3] <= 0.7521391808986664) {
                                    memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[1] <= 21.0) {
                    if (input[0] <= -0.21625618636608124) {
                        if (input[3] <= -0.10278622433543205) {
                            if (input[3] <= -0.1038469672203064) {
                                memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[2] <= 0.000008822026757115964) {
                                memcpy(var6, (double[]){0.0010460251046025104, 0.9989539748953975}, 2 * sizeof(double));
                            } else {
                                if (input[3] <= 0.12053602933883667) {
                                    if (input[3] <= 0.11229757592082024) {
                                        memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[1] <= 19.95161247253418) {
                            memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        }
                    }
                } else {
                    if (input[2] <= 0.000014207367712515406) {
                        memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        if (input[3] <= 0.8134855926036835) {
                            if (input[0] <= -0.05568401888012886) {
                                memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[0] <= 0.00680253840982914) {
                                    memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[1] <= 29.210227012634277) {
                                memcpy(var6, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var6, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        }
                    }
                }
            }
        }
    }
    add_vectors(var5, var6, 2, var4);
    double var7[2];
    if (input[0] <= -0.21530167758464813) {
        if (input[1] <= 8.0) {
            if (input[0] <= -0.21667294204235077) {
                if (input[0] <= -0.21669982373714447) {
                    memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    if (input[4] <= 9881.282514572144) {
                        memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[1] <= -20.0) {
                    memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    if (input[3] <= 0.6532246768474579) {
                        if (input[4] <= -0.018155054189264774) {
                            if (input[2] <= 0.000001955464995262446) {
                                if (input[3] <= 0.5750477313995361) {
                                    if (input[3] <= -0.8942260146141052) {
                                        if (input[4] <= -0.020117762498557568) {
                                            if (input[3] <= -0.8988755941390991) {
                                                memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var7, (double[]){0.8, 0.2}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[4] <= -0.020117762498557568) {
                                        if (input[3] <= 0.5781238973140717) {
                                            memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[3] <= -0.8982568383216858) {
                                memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                if (input[3] <= 0.5726080238819122) {
                                    if (input[3] <= -0.4251644164323807) {
                                        if (input[4] <= 0.9656526148319244) {
                                            if (input[4] <= -0.015210991259664297) {
                                                if (input[4] <= -0.01619234587997198) {
                                                    if (input[3] <= -0.42732125520706177) {
                                                        if (input[3] <= -0.8969662487506866) {
                                                            memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[3] <= -0.4301676005125046) {
                                                        if (input[3] <= -0.8936602771282196) {
                                                            memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[4] <= 0.9543670415878296) {
                                                    if (input[3] <= -0.43941375613212585) {
                                                        if (input[4] <= -0.009813542477786541) {
                                                            if (input[3] <= -0.867618978023529) {
                                                                memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[4] <= -0.005888125626370311) {
                                                                memcpy(var7, (double[]){0.5608108108108109, 0.4391891891891892}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var7, (double[]){0.9745417515274949, 0.025458248472505093}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[3] <= -0.883547842502594) {
                                                        memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[3] <= -0.43200622498989105) {
                                                            memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[4] <= 0.973503440618515) {
                                                if (input[3] <= -0.893094539642334) {
                                                    memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    if (input[4] <= 0.9695780277252197) {
                                                        if (input[3] <= -0.4337034076452255) {
                                                            memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[4] <= 0.9862610399723053) {
                                                    if (input[4] <= 0.9838076531887054) {
                                                        if (input[4] <= 0.9818449318408966) {
                                                            if (input[3] <= -0.8969309031963348) {
                                                                memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var7, (double[]){0.4, 0.6}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[3] <= -0.7007637321949005) {
                                                            memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[3] <= -0.6838978826999664) {
                                                        memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[4] <= 3031.2860717773438) {
                                                            memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[4] <= 0.9631991982460022) {
                                        if (input[3] <= 0.6501485109329224) {
                                            if (input[3] <= 0.5769217014312744) {
                                                memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[4] <= 0.9695780277252197) {
                                            if (input[3] <= 0.6451453268527985) {
                                                if (input[3] <= 0.5781062245368958) {
                                                    memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[3] <= 0.6326285302639008) {
                                                if (input[4] <= 0.9818449318408966) {
                                                    if (input[3] <= 0.5930980741977692) {
                                                        memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[4] <= -0.001962708483915776) {
                if (input[1] <= 21.0) {
                    if (input[1] <= 18.5) {
                        memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        if (input[3] <= 0.876423180103302) {
                            if (input[3] <= 0.876211017370224) {
                                if (input[2] <= 0.000006118028522905661) {
                                    memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    if (input[3] <= 0.32331517338752747) {
                                        memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[2] <= 0.00002432365317872609) {
                                            if (input[2] <= 0.000009989817954192404) {
                                                memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[4] <= -0.009813542477786541) {
                                    if (input[4] <= -0.01226692833006382) {
                                        memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[2] <= 2.2500021913670025) {
                                memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        }
                    }
                } else {
                    memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                if (input[0] <= -0.21636373549699783) {
                    if (input[2] <= 0.000006462582405220019) {
                        if (input[2] <= 0.000003976443395004026) {
                            if (input[2] <= 0.0000018406951767246937) {
                                memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[0] <= -0.2169552594423294) {
                            memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            if (input[4] <= 0.38910697400569916) {
                                if (input[3] <= -0.10105367377400398) {
                                    if (input[3] <= -0.10469556599855423) {
                                        memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[3] <= 0.1187327615916729) {
                                        if (input[3] <= 0.11544445157051086) {
                                            memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[4] <= 207.7154083251953) {
                                    memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    if (input[3] <= -0.06272540800273418) {
                                        if (input[3] <= -0.07545435428619385) {
                                            memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[3] <= 0.39213988184928894) {
                        if (input[1] <= 22.0) {
                            if (input[4] <= 9517.65380859375) {
                                memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[2] <= 0.0006137783236681571) {
                                    memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[0] <= -0.21596042066812515) {
                            memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        } else {
                            memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    }
                }
            }
        }
    } else {
        if (input[1] <= 1.2000000476837158) {
            if (input[2] <= 0.012147609842941165) {
                if (input[3] <= 0.26660066843032837) {
                    if (input[0] <= -0.21511346101760864) {
                        if (input[2] <= 0.0000339247562806122) {
                            if (input[3] <= -0.3337812162935734) {
                                memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                if (input[4] <= 12832.632202148438) {
                                    memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[2] <= 0.000001872528400781448) {
                            memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        } else {
                            if (input[2] <= 0.0000305651819871855) {
                                if (input[4] <= 0.49803730426356196) {
                                    if (input[0] <= 0.39167025685310364) {
                                        memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[3] <= -0.541492834687233) {
                                        if (input[0] <= 0.39167025685310364) {
                                            memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[3] <= -0.3123895078897476) {
                                    if (input[2] <= 0.001358056282697362) {
                                        memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[2] <= 0.0019408662774367258) {
                                        memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[4] <= 3342658.528949976) {
                                            memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[3] <= 0.2676790952682495) {
                        if (input[3] <= 0.2667597681283951) {
                            memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            if (input[4] <= 3.0539745092391968) {
                                if (input[4] <= -0.018155054189264774) {
                                    if (input[0] <= -0.10756345383651933) {
                                        memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[4] <= -8220.313529271632) {
                                            memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[0] <= -0.10757689468391618) {
                                        memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[4] <= 21443.3935546875) {
                            if (input[0] <= 0.37268768064677715) {
                                if (input[0] <= -0.21426650881767273) {
                                    if (input[3] <= 0.6649812459945679) {
                                        if (input[0] <= -0.21511346101760864) {
                                            memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[3] <= 0.6634255051612854) {
                                                memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[4] <= -689.5903015136719) {
                                    if (input[0] <= 1.3315094709396362) {
                                        memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[3] <= 0.3937486857175827) {
                                memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                if (input[4] <= 228321.609375) {
                                    memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    if (input[4] <= 234550.9921875) {
                                        memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[4] <= 19.977428436279297) {
                    memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[4] <= 20.49018669128418) {
                        memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        if (input[2] <= 0.5227272808551788) {
                            if (input[3] <= -0.9681953489780426) {
                                memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        }
                    }
                }
            }
        } else {
            if (input[1] <= 22.05555534362793) {
                if (input[3] <= 0.6196167171001434) {
                    if (input[4] <= 173937.4453125) {
                        if (input[3] <= 0.5443037748336792) {
                            if (input[1] <= 18.590909004211426) {
                                if (input[3] <= 0.5014850348234177) {
                                    memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[0] <= -0.06076575443148613) {
                                    if (input[0] <= -0.1414417065680027) {
                                        if (input[3] <= 0.18630223721265793) {
                                            memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[0] <= -0.06076575443148613) {
                                memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[4] <= 344733.625) {
                            if (input[0] <= -0.06076575443148613) {
                                memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[4] <= 1230448.6875) {
                                if (input[0] <= -0.06076575443148613) {
                                    memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[2] <= 0.0000021562182155321352) {
                                    memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    if (input[4] <= 1239208.9375) {
                                        memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[0] <= -0.12169283628463745) {
                        memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[3] <= -0.0035004597157239914) {
                    memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    if (input[2] <= 0.00001383061908200034) {
                        if (input[1] <= 27.5) {
                            if (input[2] <= 0.000010000017027778085) {
                                memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[3] <= 0.5719185173511505) {
                                    memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[0] <= -0.06076575443148613) {
                            if (input[3] <= 0.792624294757843) {
                                memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[1] <= 35.365196228027344) {
                                    memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var7, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var7, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        }
                    }
                }
            }
        }
    }
    add_vectors(var4, var7, 2, var3);
    double var8[2];
    if (input[1] <= 1.2000000476837158) {
        if (input[0] <= -0.21530167758464813) {
            if (input[3] <= 0.6506789028644562) {
                if (input[2] <= 0.000001955464995262446) {
                    if (input[3] <= 0.5753836333751678) {
                        if (input[4] <= 0.9656526148319244) {
                            if (input[0] <= -0.21667294204235077) {
                                memcpy(var8, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                if (input[4] <= -0.015210991259664297) {
                                    if (input[3] <= -0.42645499110221863) {
                                        if (input[3] <= -0.42730358242988586) {
                                            if (input[3] <= -0.8969662487506866) {
                                                if (input[4] <= -0.018155054189264774) {
                                                    if (input[3] <= -0.8988755941390991) {
                                                        memcpy(var8, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var8, (double[]){0.5714285714285714, 0.42857142857142855}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[3] <= -0.8985573947429657) {
                                                        memcpy(var8, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var8, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                memcpy(var8, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var8, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var8, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[3] <= -0.4253942370414734) {
                                        if (input[3] <= -0.9041262865066528) {
                                            memcpy(var8, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[3] <= -0.4361608028411865) {
                                                if (input[3] <= -0.8772894442081451) {
                                                    memcpy(var8, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var8, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var8, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        memcpy(var8, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[1] <= -20.0) {
                                memcpy(var8, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[3] <= -0.4213634133338928) {
                                    if (input[4] <= 0.973994106054306) {
                                        if (input[4] <= 0.9695780277252197) {
                                            if (input[4] <= 0.9671246409416199) {
                                                if (input[3] <= -0.4305388629436493) {
                                                    if (input[3] <= -0.8821688592433929) {
                                                        if (input[3] <= -0.9218584299087524) {
                                                            memcpy(var8, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var8, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var8, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var8, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[3] <= -0.4337034076452255) {
                                                    if (input[3] <= -0.8918216526508331) {
                                                        if (input[3] <= -0.9281345009803772) {
                                                            memcpy(var8, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var8, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var8, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var8, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            if (input[4] <= 0.9720314145088196) {
                                                if (input[3] <= -0.9300791919231415) {
                                                    memcpy(var8, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                } else {
                                                    if (input[3] <= -0.893094539642334) {
                                                        memcpy(var8, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[3] <= -0.4276748448610306) {
                                                            memcpy(var8, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var8, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            } else {
                                                memcpy(var8, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[3] <= -0.9318117499351501) {
                                            memcpy(var8, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[3] <= -0.8969309031963348) {
                                                memcpy(var8, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[4] <= 0.9818449318408966) {
                                                    if (input[3] <= -0.45725196599960327) {
                                                        memcpy(var8, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var8, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var8, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if (input[4] <= 1148.7433614730835) {
                                        if (input[4] <= 1.0112856030464172) {
                                            memcpy(var8, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[0] <= -0.2162696272134781) {
                                                memcpy(var8, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var8, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[3] <= -0.3023477867245674) {
                                            memcpy(var8, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var8, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[3] <= 0.6503960192203522) {
                            if (input[0] <= -0.21667294204235077) {
                                memcpy(var8, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                if (input[3] <= 0.5769217014312744) {
                                    memcpy(var8, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var8, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var8, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    }
                } else {
                    memcpy(var8, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                if (input[4] <= 9420.47900390625) {
                    if (input[1] <= -20.0) {
                        memcpy(var8, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var8, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var8, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[2] <= 0.007190649630501866) {
                if (input[3] <= 0.26654762029647827) {
                    if (input[0] <= -0.21511346101760864) {
                        if (input[4] <= -3.0564278960227966) {
                            memcpy(var8, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            memcpy(var8, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[0] <= 0.39167025685310364) {
                            if (input[2] <= 0.0000018390004470347776) {
                                memcpy(var8, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                if (input[2] <= 0.000011745423762477003) {
                                    memcpy(var8, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    if (input[4] <= -12.8709517121315) {
                                        memcpy(var8, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[0] <= -0.1075500100851059) {
                                            memcpy(var8, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var8, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[4] <= 3456675.640625) {
                                memcpy(var8, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var8, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if (input[3] <= 0.26803267002105713) {
                        if (input[0] <= -0.10756345383651933) {
                            if (input[0] <= -0.21511346101760864) {
                                memcpy(var8, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                if (input[3] <= 0.26688352227211) {
                                    memcpy(var8, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var8, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[3] <= 0.2671310305595398) {
                                memcpy(var8, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var8, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[4] <= 56474.8984375) {
                            if (input[4] <= 0.9965652525424957) {
                                if (input[2] <= 0.000000901412533949042) {
                                    if (input[0] <= 0.5519063323736191) {
                                        if (input[4] <= -10290.155326146632) {
                                            memcpy(var8, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[1] <= -20.0) {
                                                if (input[3] <= 0.9767873585224152) {
                                                    memcpy(var8, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var8, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var8, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        memcpy(var8, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var8, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[4] <= 0.9980373084545135) {
                                    if (input[3] <= 0.6561770588159561) {
                                        memcpy(var8, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var8, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[0] <= 0.37268768064677715) {
                                        if (input[3] <= 0.9427197277545929) {
                                            if (input[3] <= 0.8878085017204285) {
                                                if (input[0] <= -0.21511346101760864) {
                                                    memcpy(var8, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var8, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var8, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var8, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var8, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[3] <= 0.8453609943389893) {
                                memcpy(var8, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var8, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        }
                    }
                }
            } else {
                memcpy(var8, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        }
    } else {
        if (input[0] <= -0.05568401888012886) {
            if (input[0] <= -0.2158932015299797) {
                if (input[4] <= 9067.20654296875) {
                    if (input[3] <= -0.11742451041936874) {
                        if (input[3] <= -0.12067746371030807) {
                            memcpy(var8, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            if (input[2] <= 0.00000646411422167148) {
                                memcpy(var8, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var8, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[2] <= 0.000006463272029577638) {
                            if (input[2] <= 0.0000008950783012551256) {
                                if (input[4] <= 2781.947509765625) {
                                    memcpy(var8, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    if (input[4] <= 2830.7728271484375) {
                                        memcpy(var8, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var8, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var8, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[4] <= -51.45142241381109) {
                                if (input[3] <= 0.11042359471321106) {
                                    memcpy(var8, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var8, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[4] <= 0.03876349329948425) {
                                    memcpy(var8, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    if (input[3] <= -0.06986775994300842) {
                                        if (input[2] <= 0.000008830857950670179) {
                                            memcpy(var8, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[2] <= 0.4090953921258915) {
                                                memcpy(var8, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var8, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[4] <= 0.9592738151550293) {
                                            memcpy(var8, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[2] <= 0.02045892730802734) {
                                                if (input[4] <= 0.9612365067005157) {
                                                    if (input[3] <= 0.30549466609954834) {
                                                        memcpy(var8, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[3] <= 0.4685665965080261) {
                                                            memcpy(var8, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var8, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    memcpy(var8, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var8, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[0] <= -0.2162965163588524) {
                        if (input[4] <= 130549.921875) {
                            memcpy(var8, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            if (input[2] <= 0.000006532701490868931) {
                                memcpy(var8, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var8, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        memcpy(var8, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[2] <= 0.00000007896224474279734) {
                    if (input[3] <= 0.02697828970849514) {
                        memcpy(var8, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        if (input[3] <= 0.03518138639628887) {
                            memcpy(var8, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        } else {
                            if (input[1] <= 22.5) {
                                if (input[1] <= 19.0) {
                                    memcpy(var8, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    if (input[0] <= -0.1414417065680027) {
                                        if (input[4] <= 11534.986053466797) {
                                            memcpy(var8, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var8, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var8, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var8, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if (input[1] <= 20.777777671813965) {
                        if (input[1] <= 19.682291984558105) {
                            memcpy(var8, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            if (input[4] <= 6702.826965332031) {
                                memcpy(var8, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var8, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        memcpy(var8, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[3] <= 0.11735378950834274) {
                memcpy(var8, (double[]){1.0, 0.0}, 2 * sizeof(double));
            } else {
                memcpy(var8, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        }
    }
    add_vectors(var3, var8, 2, var2);
    double var9[2];
    if (input[2] <= 0.000007763876510580303) {
        if (input[0] <= -0.21530167758464813) {
            if (input[0] <= -0.21667294204235077) {
                if (input[4] <= -2.6835133167915046) {
                    memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    if (input[0] <= -0.21669982373714447) {
                        memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        if (input[4] <= 9883.3306016922) {
                            memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        } else {
                            memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    }
                }
            } else {
                if (input[4] <= -0.018155054189264774) {
                    if (input[1] <= 13.5) {
                        if (input[3] <= -0.8827169239521027) {
                            if (input[3] <= -0.8988755941390991) {
                                memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var9, (double[]){0.8333333333333334, 0.16666666666666666}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[4] <= -0.020117762498557568) {
                                if (input[3] <= 0.5737925171852112) {
                                    memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    if (input[4] <= -0.021099116653203964) {
                                        memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[3] <= 0.5781238973140717) {
                                            memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1] <= 9.0) {
                        if (input[4] <= 0.9612365067005157) {
                            if (input[3] <= -0.8985573947429657) {
                                memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                if (input[4] <= -0.013738960027694702) {
                                    if (input[4] <= -0.015210991259664297) {
                                        if (input[3] <= 0.6632487177848816) {
                                            if (input[3] <= 0.5683827102184296) {
                                                if (input[3] <= -0.42413902282714844) {
                                                    if (input[3] <= -0.4301676005125046) {
                                                        if (input[4] <= -0.01619234587997198) {
                                                            if (input[3] <= -0.8969662487506866) {
                                                                memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[3] <= -0.8936602771282196) {
                                                                memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[3] <= 0.5805636048316956) {
                                                    memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    if (input[4] <= -0.01619234587997198) {
                                                        if (input[3] <= 0.6501308381557465) {
                                                            memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[3] <= 0.630241870880127) {
                                                            memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[3] <= 0.6512269377708435) {
                                        if (input[3] <= 0.5739869773387909) {
                                            if (input[3] <= -0.4253942370414734) {
                                                if (input[3] <= -0.4330846518278122) {
                                                    if (input[3] <= -0.8840428590774536) {
                                                        memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[3] <= 0.6486104428768158) {
                                                if (input[3] <= 0.5804752111434937) {
                                                    memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[4] <= 0.9759568274021149) {
                                if (input[4] <= 0.9656526148319244) {
                                    if (input[4] <= 0.9631991982460022) {
                                        if (input[3] <= -0.8833533525466919) {
                                            if (input[3] <= -0.9101371765136719) {
                                                memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[3] <= 0.5568912923336029) {
                                                memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[3] <= 0.6747754812240601) {
                                                    if (input[3] <= 0.6174598932266235) {
                                                        if (input[3] <= 0.5799448490142822) {
                                                            memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[3] <= -0.9154409170150757) {
                                            memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[4] <= 0.9641805589199066) {
                                                if (input[3] <= -0.41432712972164154) {
                                                    if (input[3] <= -0.883547842502594) {
                                                        memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[3] <= -0.4794215261936188) {
                                                            memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[3] <= 0.6365179419517517) {
                                                        if (input[3] <= 0.555565357208252) {
                                                            memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[3] <= 0.5781062245368958) {
                                                                memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        if (input[3] <= 0.6689944267272949) {
                                                            memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            } else {
                                                memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                } else {
                                    if (input[3] <= 0.6493706405162811) {
                                        if (input[3] <= -0.8821688592433929) {
                                            if (input[3] <= -0.8998479545116425) {
                                                memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[3] <= -0.4213634133338928) {
                                                if (input[4] <= 0.9700686931610107) {
                                                    if (input[4] <= 0.9681059718132019) {
                                                        if (input[3] <= -0.4305388629436493) {
                                                            memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[3] <= -0.4276748448610306) {
                                                        memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[4] <= 0.9671246409416199) {
                                                    if (input[3] <= 0.5481224656105042) {
                                                        memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[3] <= 0.5940527617931366) {
                                                            memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[4] <= 0.9720314145088196) {
                                            if (input[3] <= 0.6553284823894501) {
                                                memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[3] <= 0.6868679821491241) {
                                                memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                }
                            } else {
                                if (input[4] <= 3031.3026733398438) {
                                    if (input[4] <= 0.9779195487499237) {
                                        if (input[3] <= 0.6740683317184448) {
                                            if (input[3] <= -0.7347429394721985) {
                                                memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[3] <= -0.49584540724754333) {
                                                    memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                } else {
                                                    if (input[3] <= -0.36811399459838867) {
                                                        memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[3] <= 0.3236687760800123) {
                                                            memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[3] <= 0.6687469184398651) {
                                            if (input[3] <= -0.9318117499351501) {
                                                memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[3] <= 0.4481295496225357) {
                                                    if (input[4] <= 1.012757569551468) {
                                                        if (input[3] <= -0.198765997774899) {
                                                            if (input[4] <= 0.9838076531887054) {
                                                                memcpy(var9, (double[]){0.9583333333333334, 0.041666666666666664}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var9, (double[]){0.75, 0.25}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[4] <= 16948.130859375) {
                                        memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[4] <= 232905.265625) {
                                            memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[3] <= 0.3906017988920212) {
                            if (input[0] <= -0.2162965163588524) {
                                if (input[2] <= 0.0000021345931600080803) {
                                    if (input[4] <= 2781.947509765625) {
                                        memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[3] <= 0.356728658080101) {
                                            memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[3] <= 0.37051835656166077) {
                                                memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                } else {
                                    memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[0] <= -0.2158932015299797) {
                                    memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[4] <= 227936.2265625) {
                                memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[3] <= 0.450215682387352) {
                                    memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    if (input[4] <= 229252.328125) {
                                        memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (input[1] <= 9.0) {
                if (input[0] <= -0.000013443751413433347) {
                    if (input[0] <= -0.2102333828806877) {
                        if (input[2] <= 0.000000901412533949042) {
                            if (input[0] <= -0.21511346101760864) {
                                if (input[4] <= 8397.013061523438) {
                                    memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    } else {
                        memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[2] <= 0.000001872528400781448) {
                        if (input[4] <= -0.011285573709756136) {
                            if (input[3] <= 0.9225302338600159) {
                                memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                if (input[3] <= 0.9265433847904205) {
                                    memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[3] <= -0.8709072768688202) {
                            memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        } else {
                            memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    }
                }
            } else {
                if (input[3] <= 0.6169295012950897) {
                    if (input[1] <= 22.0) {
                        if (input[4] <= 11692.78759765625) {
                            if (input[4] <= 11683.09423828125) {
                                if (input[0] <= -0.06076575443148613) {
                                    if (input[2] <= 0.000002147993882317678) {
                                        memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[1] <= 18.590909004211426) {
                                        memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[0] <= -0.06076575443148613) {
                                memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[3] <= 0.12053602188825607) {
                                    memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[0] <= -0.12599483877420425) {
                        memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        if (input[1] <= 26.777777671813965) {
                            memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        } else {
                            memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    }
                }
            }
        }
    } else {
        if (input[3] <= -0.7196626961231232) {
            if (input[0] <= 0.3549957014620304) {
                memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
            } else {
                if (input[0] <= 0.8752285540103912) {
                    memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[0] <= -0.21625618636608124) {
                if (input[4] <= -51.45142241381109) {
                    if (input[2] <= 0.000012892960057797609) {
                        if (input[4] <= -7612.052551269531) {
                            memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        } else {
                            memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[4] <= -381.0946922302246) {
                            if (input[3] <= 0.22339296713471413) {
                                memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                if (input[2] <= 0.00002432365317872609) {
                                    memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    }
                } else {
                    if (input[1] <= 10.0) {
                        memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        if (input[4] <= 0.004416094161570072) {
                            memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        } else {
                            if (input[2] <= 0.000008822026757115964) {
                                memcpy(var9, (double[]){0.001277139208173691, 0.9987228607918263}, 2 * sizeof(double));
                            } else {
                                if (input[2] <= 0.019153410047692887) {
                                    memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[2] <= 0.014625782612711191) {
                    if (input[2] <= 0.000028158555323898327) {
                        if (input[0] <= -0.06076575443148613) {
                            memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            if (input[2] <= 0.000023747840714349877) {
                                if (input[2] <= 0.000012215830338391243) {
                                    if (input[2] <= 0.000009613389465812361) {
                                        memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[4] <= -40.654563903808594) {
                                        memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[4] <= 32136.654854655266) {
                                            memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[3] <= -0.32308536022901535) {
                            if (input[2] <= 0.0015653270238544792) {
                                memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[1] <= 1.2000000476837158) {
                                if (input[3] <= -0.17426278442144394) {
                                    if (input[2] <= 0.001036438665323658) {
                                        memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[3] <= 0.8133795261383057) {
                                    if (input[0] <= -0.06076575443148613) {
                                        if (input[2] <= 0.00010824722266988829) {
                                            if (input[2] <= 0.00010537536218180321) {
                                                if (input[1] <= 18.875) {
                                                    if (input[2] <= 0.0000441021220467519) {
                                                        memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[2] <= 0.0000646903135930188) {
                                            if (input[4] <= -109347.37548828125) {
                                                memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[3] <= 0.8197263181209564) {
                                        memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var9, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                }
                            }
                        }
                    }
                } else {
                    memcpy(var9, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        }
    }
    add_vectors(var2, var9, 2, var1);
    mul_vector_number(var1, 0.2, 2, var0);
    memcpy(output, var0, 2 * sizeof(double));
}
