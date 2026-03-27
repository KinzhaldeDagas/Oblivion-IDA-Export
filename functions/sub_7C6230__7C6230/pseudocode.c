_DWORD *__thiscall sub_7C6230(_DWORD *this, int a2)
{
  int v2; // ebx
  _DWORD *v3; // edi
  _DWORD *v4; // ebp
  void (__thiscall ***v5)(_DWORD, int); // esi
  char v7; // [esp+13h] [ebp-5h]
  int v8; // [esp+14h] [ebp-4h] BYREF

  v2 = 0;
  v8 = 0;
  v3 = (_DWORD *)*(this + 0x3A);
  if ( !v3 )
    return 0;
  while ( 1 )
  {
    v4 = (_DWORD *)v3[2];
    v3 = (_DWORD *)*v3;
    if ( !v4 || (v2 |= 1u, v7 = 1, *sub_405AD0(v4, &v8) != a2) )
      v7 = 0;
    if ( (v2 & 1) != 0 )
    {
      v5 = (void (__thiscall ***)(_DWORD, int))v8;
      v2 &= ~1u;
      if ( v8 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) )
        {
          if ( v5 )
            (**v5)(v5, 1);
        }
      }
    }
    if ( v7 )
      break;
    if ( !v3 )
      return 0;
  }
  return v4;
}
