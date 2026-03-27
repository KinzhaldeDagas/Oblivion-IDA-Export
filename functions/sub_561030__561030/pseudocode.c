NiObjectNET *sub_561030()
{
  NiObjectNET *v0; // eax
  NiObjectNET *v1; // esi
  NiObjectNET *result; // eax

  v0 = (NiObjectNET *)FormHeapAlloc(0x1Cu);
  v1 = v0;
  if ( v0 )
  {
    NiObjectNET::NiObjectNET(v0);
    v1->vtbl = (NiObjectVtbl **)&NiAlphaProperty::`vftable';
    LOWORD(v1[1].vtbl) = 0xEC;
    BYTE2(v1[1].vtbl) = 0;
    result = v1;
  }
  else
  {
    result = 0;
  }
  LOWORD(result[1].vtbl) = (int)result[1].vtbl & 0xE1FE | 0x1200;
  BYTE2(result[1].vtbl) = 0x54;
  return result;
}
