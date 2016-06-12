#include <Arduino.h>

//LAYOUT
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#define LAYOUT_LINEAR 0
#define LAYOUT_CIRCULAR 1

//LOCAL CRONO FUNCTION
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#define CRONO 0
#define CRONOLEARN 0

//CLOCK
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#define CLOCK 1
#define TIME_ZONE 1  // Central European Time

//DISPLAY BRIGHT
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#define BRIGHT_MAX 100         
#define BRIGHT_MIN_DEFAULT 15  
#define BRIGHT_STEP_FADE_IN 20 
#define BRIGHT_STEP_FADE_OUT 1

//WIFI CONNECTION
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//0 Static Connection
//1 Dynamic Connection
#define DYNAMIC_CONNECTION 0

//DHCP
//1 Use DHCP IP
//0 Use Static IP Address
//0 Only for DYNAMIC_CONNECTION = 0
#define DHCP_OPTION 1

//STATIC IP
// use commas between number
#define STATIC_IP 192,168,0,74
#define STATIC_SUBNET 255,255,255,0
#define STATIC_IP_GW 192,168,0,1

// **** Define the WiFi name and password ****
//Only for DYNAMIC_CONNECTION = 0
#define WIFICONF_INSKETCH
#define WiFi_SSID               "asterix"
#define WiFi_Password           "ttony2013"  

// Define the network configuration according to your router settingsuration according to your router settings
// and the other on the wireless oneless one
//Only for DYNAMIC_CONNECTION = 0
#define peer_address  0xAB21
#define myvNet_subnet 0xFF00
#define wifi_bridge_address    0xAB01 //gateway

//OTA NAME
#define OTA_NAME "souliss-smart-souliss-thermostat_PIANO_TERRA"

//TOPICS PUBLISH&SUBSCRIBE
//Define if you want topics on display
#define ACTIVATETOPICSPAGE 1 
#define TOPICSPAGESNUMBER 2 // 1 if you have less than 3 topics subscribed, 2 if you have more than 3 topics subscribed


