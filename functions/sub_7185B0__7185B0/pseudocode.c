NiObjectNET *sub_7185B0()
{
  NiObjectNET *v0; // eax
  NiObjectNET *v1; // esi

  v0 = (NiObjectNET *)FormHeapAlloc(0x1Cu);
  v1 = v0;
  if ( !v0 )
    return 0;
  NiObjectNET::NiObjectNET(v0);
  v1->vtbl = (NiObjectVtbl **)&NiAlphaProperty::`vftable';
  LOWORD(v1[1].vtbl) = 0xEC;
  BYTE2(v1[1].vtbl) = 0;
  return v1;
}
