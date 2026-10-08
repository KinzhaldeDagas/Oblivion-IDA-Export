NiObjectNET *__thiscall sub_7064A0(char **this, int a2)
{
  NiObjectNET *v3; // eax
  NiObjectNET *v4; // esi

  v3 = (NiObjectNET *)FormHeapAlloc(0x1Cu); /*0x7064c7*/
  v4 = v3; /*0x7064cc*/
  if ( v3 ) /*0x7064df*/
  {
    NiObjectNET::NiObjectNET(v3); /*0x7064e3*/
    v4->vtbl = (NiObjectVtbl **)&NiVertexColorProperty::`vftable'; /*0x7064e8*/
    LOWORD(v4[1].vtbl) = 8; /*0x7064ee*/
  }
  else
  {
    v4 = 0; /*0x7064f6*/
  }
  sub_700A60(this, v4, a2); /*0x706508*/
  LOWORD(v4[1].vtbl) = *((_WORD *)this + 0xC); /*0x706511*/
  return v4; /*0x706517*/
}
