void __thiscall sub_7498F0(float *this, float a2)
{
  _WORD *v3; // ebx
  double v4; // st7
  _DWORD *v5; // esi
  _BYTE *v6; // ecx
  float v7; // [esp+0h] [ebp-14h]

  v3 = *((_WORD **)this + 0x2D); /*0x7498f5*/
  (*(void (__thiscall **)(_WORD *))(*(_DWORD *)v3 + 0x5C))(v3); /*0x749902*/
  v4 = a2; /*0x749904*/
  if ( *((_BYTE *)this + 0xEC) || *(this + 0x3A) > v4 ) /*0x74991e*/
  {
    sub_749470(this); /*0x749924*/
    v4 = a2; /*0x749929*/
    *((_BYTE *)this + 0xEC) = 0; /*0x74992d*/
  }
  if ( -flt_A7DEB4 == *(this + 0x3A) ) /*0x749949*/
    *(this + 0x3A) = v4; /*0x74994b*/
  v5 = *((_DWORD **)this + 0x32); /*0x749951*/
  while ( v5 ) /*0x749959*/
  {
    v6 = (_BYTE *)v5[2]; /*0x74995b*/
    v5 = (_DWORD *)*v5; /*0x749965*/
    if ( v6[0x14] ) /*0x74995e*/
    {
      v7 = v4; /*0x749970*/
      (*(void (__stdcall **)(_DWORD, _WORD *))(*(_DWORD *)v6 + 0x4C))(LODWORD(v7), v3); /*0x749973*/
      v4 = a2; /*0x749975*/
    }
  }
  v3[0x17] |= 7u; /*0x74997d*/
  *(this + 0x3A) = v4; /*0x749982*/
}
