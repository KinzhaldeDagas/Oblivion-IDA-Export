_DWORD *__thiscall sub_7C5AB0(_DWORD *this)
{
  int v1; // ebx
  _DWORD *result; // eax
  bool v4; // zf
  _DWORD *v5; // ebp
  void (__thiscall ***v6)(_DWORD, int); // esi
  bool v7; // [esp+Bh] [ebp-5h]
  int v8; // [esp+Ch] [ebp-4h] BYREF

  v1 = 0;
  v8 = 0;
  result = (_DWORD *)*(this + 0x3E);
  *(this + 0x41) = result;
  if ( result )
  {
    while ( 1 )
    {
      v4 = *result == 0;
      *(this + 0x41) = *result;
      v5 = (_DWORD *)result[2];
      v7 = 0;
      if ( !v4 )
      {
        if ( !v5 || (v1 |= 1u, !*sub_405AD0(v5, &v8)) )
          v7 = 1;
      }
      if ( (v1 & 1) != 0 )
      {
        v6 = (void (__thiscall ***)(_DWORD, int))v8;
        v1 &= ~1u;
        if ( v8 )
        {
          if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) )
          {
            if ( v6 )
              (**v6)(v6, 1);
          }
        }
      }
      if ( !v7 )
        break;
      result = (_DWORD *)*(this + 0x41);
    }
    return v5;
  }
  return result;
}
