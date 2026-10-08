_WORD *__thiscall sub_94CCB0(_WORD *this, int a2)
{
  *(this + 3) = 1; /*0x94ccb5*/
  *((_DWORD *)this + 0x15) = 6; /*0x94ccbb*/
  *((_OWORD *)this + 1) = 0; /*0x94ccc5*/
  *((_OWORD *)this + 2) = 0; /*0x94ccc9*/
  *((_OWORD *)this + 3) = 0; /*0x94cccd*/
  *((_DWORD *)this + 4) = 0x3F800000; /*0x94ccd6*/
  *((_DWORD *)this + 9) = 0x3F800000; /*0x94ccd9*/
  *((_DWORD *)this + 0xE) = 0x3F800000; /*0x94ccdc*/
  *((_OWORD *)this + 4) = 0; /*0x94cce2*/
  *(_DWORD *)this = &off_AA2BEC; /*0x94cce9*/
  *((_DWORD *)this + 0x14) = a2; /*0x94ccef*/
  return this; /*0x94ccf4*/
}
