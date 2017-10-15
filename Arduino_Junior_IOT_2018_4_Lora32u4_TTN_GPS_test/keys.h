
//

//------------------ copy/pasted from https://console.thethingsnetwork.org/applications/YOURAPP/devices/  ------------
//  Device ID                YOURTHING
//  Device EUI               00112233445566FF hex
//  Application EUI          11223344556677FF hex
//  Device Address           223344FF hex
//  Network Session Key      { 0x33, 0x44, 0x55, 0x66, 0x77, 0x88, 0x99, 0x00, 0xAA, 0xBB, 0xCC, 0xDD, 0xEE, 0xFF, 0x00, 0x11 } msb
//  App Session Key          { 0xDD, 0xEE, 0xFF, 0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77, 0x88, 0x99, 0xAA, 0xBB, 0xCC } msb
//  const char *devAddr = "223344FF";
//  const char *nwkSKey = "3344556677889900AABBCCDDEEFF0011";
//  const char *appSKey = "DDEEFF00112233445566778899AABBCC
//---------------------------------
//static const char *myDeviceName = "YOURTHING";
//static const u4_t DEVADDR = 0x223344FF ;                                                                                                         // copy the value from "Device Address"
//static const PROGMEM u1_t NWKSKEY[16] = { 0x33, 0x44, 0x55, 0x66, 0x77, 0x88, 0x99, 0x00, 0xAA, 0xBB, 0xCC, 0xDD, 0xEE, 0xFF, 0x00, 0x11 };      // copy the value from "Network Session Key" msb formatted
//static const u1_t PROGMEM APPSKEY[16] = { 0xDD, 0xEE, 0xFF, 0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77, 0x88, 0x99, 0xAA, 0xBB, 0xCC };      // copy the value from "App Session Key" msb formatted
//
//static const char *myDeviceName = "ballon";
//static const u4_t DEVADDR = 0x26011CF9 ;                                                                                                         // copy the value from "Device Address"
//static const PROGMEM u1_t NWKSKEY[16] = { 0xB0, 0xC0, 0xD4, 0x15, 0x1A, 0xA9, 0x65, 0x51, 0x32, 0x0F, 0xD6, 0xC6, 0x7B, 0x65, 0x6A, 0x33 };      //MSB  copy the value from "Network Session Key" msb formatted
//static const u1_t PROGMEM APPSKEY[16] = { 0xDD, 0x8D, 0xBA, 0xBE, 0xA5, 0xC5, 0xD8, 0xBE, 0xA8, 0x55, 0x49, 0x6C, 0xE5, 0x9B, 0xB6, 0xA4 };      //MSB  copy the value from "App Session Key" msb formatted

//static const char *myDeviceName = "ballon_marco";
//static const u4_t DEVADDR = 0x26011A25 ;                                                                                                         // copy the value from "Device Address"
//static const PROGMEM u1_t NWKSKEY[16] = { 0x6A, 0x64, 0xB8, 0x6B, 0x5F, 0xFC, 0xE6, 0x3F, 0x6B, 0x7D, 0x9F, 0x82, 0x89, 0xCE, 0x17, 0x7F };      //MSB  copy the value from "Network Session Key" msb formatted
//static const u1_t PROGMEM APPSKEY[16] = { 0x69, 0xE5, 0x07, 0x92, 0x00, 0xE0, 0x35, 0x0B, 0x57, 0xE7, 0x7B, 0x2C, 0x73, 0xCE, 0x69, 0x87 };      //MSB  copy the value from "App Session Key" msb formatted
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          
//static const char *myDeviceName = "ballon2";
//static const u4_t DEVADDR = 0x2601112F ;                                                                                                         // copy the value from "Device Address"
//static const PROGMEM u1_t NWKSKEY[16] = { 0x91, 0x3B, 0xE0, 0xB1, 0x97, 0x2C, 0x33, 0x79, 0xC0, 0xA8, 0xD3, 0xD8, 0xA2, 0x26, 0x2E, 0xBC };      //MSB  copy the value from "Network Session Key" msb formatted
//static const u1_t PROGMEM APPSKEY[16] = { 0x9C, 0x81, 0x9A, 0x53, 0xEB, 0xB5, 0xDD, 0x27, 0x36, 0xEF, 0xF6, 0x99, 0xD2, 0x3F, 0xE8, 0xF0 };      //MSB  copy the value from "App Session Key" msb formatted

//static const char *myDeviceName = "ballon_jan_arentsz_en_van_der_meij";
//static const u4_t DEVADDR = 0x26011ED9 ;                                                                                                         // copy the value from "Device Address"
//static const PROGMEM u1_t NWKSKEY[16] = { 0xAC, 0xA9, 0x09, 0x1B, 0x0A, 0x01, 0x5B, 0xD2, 0xAD, 0xAA, 0x68, 0x62, 0x32, 0xAD, 0xC3, 0x22 };      //MSB  copy the value from "Network Session Key" msb formatted
//static const u1_t PROGMEM APPSKEY[16] = { 0x29, 0x65, 0x76, 0x28, 0x7E, 0xC2, 0x0F, 0x91, 0xB3, 0x21, 0x66, 0xB7, 0x59, 0x72, 0x02, 0x9C };      //MSB  copy the value from "App Session Key" msb formatted

