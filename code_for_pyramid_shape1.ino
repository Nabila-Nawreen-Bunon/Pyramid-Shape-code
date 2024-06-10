void setup() {
  Serial.begin(9600);
}

void loop() {
  // Print stars in the shape of a pyramid with 4 rows
  for (int i = 0; i < 4; i++) {
    // Print spaces before the stars
    for (int j = 0; j < 4 - i - 1; j++) {
      Serial.print(" ");
    }
    // Print stars
    for (int k = 0; k < 2 * i + 1; k++) {
      Serial.print("*");
    }
    Serial.println(); // Move to the next line for the next row
  }
  delay(1000); // Delay for readability
}
