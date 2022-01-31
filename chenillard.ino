/*
 Titre : Chenillard
 On connecte 6 LEDS sur la carte Arduino. Lorsque vous allumez le circuit, les leds s'allument les unes après les autres toutes les 0;5s,
 puis s'éteignent toutes pendant 2s, puis le cycle recommence.
*/



// Déclaration de variables globales

int led1= 8; // numéro de la pin ou est connecter la led
int led2= 9; // numéro de la pin ou est connecter la led
int led3= 10; // numéro de la pin ou est connecter la led
int led4= 11; // numéro de la pin ou est connecter la led
int led5= 12; // numéro de la pin ou est connecter la led
int led6= 13; // numéro de la pin ou est connecter la led


// déclaration des constantes



// setup

void setup() 
{
  pinMode(led1, OUTPUT); // configure la pin 8 en sortie
  pinMode(led2, OUTPUT); // configure la pin 9 en sortie
  pinMode(led3, OUTPUT); // configure la pin 10 en sortie
  pinMode(led4, OUTPUT); // configure la pin 11 en sortie
  pinMode(led5, OUTPUT); // configure la pin 12 en sortie
  pinMode(led6, OUTPUT); // configure le pin 13 en sortie
}

// programme

void loop() 
{
  digitalWrite(led1, HIGH); // allume la led 1
  temps(500); // attend temps (0,5s)
  digitalWrite(led1, LOW); // eteint le led 1
  digitalWrite(led2, HIGH); // allume la led 2
  temps(500); // attend temps (0,5s)
  digitalWrite(led2, LOW); // eteint la led 2
  digitalWrite(led3, HIGH); // allume la led 3
  temps(500); // attend temps (0,5s)
  digitalWrite(led3, LOW); // eteint la led 3
  digitalWrite(led4, HIGH); // allume la led 4
  temps(500); // attend temps (0,5s)
  digitalWrite(led4, LOW); // eteint la led 4
  digitalWrite(led5, HIGH); // allume le led 5
  temps(500); // attend temps (0,5s)
  digitalWrite(led5, LOW); // eteint la led 5
  digitalWrite(led6, HIGH); // allume la led 6
  temps(500); // attend temps (0,5s)
  digitalWrite(led6, LOW); // eteint la led 6
  digitalWrite(led1, LOW); // eteint toute les leds
  digitalWrite(led2, LOW); // eteint toute les leds
  digitalWrite(led3, LOW); // eteint toute les leds
  digitalWrite(led4, LOW); // eteint toute les leds
  digitalWrite(led5, LOW); // eteint toute les leds
  digitalWrite(led6, LOW); // eteint toute les leds
  temps(2000); // attend temps (2s)
}

void temps(int tmp)
{
  delay(tmp); // ajoute a temps 0,5s
}
