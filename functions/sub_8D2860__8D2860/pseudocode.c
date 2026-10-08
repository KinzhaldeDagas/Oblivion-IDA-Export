int __thiscall sub_8D2860(_DWORD *this, _DWORD *a2)
{
  int result; // eax

  *this = *a2; /*0x8d2866*/
  *(this + 5) = a2[5]; /*0x8d286b*/
  *(this + 0xA) = a2[0xA]; /*0x8d2871*/
  *(this + 3) = 0; /*0x8d2876*/
  *(this + 7) = 0; /*0x8d2879*/
  *(this + 0xB) = 0; /*0x8d287c*/
  *(this + 1) = a2[4]; /*0x8d2882*/
  *(this + 4) = a2[1]; /*0x8d2888*/
  *(this + 2) = a2[8]; /*0x8d288e*/
  *(this + 8) = a2[2]; /*0x8d2894*/
  *(this + 6) = a2[9]; /*0x8d289a*/
  result = a2[6]; /*0x8d289d*/
  *(this + 9) = result; /*0x8d28a0*/
  return result; /*0x8d28a3*/
}
