#ifndef APP_MAIN_H
#define APP_MAIN_H

#include "main.h"
#include "cmsis_os.h"

// Initialization hook
void App_Init(void);

// Task execution hooks
void App_IngestTask_Loop(void);
void App_TransmitTask_Loop(void);

#endif // APP_MAIN_H