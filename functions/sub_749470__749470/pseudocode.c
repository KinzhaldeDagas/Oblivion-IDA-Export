unsigned int __thiscall sub_749470(float *this)
{
  _WORD *v2; // esi
  unsigned int result; // eax
  _DWORD *v4; // esi
  int v5; // ecx
  _DWORD *i; // esi
  int v7; // eax
  char v8; // al

  v2 = *((_WORD **)this + 0x2D);
  result = (*(int (__thiscall **)(_WORD *, _DWORD))(*(_DWORD *)v2 + 0x4C))(v2, 0);
  v2[0x32] = 0;
  v2[0x33] = 0;
  v4 = *((_DWORD **)this + 0x32);
  for ( *(this + 0x3A) = -flt_A7DEB4; v4; result = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 0x54))(v5) )
  {
    v5 = v4[2];
    v4 = (_DWORD *)*v4;
  }
  for ( i = *((_DWORD **)this + 3); i; i = (_DWORD *)i[0xD] )
  {
    v7 = (*(int (__thiscall **)(_DWORD *))(*i + 4))(i);
    if ( v7 )
    {
      while ( (char *)v7 != dword_B41E14 )
      {
        v7 = *(_DWORD *)(v7 + 4);
        if ( !v7 )
          goto LABEL_7;
      }
      v8 = 1;
    }
    else
    {
LABEL_7:
      v8 = 0;
    }
    result = v8 != 0 ? (unsigned int)i : 0;
    if ( result )
      result = (*(int (__thiscall **)(unsigned int))(*(_DWORD *)result + 0xA8))(result);
  }
  return result;
}
