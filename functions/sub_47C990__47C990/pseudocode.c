int __thiscall sub_47C990(_DWORD *this, float a2, _DWORD *a3)
{
  _DWORD *i; // esi
  int v5; // eax
  char v6; // al
  int result; // eax
  _DWORD *v8; // ecx

  LODWORD(OB_ShaderConstantStorage_010201A0[0x1871E]) = 3; /*0x47c995*/
  for ( i = (_DWORD *)*(this + 3); i; i = (_DWORD *)i[0xD] )
  {
    v5 = (*(int (__thiscall **)(_DWORD *))(*i + 4))(i); /*0x47c9ad*/
    if ( v5 ) /*0x47c9b1*/
    {
      while ( (char *)v5 != stru_B3CD7C ) /*0x47c9b8*/
      {
        v5 = *(_DWORD *)(v5 + 4); /*0x47c9ba*/
        if ( !v5 ) /*0x47c9bf*/
          goto LABEL_5; /*0x47c9bf*/
      }
      v6 = 1; /*0x47ca2c*/
    }
    else
    {
LABEL_5:
      v6 = 0; /*0x47c9c1*/
    }
    if ( (v6 != 0 ? (unsigned int)i : 0) == 0 )
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*i + 0x54))(i, LODWORD(a2)); /*0x47c9da*/
  }
  result = (*(int (__thiscall **)(_DWORD *))(*this + 0x74))(this); /*0x47c9ea*/
  if ( a3 ) /*0x47c9f2*/
  {
    v8 = (_DWORD *)a3[7]; /*0x47c9f4*/
    if ( v8 != this ) /*0x47c9f9*/
      (*(void (__thiscall **)(_DWORD *))(*v8 + 0x74))(v8); /*0x47ca00*/
    NiAVObject_UpdatePropertiesAndControllers(a3, a2, 1); /*0x47ca0e*/
    result = (*(int (__thiscall **)(_DWORD *))(*a3 + 0x74))(a3); /*0x47ca1a*/
  }
  OB_ShaderConstantStorage_010201A0[0x1871E] = 0.0; /*0x47ca1d*/
  return result; /*0x47ca1c*/
}
