/*
   Project name: ESP32 Switch State
   Modified Date: 25-06-2024
   Code by: Projectslearner
   Website: https://projectslearner.com/learn/esp32-switch-state
*/

// Define the GPIO pin connected to the switch
const int switchPin = 4; // GPIO 4 on ESP32

void setup() {
  Serial.begin(9600); // Initialize serial communication
  pinMode(switchPin, INPUT_PULLUP); // Set switch pin as input with internal pull-up resistor
}

void loop() {
  // Read the state of the switch
  int switchState = digitalRead(switchPin);

  // Determine and print the switch state
  if (switchState == HIGH) {
    Serial.println("Switch is ON");
  } else {
    Serial.println("Switch is OFF");
  }

  // Delay for a short period before reading again
  delay(100);
}
