#include <Arduino.h>

// Définir la broche sur laquelle vous souhaitez envoyer une tension.
// Modifiez cette valeur selon la broche que vous voulez tester avec votre multimètre.
const int TEST_PIN = 25; 

void setup() {
  // Initialiser la communication série pour le débogage
  Serial.begin(9600);
  
  // Attendre que le port série soit prêt (utile pour le débogage)
  while (!Serial) {
    delay(10);
  }

  Serial.println("Initialisation du test de broche...");

  // Configurer la broche de test en tant que sortie
  pinMode(TEST_PIN, OUTPUT);

  // Envoyer une tension continue (3.3V) sur la broche
  digitalWrite(TEST_PIN, HIGH);
  
  Serial.printf("Tension envoyée (3.3V) sur la broche %d.\n", TEST_PIN);
}

void loop() {
  // La tension reste maintenue, rien de plus à faire dans la boucle
  delay(1000);
}