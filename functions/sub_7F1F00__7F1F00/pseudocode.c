//
//
// [2026-10-03 frond native lighting pass] Verified RenderPass source ordering: obtain ShadowSceneNode from property+1C high nibble, sun at scene+118; create count1 sun or count2 sun+GetFirstActiveLight after 0x7ED600. Fallout leaf GetRenderPasses 0x8223FFD0 corroborates this per-property sun/local association. Plugin frond adapter previously emitted lightCount0, so generic dispatcher reset diffuse slots but had no sources to repopulate them. Adapter now creates its own native light array and invalidates cached passes when selected pointers change; cross-geometry borrowing is disabled.
// [2026-10-03 independent namespace evidence] Property constructs RenderPass selector0E in both one/two-light paths. Its associated SpeedTreeLeafShader virtual+1C returns14h(20), proving that shader virtual result and RenderPass selector are distinct namespaces. Used to correct frond adapter from erroneous13h to native BSSM_FRONDS0Fh.
NiTList_NiProperty *__thiscall OB_SpeedTreeLeafShaderProperty_BuildRenderPasses_010201A0(
        BSShaderProperty *this,
        RenderPass_DecodedLayout *vtable,
        unsigned int a3,
        _WORD *a4,
        int a5)
{
  UInt32 v6; // ebp
  int v8; // edi
  RenderPass_DecodedLayout *v9; // eax
  RenderPass_DecodedLayout *v10; // eax
  ShadowSceneLight *FirstActiveLight; // ebx
  RenderPass_DecodedLayout *v12; // eax

  v6 = a3 | (*(unsigned __int16 *)&OB_RendererGlobalState_010201A0[0x13] << 8); /*0x7f1f37*/
  if ( *(_WORD *)&OB_RendererGlobalState_010201A0[0x13] == 6 ) /*0x7f1f3d*/
    return &this->member.unk48; /*0x7f1f42*/
  if ( this->member.lastRenderPassState != a3 ) /*0x7f1f4a*/
  {
    BSShaderProperty_ClearRenderPassLists(this); /*0x7f1f52*/
    v8 = *(_DWORD *)(GetShadowSceneNode(this->member.passInfo >> 0x1C) + 0x118); /*0x7f1f66*/
    if ( (unsigned __int16)BSShaderLightingProperty__CountFrustumVisibleEnabledLights((BSShaderLightingProperty *)this) ) /*0x7f1f71*/
    {
      FirstActiveLight = BSShaderLightingProperty__GetFirstActiveLight((BSShaderLightingProperty *)this); /*0x7f1fb8*/
      v12 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x7f1fba*/
      a3 = (unsigned int)v12; /*0x7f1fc2*/
      if ( v12 ) /*0x7f1fd0*/
      {
        v10 = RenderPass_Construct(v12, vtable, 0xEu, 1u, 2u, v8, FirstActiveLight); /*0x7f1fe0*/
        goto LABEL_10; /*0x7f1fe8*/
      }
    }
    else
    {
      v9 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x7f1f80*/
      a3 = (unsigned int)v9; /*0x7f1f88*/
      if ( v9 ) /*0x7f1f96*/
      {
        v10 = RenderPass_Construct(v9, vtable, 0xEu, 1u, 1u, v8); /*0x7f1fa5*/
LABEL_10:
        vtable = v10; /*0x7f1fec*/
        NiTList_AddHead(&this->member.passes.vtlb, &vtable); /*0x7f2000*/
        this->member.lastRenderPassState = v6; /*0x7f2005*/
        goto LABEL_11; /*0x7f2005*/
      }
    }
    v10 = 0; /*0x7f1fea*/
    goto LABEL_10; /*0x7f1fea*/
  }
LABEL_11:
  *a4 = 1; /*0x7f2008*/
  return &this->member.passes; /*0x7f2014*/
}
