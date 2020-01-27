#include <SPI.h>
#include <Ethernet.h>

EthernetClient client;
byte mac[] = { 0xAA, 0xBB, 0xCC, 0xDD, 0xEE, 0xFF };  //Adresse MAC de la carte arduino du type AA:BB:CC DD:EE:FF
byte ip[] = { 192, 168, 1, 2 }; //Adresse IPv4 de la carte arduino du type 192.168.1.2

char server[] = "192.168.1.3"; //Adresse IPv4 de la carte raspberry pi du type 192.168.1.3

void setup() {
  if (Ethernet.begin(mac) == 0) {
    Serial.println("Failed to configure Ethernet using DHCP");
    for (;;) {
        ;
    }
  }
  delay(500);
  Serial.println("connecting...");
}

void main() {
    if (client.connect(server, 80)) {
        Serial.println("connected");
        client.print("GET file.php?variable"); //mettre ici l'adresse du fichier php qui doit écrire dans la base de données depuis arduino avec un paramètre "variable"
	client.print(variable);
        client.println(" HTTP/1.1");
        client.println("Host: 192.168.1.3"); // adresse IPv4 de la carte raspberry
        Serial.println("Connection: close");
        client.println();
        client.stop();
    } else {
        Serial.println("connection failed");
    }
}
