NiObjectNET *__thiscall sub_73FE50(char **this, int a2)
{
  NiObjectNET *v3; // eax
  NiObjectNET *v4; // esi

  v3 = (NiObjectNET *)FormHeapAlloc(0x18u);
  v4 = v3;
  if ( v3 )
  {
    NiObjectNET::NiObjectNET(v3);
    v4->vtbl = (NiObjectVtbl **)&NiRendererSpecificProperty::`vftable';
  }
  else
  {
    v4 = 0;
  }
  sub_700A60(this, v4, a2);
  return v4;
}
