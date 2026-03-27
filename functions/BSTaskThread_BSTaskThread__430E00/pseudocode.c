PULONG *__thiscall BSTaskThread::BSTaskThread(PULONG *lpParameter, int a2, char *a3)
{
  unsigned int *SemaphoreA; // eax
  SIZE_T v6; // [esp-14h] [ebp-1Ch]
  LONG v7; // [esp-Ch] [ebp-14h]
  LONG v8; // [esp-Ch] [ebp-14h]
  unsigned int *v9; // [esp+0h] [ebp-8h]

  *lpParameter = (PULONG)&BSTaskThread::`vftable';
  *(lpParameter + 3) = 0;
  v7 = (LONG)*(lpParameter + 3);
  *(lpParameter + 4) = (PULONG)1;
  *(lpParameter + 5) = (PULONG)CreateSemaphoreA(0, v7, 1, 0);
  *(lpParameter + 6) = (PULONG)1;
  v8 = (LONG)*(lpParameter + 6);
  *(lpParameter + 7) = (PULONG)1;
  SemaphoreA = (unsigned int *)CreateSemaphoreA(0, v8, 1, 0);
  HIDWORD(v6) = BSTaskThread_Runnable;
  LODWORD(v6) = 0;
  *(lpParameter + 8) = SemaphoreA;
  *(lpParameter + 1) = (PULONG)CreateThread(
                                 0,
                                 v6,
                                 (LPTHREAD_START_ROUTINE)lpParameter,
                                 (LPVOID)4,
                                 (DWORD)(lpParameter + 2),
                                 v9);
  return lpParameter;
}
