void __thiscall sub_47CFD0(LPVOID lpParameter)
{
  HANDLE Thread; // eax
  _RTL_CRITICAL_SECTION_0 *v3; // ecx

  if ( !*((_DWORD *)lpParameter + 2) )
  {
    *((_DWORD *)lpParameter + 3) = GetCurrentThread();
    *((_DWORD *)lpParameter + 5) = GetCurrentThreadId();
    Thread = CreateThread(
               0,
               0,
               (LPTHREAD_START_ROUTINE)BackgroundThread_Exit_______,
               lpParameter,
               0,
               (LPDWORD)lpParameter + 4);
    *((_DWORD *)lpParameter + 2) = Thread;
    if ( !Thread )
      PrintError("Could not create a thread for background loading.\r\n");
    NiEnterCriticalSection(*((struct _RTL_CRITICAL_SECTION **)lpParameter + 1), (int)"Resume_Thread");
    if ( *((_BYTE *)lpParameter + 0x18) )
    {
      NiLeaveCriticalSection_0(*((LPCRITICAL_SECTION *)lpParameter + 1));
    }
    else
    {
      SetThreadPriority(*((HANDLE *)lpParameter + 2), 0xFFFFFFFF);
      v3 = *((_RTL_CRITICAL_SECTION_0 **)lpParameter + 1);
      *((_BYTE *)lpParameter + 0x18) = 1;
      NiLeaveCriticalSection_0(v3);
      ResumeThread(*((HANDLE *)lpParameter + 2));
    }
  }
}
