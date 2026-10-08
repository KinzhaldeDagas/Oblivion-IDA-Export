//
// [2026-10-06 directional distant pass] Texture is property+A0; BILLBOARD vertex variant selected by property flags+1C bit2000. With alpha property, sets shader+E0 to fixed B2E148, ignoring that property threshold for sampled-alpha comparison. Pixel constant c3 points at shader+E0 via810F90. Directional fading needs a scoped per-draw sampled-alpha threshold; changing NiAlphaProperty alone does not supply it. Native fog/distance/packed lighting remain independent.
// [v142 runtime corroboration 2026-10-07] Same archived log, lines3195..3226: 32 capped companion Render samples report shader+E0 sampleAlphaRef equal to the requested threshold to four decimals (0.3294 or0.6953), confirming the scoped Setup override reaches live shader state. Samples cover early frames0/1, not horizontal frame8 or every subsequent draw. Later horizontal submissions at pitch37.572..64.730 are logged, but submitted geometry alone does not prove visible pixels.
// [v142 visual acceptance update 2026-10-07] Supersedes only the earlier pending visual acceptance statements: the human tester now confirms overhead canopy appearance, near/far transitions with fading, and smooth blending between adjacent directional views during a slow orbit. Combined with archived v142 runtime evidence, the required directional plus horizontal billboard goal is accepted. This is human visual evidence, not an automated pixel test. New adapter scene unload/reload and queued-face destruction remain UNVERIFIED; no new runtime session or destruction coverage is claimed. Audit: SpeedTreeOBSE/out/billboard360_distant_v142/runtime_rotation_analysis.json.
int __thiscall sub_811ED0(char *this, int _4C, int a3, int a4, _DWORD *a5, int a6, int a7, int a8)
{
  _DWORD *v9; // ebx
  float *v10; // eax
  float v11; // ecx
  float v12; // edx
  float v13; // ecx
  float v14; // edx
  float v15; // eax
  float v16; // ecx
  unsigned __int16 v17; // bp
  NiD3DTextureStage *v18; // eax
  NiD3DPass **v19; // esi
  NiD3DVertexShader *v20; // eax
  NiD3DPass *v21; // ebx
  NiD3DPass *v22; // ebx
  NiD3DPass *v23; // ebx
  NiD3DPass *v24; // ebx
  NiD3DPass *v25; // ebx
  unsigned __int16 v28; // [esp+14h] [ebp-34h]
  NiRenderedTexture *a2; // [esp+18h] [ebp-30h]
  float v30; // [esp+24h] [ebp-24h]
  float v31; // [esp+58h] [ebp+10h]
  NiD3DTextureStage *v32; // [esp+58h] [ebp+10h]

  (*(void (__thiscall **)(char *))(*(_DWORD *)this + 0x80))(this); /*0x811f01*/
  v9 = (_DWORD *)a5[6]; /*0x811f07*/
  if ( v9 ) /*0x811f0e*/
  {
    if ( (*(int (__thiscall **)(_DWORD))(*v9 + 0x54))(a5[6]) == 2 ) /*0x811f29*/
    {
      if ( OB_ShaderPassControl_010201A0[2] ) /*0x811f2f*/
        OB_BSShader_SetSharedFloat4Constant_010201A0( /*0x811f6b*/
          0,
          COERCE_INT(1.0),
          COERCE_INT(1.0),
          COERCE_INT(1.0),
          COERCE_INT(1.0));
      if ( a5[2] ) /*0x811f73*/
      {
        *((float *)this + 0x38) = flt_B2E148; /*0x811f88*/
        *((float *)this + 0x39) = 0.0; /*0x811fa6*/
        *((float *)this + 0x3A) = 0.0; /*0x811fac*/
        *((float *)this + 0x3B) = 0.0; /*0x811fb2*/
      }
      else
      {
        *((_DWORD *)this + 0x38) = dword_B25AD0; /*0x811fbf*/
        *((_DWORD *)this + 0x39) = dword_B25AD4; /*0x811fcb*/
        *((_DWORD *)this + 0x3A) = dword_B25AD8; /*0x811fd7*/
        *((_DWORD *)this + 0x3B) = dword_B25ADC; /*0x811fe2*/
      }
      v10 = (float *)a5[3]; /*0x811fe8*/
      if ( v10 ) /*0x811fed*/
      {
        v11 = v10[8]; /*0x811ff6*/
        v12 = v10[9]; /*0x811ff9*/
        v30 = v10[0xA]; /*0x812018*/
        v31 = v10[0xC] - v10[0xB]; /*0x812020*/
        OB_ShaderConstantStorage_010201A0[0x209] = v10[0xC]; /*0x812030*/
        OB_ShaderConstantStorage_010201A0[0x20A] = v31; /*0x81203e*/
        OB_ShaderConstantStorage_010201A0[0x20B] = 0.0; /*0x812058*/
        OB_ShaderConstantStorage_010201A0[0x20C] = 0.0; /*0x812069*/
        OB_ShaderConstantStorage_010201A0[0x20D] = v11; /*0x81207b*/
        OB_ShaderConstantStorage_010201A0[0x20E] = v12; /*0x812089*/
        OB_ShaderConstantStorage_010201A0[0x20F] = v30; /*0x812096*/
        OB_ShaderConstantStorage_010201A0[0x210] = 0.0; /*0x81209c*/
      }
      else
      {
        OB_ShaderConstantStorage_010201A0[0x209] = flt_A8C690; /*0x8120b2*/
        OB_ShaderConstantStorage_010201A0[0x20A] = 0.0; /*0x8120c7*/
        v13 = *(float *)&dword_B25AD0; /*0x8120d5*/
        OB_ShaderConstantStorage_010201A0[0x20B] = 0.0; /*0x8120db*/
        v14 = *(float *)&dword_B25AD4; /*0x8120e1*/
        OB_ShaderConstantStorage_010201A0[0x20C] = 0.0; /*0x8120e7*/
        v15 = *(float *)&dword_B25AD8; /*0x8120ec*/
        OB_ShaderConstantStorage_010201A0[0x20D] = v13; /*0x8120f1*/
        v16 = *(float *)&dword_B25ADC; /*0x8120f7*/
        OB_ShaderConstantStorage_010201A0[0x20E] = v14; /*0x8120fd*/
        OB_ShaderConstantStorage_010201A0[0x20F] = v15; /*0x812103*/
        OB_ShaderConstantStorage_010201A0[0x210] = v16; /*0x812108*/
      }
      a2 = (NiRenderedTexture *)v9[0x28]; /*0x812117*/
      OB_DistantLOD_CopyInstancesAndSetTriangles_010201A0((void **)this, (int)v9); /*0x81211b*/
      v17 = 0; /*0x812120*/
      v28 = 0; /*0x812129*/
      if ( *(int *)&OB_RendererGlobalState_010201A0[0xAF] >= 2 ) /*0x81212d*/
      {
        v17 = 2; /*0x81212f*/
        v28 = 1; /*0x812134*/
      }
      v32 = 0; /*0x81213c*/
      v18 = **(NiD3DTextureStage ***)(*((_DWORD *)this + 0x1F) + 0x24); /*0x812146*/
      v19 = (NiD3DPass **)(this + 0x7C); /*0x81214e*/
      if ( v18 ) /*0x812151*/
      {
        ++v18[7].Unk08; /*0x812153*/
        v32 = v18; /*0x812157*/
      }
      NiD3DTextureStage_SetTexture(v32, a2); /*0x812164*/
      if ( (v9[7] & 0x2000) != 0 ) /*0x812172*/
        v20 = *((NiD3DVertexShader **)this + v17 + 0x24); /*0x812177*/
      else
        v20 = *((NiD3DVertexShader **)this + v17 + 0x23); /*0x812183*/
      NiD3DPass_SetVertexShader(*v19, v20); /*0x81218b*/
      NiD3DPass_SetPixelShader(&(*v19)->__vftable, *((NiD3DPixelShader **)this + v28 + 0x27)); /*0x81219f*/
      v21 = *v19; /*0x8121ac*/
      if ( *(_WORD *)&OB_RendererGlobalState_010201A0[0x13] == 4 ) /*0x8121ae*/
      {
        if ( !v21->RenderStateGroup ) /*0x8121b4*/
          v21->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8121bf*/
        NiD3DRenderStateGroup_SetRenderState((_DWORD *)v21->RenderStateGroup, 0x34, 1, 0); /*0x8121cb*/
        v22 = *v19; /*0x8121d0*/
        if ( !(*v19)->RenderStateGroup ) /*0x8121d2*/
          v22->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8121dd*/
        NiD3DRenderStateGroup_SetRenderState((_DWORD *)v22->RenderStateGroup, 0x38, 8, 0); /*0x8121e9*/
        v23 = *v19; /*0x8121ee*/
        if ( !(*v19)->RenderStateGroup ) /*0x8121f0*/
          v23->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8121fb*/
        NiD3DRenderStateGroup_SetRenderState((_DWORD *)v23->RenderStateGroup, 0x37, 7, 0); /*0x812207*/
        v24 = *v19; /*0x81220c*/
        if ( !(*v19)->RenderStateGroup ) /*0x81220e*/
          v24->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x812219*/
        NiD3DRenderStateGroup_SetRenderState((_DWORD *)v24->RenderStateGroup, 0x35, 1, 0); /*0x812225*/
        v25 = *v19; /*0x81222a*/
        if ( !(*v19)->RenderStateGroup ) /*0x81222c*/
          v25->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x812237*/
        NiD3DRenderStateGroup_SetRenderState((_DWORD *)v25->RenderStateGroup, 0x36, 1, 0); /*0x812240*/
      }
      else
      {
        if ( !v21->RenderStateGroup ) /*0x812242*/
          v21->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81224d*/
        NiD3DRenderStateGroup_SetRenderState((_DWORD *)v21->RenderStateGroup, 0x34, 0, 0); /*0x812259*/
      }
      NiTArray_NiD3DPass_SetAt((NiTArray_NiD3DPass *)this + 4, *((NiD3DPass **)this + 0xE), (NiD3DPass **)this + 0x1F); /*0x812266*/
      ++*((_DWORD *)this + 0xE); /*0x81226f*/
      if ( v32 ) /*0x81227c*/
      {
        if ( v32[7].Unk08-- == 1 ) /*0x81227e*/
          sub_772560(v32); /*0x812283*/
      }
    }
  }
  return 0; /*0x81228a*/
}
