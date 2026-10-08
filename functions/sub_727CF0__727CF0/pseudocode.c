int sub_727CF0()
{
  int result; // eax

  result = FormHeapAlloc(0x10u); /*0x727cf2*/
  if ( !result ) /*0x727cfe*/
    return 0; /*0x727d13*/
  *(_DWORD *)(result + 4) = 0; /*0x727d00*/
  *(_DWORD *)(result + 8) = 0; /*0x727d03*/
  *(_BYTE *)(result + 0xC) = 0; /*0x727d06*/
  *(_DWORD *)result = &BSPackedAdditionalGeometryData::NiBSPackedAGDDataBlock::`vftable'; /*0x727d09*/
  *(_BYTE *)(result + 0xD) = 0; /*0x727d0f*/
  return result; /*0x727d12*/
}
