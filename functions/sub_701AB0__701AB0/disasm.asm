0x701AB0: mov     eax, ds:0B3F940h; 3DTheft decode 2026-05-16: sets manager byte +0x1B0 to 1, then calls the manager semaphore wait helper with INFINITE.
0x701AB5: test    eax, eax
0x701AB7: jz      short locret_701AC8
0x701AB9: push    0FFFFFFFFh; dwMilliseconds
0x701ABB: mov     byte ptr [eax+1B0h], 1
0x701AC2: call    NiParallelUpdateTaskManager_WaitForSignal; [Verified] On semaphore timeout or pending-count boundary, sets bNiParallelWaitFallback_0B3F944 and waits indefinitely on g_NiParallelUpdateTaskManager's semaphore. BSTECreateTask_Run observes the byte and skips the wrapped Initialize call while fallback wait is active.
0x701AC7: pop     ecx
0x701AC8: retn
