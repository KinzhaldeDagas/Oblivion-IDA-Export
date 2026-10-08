_WORD *__thiscall sub_704100(_WORD *this)
{
  *(this + 2) = 0; /*0x704104*/
  *(_DWORD *)this = &NiTexturingProperty::Map::`vftable'; /*0x704108*/
  *((_DWORD *)this + 2) = 0; /*0x70410e*/
  *((_DWORD *)this + 3) = 0; /*0x704111*/
  *(this + 2) = *(this + 2) & 0xC000 | 0x3100; /*0x704122*/
  return this; /*0x704126*/
}
