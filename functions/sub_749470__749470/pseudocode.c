int __thiscall sub_749470(float *this)
{
  _WORD *v2; // esi
  int result; // eax
  _DWORD *v4; // esi
  int v5; // ecx
  _DWORD *i; // esi
  NiRTTI *v7; // eax
  char v8; // al

  v2 = *((_WORD **)this + 0x2D); /*0x749474*/
  result = (*(int (__thiscall **)(_WORD *, _DWORD))(*(_DWORD *)v2 + 0x4C))(v2, 0); /*0x749483*/
  v2[0x32] = 0; /*0x749485*/
  v2[0x33] = 0; /*0x74948b*/
  v4 = *((_DWORD **)this + 0x32); /*0x749497*/
  for ( *(this + 0x3A) = -flt_A7DEB4; v4; result = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 0x54))(v5) ) /*0x7494a7*/
  {
    v5 = v4[2]; /*0x7494b0*/
    v4 = (_DWORD *)*v4; /*0x7494bb*/
  }
  for ( i = *((_DWORD **)this + 3); i; i = (_DWORD *)i[0xD] )
  {
    v7 = (NiRTTI *)(*(int (__thiscall **)(_DWORD *))(*i + 4))(i); /*0x7494d1*/
    if ( v7 ) /*0x7494d5*/
    {
      while ( v7 != &stru_B41E14 ) /*0x7494dc*/
      {
        v7 = v7->parent; /*0x7494de*/
        if ( !v7 ) /*0x7494e3*/
          goto LABEL_7; /*0x7494e3*/
      }
      v8 = 1; /*0x749505*/
    }
    else
    {
LABEL_7:
      v8 = 0; /*0x7494e5*/
    }
    result = v8 != 0 ? (unsigned int)i : 0;
    if ( result ) /*0x7494ed*/
      result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 0xA8))(result); /*0x7494f9*/
  }
  return result; /*0x749502*/
}
