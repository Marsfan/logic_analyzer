#ifndef _LOGIC_ANALYZER_H // Put these two lines at the top of your file.
#define _LOGIC_ANALYZER_H // (Use a suitable name, usually based on the file name.)

void triggerMicro(void);
void captureMicro(void);
void captureMilli(void);
void getCmd(void);
void setupDelay(void);
void blinkled(void);
void get_metadata(void);
void debugprint(void);
void debugdump(void);
void prettydump(void);
void captureInline4mhz(void);
void captureInline2mhz(void);

#endif
 // _LOGIC_ANALYZER_H    // Put this line at the end of your file.
