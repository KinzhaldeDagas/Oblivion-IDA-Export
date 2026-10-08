unsigned int *__thiscall sub_730280(char **this, _DWORD **a2)
{
  NiObject *v3; // eax
  unsigned int *v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0x14u); /*0x7302a7*/
  v4 = (unsigned int *)v3; /*0x7302ac*/
  if ( v3 ) /*0x7302bf*/
  {
    sub_721350(v3); /*0x7302c3*/
    *v4 = (unsigned int)&NiFloatsExtraData::`vftable'; /*0x7302c8*/
    v4[4] = 0; /*0x7302ce*/
    v4[3] = 0; /*0x7302d5*/
  }
  else
  {
    v4 = 0; /*0x7302de*/
  }
  sub_7300D0(this, v4, a2); /*0x7302f0*/
  return v4; /*0x7302f7*/
}
