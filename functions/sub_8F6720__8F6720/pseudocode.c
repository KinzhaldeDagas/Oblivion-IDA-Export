_DWORD *__thiscall sub_8F6720(_DWORD *this, int a2, int a3, _DWORD *a4, int a5)
{
  *(this + 2) = a5; /*0x8f6732*/
  *((_WORD *)this + 3) = 1; /*0x8f6738*/
  *this = &off_A9B510; /*0x8f673e*/
  *(this + 0xC) = this + 0xF; /*0x8f6747*/
  *(this + 0xD) = 0; /*0x8f6749*/
  *(this + 0xE) = 0x80000001; /*0x8f6750*/
  *(this + 3) = *a4; /*0x8f675d*/
  *((_OWORD *)this + 1) = 0; /*0x8f6760*/
  *((_OWORD *)this + 2) = 0; /*0x8f6764*/
  sub_934270((int)(this + 0xC)); /*0x8f6768*/
  return this; /*0x8f6772*/
}
