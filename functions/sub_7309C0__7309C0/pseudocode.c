unsigned int *__thiscall sub_7309C0(char **this, _DWORD **a2)
{
  NiObject *v3; // eax
  unsigned int *v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0x10u); /*0x7309e7*/
  v4 = (unsigned int *)v3; /*0x7309ec*/
  if ( v3 ) /*0x7309ff*/
  {
    sub_721350(v3); /*0x730a03*/
    *v4 = (unsigned int)&NiIntegerExtraData::`vftable'; /*0x730a08*/
    v4[3] = 0; /*0x730a0e*/
  }
  else
  {
    v4 = 0; /*0x730a17*/
  }
  sub_7214A0(this, v4, a2); /*0x730a29*/
  v4[3] = (unsigned int)*(this + 3); /*0x730a31*/
  return v4; /*0x730a36*/
}
