int *__thiscall sub_954D20(int *this, _DWORD *a2, _DWORD *a3, int a4)
{
  qmemcpy(this, a2, 0x48u); /*0x954d33*/
  sub_954710(this, a3); /*0x954d3c*/
  sub_954C10(this, (int)a3, a4); /*0x954d49*/
  *this = *a2 + 1; /*0x954d52*/
  *((_BYTE *)this + 4) = 0; /*0x954d56*/
  sub_954CA0(this); /*0x954d5a*/
  return this; /*0x954d5f*/
}
