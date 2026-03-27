int __fastcall sub_8B03E0(_DWORD *a1, int a2, char a3)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // edx
  int v9; // eax
  int v10; // eax
  int v11; // esi

  if ( a3 )
  {
    if ( a1 && (v4 = a1[2]) != 0 )
      v5 = *(_DWORD *)(v4 + 0xC);
    else
      v5 = 0;
    if ( v5 )
    {
      v6 = *(_DWORD *)(v5 + 8);
      if ( v6 )
      {
        InterlockedIncrement((volatile LONG *)(v6 + 4));
        return sub_8A26C0(a1, v7, a3);
      }
    }
  }
  else
  {
    if ( a1 && (v9 = a1[2]) != 0 )
      v10 = *(_DWORD *)(v9 + 0xC);
    else
      v10 = 0;
    if ( v10 )
    {
      v11 = *(_DWORD *)(v10 + 8);
      if ( v11 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) )
          (**(void (__thiscall ***)(int, int))v11)(v11, 1);
      }
    }
  }
  return sub_8A26C0(a1, a2, a3);
}
