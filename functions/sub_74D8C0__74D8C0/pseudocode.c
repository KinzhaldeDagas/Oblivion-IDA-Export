_DWORD *__thiscall sub_74D8C0(int this, _DWORD *a2, unsigned int a3, int a4)
{
  int v5; // esi
  int v6; // edi
  LONG (__stdcall *v7)(volatile LONG *); // ebx
  int v9; // edi

  if ( a3 >= *(unsigned __int16 *)(this + 0x22) )
  {
    v9 = a4;
    if ( a4 )
      InterlockedIncrement((volatile LONG *)(a4 + 4));
    if ( a3 >= *(unsigned __int16 *)(this + 0x20) )
      sub_523B10((unsigned __int16 *)(this + 0x18), a3 + *(unsigned __int16 *)(this + 0x26));
    sub_4B34E0((_DWORD *)(this + 0x18), a3, &a4);
    if ( v9 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) )
        (**(void (__thiscall ***)(int, int))v9)(v9, 1);
    }
    *a2 = 0;
    return a2;
  }
  else
  {
    v5 = *(_DWORD *)(*(_DWORD *)(this + 0x1C) + 4 * a3);
    if ( v5 )
      InterlockedIncrement((volatile LONG *)(v5 + 4));
    v6 = a4;
    if ( a4 )
      InterlockedIncrement((volatile LONG *)(a4 + 4));
    sub_4B34E0((_DWORD *)(this + 0x18), a3, &a4);
    v7 = InterlockedDecrement;
    if ( v6 )
    {
      if ( !v7((volatile LONG *)(v6 + 4)) )
        (**(void (__thiscall ***)(int, int))v6)(v6, 1);
    }
    *a2 = v5;
    if ( v5 )
    {
      InterlockedIncrement((volatile LONG *)(v5 + 4));
      if ( !v7((volatile LONG *)(v5 + 4)) )
        (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    }
    return a2;
  }
}
