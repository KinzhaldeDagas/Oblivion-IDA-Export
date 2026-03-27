void __thiscall sub_8A5600(int *this)
{
  int *i; // ebp
  bool v2; // bl
  void (__thiscall ***v3)(_DWORD, int); // esi
  int v4; // esi
  void (__thiscall ***v5)(_DWORD, int); // edi
  int v6; // eax
  int v7; // eax
  int v8; // [esp+10h] [ebp-Ch]
  int v9; // [esp+14h] [ebp-8h] BYREF
  int v10; // [esp+18h] [ebp-4h] BYREF

  v8 = 0;
  for ( i = this + 4; ; sub_67A850(i) )
  {
    v2 = 0;
    if ( i )
    {
      v8 |= 1u;
      if ( *sub_677C70(i, &v9) )
        v2 = 1;
    }
    if ( (v8 & 1) != 0 )
    {
      v3 = (void (__thiscall ***)(_DWORD, int))v9;
      v8 &= ~1u;
      if ( v9 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) )
        {
          if ( v3 )
            (**v3)(v3, 1);
        }
      }
    }
    if ( !v2 )
      break;
    v4 = *sub_677C70(i, &v10);
    if ( v10 )
    {
      v5 = (void (__thiscall ***)(_DWORD, int))v10;
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) )
        (**v5)(v5, 1);
    }
    if ( v4 )
    {
      v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 4))(v4);
      if ( v6 )
      {
        while ( (BSStringT *)v6 != &stru_BA7D50 )
        {
          v6 = *(_DWORD *)(v6 + 4);
          if ( !v6 )
            goto LABEL_19;
        }
      }
      else
      {
LABEL_19:
        v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 4))(v4);
        if ( !v7 )
          continue;
        while ( (char *)v7 != dword_BA7D04 )
        {
          v7 = *(_DWORD *)(v7 + 4);
          if ( !v7 )
            goto LABEL_22;
        }
      }
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 0x58))(v4) )
        (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 0x60))(v4);
    }
LABEL_22:
    ;
  }
}
