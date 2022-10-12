#ifndef _OTAWEBUPDATER_H_
#define _OTAWEBUPDATER_H_

#include <WebServer.h>

extern const char* host;
extern const char* LOGIN_INDEX;
extern const char* SERVER_INDEX;

void addOtaLogic();

extern WebServer server;

#endif