void __thiscall NiGeometryGroup::AddObject(NiGeometryGroup *this, NiGeometryData *a2, int a3, int a4)
{
  NiGeometryBufferData *v5; // eax
  NiGeometryBufferData *v6; // esi
  NiGeometryBufferData *v7; // eax
  NiRTTI *v8; // eax
  int v9; // ecx

  if ( a4 )
  {
    if ( *(_DWORD *)(a4 + 0x28) )
      return;
    v5 = (NiGeometryBufferData *)FormHeapAlloc(0x50u);
    if ( v5 )
      v6 = NiGeometryBufferData::NiGeometryBufferData(v5);
    else
      v6 = 0;
    v6->PrimitiveType = (*(_WORD *)(a4 + 0x22) != 0) + 4;
    *(_DWORD *)(a4 + 0x28) = v6;
  }
  else
  {
    if ( a2->member.BuffData )
      return;
    v7 = (NiGeometryBufferData *)FormHeapAlloc(0x50u);
    if ( v7 )
      v6 = NiGeometryBufferData::NiGeometryBufferData(v7);
    else
      v6 = 0;
    v8 = a2->__vftable->super.GetType(a2);
    if ( v8 )
    {
      while ( v8 != (NiRTTI *)dword_B3FD2C )
      {
        v8 = v8->parent;
        if ( !v8 )
          goto LABEL_14;
      }
      v6->PrimitiveType = D3DPT_TRIANGLELIST;
    }
    else
    {
LABEL_14:
      if ( NiRTTI::IsObjectOfRTTIType((NiRTTI *)dword_B3FD0C, (NiObject *)a2) )
        v6->PrimitiveType = D3DPT_TRIANGLESTRIP;
    }
    a2->member.BuffData = v6;
  }
  v9 = 0;
  if ( a2->member.m_pkColor )
    v9 = 0x400000;
  if ( a2->member.m_pkNormal )
    v9 |= (unsigned int)&loc_800000;
  v6->Flags = v9 | ((a2->member.format & 0x3F) << 0x18);
  sub_782910(this, v6);
}
