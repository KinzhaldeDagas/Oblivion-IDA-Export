_DWORD *__userpurge sub_6EDAA0@<eax>(_DWORD *this@<ecx>, int a2@<edi>, unsigned int a3, char a4)
{
  unsigned int v5; // edi
  unsigned int v6; // eax
  bool v7; // zf
  bool v8; // cf
  rsize_t v10; // [esp-8h] [ebp-10h]

  if ( 0xFFFFFFFF - *(this + 5) <= a3 ) /*0x6edab0*/
    std::_String_base::_Xlen(); /*0x6edab2*/
  if ( !a3 ) /*0x6edab9*/
    return this; /*0x6edb3f*/
  HIDWORD(v10) = a2; /*0x6edabf*/
  v5 = a3 + *(this + 5); /*0x6edac3*/
  if ( v5 == 0xFFFFFFFF ) /*0x6edac8*/
    std::_String_base::_Xlen(); /*0x6edaca*/
  v6 = *(this + 6); /*0x6edacf*/
  if ( v6 < v5 ) /*0x6edad4*/
  {
    LODWORD(v10) = *(this + 5); /*0x6edad9*/
    sub_4135C0(this, v5, v10); /*0x6edadd*/
    v7 = v5 == 0; /*0x6edae2*/
    goto LABEL_8; /*0x6edae2*/
  }
  v7 = v5 == 0; /*0x6edb0f*/
  if ( v5 ) /*0x6edb11*/
  {
LABEL_8:
    if ( !v7 ) /*0x6edae4*/
    {
      sub_6EDA10(this, *(this + 5), a3, a4); /*0x6edaf2*/
      v8 = *(this + 6) < 0x10u; /*0x6edaf7*/
      *(this + 5) = v5; /*0x6edafb*/
      if ( !v8 ) /*0x6edafe*/
      {
        *(_BYTE *)(*(this + 1) + v5) = 0; /*0x6edb03*/
        return this; /*0x6edb0c*/
      }
      *((_BYTE *)this + v5 + 4) = 0; /*0x6edb3a*/
    }
    return this; /*0x6edb3a*/
  }
  *(this + 5) = 0; /*0x6edb16*/
  if ( v6 < 0x10 ) /*0x6edb19*/
    *((_BYTE *)this + 4) = 0; /*0x6edb2d*/
  else
    *(_BYTE *)*(this + 1) = 0; /*0x6edb1f*/
  return this; /*0x6edb0a*/
}
