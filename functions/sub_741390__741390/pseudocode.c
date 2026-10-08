NiObjectNET *__thiscall sub_741390(char **this, int a2)
{
  NiObjectNET *v3; // eax
  NiObjectNET *v4; // esi

  v3 = (NiObjectNET *)FormHeapAlloc(0x1Cu); /*0x7413b7*/
  v4 = v3; /*0x7413bc*/
  if ( v3 ) /*0x7413cf*/
  {
    NiObjectNET::NiObjectNET(v3); /*0x7413d3*/
    v4->vtbl = (NiObjectVtbl **)&NiDitherProperty::`vftable'; /*0x7413d8*/
    LOWORD(v4[1].vtbl) = 0; /*0x7413de*/
  }
  else
  {
    v4 = 0; /*0x7413e6*/
  }
  sub_700A60(this, v4, a2); /*0x7413f8*/
  LOWORD(v4[1].vtbl) = *((_WORD *)this + 0xC); /*0x741401*/
  return v4; /*0x741407*/
}
