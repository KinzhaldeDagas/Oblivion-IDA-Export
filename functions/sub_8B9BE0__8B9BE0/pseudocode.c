int __fastcall sub_8B9BE0(_DWORD *a1, int a2, char a3)
{
  int v4; // ebp
  _DWORD *v5; // ecx
  int v6; // eax
  int v7; // eax
  _DWORD *v8; // ecx
  int v9; // eax
  int v10; // esi

  if ( a1 )
    v4 = a1[2];
  else
    v4 = 0;
  if ( a3 )
  {
    if ( a1 && (v5 = (_DWORD *)a1[2]) != 0 && (v6 = sub_8AC0C0(v5)) != 0 )
      v7 = *(_DWORD *)(v6 + 0xC);
    else
      v7 = 0;
    if ( v7 )
      InterlockedIncrement((volatile LONG *)(v7 + 4));
  }
  else
  {
    if ( a1 && (v8 = (_DWORD *)a1[2]) != 0 && (v9 = sub_8AC0C0(v8)) != 0 )
      v10 = *(_DWORD *)(v9 + 0xC);
    else
      v10 = 0;
    if ( v10 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) )
        (**(void (__thiscall ***)(int, int))v10)(v10, 1);
    }
  }
  if ( v4 )
    *(_DWORD *)(v4 + 0xB0) = a3 != 0 ? a1 : 0;
  return sub_89D430(a1, a3);
}
