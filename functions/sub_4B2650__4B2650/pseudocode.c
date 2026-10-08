unsigned int *__thiscall sub_4B2650(char **this, _DWORD **a2)
{
  NiObject *v3; // eax
  unsigned int *v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0x10u); /*0x4b2677*/
  v4 = 0; /*0x4b2683*/
  if ( v3 ) /*0x4b268b*/
    v4 = (unsigned int *)sub_4B2470(v3); /*0x4b2694*/
  sub_7214A0(this, v4, a2); /*0x4b26a6*/
  v4[3] = (unsigned int)*(this + 3); /*0x4b26ae*/
  return v4; /*0x4b26b3*/
}
