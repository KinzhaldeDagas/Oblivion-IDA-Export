char __thiscall NiRenderer::PrecacheGeometryData_(
        NiDX9Renderer *this,
        NiGeometry *a2,
        UInt32 a3,
        UInt32 a4,
        NiD3DShaderDeclaration *a5)
{
  NiRTTI *v7; // eax
  NiSkinInstance *skinData; // ebx
  NiGeometryData *geomData; // esi
  bool v11; // al
  NiD3DShaderInterface *v12; // eax
  char v13; // bl
  char v14; // bl
  unsigned __int16 v15; // ax
  char v16; // al
  unsigned __int16 v17; // ax
  char v18; // [esp+8h] [ebp-8h]
  NiSkinInstance *v19; // [esp+Ch] [ebp-4h]
  NiD3DShaderDeclaration *v20; // [esp+14h] [ebp+4h]

  if ( !a2 )
    return 0;
  v7 = a2->__vftable->super.super.GetType(a2);
  if ( !v7 )
    return 0;
  while ( v7 != (NiRTTI *)dword_B3FD54 )
  {
    v7 = v7->parent;
    if ( !v7 )
      return 0;
  }
  skinData = (NiSkinInstance *)a2->member.skinData;
  geomData = a2->member.geomData;
  v19 = skinData;
  v11 = sub_768890(this, a2, 0);
  v18 = v11;
  if ( skinData )
  {
    if ( !v11 )
      geomData->member.m_usDirtyFlags = geomData->member.m_usDirtyFlags & 0xFFF | 0x8000;
  }
  if ( (geomData->member.m_usDirtyFlags & 0xF000) == 0x8000 )
    return 1;
  sub_763FE0(this);
  v20 = a5;
  if ( !a5 )
  {
    v12 = (NiD3DShaderInterface *)NiRTTI_Cast(&NiD3DShaderInterfaceString, a2->member.shader);
    if ( v12 )
      v20 = (NiD3DShaderDeclaration *)v12->__vftable->Unk50(v12);
  }
  NiGeometryGroup::AddGeometryDataToGroup(this->member.unsharedGeometryGroup, geomData, skinData, v18, a3, a4);
  v13 = 0;
  if ( v18 )
  {
    v14 = sub_768580(this, a2, geomData, v19, v20, a3, a4);
    sub_764040(this);
    return v14;
  }
  if ( NiRTTI::IsObjectOfRTTIType((NiRTTI *)dword_B3FCD4, (NiObject *)a2) )
  {
    v15 = (unsigned __int16)geomData->__vftable[1].super.GetType(geomData);
    v16 = sub_768470(
            this,
            a2,
            geomData,
            v15,
            (_DWORD *)LOWORD(geomData[1].__vftable),
            *(UInt16 **)&geomData[1].member.m_usVertices,
            0,
            1,
            v20);
LABEL_20:
    v13 = v16;
    goto LABEL_21;
  }
  if ( NiRTTI::IsObjectOfRTTIType((NiRTTI *)dword_B3FD04, (NiObject *)a2) )
  {
    v17 = (unsigned __int16)geomData->__vftable[1].super.GetType(geomData);
    v16 = sub_768470(
            this,
            a2,
            geomData,
            v17,
            (_DWORD *)LOWORD(geomData[1].__vftable),
            (UInt16 *)LODWORD(geomData[1].member.m_kBound.Center.x),
            *(UInt16 **)&geomData[1].member.m_usVertices,
            LOWORD(geomData[1].member.super.m_uiRefCount),
            v20);
    goto LABEL_20;
  }
LABEL_21:
  sub_764040(this);
  return v13;
}
