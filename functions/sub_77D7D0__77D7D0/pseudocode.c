NiGeometryData *__thiscall sub_77D7D0(NiGeometryGroup *this, NiGeometryData *a2)
{
  NiGeometryData *result; // eax
  NiGeometryBufferData *v4; // eax
  NiGeometryBufferData *v5; // eax

  result = a2;
  if ( !a2->member.m_pkVertex )
  {
    v4 = (NiGeometryBufferData *)FormHeapAlloc(0x50u);
    if ( v4 )
      v5 = NiGeometryBufferData::NiGeometryBufferData(v4);
    else
      v5 = 0;
    v5->PrimitiveType = D3DPT_TRIANGLELIST;
    v5->Flags = 0x1400000;
    return (NiGeometryData *)sub_782910(this, v5);
  }
  return result;
}
