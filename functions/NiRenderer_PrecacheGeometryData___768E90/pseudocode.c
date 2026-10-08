// DX11 V194 audit (2026-09-25): preserve this engine geometry-precache/prepack path. The inspected bodies perform geometry-group/buffer preparation and/or queue per-stream PrePackObject records; this is distinct from the optional IDirect3DResource9::PreLoad residency hint. No direct COM vtable +0x24 call was observed in these bodies; no claim is made about all transitive callees.
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

  if ( !a2 ) /*0x768e9d*/
    return 0; /*0x768e9d*/
  v7 = a2->__vftable->super.super.GetType(a2); /*0x768ea6*/
  if ( !v7 ) /*0x768eaa*/
    return 0; /*0x768ec5*/
  while ( v7 != &stru_B3FD54 ) /*0x768eb5*/
  {
    v7 = v7->parent; /*0x768eb7*/
    if ( !v7 ) /*0x768ebc*/
      return 0; /*0x768ebc*/
  }
  skinData = (NiSkinInstance *)a2->member.skinData; /*0x768ec9*/
  geomData = a2->member.geomData; /*0x768ed0*/
  v19 = skinData; /*0x768edb*/
  v11 = sub_768890(this, a2, 0); /*0x768edf*/
  v18 = v11; /*0x768ee6*/
  if ( skinData ) /*0x768eea*/
  {
    if ( !v11 ) /*0x768eee*/
      geomData->member.m_usDirtyFlags = geomData->member.m_usDirtyFlags & 0xFFF | 0x8000; /*0x768efc*/
  }
  if ( (geomData->member.m_usDirtyFlags & 0xF000) == 0x8000 ) /*0x768f09*/
    return 1; /*0x768f19*/
  NiDX9Renderer_EnterRendererAndPrecache(this); /*0x768f1e*/
  v20 = a5; /*0x768f29*/
  if ( !a5 ) /*0x768f2d*/
  {
    v12 = (NiD3DShaderInterface *)NiRTTI_Cast((BSStringT *)&MEMORY[0xB42858], a2->member.shader); /*0x768f3b*/
    if ( v12 ) /*0x768f45*/
      v20 = (NiD3DShaderDeclaration *)v12->__vftable->Unk50(v12); /*0x768f50*/
  }
  NiGeometryGroup::AddGeometryDataToGroup(this->member.unsharedGeometryGroup, geomData, skinData, v18, a3, a4); /*0x768f72*/
  v13 = 0; /*0x768f77*/
  if ( v18 ) /*0x768f7d*/
  {
    v14 = NiDX9Renderer_QueueSkinnedGeometryPrepack(this, a2, geomData, v19, v20, a3, a4); /*0x768f9e*/
    NiDX9Renderer_LeavePrecacheAndRenderer(this); /*0x768fa0*/
    return v14; /*0x768fae*/
  }
  if ( NiRTTI::IsObjectOfRTTIType(&stru_B3FCD4, (NiObject *)a2) ) /*0x768fb7*/
  {
    v15 = (unsigned __int16)geomData->__vftable[1].super.GetType(geomData); /*0x768fca*/
    v16 = NiDX9Renderer_QueueStaticGeometryPrepack( /*0x768fd8*/
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
    v13 = v16; /*0x769019*/
    goto LABEL_21; /*0x769019*/
  }
  if ( NiRTTI::IsObjectOfRTTIType(&stru_B3FD04, (NiObject *)a2) ) /*0x768fe0*/
  {
    v17 = (unsigned __int16)geomData->__vftable[1].super.GetType(geomData); /*0x768ff3*/
    v16 = NiDX9Renderer_QueueStaticGeometryPrepack( /*0x769014*/
            this,
            a2,
            geomData,
            v17,
            (_DWORD *)LOWORD(geomData[1].__vftable),
            (UInt16 *)LODWORD(geomData[1].member.m_kBound.Center.x),
            *(UInt16 **)&geomData[1].member.m_usVertices,
            LOWORD(geomData[1].member.super.m_uiRefCount),
            v20);
    goto LABEL_20; /*0x769014*/
  }
LABEL_21:
  NiDX9Renderer_LeavePrecacheAndRenderer(this); /*0x76901b*/
  return v13; /*0x768ebe*/
}
