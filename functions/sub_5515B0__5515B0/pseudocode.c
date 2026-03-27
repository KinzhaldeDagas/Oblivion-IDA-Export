char __thiscall sub_5515B0(char *this, int a2, int *a3)
{
  DWORD CurrentThreadId; // eax
  char v5; // bl
  char v6; // al
  int v7; // esi
  int v10; // [esp+14h] [ebp-10h] BYREF
  unsigned int v11; // [esp+20h] [ebp-4h]

  EnterCriticalSection(&stru_B39C00);
  CurrentThreadId = GetCurrentThreadId();
  ++dword_B39C7C;
  dword_B39C78 = CurrentThreadId;
  v10 = 0;
  v11 = 0;
  v5 = 0;
  v6 = sub_4A1AB0((_DWORD *)this + 1, a2, &v10);
  v7 = v10;
  if ( v6 )
  {
    *(_DWORD *)(v7 + 0xC) = GetTickCount();
    sub_55E2A0(a3, (int *)(v7 + 8));
    sub_5506B0(this, v7);
    sub_559190((_DWORD *)*a3);
    sub_558520((_DWORD *)*a3);
    v5 = 1;
  }
  if ( dword_B39C7C-- == 1 )
    dword_B39C78 = 0;
  LeaveCriticalSection(&stru_B39C00);
  v11 = 0xFFFFFFFF;
  if ( v7 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) )
      (**(void (__thiscall ***)(int, int))v7)(v7, 1);
  }
  return v5;
}
