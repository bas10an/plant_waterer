idf_component_register(SRCS "Main.cpp" 
                            "objects/plant/Plant.cpp" 
                            "objects/wi-fi/WiFiStation.cpp" 
                            "objects/mqtt/MqttClient.cpp" 
                            "objects/gpio/gpio.cpp" 
                            "objects/gpio/pwm_gpio.cpp"
                            "objects/optical_eye_communicaiton/optical_eye_communicaiton.c"
                    INCLUDE_DIRS ".")
