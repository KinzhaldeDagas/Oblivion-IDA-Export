int __thiscall sub_77D390(_DWORD *this)
{
  int result; // eax
  int v2; // esi

  *this = 0; /*0x77d392*/
  *(this + 2) = 0; /*0x77d394*/
  *(this + 3) = 0; /*0x77d397*/
  *(this + 4) = 0; /*0x77d39a*/
  *(this + 5) = 0; /*0x77d39d*/
  *(this + 1) = 0; /*0x77d3a0*/
  *(this + 6) = 0; /*0x77d3a3*/
  *(this + 7) = 0; /*0x77d3a6*/
  *(this + 8) = 0; /*0x77d3a9*/
  *(this + 9) = 0; /*0x77d3ac*/
  *(this + 0xA) = 0; /*0x77d3af*/
  for ( result = 0; (unsigned __int16)result < *((_WORD *)this + 0x1B); *(_DWORD *)(*(this + 0xC) + 4 * v2) = 0 ) /*0x77d3b4*/
    v2 = (unsigned __int16)result++; /*0x77d3c3*/
  *((_WORD *)this + 0x1B) = 0; /*0x77d3d4*/
  *((_WORD *)this + 0x1C) = 0; /*0x77d3d8*/
  *(this + 0xF) = 0; /*0x77d3dc*/
  *(this + 0x10) = 0; /*0x77d3df*/
  return result; /*0x77d3e2*/
}
