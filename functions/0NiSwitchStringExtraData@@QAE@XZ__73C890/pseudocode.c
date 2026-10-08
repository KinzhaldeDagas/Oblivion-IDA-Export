NiSwitchStringExtraData *__thiscall NiSwitchStringExtraData::NiSwitchStringExtraData(
        NiSwitchStringExtraData *this,
        _DWORD **a2)
{
  NiObject *v3; // eax
  unsigned int *v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0x18u); /*0x73c8b7*/
  v4 = (unsigned int *)v3; /*0x73c8bc*/
  if ( v3 ) /*0x73c8cf*/
  {
    sub_721350(v3); /*0x73c8d3*/
    *v4 = (unsigned int)&NiSwitchStringExtraData::`vftable'; /*0x73c8d8*/
    v4[4] = 0; /*0x73c8de*/
    v4[3] = 0; /*0x73c8e5*/
    v4[5] = 0xFFFFFFFF; /*0x73c8ec*/
  }
  else
  {
    v4 = 0; /*0x73c8f5*/
  }
  sub_73C630((char **)this, v4, a2); /*0x73c907*/
  return (NiSwitchStringExtraData *)v4; /*0x73c90e*/
}
