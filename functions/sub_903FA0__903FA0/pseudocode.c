char *__thiscall sub_903FA0(char *this, _OWORD *a2)
{
  *(_OWORD *)this = *a2; /*0x903fa9*/
  *((_OWORD *)this + 1) = a2[1]; /*0x903fb0*/
  *((_OWORD *)this + 2) = a2[2]; /*0x903fb9*/
  *((_OWORD *)this + 3) = a2[3]; /*0x903fc1*/
  qmemcpy(this + 0x40, a2 + 4, 0x70u); /*0x903fd1*/
  return this; /*0x904037*/
}
