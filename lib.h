#ifndef RKLCD
#define RKLCD

void clearLCD() {
  clearLCDLine(0);
  clearLCDLine(1);
}

void sprintBatt(string str) {
  sprintf(str, "%6.2f // %-6.2f", nImmediateBatteryLevel / 1000., BackupBatteryLevel / 1000.);
}

#endif
