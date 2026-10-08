PULONG *__thiscall BSTaskThread::BSTaskThread(PULONG *lpParameter, int a2, char *a3)
{
  unsigned int *SemaphoreA; // eax
  SIZE_T v6; // [esp-14h] [ebp-1Ch]
  LONG v7; // [esp-Ch] [ebp-14h]
  LONG v8; // [esp-Ch] [ebp-14h]
  unsigned int *v9; // [esp+0h] [ebp-8h]

  *lpParameter = (PULONG)&BSTaskThread::`vftable'; /*0x430e0a*/
  *(lpParameter + 3) = 0; /*0x430e12*/
  v7 = (LONG)*(lpParameter + 3); /*0x430e1e*/
  *(lpParameter + 4) = (PULONG)1; /*0x430e21*/
  *(lpParameter + 5) = (PULONG)CreateSemaphoreA(0, v7, 1, 0); /*0x430e2a*/
  *(lpParameter + 6) = (PULONG)1; /*0x430e2f*/
  v8 = (LONG)*(lpParameter + 6); /*0x430e3b*/
  *(lpParameter + 7) = (PULONG)1; /*0x430e3e*/
  SemaphoreA = (unsigned int *)CreateSemaphoreA(0, v8, 1, 0); /*0x430e45*/
  HIDWORD(v6) = BSTaskThread_Runnable; /*0x430e4e*/
  LODWORD(v6) = 0; /*0x430e53*/
  *(lpParameter + 8) = SemaphoreA; /*0x430e57*/
  *(lpParameter + 1) = (PULONG)CreateThread( /*0x430e60*/
                                 0,
                                 v6,
                                 (LPTHREAD_START_ROUTINE)lpParameter,
                                 (LPVOID)4,
                                 (DWORD)(lpParameter + 2),
                                 v9);           // Creates the actual Win32 task thread; start routine is BSTaskThread_Runnable at 0x430DE0.
  return lpParameter; /*0x430e63*/
}
