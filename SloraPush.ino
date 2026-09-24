#define RELAY1 7  // Connect IN1 to D7
#define RELAY1 8  // Connect IN2 to D8

void setup() {
  pinMode(RELAY1, OUTPUT);
 

  // Ensure relays are off initially
  digitalWrite(RELAY1, LOW);
 
}

void loop() {
  digitalWrite(RELAY1, HIGH); // Turn ON Relay 1
  delay(500);                // Wait 2 seconds
  digitalWrite(RELAY1, LOW);  // Turn OFF Relay 1
  delay(500);                // Wait 2 seconds
}
  
