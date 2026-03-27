_DWORD *__thiscall sub_74D790(int this, _DWORD *a2)
{
  __int16 v3; // ax
  int v5; // ecx
  unsigned __int16 v6; // ax
  void (__stdcall *v7)(volatile LONG *); // ebp
  int v8; // esi
  int *v9; // ecx
  int v10; // [esp+4h] [ebp-4h] BYREF

  v3 = *(_WORD *)(this + 0xA);
  if ( v3 )
  {
    v5 = *(_DWORD *)(this + 4);
    v6 = v3 - 1;
    *(_WORD *)(this + 0xA) = v6;
    v7 = (void (__stdcall *)(volatile LONG *))InterlockedIncrement;
    v8 = *(_DWORD *)(v5 + 4 * v6);
    if ( v8 )
      v7((volatile LONG *)(v8 + 4));
    v9 = (int *)(*(_DWORD *)(this + 4) + 4 * *(unsigned __int16 *)(this + 0xA));
    v10 = 0;
    sub_55E2A0(v9, &v10);
    if ( v8 )
      --*(_WORD *)(this + 0xC);
    *a2 = v8;
    if ( v8 )
    {
      v7((volatile LONG *)(v8 + 4));
      if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) )
        (**(void (__thiscall ***)(int, int))v8)(v8, 1);
    }
    return a2;
  }
  else
  {
    *a2 = 0;
    return a2;
  }
}
