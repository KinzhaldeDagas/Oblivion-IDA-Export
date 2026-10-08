std::exception *__thiscall std::exception::exception(std::exception *this, const struct std::exception *a2)
{
  int v3; // eax
  bool v4; // zf
  int v5; // eax
  UInt32 v6; // edi
  char *v7; // eax
  size_t v9; // [esp-8h] [ebp-14h]

  *(_DWORD *)this = &std::exception::`vftable'; /*0x983cfb*/
  v3 = *((_DWORD *)a2 + 2); /*0x983d01*/
  *((_DWORD *)this + 2) = v3; /*0x983d04*/
  v4 = v3 == 0; /*0x983d07*/
  v5 = *((_DWORD *)a2 + 1); /*0x983d09*/
  if ( v4 ) /*0x983d0d*/
  {
    *((_DWORD *)this + 1) = v5; /*0x983d40*/
  }
  else if ( v5 ) /*0x983d11*/
  {
    v6 = strlen((const char *)*((_DWORD *)a2 + 1)) + 1; /*0x983d1b*/
    LODWORD(v9) = v6; /*0x983d1c*/
    v7 = (char *)malloc(v9); /*0x983d1d*/
    *((_DWORD *)this + 1) = v7; /*0x983d26*/
    if ( v7 ) /*0x983d29*/
      strcpy_s(v7, v6, *((const char **)a2 + 1)); /*0x983d30*/
  }
  else
  {
    *((_DWORD *)this + 1) = 0; /*0x983d3a*/
  }
  return this; /*0x983d43*/
}
