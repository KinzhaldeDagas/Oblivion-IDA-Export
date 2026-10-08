std::exception *__thiscall std::exception::exception(std::exception *this, const char **a2)
{
  UInt32 v3; // esi
  char *v4; // eax
  size_t v6; // [esp-8h] [ebp-14h]

  *(_DWORD *)this = &std::exception::`vftable'; /*0x983cae*/
  if ( *a2 ) /*0x983cb4*/
  {
    v3 = strlen(*a2) + 1; /*0x983cc2*/
    LODWORD(v6) = v3; /*0x983cc3*/
    v4 = (char *)malloc(v6); /*0x983cc4*/
    *((_DWORD *)this + 1) = v4; /*0x983ccd*/
    if ( v4 ) /*0x983cd0*/
      strcpy_s(v4, v3, *a2); /*0x983cd6*/
  }
  else
  {
    *((_DWORD *)this + 1) = 0; /*0x983ce0*/
  }
  *((_DWORD *)this + 2) = 1; /*0x983ce4*/
  return this; /*0x983ced*/
}
