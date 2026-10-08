unsigned int *__thiscall sub_716C90(char **this, _DWORD **a2)
{
  NiObject *v3; // eax
  unsigned int *v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0x10u); /*0x716cb7*/
  v4 = (unsigned int *)v3; /*0x716cbc*/
  if ( v3 ) /*0x716ccf*/
  {
    sub_721350(v3); /*0x716cd3*/
    *v4 = (unsigned int)&NiStringExtraData::`vftable'; /*0x716cd8*/
    v4[3] = 0; /*0x716cde*/
  }
  else
  {
    v4 = 0; /*0x716ce7*/
  }
  sub_716AC0(this, v4, a2); /*0x716cf9*/
  return v4; /*0x716d00*/
}
