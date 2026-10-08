NiStringsExtraData *__thiscall NiStringsExtraData::NiStringsExtraData(NiStringsExtraData *this, _DWORD **a2)
{
  NiObject *v3; // eax
  unsigned int *v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0x14u); /*0x73cec7*/
  v4 = (unsigned int *)v3; /*0x73cecc*/
  if ( v3 ) /*0x73cedf*/
  {
    sub_721350(v3); /*0x73cee3*/
    *v4 = (unsigned int)&NiStringsExtraData::`vftable'; /*0x73cee8*/
    v4[4] = 0; /*0x73ceee*/
    v4[3] = 0; /*0x73cef5*/
  }
  else
  {
    v4 = 0; /*0x73cefe*/
  }
  sub_73CC70((char **)this, v4, a2); /*0x73cf10*/
  return (NiStringsExtraData *)v4; /*0x73cf17*/
}
