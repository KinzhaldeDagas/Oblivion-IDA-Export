_BYTE *__thiscall sub_8DF540(_DWORD *this)
{
  int v1; // edx
  int v2; // eax
  _DWORD *v3; // esi
  const void **v4; // esi
  int v5; // eax
  bool v6; // zf
  _BYTE *result; // eax

  v1 = *(this + 0x12); /*0x8df540*/
  v2 = 0; /*0x8df544*/
  if ( v1 <= 0 ) /*0x8df549*/
  {
LABEL_5:
    v4 = (const void **)(this + 0x11); /*0x8df560*/
    if ( *(this + 0x12) == (*(this + 0x13) & 0x3FFFFFFF) ) /*0x8df570*/
      sub_8A6EE0(v4, 0x10); /*0x8df575*/
    v5 = (int)*v4 + 0x10 * (_DWORD)v4[1]; /*0x8df587*/
    v6 = v5 == 0xFFFFFFF8; /*0x8df58a*/
    result = (_BYTE *)(v5 + 8); /*0x8df58a*/
    v4[1] = (char *)v4[1] + 1; /*0x8df58d*/
    *((_DWORD *)result + 0xFFFFFFFE) = 0x1140; /*0x8df590*/
    if ( v6 ) /*0x8df597*/
    {
      return 0; /*0x8df5af*/
    }
    else
    {
      *result = 0xFD; /*0x8df59b*/
      result[1] = 0; /*0x8df59e*/
    }
  }
  else
  {
    v3 = (_DWORD *)*(this + 0x11); /*0x8df54e*/
    while ( *v3 != 0x1140 ) /*0x8df556*/
    {
      ++v2; /*0x8df558*/
      v3 += 4; /*0x8df559*/
      if ( v2 >= v1 ) /*0x8df55e*/
        goto LABEL_5; /*0x8df55e*/
    }
    return (_BYTE *)(0x10 * v2 + *(this + 0x11) + 8); /*0x8df5a6*/
  }
  return result; /*0x8df599*/
}
