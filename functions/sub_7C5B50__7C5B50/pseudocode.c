_DWORD *__thiscall sub_7C5B50(_DWORD *this)
{
  int v1; // ebx
  _DWORD *result; // eax
  _DWORD *v4; // eax
  bool v5; // zf
  _DWORD *v6; // ebp
  void (__thiscall ***v7)(_DWORD, int); // esi
  bool v8; // [esp+Bh] [ebp-5h]
  int v9; // [esp+Ch] [ebp-4h] BYREF

  v1 = 0;
  result = 0;
  v9 = 0;
  if ( *(this + 0x41) )
  {
    do
    {
      v4 = (_DWORD *)*(this + 0x41);
      v5 = *v4 == 0;
      *(this + 0x41) = *v4;
      v6 = (_DWORD *)v4[2];
      v8 = 0;
      if ( !v5 )
      {
        if ( !v6 || (v1 |= 1u, !*sub_405AD0(v6, &v9)) )
          v8 = 1;
      }
      if ( (v1 & 1) != 0 )
      {
        v7 = (void (__thiscall ***)(_DWORD, int))v9;
        v1 &= ~1u;
        if ( v9 )
        {
          if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) )
          {
            if ( v7 )
              (**v7)(v7, 1);
          }
        }
      }
    }
    while ( v8 );
    return v6;
  }
  return result;
}
