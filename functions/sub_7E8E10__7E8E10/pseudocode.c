// Fog render consumer decode: TallGrass/world-render fog writer reads active fog property and writes shared FogParam/FogColor vectors at B46638/B46648.
int __thiscall sub_7E8E10(void *this, NiD3DTextureStage *arg0, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v9; // ebp
  int v10; // esi
  BOOL v11; // ebx
  NiRenderedTexture **v12; // ebx
  double v13; // st7
  double v14; // st6
  float v15; // ecx
  float v16; // edx
  float v17; // eax
  int v18; // eax
  float *v19; // eax
  float v20; // ecx
  float v21; // edx
  double v22; // st5
  float v23; // eax
  double v24; // st5
  double v25; // st5
  double v26; // st5
  NiRenderedTexture *v27; // edx
  double v28; // st5
  float v29; // eax
  double v30; // st5
  float v31; // ecx
  float v32; // ecx
  float v33; // edx
  float v34; // eax
  float v35; // ecx
  NiRenderedTexture *v36; // esi
  double v37; // st5
  double v38; // st4
  NiRenderedTexture *v39; // eax
  unsigned __int16 v40; // bp
  bool v41; // cc
  NiD3DPassVtbl **v42; // esi
  int v43; // eax
  NiD3DVertexShader *v44; // eax
  NiRenderedTexture *InnerTexture; // eax
  NiD3DTextureStage *v46; // ebp
  int v47; // eax
  NiD3DTextureStage *Destroy; // eax
  NiD3DVertexShader *v49; // eax
  NiD3DPass *v50; // ecx
  NiD3DPixelShader *v51; // eax
  NiD3DVertexShader *v52; // eax
  NiD3DPixelShader *v53; // eax
  int v54; // eax
  NiD3DTextureStage *v55; // eax
  char v56; // bl
  NiD3DPass *v57; // ecx
  NiD3DVertexShader *v58; // eax
  NiD3DVertexShader *v59; // eax
  unsigned __int8 v60; // bl
  bool v61; // zf
  NiD3DTextureStage *sub_75FBA0; // [esp-4h] [ebp-60h]
  bool v64; // [esp+16h] [ebp-46h]
  bool v65; // [esp+17h] [ebp-45h]
  char v66; // [esp+18h] [ebp-44h]
  bool v67; // [esp+1Bh] [ebp-41h]
  NiD3DPassVtbl **v68; // [esp+1Ch] [ebp-40h] BYREF
  __int64 v69; // [esp+20h] [ebp-3Ch]
  float v70; // [esp+28h] [ebp-34h]
  float v71; // [esp+2Ch] [ebp-30h]
  NiRenderedTexture *a2; // [esp+30h] [ebp-2Ch]
  float v73; // [esp+34h] [ebp-28h]
  float v74; // [esp+38h] [ebp-24h]
  float v75; // [esp+3Ch] [ebp-20h]
  float v76; // [esp+40h] [ebp-1Ch]
  float v77; // [esp+44h] [ebp-18h]
  float v78; // [esp+48h] [ebp-14h]
  float v79; // [esp+4Ch] [ebp-10h]
  unsigned int v80; // [esp+58h] [ebp-4h]

  (*(void (__thiscall **)(void *))(*(_DWORD *)this + 0x80))(this); /*0x7e8e41*/
  v9 = a5; /*0x7e8e43*/
  v10 = *(_DWORD *)(a5 + 0x18); /*0x7e8e47*/
  if ( v10 ) /*0x7e8e4c*/
    v11 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v10 + 0x54))(*(_DWORD *)(a5 + 0x18)) == 4; /*0x7e8e60*/
  else
    v11 = 0; /*0x7e8e4e*/
  v12 = v11 ? (NiRenderedTexture **)v10 : 0;
  if ( v12 ) /*0x7e8e69*/
  {
    v13 = 1.0; /*0x7e8e76*/
    if ( OB_ShaderPassControl_010201A0[2] ) /*0x7e8e6f*/
    {
      v76 = 1.0; /*0x7e8e7a*/
      v77 = 1.0; /*0x7e8e85*/
      v78 = 1.0; /*0x7e8e8d*/
      v79 = 1.0; /*0x7e8e93*/
      OB_BSShader_SetSharedFloat4Constant_010201A0( /*0x7e8eac*/
        0,
        COERCE_INT(1.0),
        COERCE_INT(1.0),
        COERCE_INT(1.0),
        COERCE_INT(1.0));
      v13 = 1.0; /*0x7e8eb1*/
    }
    v14 = 0.0; /*0x7e8ebb*/
    v15 = unk_B43334; /*0x7e8ebd*/
    v16 = unk_B43338; /*0x7e8ec3*/
    OB_ShaderConstantStorage_010201A0[0xAB] = unk_B43330; /*0x7e8ec9*/
    v17 = unk_B4333C; /*0x7e8ece*/
    OB_ShaderConstantStorage_010201A0[0xAC] = v15; /*0x7e8ed3*/
    OB_ShaderConstantStorage_010201A0[0xAD] = v16; /*0x7e8ed9*/
    OB_ShaderConstantStorage_010201A0[0xAE] = v17; /*0x7e8edf*/
    v18 = *(_DWORD *)(v9 + 8); /*0x7e8ee4*/
    if ( v18 ) /*0x7e8ee9*/
    {
      *(float *)&a2 = (float)*(unsigned __int8 *)(v18 + 0x1A); /*0x7e8ef7*/
      v76 = *(float *)&a2 / dbl_A3DDD8; /*0x7e8f05*/
      *((float *)this + 0x61) = v76; /*0x7e8f0d*/
      v77 = 0.0; /*0x7e8f13*/
      v78 = 0.0; /*0x7e8f1b*/
      v79 = 0.0; /*0x7e8f23*/
      *((float *)this + 0x62) = 0.0; /*0x7e8f2b*/
      *((float *)this + 0x63) = 0.0; /*0x7e8f31*/
      *((float *)this + 0x64) = 0.0; /*0x7e8f37*/
    }
    else
    {
      *((_DWORD *)this + 0x61) = dword_B25AD0; /*0x7e8f44*/
      *((_DWORD *)this + 0x62) = dword_B25AD4; /*0x7e8f50*/
      *((_DWORD *)this + 0x63) = dword_B25AD8; /*0x7e8f5c*/
      *((_DWORD *)this + 0x64) = dword_B25ADC; /*0x7e8f67*/
    }
    v19 = *(float **)(v9 + 0xC);                // Fog render consumer decode: TallGrass reads active fog property from render/property state +0x0C; normally the B333E4-derived scene fog property. /*0x7e8f6d*/
    if ( v19 ) /*0x7e8f72*/
    {
      v20 = v19[8]; /*0x7e8f7b*/
      v21 = v19[9]; /*0x7e8f7e*/
      *(float *)&v69 = v19[0xB]; /*0x7e8f81*/
      v22 = v19[0xC]; /*0x7e8f85*/
      v23 = v19[0xA]; /*0x7e8f88*/
      *(float *)&a2 = v22; /*0x7e8f8b*/
      v76 = v20; /*0x7e8f8f*/
      v24 = *(float *)&a2; /*0x7e8f93*/
      v77 = v21; /*0x7e8f97*/
      v78 = v23; /*0x7e8f9d*/
      *(float *)&a2 = *(float *)&a2 - *(float *)&v69; /*0x7e8fa5*/
      *(float *)&v69 = v24; /*0x7e8fa9*/
      v25 = *(float *)&a2; /*0x7e8fb1*/
      LODWORD(OB_ShaderConstantStorage_010201A0[0x209]) = v69;// Fog render consumer decode: TallGrass shared FogParam B45E14[0x209..0x20C] = (fogEnd, fogEnd - fogStart, 0, 0). /*0x7e8fb5*/
      *((float *)&v69 + 1) = v25; /*0x7e8fbb*/
      OB_ShaderConstantStorage_010201A0[0x20A] = *((float *)&v69 + 1); /*0x7e8fc3*/
      v70 = 0.0; /*0x7e8fc9*/
      v71 = 0.0; /*0x7e8fd1*/
      v26 = v76; /*0x7e8fd9*/
      OB_ShaderConstantStorage_010201A0[0x20B] = 0.0; /*0x7e8fdd*/
      *(float *)&a2 = v26; /*0x7e8fe2*/
      v27 = a2; /*0x7e8fe6*/
      v28 = v77; /*0x7e8fea*/
      OB_ShaderConstantStorage_010201A0[0x20C] = 0.0; /*0x7e8fee*/
      v73 = v28; /*0x7e8ff4*/
      v29 = v73; /*0x7e8ff8*/
      v30 = v78; /*0x7e8ffc*/
      LODWORD(OB_ShaderConstantStorage_010201A0[0x20D]) = v27;// Fog render consumer decode: TallGrass shared FogColor B45E14[0x20D..0x210] = (fog.r, fog.g, fog.b, 0). /*0x7e9000*/
      v74 = v30; /*0x7e9006*/
      v31 = v74; /*0x7e900a*/
      OB_ShaderConstantStorage_010201A0[0x20E] = v29; /*0x7e900e*/
      v75 = 0.0; /*0x7e9013*/
      OB_ShaderConstantStorage_010201A0[0x20F] = v31; /*0x7e901b*/
      OB_ShaderConstantStorage_010201A0[0x210] = 0.0; /*0x7e9021*/
    }
    else
    {
      v76 = flt_A8C690;                         // Fog render consumer decode: TallGrass null-property fallback starts FogParam default path. /*0x7e902f*/
      OB_ShaderConstantStorage_010201A0[0x209] = v76;// Fog render consumer decode: TallGrass null-property fallback writes B45E14[0x209] = flt_A8C690 and zeroes remaining FogParam lanes. /*0x7e9037*/
      v77 = 0.0; /*0x7e903c*/
      v78 = 0.0; /*0x7e9044*/
      OB_ShaderConstantStorage_010201A0[0x20A] = 0.0; /*0x7e904c*/
      v79 = 0.0; /*0x7e9052*/
      v32 = *(float *)&dword_B25AD0; /*0x7e905a*/
      OB_ShaderConstantStorage_010201A0[0x20B] = 0.0; /*0x7e9060*/
      v33 = *(float *)&dword_B25AD4; /*0x7e9066*/
      OB_ShaderConstantStorage_010201A0[0x20C] = 0.0; /*0x7e906c*/
      v34 = *(float *)&dword_B25AD8; /*0x7e9071*/
      OB_ShaderConstantStorage_010201A0[0x20D] = v32;// Fog render consumer decode: TallGrass null-property fallback writes default FogColor from dword_B25AD0/B25AD4/B25AD8/B25ADC. /*0x7e9076*/
      v35 = *(float *)&dword_B25ADC; /*0x7e907c*/
      OB_ShaderConstantStorage_010201A0[0x20E] = v33; /*0x7e9082*/
      OB_ShaderConstantStorage_010201A0[0x20F] = v34; /*0x7e9088*/
      OB_ShaderConstantStorage_010201A0[0x210] = v35; /*0x7e908d*/
    }
    v36 = v12[0x27]; /*0x7e909a*/
    if ( unk_B42D78 ) /*0x7e9093*/
    {
      *(float *)&a2 = ((double (__cdecl *)(_DWORD, int))unk_B42D78)(0, 1); /*0x7e90b4*/
      v14 = 0.0; /*0x7e90bf*/
      v13 = 1.0; /*0x7e90bf*/
    }
    else
    {
      *(float *)&a2 = 0.0; /*0x7e913d*/
    }
    v37 = dbl_A56E20; /*0x7e90d8*/
    *(float *)&a2 = *(float *)&a2 / dbl_A2F938 * v37 * *(float *)&v36->member.buffer; /*0x7e90da*/
    v38 = *(float *)&a2; /*0x7e90de*/
    *((float *)this + 0x22) = *(float *)&a2; /*0x7e90e2*/
    if ( v38 >= v37 ) /*0x7e90ef*/
    {
      *(float *)&a2 = v38; /*0x7e90f5*/
      unknown_libname_14(v37, *(float *)&a2); /*0x7e90ff*/
      *((float *)this + 0x22) = *(float *)&a2; /*0x7e910c*/
      v14 = 0.0; /*0x7e9116*/
      v13 = 1.0; /*0x7e9116*/
    }
    OB_ShaderConstantStorage_010201A0[0xAA] = *((float *)this + 0x22); /*0x7e911e*/
    if ( ((unsigned int)v12[7] & 0x800) != 0 ) /*0x7e912b*/
    {
      OB_ShaderConstantStorage_010201A0[0x9F] = v13; /*0x7e912f*/
      OB_ShaderConstantStorage_010201A0[0xA0] = v13; /*0x7e9135*/
    }
    else
    {
      OB_ShaderConstantStorage_010201A0[0x9F] = v14; /*0x7e914c*/
      OB_ShaderConstantStorage_010201A0[0xA0] = v14; /*0x7e9152*/
    }
    OB_ShaderConstantStorage_010201A0[0xA1] = v13; /*0x7e9158*/
    v39 = *v12; /*0x7e9164*/
    a2 = v12[0x29]; /*0x7e9166*/
    ((void (__thiscall *)(NiRenderedTexture **))v39[1].member.super.nextTex)(v12); /*0x7e916f*/
    v67 = ((unsigned int)v12[7] & 0x400) != 0; /*0x7e9179*/
    v65 = ((unsigned int)v12[7] & 0x1000) != 0; /*0x7e9183*/
    v64 = ((unsigned int)v12[7] & 0x2000) != 0; /*0x7e918d*/
    if ( OB_RendererGlobalState_010201A0[0x1DB] /*0x7e91e9*/
      || !LODWORD(unk_B43108[0])
      || (OB_RendererGlobalState_010201A0[0xA7] & 0x20) == 0
      || *(int *)&OB_RendererGlobalState_010201A0[0xAF] < 2
      || (v69 = (__int64)g_CanopyShadowProjectionScale, v66 = 1, !(_DWORD)v69) )
    {
      v66 = 0; /*0x7e91eb*/
    }
    sub_7E6A90((void **)this, (int)arg0, (int)v12); /*0x7e91f8*/
    if ( OB_RendererGlobalState_010201A0[0x1D7] ) /*0x7e91fd*/
      OB_ShaderConstantStorage_010201A0[0xB3] = *(float *)&OB_RendererGlobalState_010201A0[0xAB]; /*0x7e920c*/
    v40 = 0; /*0x7e9212*/
    v41 = *(_DWORD *)&OB_RendererGlobalState_010201A0[0xAF] < 2; /*0x7e9214*/
    LODWORD(v69) = 0; /*0x7e921a*/
    if ( !v41 ) /*0x7e921e*/
    {
      v40 = 0x14; /*0x7e9220*/
      LODWORD(v69) = 2; /*0x7e9225*/
    }
    v42 = 0; /*0x7e9229*/
    v68 = 0; /*0x7e922b*/
    v80 = 0; /*0x7e922f*/
    arg0 = 0; /*0x7e9233*/
    v43 = *(_DWORD *)(*(_DWORD *)&OB_RendererGlobalState_010201A0[0x1F] + 0xC); /*0x7e923d*/
    LOBYTE(v80) = 1; /*0x7e9242*/
    if ( v43 && *(_BYTE *)(*(_DWORD *)v43 + 0xF4) == 1 ) /*0x7e9256*/
    {
      sub_76C890((NiD3DPass **)&v68, (int *)this + 0x21); /*0x7e9267*/
      v42 = v68; /*0x7e9271*/
      if ( v65 ) /*0x7e9277*/
      {
        if ( v64 ) /*0x7e927e*/
          v44 = *((NiD3DVertexShader **)this + 0x50); /*0x7e9280*/
        else
          v44 = *((NiD3DVertexShader **)this + 0x4E); /*0x7e9288*/
      }
      else if ( v64 ) /*0x7e9295*/
      {
        v44 = *((NiD3DVertexShader **)this + 0x4F); /*0x7e9297*/
      }
      else
      {
        v44 = *((NiD3DVertexShader **)this + 0x4D); /*0x7e929f*/
      }
      NiD3DPass_SetVertexShader((NiD3DPass *)v68, v44); /*0x7e92a6*/
      NiD3DPass_SetPixelShader( /*0x7e92bb*/
        v42,
        *((NiD3DPixelShader **)this + *(_DWORD *)&OB_RendererGlobalState_010201A0[0x217] + 0x53));
      if ( !v42[0xC] ) /*0x7e92c0*/
        v42[0xC] = (NiD3DPassVtbl *)NiD3DRenderStateGroupPool_Acquire(); /*0x7e92cb*/
      NiD3DRenderStateGroup_SetRenderState(v42[0xC], 0x98, 0x3F, 1); /*0x7e92da*/
      sub_7AEC20(&arg0, (NiD3DTextureStage *)v42[9]->Destroy); /*0x7e92e9*/
      NiD3DTextureStage_SetTexture(arg0, a2); /*0x7e92f7*/
      sub_7AEC20(&arg0, (NiD3DTextureStage *)v42[9]->sub_75FBA0); /*0x7e9307*/
      InnerTexture = BSRenderedTexture::GetInnerTexture(*(BSRenderedTexture **)(**(_DWORD **)(*(_DWORD *)&OB_RendererGlobalState_010201A0[0x1F] /*0x7e931c*/
                                                                                            + 0xC)
                                                                              + 0x114));
      v46 = arg0; /*0x7e9321*/
      NiD3DTextureStage_SetTexture(arg0, InnerTexture); /*0x7e9328*/
LABEL_100:
      if ( *(_WORD *)&OB_RendererGlobalState_010201A0[0x13] == 4 ) /*0x7e9620*/
      {
        if ( !v42[0xC] ) /*0x7e9626*/
          v42[0xC] = (NiD3DPassVtbl *)NiD3DRenderStateGroupPool_Acquire(); /*0x7e9631*/
        NiD3DRenderStateGroup_SetRenderState(v42[0xC], 0x34, 1, 0); /*0x7e963d*/
        if ( !v42[0xC] ) /*0x7e9642*/
          v42[0xC] = (NiD3DPassVtbl *)NiD3DRenderStateGroupPool_Acquire(); /*0x7e964d*/
        NiD3DRenderStateGroup_SetRenderState(v42[0xC], 0x38, 8, 0); /*0x7e9659*/
        if ( !v42[0xC] ) /*0x7e965e*/
          v42[0xC] = (NiD3DPassVtbl *)NiD3DRenderStateGroupPool_Acquire(); /*0x7e9669*/
        NiD3DRenderStateGroup_SetRenderState(v42[0xC], 0x37, 7, 0); /*0x7e9675*/
        if ( !v42[0xC] ) /*0x7e967a*/
          v42[0xC] = (NiD3DPassVtbl *)NiD3DRenderStateGroupPool_Acquire(); /*0x7e9685*/
        NiD3DRenderStateGroup_SetRenderState(v42[0xC], 0x35, 1, 0); /*0x7e9691*/
        if ( !v42[0xC] ) /*0x7e9696*/
          v42[0xC] = (NiD3DPassVtbl *)NiD3DRenderStateGroupPool_Acquire(); /*0x7e96a1*/
        NiD3DRenderStateGroup_SetRenderState(v42[0xC], 0x36, 1, 0); /*0x7e96aa*/
      }
      else
      {
        if ( !v42[0xC] ) /*0x7e9793*/
          v42[0xC] = (NiD3DPassVtbl *)NiD3DRenderStateGroupPool_Acquire(); /*0x7e979e*/
        NiD3DRenderStateGroup_SetRenderState(v42[0xC], 0x34, 0, 0); /*0x7e97aa*/
      }
      if ( *(int *)&OB_RendererGlobalState_010201A0[0xAF] < 2 || !OB_RendererGlobalState_010201A0[0x1D7] ) /*0x7e97b8*/
      {
        v60 = *(_BYTE *)(*(_DWORD *)(a5 + 8) + 0x1A); /*0x7e97cc*/
        if ( !v42[0xC] ) /*0x7e97c1*/
          v42[0xC] = (NiD3DPassVtbl *)NiD3DRenderStateGroupPool_Acquire(); /*0x7e97d6*/
        NiD3DRenderStateGroup_SetRenderState(v42[0xC], 0x18, v60, 0); /*0x7e97e4*/
      }
      NiTArray_NiD3DPass_SetAt((NiTArray_NiD3DPass *)this + 4, *((NiD3DPass **)this + 0xE), (NiD3DPass **)&v68); /*0x7e97f5*/
      ++*((_DWORD *)this + 0xE); /*0x7e97fa*/
      LOBYTE(v80) = 0; /*0x7e9803*/
      if ( v46 ) /*0x7e9808*/
      {
        v61 = v46[7].Unk08-- == 1; /*0x7e980a*/
        if ( v61 ) /*0x7e980d*/
          sub_772560(v46); /*0x7e9811*/
      }
      v61 = v42[0x18] == (NiD3DPassVtbl *)1; /*0x7e9816*/
      v42[0x18] = (NiD3DPassVtbl *)((char *)v42[0x18] + 0xFFFFFFFF); /*0x7e9816*/
      v80 = 0xFFFFFFFF; /*0x7e9819*/
      if ( v61 ) /*0x7e981d*/
        NiD3DPass_ReleaseToPool((NiD3DPass *)v42); /*0x7e9821*/
      return 0; /*0x7e9821*/
    }
    if ( !unk_B43344 || !(unsigned __int16)BSShaderLightingProperty__CountFrustumVisibleEnabledLights(v12) ) /*0x7e933d*/
    {
      v47 = *((_DWORD *)this + 0x1F); /*0x7e934e*/
      if ( v47 ) /*0x7e9353*/
      {
        v42 = *((NiD3DPassVtbl ***)this + 0x1F); /*0x7e9355*/
        ++*(_DWORD *)(v47 + 0x60); /*0x7e9357*/
        v68 = (NiD3DPassVtbl **)v47; /*0x7e935b*/
      }
      Destroy = (NiD3DTextureStage *)v42[9]->Destroy; /*0x7e9362*/
      if ( Destroy ) /*0x7e9366*/
      {
        ++Destroy[7].Unk08; /*0x7e9368*/
        arg0 = Destroy; /*0x7e936c*/
      }
      NiD3DTextureStage_SetTexture(arg0, a2); /*0x7e9379*/
      if ( v66 ) /*0x7e9384*/
      {
        sub_7AEC20(&arg0, (NiD3DTextureStage *)v42[9]->sub_75FBA0); /*0x7e9391*/
        NiD3DTextureStage_SetTexture(arg0, (NiRenderedTexture *)LODWORD(unk_B43108[0])); /*0x7e93a0*/
        sub_7AEC20(&arg0, (NiD3DTextureStage *)v42[9]->sub_75FD90); /*0x7e93b0*/
        NiD3DTextureStage_SetTexture(arg0, g_CanopyShadowMap); /*0x7e93c0*/
      }
      if ( v67 ) /*0x7e93ca*/
      {
        if ( !v65 ) /*0x7e93d1*/
        {
          v50 = (NiD3DPass *)v42; /*0x7e940b*/
          if ( !v66 ) /*0x7e940d*/
          {
            v49 = *((NiD3DVertexShader **)this + v40 + 0x26); /*0x7e9412*/
            goto LABEL_57; /*0x7e9419*/
          }
          v52 = *((NiD3DVertexShader **)this + v40 + 0x2E); /*0x7e941e*/
          goto LABEL_75; /*0x7e9425*/
        }
        if ( !v66 ) /*0x7e93d5*/
        {
          v49 = *((NiD3DVertexShader **)this + v40 + 0x28); /*0x7e93da*/
LABEL_56:
          v50 = (NiD3DPass *)v42; /*0x7e93e1*/
LABEL_57:
          NiD3DPass_SetVertexShader(v50, v49); /*0x7e93e3*/
LABEL_58:
          v51 = *((NiD3DPixelShader **)this + (unsigned __int16)v69 + 0x4D); /*0x7e93e9*/
LABEL_96:
          NiD3DPass_SetPixelShader(v42, v51); /*0x7e95ed*/
LABEL_97:
          if ( !v42[0xC] ) /*0x7e95f5*/
            v42[0xC] = (NiD3DPassVtbl *)NiD3DRenderStateGroupPool_Acquire(); /*0x7e9600*/
          NiD3DRenderStateGroup_SetRenderState(v42[0xC], 0x98, 0, 0); /*0x7e960f*/
          v46 = arg0; /*0x7e9614*/
          goto LABEL_100; /*0x7e9614*/
        }
        v52 = *((NiD3DVertexShader **)this + v40 + 0x30); /*0x7e93fd*/
      }
      else if ( v65 ) /*0x7e942c*/
      {
        if ( !v64 ) /*0x7e9433*/
        {
          v50 = (NiD3DPass *)v42; /*0x7e9443*/
          if ( !v66 ) /*0x7e9445*/
          {
            v49 = *((NiD3DVertexShader **)this + v40 + 0x27); /*0x7e944a*/
            goto LABEL_57; /*0x7e9451*/
          }
          v52 = *((NiD3DVertexShader **)this + v40 + 0x2F); /*0x7e9456*/
          goto LABEL_75; /*0x7e945d*/
        }
        v52 = *((NiD3DVertexShader **)this + v40 + 0x36); /*0x7e9438*/
      }
      else if ( v64 ) /*0x7e9464*/
      {
        v52 = *((NiD3DVertexShader **)this + v40 + 0x35); /*0x7e9469*/
      }
      else
      {
        if ( !v66 ) /*0x7e9474*/
        {
          v49 = *((NiD3DVertexShader **)this + v40 + 0x25); /*0x7e9479*/
          goto LABEL_56; /*0x7e9480*/
        }
        v52 = *((NiD3DVertexShader **)this + v40 + 0x2D); /*0x7e9488*/
      }
      v50 = (NiD3DPass *)v42; /*0x7e948f*/
LABEL_75:
      NiD3DPass_SetVertexShader(v50, v52); /*0x7e9491*/
      if ( !v66 || !(_WORD)v69 ) /*0x7e94a5*/
        goto LABEL_58; /*0x7e94a5*/
      v53 = *((NiD3DPixelShader **)this + 0x51); /*0x7e94ab*/
LABEL_128:
      NiD3DPass_SetPixelShader(v42, v53); /*0x7e9746*/
      *(float *)&a2 = unk_B44EE8; /*0x7e9754*/
      v73 = unk_B44EEC; /*0x7e975e*/
      OB_ShaderConstantStorage_010201A0[0xB7] = *(float *)&a2; /*0x7e9766*/
      OB_ShaderConstantStorage_010201A0[0xB8] = v73; /*0x7e9770*/
      OB_ShaderConstantStorage_010201A0[0xB9] = g_TallGrassProjectionShadowMultiplier; /*0x7e977c*/
      OB_ShaderConstantStorage_010201A0[0xBA] = unk_B44EF4; /*0x7e9788*/
      goto LABEL_97; /*0x7e978e*/
    }
    v54 = *((_DWORD *)this + 0x20); /*0x7e94b6*/
    if ( v54 ) /*0x7e94be*/
    {
      v42 = *((NiD3DPassVtbl ***)this + 0x20); /*0x7e94c0*/
      ++*(_DWORD *)(v54 + 0x60); /*0x7e94c2*/
      v68 = (NiD3DPassVtbl **)v54; /*0x7e94c6*/
    }
    v55 = (NiD3DTextureStage *)v42[9]->Destroy; /*0x7e94cd*/
    if ( v55 ) /*0x7e94d1*/
    {
      ++v55[7].Unk08; /*0x7e94d3*/
      arg0 = v55; /*0x7e94d7*/
    }
    NiD3DTextureStage_SetTexture(arg0, a2); /*0x7e94e4*/
    sub_75FBA0 = (NiD3DTextureStage *)v42[9]->sub_75FBA0; /*0x7e94f6*/
    if ( *(int *)&OB_RendererGlobalState_010201A0[0xAF] < 2 ) /*0x7e94fb*/
    {
      sub_7AEC20(&arg0, sub_75FBA0); /*0x7e955b*/
      NiD3DTextureStage_SetTexture(arg0, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x7e956b*/
      sub_7AEC20(&arg0, (NiD3DTextureStage *)v42[9]->sub_75FD90); /*0x7e957b*/
      NiD3DTextureStage_SetTexture(arg0, (NiRenderedTexture *)flt_B430D4); /*0x7e958b*/
      v56 = v66; /*0x7e9590*/
    }
    else
    {
      sub_7AEC20(&arg0, sub_75FBA0); /*0x7e94fd*/
      NiD3DTextureStage_SetTexture(arg0, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x7e950d*/
      v56 = v66; /*0x7e9512*/
      if ( v66 ) /*0x7e9518*/
      {
        sub_7AEC20(&arg0, (NiD3DTextureStage *)v42[9]->sub_75FD90); /*0x7e9525*/
        NiD3DTextureStage_SetTexture(arg0, (NiRenderedTexture *)LODWORD(unk_B43108[0])); /*0x7e9535*/
        sub_7AEC20(&arg0, (NiD3DTextureStage *)v42[9]->sub_75F9E0); /*0x7e9545*/
        NiD3DTextureStage_SetTexture(arg0, g_CanopyShadowMap); /*0x7e9554*/
      }
    }
    if ( v67 ) /*0x7e9599*/
    {
      if ( v65 ) /*0x7e95a4*/
      {
        v57 = (NiD3DPass *)v42; /*0x7e95a8*/
        if ( !v56 ) /*0x7e95aa*/
        {
          v58 = *((NiD3DVertexShader **)this + v40 + 0x2C); /*0x7e95af*/
LABEL_94:
          NiD3DPass_SetVertexShader(v57, v58); /*0x7e95db*/
          goto LABEL_95; /*0x7e95dc*/
        }
        v59 = *((NiD3DVertexShader **)this + v40 + 0x34); /*0x7e95bb*/
LABEL_125:
        NiD3DPass_SetVertexShader(v57, v59); /*0x7e9726*/
        if ( v56 && (_WORD)v69 ) /*0x7e973a*/
        {
          v53 = *((NiD3DPixelShader **)this + 0x52); /*0x7e9740*/
          goto LABEL_128; /*0x7e9740*/
        }
LABEL_95:
        v51 = *((NiD3DPixelShader **)this + (unsigned __int16)v69 + 0x4E); /*0x7e95e1*/
        goto LABEL_96; /*0x7e95e6*/
      }
      if ( !v56 ) /*0x7e95c9*/
      {
        v58 = *((NiD3DVertexShader **)this + v40 + 0x2A); /*0x7e95d2*/
LABEL_93:
        v57 = (NiD3DPass *)v42; /*0x7e95d9*/
        goto LABEL_94; /*0x7e95d9*/
      }
      v59 = *((NiD3DVertexShader **)this + v40 + 0x32); /*0x7e96b2*/
    }
    else if ( v65 ) /*0x7e96c0*/
    {
      if ( v64 ) /*0x7e96c7*/
      {
        v59 = *((NiD3DVertexShader **)this + v40 + 0x38); /*0x7e96cc*/
      }
      else
      {
        if ( !v56 ) /*0x7e96d7*/
        {
          v58 = *((NiD3DVertexShader **)this + v40 + 0x2B); /*0x7e96dc*/
          goto LABEL_93; /*0x7e96e3*/
        }
        v59 = *((NiD3DVertexShader **)this + v40 + 0x33); /*0x7e96eb*/
      }
    }
    else if ( v64 ) /*0x7e96f9*/
    {
      v59 = *((NiD3DVertexShader **)this + v40 + 0x37); /*0x7e96fe*/
    }
    else
    {
      if ( !v56 ) /*0x7e9709*/
      {
        v58 = *((NiD3DVertexShader **)this + v40 + 0x29); /*0x7e970e*/
        goto LABEL_93; /*0x7e9715*/
      }
      v59 = *((NiD3DVertexShader **)this + v40 + 0x31); /*0x7e971d*/
    }
    v57 = (NiD3DPass *)v42; /*0x7e9724*/
    goto LABEL_125; /*0x7e9724*/
  }
  return 0; /*0x7e9828*/
}
