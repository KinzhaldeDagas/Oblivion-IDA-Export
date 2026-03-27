char __thiscall sub_733AA0(void *this, int a2, _DWORD *a3, _DWORD *a4, void *a5, bool *a6, _DWORD *a7)
{
  int v7; // eax
  int v8; // ebx

  v7 = (*(int (__thiscall **)(void *, int, _DWORD))(*(_DWORD *)this + 8))(this, a2, 0);
  v8 = v7;
  if ( v7 )
    InterlockedIncrement((volatile LONG *)(v7 + 4));
  if ( !v8 )
    return 0;
  *a3 = **(_DWORD **)(v8 + 0x54);
  *a4 = **(_DWORD **)(v8 + 0x58);
  qmemcpy(a5, (const void *)(v8 + 8), 0x44u);
  *a6 = *(_DWORD *)(v8 + 0x60) > 1u;
  *a7 = *(_DWORD *)(v8 + 0x6C);
  if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) )
    (**(void (__thiscall ***)(int, int))v8)(v8, 1);
  return 1;
}
