_BYTE *__thiscall sub_8DF540(_DWORD *this)
{
  int v1; // edx
  int v2; // eax
  _DWORD *v3; // esi
  const void **v4; // esi
  int v5; // eax
  bool v6; // zf
  _BYTE *result; // eax

  v1 = *(this + 0x12);
  v2 = 0;
  if ( v1 <= 0 )
  {
LABEL_5:
    v4 = (const void **)(this + 0x11);
    if ( *(this + 0x12) == (*(this + 0x13) & 0x3FFFFFFF) )
      sub_8A6EE0(v4, 0x10);
    v5 = (int)*v4 + 0x10 * (_DWORD)v4[1];
    v6 = v5 == 0xFFFFFFF8;
    result = (_BYTE *)(v5 + 8);
    v4[1] = (char *)v4[1] + 1;
    *((_DWORD *)result + 0xFFFFFFFE) = 0x1140;
    if ( v6 )
    {
      return 0;
    }
    else
    {
      *result = 0xFD;
      result[1] = 0;
    }
  }
  else
  {
    v3 = (_DWORD *)*(this + 0x11);
    while ( *v3 != 0x1140 )
    {
      ++v2;
      v3 += 4;
      if ( v2 >= v1 )
        goto LABEL_5;
    }
    return (_BYTE *)(0x10 * v2 + *(this + 0x11) + 8);
  }
  return result;
}
