// Pass225: NiUnsharedGeometryGroup add; allocates NiGeometryBufferData and writes NiScreenTexture +0x1C buffer cache.
void __thiscall sub_77DD70(NiGeometryGroup *this, NiGeometryData *a2)
{
  NiGeometryBufferData *v3; // eax
  NiGeometryBufferData *v4; // eax

  if ( !a2->member.m_pkVertex ) /*0x77dd76*/
  {
    v3 = (NiGeometryBufferData *)FormHeapAlloc(0x50u); /*0x77dd80*/
    if ( v3 ) /*0x77dd8a*/
      v4 = NiGeometryBufferData::NiGeometryBufferData(v3); /*0x77dd8e*/
    else
      v4 = 0; /*0x77dd95*/
    v4->PrimitiveType = D3DPT_TRIANGLELIST; /*0x77dd97*/
    a2->member.m_pkVertex = (NiPoint3 *)v4; /*0x77dd9e*/
    v4->Flags = 0x1400000; /*0x77dda4*/
    sub_782910(this, v4); /*0x77ddaa*/
  }
}
