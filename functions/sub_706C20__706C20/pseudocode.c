NiObjectNET *__thiscall sub_706C20(char **this, int a2)
{
  NiObjectNET *v3; // eax
  NiObjectNET *v4; // esi

  v3 = (NiObjectNET *)FormHeapAlloc(0x1Cu); /*0x706c47*/
  v4 = v3; /*0x706c4c*/
  if ( v3 ) /*0x706c5f*/
  {
    NiObjectNET::NiObjectNET(v3); /*0x706c63*/
    v4->vtbl = (NiObjectVtbl **)&NiZBufferProperty::`vftable'; /*0x706c68*/
    LOWORD(v4[1].vtbl) = 0xF; /*0x706c6e*/
  }
  else
  {
    v4 = 0; /*0x706c76*/
  }
  sub_700A60(this, v4, a2); /*0x706c88*/
  LOWORD(v4[1].vtbl) = *((_WORD *)this + 0xC); /*0x706c91*/
  return v4; /*0x706c97*/
}
