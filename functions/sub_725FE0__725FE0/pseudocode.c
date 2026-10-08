OB_NiAGDDataBlock *__thiscall OB_NiAdditionalGeometryData_AllocateBlock(void *this)
{
  OB_NiAGDDataBlock *result; // eax

  result = (OB_NiAGDDataBlock *)FormHeapAlloc(0x10u); /*0x725fe2*/
  if ( !result ) /*0x725fee*/
    return 0; /*0x726000*/
  result->vtable = &NiAdditionalGeometryData::NiAGDDataBlock::`vftable'; /*0x725ff0*/
  result->byteCount = 0; /*0x725ff6*/
  result->data = 0; /*0x725ff9*/
  result->ownsData = 0; /*0x725ffc*/
  return result; /*0x725fff*/
}
