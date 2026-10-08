NiGeometryData *__thiscall sub_77D7D0(NiGeometryGroup *this, NiGeometryData *a2)
{
  NiGeometryData *result; // eax
  NiGeometryBufferData *v4; // eax
  NiGeometryBufferData *v5; // eax

  result = a2; /*0x77d7d0*/
  if ( !a2->member.m_pkVertex ) /*0x77d7d4*/
  {
    v4 = (NiGeometryBufferData *)FormHeapAlloc(0x50u); /*0x77d7df*/
    if ( v4 ) /*0x77d7e9*/
      v5 = NiGeometryBufferData::NiGeometryBufferData(v4); /*0x77d7ed*/
    else
      v5 = 0; /*0x77d7f4*/
    v5->PrimitiveType = D3DPT_TRIANGLELIST; /*0x77d7f9*/
    v5->Flags = 0x1400000; /*0x77d800*/
    return (NiGeometryData *)sub_782910(this, v5); /*0x77d806*/
  }
  return result; /*0x77d80b*/
}
