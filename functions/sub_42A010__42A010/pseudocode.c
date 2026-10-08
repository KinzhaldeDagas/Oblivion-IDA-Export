// Constructs marker extra ExtraBoundArmor, type 0x50.
_BYTE *__thiscall ExtraBoundArmor_ctor(_BYTE *this)
{
  *(this + 4) = 0x50; /*0x42a012*/
  *((_DWORD *)this + 2) = 0; /*0x42a016*/
  *(_DWORD *)this = &ExtraBoundArmor::`vftable'; /*0x42a01d*/
  return this; /*0x42a023*/
}
