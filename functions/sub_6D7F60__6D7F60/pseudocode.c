_DWORD *__thiscall sub_6D7F60(int this, _DWORD *a2, unsigned int a3)
{
  unsigned int v4; // ebx
  unsigned int v6; // ebp
  int v7; // esi
  unsigned __int16 v8; // ax

  v4 = a3;
  if ( a3 < *(unsigned __int16 *)(this + 0xA) )
  {
    v6 = 4 * a3;
    v7 = *(_DWORD *)(*(_DWORD *)(this + 4) + 4 * a3);
    if ( v7 )
      InterlockedIncrement((volatile LONG *)(v7 + 4));
    a3 = 0;
    sub_55E2A0((int *)(v6 + *(_DWORD *)(this + 4)), (int *)&a3);
    if ( v7 )
      --*(_WORD *)(this + 0xC);
    v8 = *(_WORD *)(this + 0xA);
    if ( v4 == v8 - 1 )
      *(_WORD *)(this + 0xA) = v8 - 1;
    *a2 = v7;
    if ( v7 )
    {
      InterlockedIncrement((volatile LONG *)(v7 + 4));
      if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) )
        (**(void (__thiscall ***)(int, int))v7)(v7, 1);
    }
    return a2;
  }
  else
  {
    *a2 = 0;
    return a2;
  }
}
