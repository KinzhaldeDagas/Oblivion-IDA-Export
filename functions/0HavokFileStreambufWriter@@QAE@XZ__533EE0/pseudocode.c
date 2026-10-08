HavokFileStreambufWriter *__thiscall HavokFileStreambufWriter::HavokFileStreambufWriter(
        HavokFileStreambufWriter *this,
        const char *a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // eax

  *((_WORD *)this + 3) = 1; /*0x533f0a*/
  *(_DWORD *)this = &HavokFileStreambufWriter::`vftable'; /*0x533f1d*/
  *((_BYTE *)this + 0xC) = 1; /*0x533f23*/
  v3 = (_DWORD *)FormHeapAlloc(0x154u); /*0x533f27*/
  if ( v3 ) /*0x533f3a*/
    v4 = BSFile_constr(v3, a2, 1, 0x2800, 0); /*0x533f4c*/
  else
    v4 = 0; /*0x533f53*/
  *((_DWORD *)this + 2) = v4; /*0x533f55*/
  return this; /*0x533f5a*/
}
