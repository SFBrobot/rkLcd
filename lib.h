#ifndef RKLCD
#define RKLCD

const float expanderStatusDivisor = 280.;

void clearLCD() {
  clearLCDLine(0);
  clearLCDLine(1);
}

void sprintBatt(string str) {
  sprintf(str, "%6.2f // %-6.2f", nImmediateBatteryLevel / 1000., BackupBatteryLevel / 1000.);
}

void sprintBatt(string str, tSensors expndStatus) {
  sprintf(str, " %2.2f|%2.2f|%2.2f", nImmediateBatteryLevel / 1000., BackupBatteryLevel / 1000., SensorValue[expndStatus] / expanderStatusDivisor);
}

#endif
