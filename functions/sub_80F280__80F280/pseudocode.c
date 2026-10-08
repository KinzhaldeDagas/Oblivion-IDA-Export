// SpeedTreeBranchShader SetupRenderPass override. Selector 0x17A calls the branch-only stage-2 helper 0x85E410; every unhandled selector delegates to ShadowLightShader_SetupRenderPass, whose explicit 0x177..0x179 cases bind currentLight+0x114 and queue a pass. The branch property can emit 0x178 (passInfo bit 2), 0x179 (else bit 0x4000), or 0x17A (otherwise exact branch RTTI), and all three are consumed.
int __thiscall sub_80F280(Ni2DBuffer **this, _DWORD *a2, int a3, int a4, NiRenderedTexture *a5, int a6, int a7, int a8)
{
  PixelLayout pixelLayout; // edi
  BOOL v11; // eax
  _DWORD *v12; // ebp
  BOOL v13; // ebp
  const char *m_pcName; // eax
  float v16; // eax
  float v17; // ecx
  unsigned __int16 v18; // ax
  int *v19; // eax
  unsigned __int16 v20; // ax
  Ni2DBuffer *v21; // eax
  unsigned __int16 v22; // si
  int v23; // ebx
  int v24; // edi
  _DWORD **v25; // esi
  int v26; // edi
  int v27; // edi
  int v28; // edi
  int v29; // edi
  char v30; // [esp+1Bh] [ebp-3Dh]
  void *v31; // [esp+1Ch] [ebp-3Ch]
  int v32; // [esp+20h] [ebp-38h]
  float v33; // [esp+24h] [ebp-34h]
  bool v34; // [esp+68h] [ebp+10h]

  ((void (__thiscall *)(Ni2DBuffer **))(*this)[6].members.width)(this); /*0x80f2b1*/
  v32 = unk_B42E90; /*0x80f2ba*/
  pixelLayout = a5->member.super.formatPrefs.pixelLayout; /*0x80f2c6*/
  v30 = 0; /*0x80f2cf*/
  v11 = pixelLayout /*0x80f2f2*/
     && (*(int (__thiscall **)(PixelLayout))(*(_DWORD *)pixelLayout + 0x54))(pixelLayout) >= 1
     && (*(int (__thiscall **)(PixelLayout))(*(_DWORD *)pixelLayout + 0x54))(pixelLayout) <= 0xA;
  v31 = v11 ? (void *)pixelLayout : 0;
  v12 = 0; /*0x80f305*/
  if ( v31 )
  {
    v13 = pixelLayout /*0x80f32c*/
       && (*(int (__thiscall **)(PixelLayout))(*(_DWORD *)pixelLayout + 0x54))(pixelLayout) >= 5
       && (*(int (__thiscall **)(PixelLayout))(*(_DWORD *)pixelLayout + 0x54))(pixelLayout) <= 0xA;
    v12 = v13 ? (_DWORD *)pixelLayout : 0;
  }
  if ( pixelLayout == kPixelLayout_Palettized8 ) /*0x80f33d*/
  {
    if ( unk_B42E8C ) /*0x80f33f*/
      unk_B42E8C("Attempting to render geometry with a shader, but no shader property", 0); /*0x80f34e*/
    return 0; /*0x80f355*/
  }
  m_pcName = a5->member.super.super.m_pcName; /*0x80f35e*/
  v34 = (*(_BYTE *)(pixelLayout + 0x1C) & 2) != 0; /*0x80f361*/
  if ( m_pcName && (m_pcName[0x18] & 1) != 0 ) /*0x80f372*/
  {
    v33 = *(float *)(pixelLayout + 0x20); /*0x80f383*/
    v16 = OB_ShaderConstantStorage_010201A0[0x1A2]; /*0x80f3b6*/
    v17 = OB_ShaderConstantStorage_010201A0[0x1A3]; /*0x80f3c6*/
    OB_ShaderConstantStorage_010201A0[0x1A1] = OB_ShaderConstantStorage_010201A0[0x1A1]; /*0x80f3ce*/
    OB_ShaderConstantStorage_010201A0[0x1A2] = v16; /*0x80f3d8*/
    OB_ShaderConstantStorage_010201A0[0x1A3] = v17; /*0x80f3dd*/
    OB_ShaderConstantStorage_010201A0[0x1A4] = v33; /*0x80f3e3*/
    v30 = 1; /*0x80f3e9*/
  }
  else
  {
    sub_7E2430(pixelLayout, 1.0); /*0x80f3f8*/
  }
  if ( v31 ) /*0x80f406*/
  {
    if ( *(_WORD *)&OB_RendererGlobalState_010201A0[0x13] == 1 ) /*0x80f416*/
    {
      v20 = OB_BSShaderProperty_CountPassListEntriesWithMarker_010201A0(v31); /*0x80f44c*/
      if ( v20 > 0xAu ) /*0x80f458*/
        v20 = 0xA; /*0x80f45a*/
      v19 = (int *)((char *)&unk_B2DD50 + 0x10 * v20); /*0x80f465*/
      goto LABEL_30; /*0x80f465*/
    }
    if ( *(_WORD *)&OB_RendererGlobalState_010201A0[0x13] == 2 ) /*0x80f41b*/
    {
      v18 = (*(int (__thiscall **)(void *, _DWORD *))(*(_DWORD *)v31 + 0x60))(v31, a2); /*0x80f42b*/
      if ( v18 > 0x10u ) /*0x80f434*/
        v18 = 0x10; /*0x80f436*/
      v19 = (int *)((char *)&unk_B2DE00 + 0x10 * v18); /*0x80f441*/
LABEL_30:
      OB_BSShader_SetSharedFloat4Constant_010201A0(0, *v19, v19[1], v19[2], v19[3]); /*0x80f46a*/
      OB_BSShader_SetSharedFloat4Constant_010201A0(0x19u, dword_B25AD0, dword_B25AD4, dword_B25AD8, dword_B25ADC); /*0x80f4b6*/
    }
  }
  if ( v34 ) /*0x80f4c6*/
    v21 = *(this + 0x20); /*0x80f4c8*/
  else
    v21 = *(this + 0x1F); /*0x80f4d0*/
  NiSmartPointer_Set__(this + 9, v21); /*0x80f4d4*/
  if ( v32 > 0x11B ) /*0x80f4e2*/
  {
    switch ( v32 ) /*0x80f7a8*/
    {
      case 0x122: /*0x80f7a8*/
        sub_85E160((NiTArray_NiD3DPass *)this, (int)a2, a3, (int)a5, v12, 0); /*0x80f7d3*/
        v22 = 0x19; /*0x80f7d8*/
        goto LABEL_67; /*0x80f7dd*/
      case 0x129: /*0x80f7a8*/
        sub_85E300((NiTArray_NiD3DPass *)this, (int)a2, a3, (int)a5, v12, 0); /*0x80f7eb*/
        goto LABEL_66; /*0x80f7f0*/
      case 0x17A: /*0x80f7a8*/
        SpeedTreeBranchShader_AppendSelector17AStage2((NiTArray_NiD3DPass *)this, (int)a2, a3, (int)a5, (int)v12, 0);// SpeedTreeBranchShader selector 0x17A invokes SpeedTreeBranchShader_AppendSelector17AStage2. This proves the observed 0x17A helper belongs to the SpeedTree branch consumer, not Lighting30. /*0x80f7fe*/
LABEL_66:
        v22 = 0x1A; /*0x80f803*/
        goto LABEL_67; /*0x80f803*/
      case 0x194: /*0x80f7a8*/
        sub_85C7D0((NiTArray_NiD3DPass *)this, (int)a2, a3, (int)a5, (int)v12, 0); /*0x80f7bb*/
        v22 = 9; /*0x80f7c0*/
LABEL_67:
        v23 = v32;                              // Required native tail state following selector-0x17A stage-2 construction. /*0x80f808*/
        if ( (unsigned int)v32 <= 0x1A2 ) /*0x80f80e*/
          goto LABEL_68; /*0x80f80e*/
        goto LABEL_80; /*0x80f80e*/
      default:
        return ShadowLightShader__SetupRenderPass(this, a2, a3, a4, a5, a6, a7, a8); /*0x80fa1c*/
    }
  }
  if ( v32 != 0x11B ) /*0x80f4e8*/
  {
    switch ( v32 ) /*0x80f503*/
    {
      case 0x18: /*0x80f503*/
        sub_85BF40((NiTArray_NiD3DPass *)this, (int)a2, a3, (int)a5, (int)v12, 0); /*0x80f516*/
        v22 = 0; /*0x80f51b*/
        goto LABEL_67; /*0x80f51d*/
      case 0x2F: /*0x80f503*/
        sub_85BFD0((NiTArray_NiD3DPass *)this, (int)a2, a3, (int)a5, v12, 0); /*0x80f52e*/
        v22 = 1; /*0x80f533*/
        goto LABEL_67; /*0x80f538*/
      case 0x30: /*0x80f503*/
        sub_85C110((NiTArray_NiD3DPass *)this, (int)a2, a3, (int)a5, v12, 0); /*0x80f549*/
        v22 = 2; /*0x80f54e*/
        goto LABEL_67; /*0x80f553*/
      case 0x33: /*0x80f503*/
        sub_85C250((NiTArray_NiD3DPass *)this, (int)a2, a3, (int)a5, v12, 0); /*0x80f564*/
        v22 = 3; /*0x80f569*/
        goto LABEL_67; /*0x80f56e*/
      case 0x54: /*0x80f503*/
        sub_85D380((NiTArray_NiD3DPass *)this, (int)a2, a3, (int)a5, v12, 0); /*0x80f606*/
        v22 = 0xA; /*0x80f60b*/
        goto LABEL_67; /*0x80f610*/
      case 0x5F: /*0x80f503*/
        sub_85D500((NiTArray_NiD3DPass *)this, (int)a2, a3, (int)a5, v12, 0); /*0x80f621*/
        v22 = 0xB; /*0x80f626*/
        goto LABEL_67; /*0x80f62b*/
      case 0x6A: /*0x80f503*/
        sub_85D720((NiTArray_NiD3DPass *)this, (int)a2, a3, (int)a5, v12, 0); /*0x80f63c*/
        v22 = 0xC; /*0x80f641*/
        goto LABEL_67; /*0x80f646*/
      case 0x75: /*0x80f503*/
        sub_85D8A0((NiTArray_NiD3DPass *)this, (int)a2, a3, (int)a5, v12, 0); /*0x80f657*/
        v22 = 0xD; /*0x80f65c*/
        goto LABEL_67; /*0x80f661*/
      case 0x82: /*0x80f503*/
        sub_85C870((NiTArray_NiD3DPass *)this, (int)a2, a3, (int)a5, v12, 0); /*0x80f672*/
        v22 = 0xE; /*0x80f677*/
        goto LABEL_67; /*0x80f67c*/
      case 0x90: /*0x80f503*/
        sub_85CA00((NiTArray_NiD3DPass *)this, (int)a2, a3, (int)a5, v12, 0); /*0x80f68d*/
        v22 = 0xF; /*0x80f692*/
        goto LABEL_67; /*0x80f697*/
      case 0x9D: /*0x80f503*/
        sub_85CC20((NiTArray_NiD3DPass *)this, (int)a2, a3, (int)a5, v12, 0); /*0x80f6a8*/
        v22 = 0x10; /*0x80f6ad*/
        goto LABEL_67; /*0x80f6b2*/
      case 0xAA: /*0x80f503*/
        sub_85CDB0((NiTArray_NiD3DPass *)this, (int)a2, a3, (int)a5, v12, 0); /*0x80f6c3*/
        v22 = 0x11; /*0x80f6c8*/
        goto LABEL_67; /*0x80f6cd*/
      case 0xB8: /*0x80f503*/
        sub_85CFD0((NiTArray_NiD3DPass *)this, (int)a2, a3, (int)a5, v12, 0); /*0x80f6de*/
        v22 = 0x12; /*0x80f6e3*/
        goto LABEL_67; /*0x80f6e8*/
      case 0xC5: /*0x80f503*/
        sub_85D160((NiTArray_NiD3DPass *)this, (int)a2, a3, (int)a5, v12, 0); /*0x80f6f9*/
        v22 = 0x13; /*0x80f6fe*/
        goto LABEL_67; /*0x80f703*/
      case 0xD2: /*0x80f503*/
        sub_85DAC0((NiTArray_NiD3DPass *)this, (int)a2, a3, (int)a5, v12, 0); /*0x80f714*/
        v22 = 0x14; /*0x80f719*/
        goto LABEL_67; /*0x80f71e*/
      case 0xDF: /*0x80f503*/
        sub_85DC50((NiTArray_NiD3DPass *)this, (int)a2, a3, (int)a5, v12, 0); /*0x80f72f*/
        v22 = 0x15; /*0x80f734*/
        goto LABEL_67; /*0x80f739*/
      case 0xE6: /*0x80f503*/
        sub_85C370((NiTArray_NiD3DPass *)this, (int)a2, a3, (int)a5, v12, 0); /*0x80f57f*/
        v22 = 4; /*0x80f584*/
        goto LABEL_67; /*0x80f589*/
      case 0xE7: /*0x80f503*/
        sub_85C450((NiTArray_NiD3DPass *)this, (int)a2, a3, (int)a5, v12, 0); /*0x80f59a*/
        v22 = 5; /*0x80f59f*/
        goto LABEL_67; /*0x80f5a4*/
      case 0xEE: /*0x80f503*/
        sub_85DE70((NiTArray_NiD3DPass *)this, (int)a2, a3, (int)a5, v12, 0); /*0x80f74a*/
        v22 = 0x16; /*0x80f74f*/
        goto LABEL_67; /*0x80f754*/
      case 0xFC: /*0x80f503*/
        sub_85DF60((NiTArray_NiD3DPass *)this, (int)a2, a3, (int)a5, v12, 0); /*0x80f765*/
        v22 = 0x17; /*0x80f76a*/
        goto LABEL_67; /*0x80f76f*/
      case 0x10B: /*0x80f503*/
        sub_85C530((NiTArray_NiD3DPass *)this, (int)a2, a3, (int)a5, (int)v12, 0); /*0x80f5b5*/
        v22 = 6; /*0x80f5ba*/
        goto LABEL_67; /*0x80f5bf*/
      case 0x113: /*0x80f503*/
        sub_85C610((NiTArray_NiD3DPass *)this, (int)a2, a3, (int)a5, v12, 0); /*0x80f5d0*/
        v22 = 7; /*0x80f5d5*/
        goto LABEL_67; /*0x80f5da*/
      case 0x114: /*0x80f503*/
        sub_85C6F0((NiTArray_NiD3DPass *)this, (int)a2, a3, (int)a5, v12, 0); /*0x80f5eb*/
        v22 = 8; /*0x80f5f0*/
        goto LABEL_67; /*0x80f5f5*/
      default:
        return ShadowLightShader__SetupRenderPass(this, a2, a3, a4, a5, a6, a7, a8);
    }
  }
  sub_85E050((NiTArray_NiD3DPass *)this, (int)a2, a3, (int)a5, v12, 0); /*0x80f780*/
  v23 = 0x11B; /*0x80f785*/
  v22 = 0x18; /*0x80f789*/
LABEL_68:
  NiD3DPass_SetRenderState(*(_DWORD **)(4 * v22 + 0xB47790), 0x1C, 0, 0);// Required native tail state following selector-0x17A stage-2 construction. /*0x80f818*/
  if ( (unsigned int)(v23 - 0x10F) > 0x1A ) /*0x80f836*/
  {
    if ( v23 == 0x19E || v23 == 0x19F || v23 == 0xA || v23 == 0xB ) /*0x80f856*/
    {
      NiD3DPass_SetRenderState(*(_DWORD **)(4 * v22 + 0xB47790), 0xA8, 8, 0); /*0x80f88a*/
    }
    else if ( v23 ) /*0x80f85c*/
    {
      if ( v23 == 1 ) /*0x80f86a*/
        NiD3DPass_SetRenderState((_DWORD *)LODWORD(OB_ShaderConstantStorage_010201A0[0x671]), 0xA8, 0, 0); /*0x80f874*/
      else
        NiD3DPass_SetRenderState(*(_DWORD **)(4 * v22 + 0xB47790), 0xA8, 7, 0); /*0x80f878*/
    }
    else
    {
      NiD3DPass_SetRenderState((_DWORD *)LODWORD(OB_ShaderConstantStorage_010201A0[0x66F]), 0xA8, 0, 0); /*0x80f865*/
    }
  }
  else
  {
    NiD3DPass_SetRenderState(*(_DWORD **)(4 * v22 + 0xB47790), 0xA8, 0xF, 0); /*0x80f83c*/
  }
LABEL_80:
  v24 = *(_DWORD *)(4 * v22 + 0xB47790); /*0x80f88f*/
  v25 = (_DWORD **)(4 * v22 + 0xB47790); /*0x80f8a1*/
  if ( *(_WORD *)&OB_RendererGlobalState_010201A0[0x13] == 4 ) /*0x80f8a8*/
  {
    if ( !*(_DWORD *)(v24 + 0x30) ) /*0x80f8ae*/
      *(_DWORD *)(v24 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x80f8b9*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v24 + 0x30), 0x34, 1, 0); /*0x80f8c5*/
    v26 = (int)*v25; /*0x80f8ca*/
    if ( !(*v25)[0xC] ) /*0x80f8cc*/
      *(_DWORD *)(v26 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x80f8d7*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v26 + 0x30), 0x38, 8, 0); /*0x80f8e3*/
    v27 = (int)*v25; /*0x80f8e8*/
    if ( !(*v25)[0xC] ) /*0x80f8ea*/
      *(_DWORD *)(v27 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x80f8f5*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v27 + 0x30), 0x37, 7, 0); /*0x80f901*/
    v28 = (int)*v25; /*0x80f906*/
    if ( !(*v25)[0xC] ) /*0x80f908*/
      *(_DWORD *)(v28 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x80f913*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v28 + 0x30), 0x35, 1, 0); /*0x80f91f*/
    v29 = (int)*v25; /*0x80f924*/
    if ( !(*v25)[0xC] ) /*0x80f926*/
      *(_DWORD *)(v29 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x80f931*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v29 + 0x30), 0x36, 1, 0); /*0x80f93a*/
  }
  else
  {
    if ( !*(_DWORD *)(v24 + 0x30) ) /*0x80f93c*/
      *(_DWORD *)(v24 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x80f947*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v24 + 0x30), 0x34, 0, 0); /*0x80f953*/
  }
  if ( (unsigned int)(v23 - 0x33) > 0x161 ) /*0x80f961*/
  {
    if ( (unsigned int)(v23 - 2) <= 0xDC ) /*0x80f9ca*/
      NiD3DPass_SetRenderState(*v25, 0x1B, v30 != 0, 0); /*0x80f9df*/
  }
  else if ( *(_DWORD *)&OB_RendererGlobalState_010201A0[0x1F] /*0x80f96c*/
         && *(_BYTE *)(*(_DWORD *)&OB_RendererGlobalState_010201A0[0x1F] + 6) )
  {
    NiD3DPass_SetRenderState(*v25, 0x1B, v30 != 0, 0); /*0x80f985*/
    NiD3DPass_SetRenderState(*v25, 0x17, 4, 0); /*0x80f992*/
    NiD3DPass_SetRenderState(*v25, 0xE, 1, 0); /*0x80f99d*/
  }
  else
  {
    NiD3DPass_SetRenderState(*v25, 0x1B, 1, 0); /*0x80f9a7*/
    NiD3DPass_SetRenderState(*v25, 0x17, 3, 0); /*0x80f9b4*/
    NiD3DPass_SetRenderState(*v25, 0xE, 0, 0); /*0x80f9bf*/
  }
  if ( *(_DWORD *)&OB_RendererGlobalState_010201A0[0x1F] ) /*0x80f9e4*/
  {
    if ( !*(_BYTE *)(*(_DWORD *)&OB_RendererGlobalState_010201A0[0x1F] + 7) ) /*0x80f9ed*/
      OB_ShaderConstantStorage_010201A0[0x21E] = 0.0; /*0x80f9f5*/
  }
  return 0; /*0x80fa21*/
}
