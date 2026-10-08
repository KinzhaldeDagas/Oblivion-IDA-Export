_DWORD *__thiscall sub_572DC0(_DWORD *this)
{
  _DWORD *result; // eax
  int *v2; // edx

  result = this; /*0x572dc2*/
  *this = 0; /*0x572dc6*/
  *(this + 1) = 0; /*0x572dc8*/
  v2 = &dword_B12DD0; /*0x572dcb*/
  do /*0x572de1*/
  {
    *((float *)v2 + 1) = 0.0; /*0x572dd0*/
    *((_BYTE *)v2 + 0xFFFFFFF8) = 0; /*0x572dd3*/
    *v2 = 0; /*0x572dd6*/
    v2 += 6; /*0x572dd8*/
  }
  while ( (int)v2 < (int)&dword_B12E18 ); /*0x572de1*/
  return result; /*0x572de5*/
}