//static const char *myDeviceName = "ballon_jan_arentsz";
//static const u4_t DEVADDR = 0x260112D7 ;                                                                                                         // copy the value from "Device Address"
//static const PROGMEM u1_t NWKSKEY[16] = { 0xC9, 0x58, 0xE0, 0xC0, 0x2C, 0xF5, 0x4D, 0xA2, 0x74, 0xA4, 0x54, 0x3B, 0x80, 0x49, 0x6D, 0x3C };      //MSB  copy the value from "Network Session Key" msb formatted
//static const u1_t PROGMEM APPSKEY[16] = { 0x3D, 0xEC, 0x7A, 0x05, 0xFD, 0xCB, 0xD0, 0x51, 0xFC, 0x78, 0x3B, 0xD5, 0xAC, 0xC7, 0x81, 0xC5 };      //MSB  copy the value from "App Session Key" msb formatted

static const char *myDeviceName = "blon"; //PCC
static const uint32_t            DEVADDR = 0x26011DBF ;                                                                                                         // copy the value from "Device Address"
static const PROGMEM uint8_t NWKSKEY[16] = { 0xEF, 0x5F, 0x95, 0xEC, 0xD9, 0x12, 0x43, 0xCE, 0x8D, 0xD2, 0xF5, 0x55, 0xF3, 0x5A, 0x26, 0x37 };      //MSB  copy the value from "Network Session Key" msb formatted
static const uint8_t PROGMEM APPSKEY[16] = { 0x18, 0x0D, 0xC9, 0x5C, 0x9E, 0xA8, 0xA1, 0x9A, 0xE2, 0xE0, 0x8A, 0x86, 0x98, 0xEF, 0xCA, 0x19 };      //MSB  copy the value from "App Session Key" msb formatted

//static const char *myDeviceName = "ballon_pcc";
//static const u4_t DEVADDR = 0x26011A7A ;                                                                                                         // copy the value from "Device Address"
//static const PROGMEM u1_t NWKSKEY[16] = { 0xE1, 0x3A, 0x33, 0x78, 0xC6, 0xFC, 0xEC, 0x5F, 0xBE, 0xC5, 0x01, 0x55, 0x35, 0xD2, 0x94, 0x35 };      //MSB  copy the value from "Network Session Key" msb formatted
//static const u1_t PROGMEM APPSKEY[16] = { 0xE5, 0xD9, 0xD4, 0xDB, 0x88, 0xA8, 0x8F, 0xE7, 0xCE, 0x72, 0x3A, 0xC7, 0x4B, 0xC7, 0x6B, 0xCC };      //MSB  copy the value from "App Session Key" msb formatted

//static const char *myDeviceName = "ballon_murmellius";
//static const u4_t DEVADDR = 0x26011C55 ;                                                                                                         // copy the value from "Device Address"
//static const PROGMEM u1_t NWKSKEY[16] = { 0xC5, 0x38, 0xE9, 0x37, 0x42, 0xEC, 0x63, 0x1B, 0xFB, 0x41, 0xDF, 0xEC, 0x77, 0x80, 0x8E, 0x1E };      //MSB  copy the value from "Network Session Key" msb formatted
//static const u1_t PROGMEM APPSKEY[16] = { 0xED, 0xA0, 0xCD, 0x89, 0xBE, 0x47, 0x74, 0x89, 0xC8, 0x91, 0x7A, 0x5C, 0xFF, 0xAD, 0x68, 0xF7 };      //MSB  copy the value from "App Session Key" msb formatted
//
//static const char *myDeviceName = "ballon_murmellius_nogeens";
//static const u4_t DEVADDR = 0x260110C1 ;                                                                                                         // copy the value from "Device Address"
//static const PROGMEM u1_t NWKSKEY[16] = { 0x8B, 0x55, 0x11, 0xE3, 0xD9, 0xBA, 0x27, 0x41, 0xA9, 0x4C, 0x7F, 0x1C, 0xAD, 0xAF, 0xE7, 0x25 };      //MSB  copy the value from "Network Session Key" msb formatted
//static const u1_t PROGMEM APPSKEY[16] = { 0xFA, 0x05, 0xA5, 0x84, 0xCB, 0x27, 0x00, 0xEC, 0x80, 0x5D, 0x48, 0x97, 0x55, 0x81, 0x04, 0x50 };      //MSB  copy the value from "App Session Key" msb formatted

//static const char *myDeviceName = "ballon_murmellius_3";
//static const u4_t DEVADDR = 0x26011FA2 ;                                                                                                         // copy the value from "Device Address"
//static const PROGMEM u1_t NWKSKEY[16] = { 0x0B, 0x4B, 0x31, 0xF7, 0x18, 0xCB, 0xCA, 0xF7, 0xE0, 0xEC, 0x88, 0xD6, 0x30, 0xE3, 0xCA, 0xC6 };      //MSB  copy the value from "Network Session Key" msb formatted
//static const u1_t PROGMEM APPSKEY[16] = { 0x8E, 0x20, 0x25, 0x28, 0x6E, 0x25, 0x8D, 0x90, 0xFE, 0xC7, 0x88, 0xBE, 0xF8, 0xCF, 0x19, 0xE7 };      //MSB  copy the value from "App Session Key" msb formatted

//                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          
