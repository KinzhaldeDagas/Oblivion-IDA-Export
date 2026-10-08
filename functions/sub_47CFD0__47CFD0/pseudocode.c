void __thiscall sub_47CFD0(LPVOID lpParameter)
{
  HANDLE Thread; // eax
  _RTL_CRITICAL_SECTION_0 *v3; // ecx

  if ( !*((_DWORD *)lpParameter + 2) ) /*0x47cfd3*/
  {
    *((_DWORD *)lpParameter + 3) = GetCurrentThread(); /*0x47cfdf*/
    *((_DWORD *)lpParameter + 5) = GetCurrentThreadId(); /*0x47cfe8*/
    Thread = CreateThread( /*0x47cffb*/
               0,
               0,
               (LPTHREAD_START_ROUTINE)BackgroundThread_Exit_______,
               lpParameter,
               0,
               (LPDWORD)lpParameter + 4);
    *((_DWORD *)lpParameter + 2) = Thread; /*0x47d003*/
    if ( !Thread ) /*0x47d006*/
      PrintError("Could not create a thread for background loading.\r\n"); /*0x47d00d*/
    NiEnterCriticalSection(*((struct _RTL_CRITICAL_SECTION **)lpParameter + 1), (int)"Resume_Thread"); /*0x47d01d*/
    if ( *((_BYTE *)lpParameter + 0x18) ) /*0x47d022*/
    {
      NiLeaveCriticalSection_0(*((LPCRITICAL_SECTION *)lpParameter + 1)); /*0x47d050*/
    }
    else
    {
      SetThreadPriority(*((HANDLE *)lpParameter + 2), 0xFFFFFFFF); /*0x47d02e*/
      v3 = *((_RTL_CRITICAL_SECTION_0 **)lpParameter + 1); /*0x47d034*/
      *((_BYTE *)lpParameter + 0x18) = 1; /*0x47d037*/
      NiLeaveCriticalSection_0(v3); /*0x47d03b*/
      ResumeThread(*((HANDLE *)lpParameter + 2)); /*0x47d044*/
    }
  }
}
