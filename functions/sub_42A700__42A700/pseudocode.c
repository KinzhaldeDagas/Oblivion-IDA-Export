// Constructs ExtraPoison, type 0x48 and supplied AlchemyItem pointer.
_BYTE *__thiscall ExtraPoison_ctor(_BYTE *this, int a2)
{
  *(this + 4) = 0x48; /*0x42a706*/
  *((_DWORD *)this + 2) = 0; /*0x42a70a*/
  *(_DWORD *)this = &ExtraPoison::`vftable'; /*0x42a711*/
  *((_DWORD *)this + 3) = a2; /*0x42a717*/
  return this; /*0x42a71a*/
}
