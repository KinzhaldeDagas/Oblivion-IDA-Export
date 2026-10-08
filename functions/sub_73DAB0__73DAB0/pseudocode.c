NiObjectNET *__thiscall sub_73DAB0(char **this, int a2)
{
  NiObjectNET *v3; // eax
  NiObjectNET *v4; // esi

  v3 = (NiObjectNET *)FormHeapAlloc(0x1Cu); /*0x73dad7*/
  v4 = v3; /*0x73dadc*/
  if ( v3 ) /*0x73daef*/
  {
    NiObjectNET::NiObjectNET(v3); /*0x73daf3*/
    v4->vtbl = (NiObjectVtbl **)&NiShadeProperty::`vftable'; /*0x73daf8*/
    LOWORD(v4[1].vtbl) = 1; /*0x73dafe*/
  }
  else
  {
    v4 = 0; /*0x73db06*/
  }
  sub_700A60(this, v4, a2); /*0x73db18*/
  LOWORD(v4[1].vtbl) = *((_WORD *)this + 0xC); /*0x73db21*/
  return v4; /*0x73db27*/
}
