NiObjectNET *__thiscall sub_718510(char **this, int a2)
{
  NiObjectNET *v3; // eax
  NiObjectNET *v4; // esi

  v3 = (NiObjectNET *)FormHeapAlloc(0x1Cu); /*0x718537*/
  v4 = v3; /*0x71853c*/
  if ( v3 ) /*0x71854f*/
  {
    NiObjectNET::NiObjectNET(v3); /*0x718553*/
    v4->vtbl = (NiObjectVtbl **)&NiAlphaProperty::`vftable'; /*0x718558*/
    LOWORD(v4[1].vtbl) = 0xEC; /*0x71855e*/
    BYTE2(v4[1].vtbl) = 0; /*0x718564*/
  }
  else
  {
    v4 = 0; /*0x71856a*/
  }
  sub_700A60(this, v4, a2); /*0x71857c*/
  LOWORD(v4[1].vtbl) = *((_WORD *)this + 0xC); /*0x718585*/
  BYTE2(v4[1].vtbl) = *((_BYTE *)this + 0x1A); /*0x71858c*/
  return v4; /*0x718591*/
}
