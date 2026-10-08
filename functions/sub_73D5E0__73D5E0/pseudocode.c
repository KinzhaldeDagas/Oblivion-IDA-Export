NiObjectNET *__thiscall sub_73D5E0(char **this, int a2)
{
  NiObjectNET *v3; // eax
  NiObjectNET *v4; // esi

  v3 = (NiObjectNET *)FormHeapAlloc(0x1Cu); /*0x73d607*/
  v4 = v3; /*0x73d60c*/
  if ( v3 ) /*0x73d61f*/
  {
    NiObjectNET::NiObjectNET(v3); /*0x73d623*/
    v4->vtbl = (NiObjectVtbl **)&NiSpecularProperty::`vftable'; /*0x73d628*/
    LOWORD(v4[1].vtbl) = 0; /*0x73d62e*/
  }
  else
  {
    v4 = 0; /*0x73d636*/
  }
  sub_700A60(this, v4, a2); /*0x73d648*/
  LOWORD(v4[1].vtbl) = *((_WORD *)this + 0xC); /*0x73d651*/
  return v4; /*0x73d657*/
}
