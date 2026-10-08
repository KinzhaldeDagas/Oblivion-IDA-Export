NiObjectNET *__thiscall sub_73FE50(char **this, int a2)
{
  NiObjectNET *v3; // eax
  NiObjectNET *v4; // esi

  v3 = (NiObjectNET *)FormHeapAlloc(0x18u); /*0x73fe77*/
  v4 = v3; /*0x73fe7c*/
  if ( v3 ) /*0x73fe8f*/
  {
    NiObjectNET::NiObjectNET(v3); /*0x73fe93*/
    v4->vtbl = (NiObjectVtbl **)&NiRendererSpecificProperty::`vftable'; /*0x73fe98*/
  }
  else
  {
    v4 = 0; /*0x73fea0*/
  }
  sub_700A60(this, v4, a2); /*0x73feb2*/
  return v4; /*0x73feb9*/
}
