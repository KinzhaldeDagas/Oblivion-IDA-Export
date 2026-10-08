unsigned int *__thiscall sub_730C20(char **this, _DWORD **a2)
{
  NiObject *v3; // eax
  unsigned int *v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0xCu); /*0x730c47*/
  v4 = (unsigned int *)v3; /*0x730c4c*/
  if ( v3 ) /*0x730c5f*/
  {
    sub_721350(v3); /*0x730c63*/
    *v4 = (unsigned int)&NiVertWeightsExtraData::`vftable'; /*0x730c68*/
  }
  else
  {
    v4 = 0; /*0x730c70*/
  }
  sub_7214A0(this, v4, a2); /*0x730c82*/
  return v4; /*0x730c89*/
}
