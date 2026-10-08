// 3DTheft decode 2026-05-16: sets manager byte +0x1B0 to 1, then calls the manager semaphore wait helper with INFINITE.
int NiParallelUpdateTaskManager_SetPendingSignalAndWait()
{
  int result; // eax

  result = g_NiParallelUpdateTaskManager; /*0x701ab0*/
  if ( g_NiParallelUpdateTaskManager ) /*0x701ab0*/
  {
    *(_BYTE *)(result + 0x1B0) = 1; /*0x701abb*/
    return NiParallelUpdateTaskManager_WaitForSignal(0xFFFFFFFF); /*0x701ac2*/
  }
  return result; /*0x701ac8*/
}
