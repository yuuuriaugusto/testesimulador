#include <WiFi.h>
#include <WiFiServer.h>
#include <WiFiClient.h>

// Dados da rede WIFI
const char* ssid = "SimuladorPlantio";
const char* password = "simulador";

WiFiServer server(80);

// Pinos do sensor e motor (adapte conforme seu hardware)


// Variáveis para a simulação


void setup() {
  Serial.begin(115200);

  // Configurar WiFi como Access Point
  WiFi.softAP(ssid, password);
  Serial.print("IP Address: ");
  Serial.println(WiFi.softAPIP());

  server.begin();

  // Configurar pinos

  // Inicializar variáveis
}

void loop() {
  

}