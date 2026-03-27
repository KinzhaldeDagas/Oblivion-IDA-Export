void __thiscall sub_538860(int *this, int a2)
{
  int v3; // esi
  int v4; // eax
  char v5; // al
  int v6; // eax
  int v7; // [esp-4h] [ebp-Ch]

  if ( a2 )
    v3 = *(_DWORD *)(a2 + 0xC);
  else
    v3 = 0;
  if ( v3 )
  {
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 4))(v3);
    if ( v4 )
    {
      while ( (char *)v4 != dword_BA7D84 )
      {
        v4 = *(_DWORD *)(v4 + 4);
        if ( !v4 )
          goto LABEL_8;
      }
      v5 = 1;
    }
    else
    {
LABEL_8:
      v5 = 0;
    }
    v6 = v5 != 0 ? v3 : 0;
    if ( v6 )
    {
      if ( *(_DWORD *)(v6 + 4) )
      {
        v7 = v6;
        InterlockedIncrement((volatile LONG *)(v6 + 4));
        sub_67A760(this + 3, v7);
      }
    }
  }
}
