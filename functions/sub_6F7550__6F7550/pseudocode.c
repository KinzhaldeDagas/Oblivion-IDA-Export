_DWORD *__thiscall sub_6F7550(_DWORD *this, int *a2, int a3)
{
  FILE *v4; // ecx
  int v5; // eax
  int v6; // edi

  v4 = (FILE *)*(this + 0x13); /*0x6f7553*/
  if ( !v4 ) /*0x6f7559*/
    return 0; /*0x6f7559*/
  v5 = a2 || a3 ? 0 : 4;
  if ( unknown_libname_62(a3, v4, a2, v5, a3) ) /*0x6f7578*/
    return 0; /*0x6f75cb*/
  v6 = *(this + 0x13); /*0x6f7584*/
  *((_BYTE *)this + 0x48) = 1; /*0x6f7589*/
  *((_BYTE *)this + 0x41) = 0; /*0x6f758d*/
  sub_6F6F40(this); /*0x6f7590*/
  if ( v6 ) /*0x6f7597*/
  {
    *(this + 4) = v6 + 8; /*0x6f759c*/
    *(this + 5) = v6 + 8; /*0x6f759f*/
    *(this + 8) = v6; /*0x6f75a5*/
    *(this + 9) = v6; /*0x6f75a8*/
    *(this + 0xC) = v6 + 4; /*0x6f75ab*/
    *(this + 0xD) = v6 + 4; /*0x6f75ae*/
  }
  *(this + 0x13) = v6; /*0x6f75b1*/
  *(this + 0x11) = *(_DWORD *)&destination[0x100]; /*0x6f75b9*/
  *(this + 0xF) = 0; /*0x6f75bd*/
  return this; /*0x6f75bc*/
}
