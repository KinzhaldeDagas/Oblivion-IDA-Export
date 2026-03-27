void __thiscall sub_77DD70(NiGeometryGroup *this, NiGeometryData *a2)
{
  NiGeometryBufferData *v3; // eax
  NiGeometryBufferData *v4; // eax

  if ( !a2->member.m_pkVertex )
  {
    v3 = (NiGeometryBufferData *)FormHeapAlloc(0x50u);
    if ( v3 )
      v4 = NiGeometryBufferData::NiGeometryBufferData(v3);
    else
      v4 = 0;
    v4->PrimitiveType = D3DPT_TRIANGLELIST;
    a2->member.m_pkVertex = (NiPoint3 *)v4;
    v4->Flags = 0x1400000;
    sub_782910(this, v4);
  }
}
