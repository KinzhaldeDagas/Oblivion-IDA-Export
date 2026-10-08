// [Verified] On semaphore timeout or pending-count boundary, sets bNiParallelWaitFallback_0B3F944 and waits indefinitely on g_NiParallelUpdateTaskManager's semaphore. BSTECreateTask_Run observes the byte and skips the wrapped Initialize call while fallback wait is active.
int __cdecl NiParallelUpdateTaskManager_WaitForSignal(DWORD dwMilliseconds)
{
  volatile LONG *v1; // esi
  volatile LONG *v2; // esi

  if ( g_NiParallelUpdateTaskManager ) /*0x404d67*/
  {
    v1 = (volatile LONG *)(g_NiParallelUpdateTaskManager + 0x190); /*0x404d78*/
    if ( WaitForSingleObject(*(HANDLE *)(g_NiParallelUpdateTaskManager + 0x198), dwMilliseconds) == 0x102 /*0x404d99*/
      || InterlockedDecrement(v1) == 1 )
    {
      bNiParallelWaitFallback_0B3F944 = 1; /*0x404da1*/
      v2 = (volatile LONG *)(g_NiParallelUpdateTaskManager + 0x190); /*0x404dae*/
      if ( WaitForSingleObject(*(HANDLE *)(g_NiParallelUpdateTaskManager + 0x198), 0xFFFFFFFF) != 0x102 ) /*0x404dbe*/
        InterlockedDecrement(v2); /*0x404dc1*/
    }
  }
  return 0; /*0x404dc8*/
}
