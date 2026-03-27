int sub_727CF0()
{
  int result; // eax

  result = FormHeapAlloc(0x10u);
  if ( !result )
    return 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_BYTE *)(result + 0xC) = 0;
  *(_DWORD *)result = &BSPackedAdditionalGeometryData::NiBSPackedAGDDataBlock::`vftable';
  *(_BYTE *)(result + 0xD) = 0;
  return result;
}
