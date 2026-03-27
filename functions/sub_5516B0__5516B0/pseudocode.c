char __thiscall sub_5516B0(char *this, unsigned int **a2)
{
  char v3; // bl
  DWORD CurrentThreadId; // eax
  unsigned int v5; // eax
  unsigned int v6; // eax
  DWORD TickCount; // eax
  int v8; // esi
  int v11; // [esp-4h] [ebp-28h]
  int v12; // [esp+14h] [ebp-10h] BYREF
  unsigned int v13; // [esp+20h] [ebp-4h]

  v12 = 0;
  v13 = 0;
  if ( !a2 || !sub_551250(a2) || !strlen((const char *)sub_551250(a2)) )
    return 0;
  v3 = 0;
  EnterCriticalSection(&stru_B39C00);
  CurrentThreadId = GetCurrentThreadId();
  ++dword_B39C7C;
  dword_B39C78 = CurrentThreadId;
  v5 = sub_551250(a2);
  if ( sub_4A1AB0((_DWORD *)this + 1, v5, &v12) || (v6 = sub_5512A0(a2), sub_4A1AB0((_DWORD *)this + 1, v6, &v12)) )
  {
    TickCount = GetTickCount();
    v8 = v12;
    v11 = v12;
    *(_DWORD *)(v12 + 0xC) = TickCount;
    sub_5506B0(this, v11);
    sub_559190(*(_DWORD **)(v8 + 8));
    v3 = 1;
  }
  else
  {
    v8 = v12;
  }
  if ( dword_B39C7C-- == 1 )
    dword_B39C78 = 0;
  LeaveCriticalSection(&stru_B39C00);
  v13 = 0xFFFFFFFF;
  if ( v8 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) )
      (**(void (__thiscall ***)(int, int))v8)(v8, 1);
  }
  return v3;
}
