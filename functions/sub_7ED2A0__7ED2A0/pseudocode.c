_DWORD *__thiscall sub_7ED2A0(_DWORD *this)
{
  _DWORD *result; // eax
  bool v3; // zf
  int v4; // edi
  bool v5; // bl
  void (__thiscall ***v6)(_DWORD, int); // esi
  bool v7; // bl
  void (__thiscall ***v8)(_DWORD, int); // esi
  int v9; // [esp+4h] [ebp-8h]
  int v10; // [esp+8h] [ebp-4h] BYREF

  result = (_DWORD *)*(this + 0x1C);
  v9 = 0;
  *(this + 0x1F) = result;
  if ( result )
  {
    while ( 1 )
    {
      v3 = *result == 0;
      *(this + 0x1F) = *result;
      v4 = result[2];
      v5 = 0;
      if ( !v3 )
      {
        if ( v4 )
        {
          if ( *(_WORD *)(v4 + 0x118) == 0xFF
            || (v9 |= 1u, (*(_BYTE *)(*sub_405AD0((_DWORD *)v4, &v10) + 0x18) & 1) != 0)
            || *(_BYTE *)(v4 + 0xF4) == 1 )
          {
            v5 = 1;
          }
        }
      }
      if ( (v9 & 1) != 0 )
      {
        v6 = (void (__thiscall ***)(_DWORD, int))v10;
        v9 &= ~1u;
        if ( v10 )
        {
          if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) )
          {
            if ( v6 )
              (**v6)(v6, 1);
          }
        }
      }
      if ( !v5 )
        break;
      result = (_DWORD *)*(this + 0x1F);
    }
    v7 = 0;
    if ( v4 )
    {
      if ( *(_WORD *)(v4 + 0x118) == 0xFF
        || (LOBYTE(v9) = v9 | 2, (*(_BYTE *)(*sub_405AD0((_DWORD *)v4, &v10) + 0x18) & 1) != 0)
        || *(_BYTE *)(v4 + 0xF4) == 1 )
      {
        v7 = 1;
      }
    }
    if ( (v9 & 2) != 0 )
    {
      v8 = (void (__thiscall ***)(_DWORD, int))v10;
      if ( v10 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) )
        {
          if ( v8 )
            (**v8)(v8, 1);
        }
      }
    }
    return !v7 ? (_DWORD *)v4 : 0;
  }
  return result;
}
