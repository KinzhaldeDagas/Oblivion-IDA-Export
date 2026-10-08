// HairShader concrete render-pass consumer. It first resets the NiD3DShader pass queue, then handles only selectors 0xE0, 0xE1, and 0x18C..0x18F. The complete jump table maps 0x177..0x17A to default 0x80D84E, which returns 0 without a ShadowLightShader fallback, leaving PassCount zero.
int __thiscall HairShader_SetupRenderPass(
        Ni2DBuffer **this,
        float *geometry,
        int arg3,
        int a4,
        NiD3DPass *a5,
        int a6,
        int a7,
        int a8)
{
  int v9; // eax
  BSShaderProperty *StageCount; // edi
  UInt32 passInfo; // eax
  int ShadowSceneNode; // eax
  _DWORD *LightRef; // eax
  float v15; // esi
  float v16; // ecx
  float v17; // edx
  float v18; // eax
  double v19; // st7
  float v20; // ecx
  double v21; // st7
  float v22; // eax
  float v23; // ecx
  float v24; // edx
  int v25; // ebx
  NiD3DPass **v26; // esi
  NiD3DPass *v27; // ebx
  NiD3DPass *v28; // ebx
  NiD3DPass *v29; // ebx
  NiD3DPass *v30; // ebx
  int v31; // ebx
  Ni2DBuffer *v32; // eax
  UInt32 Stage; // ebp
  int (__thiscall *v34)(BSShaderProperty *, _DWORD); // eax
  NiTexture *v35; // eax
  NiTexture *v36; // eax
  NiD3DTextureStage *v37; // ebp
  NiD3DPixelShader *v38; // eax
  Ni2DBuffer **v39; // esi
  UInt32 v40; // ebp
  int (__thiscall *v41)(BSShaderProperty *, _DWORD); // eax
  NiTexture *v42; // eax
  NiTexture *v43; // eax
  NiD3DPixelShader *v44; // eax
  NiD3DVertexShader *v45; // eax
  NiD3DPass **v47; // [esp-4h] [ebp-54h]
  NiD3DPass **v48; // [esp-4h] [ebp-54h]
  Ni2DBuffer **v49; // [esp+14h] [ebp-3Ch]
  float alpha; // [esp+18h] [ebp-38h] BYREF
  Ni2DBuffer **v51; // [esp+1Ch] [ebp-34h]
  int v52; // [esp+20h] [ebp-30h]
  float v53; // [esp+24h] [ebp-2Ch]
  float v54; // [esp+28h] [ebp-28h]
  float v55; // [esp+2Ch] [ebp-24h]
  Ni2DBuffer **v56; // [esp+30h] [ebp-20h]
  float v57; // [esp+34h] [ebp-1Ch]
  float v58; // [esp+38h] [ebp-18h]
  float v59; // [esp+3Ch] [ebp-14h]
  float v60; // [esp+40h] [ebp-10h]
  int v61; // [esp+4Ch] [ebp-4h]
  bool v62; // [esp+5Ch] [ebp+Ch]

  v51 = this; /*0x80d139*/
  ((void (__thiscall *)(Ni2DBuffer **))(*this)[6].members.width)(this);// Hair SetupRenderPass first invokes vtable +0x80 = NiD3DShader_ResetPassQueue before inspecting the selector. Any unhandled selector therefore leaves PassCount zero. /*0x80d146*/
  v9 = LODWORD(unk_B42E90); /*0x80d148*/
  v52 = LODWORD(unk_B42E90); /*0x80d152*/
  if ( v52 >= 0x160 && v9 <= 0x162 || v9 >= 6 && v9 <= 9 || v9 == 0x165 ) /*0x80d16e*/
  {
    GetShaderDefinition(1u); /*0x80d172*/
    return ShadowLightShader__SetupRenderPass(this, geometry, arg3, a4, a5, a6, a7, a8); /*0x80d1a4*/
  }
  StageCount = (BSShaderProperty *)a5->StageCount; /*0x80d1ad*/
  LOBYTE(a6) = 0; /*0x80d1b2*/
  v62 = 0; /*0x80d1b7*/
  LOBYTE(a7) = 0; /*0x80d1bc*/
  LOBYTE(a8) = 1; /*0x80d1c1*/
  if ( StageCount ) /*0x80d1c6*/
  {
    passInfo = StageCount->member.passInfo; /*0x80d1cc*/
    LOBYTE(a6) = (passInfo & 0x400) != 0; /*0x80d1d4*/
    v62 = (passInfo & 0x800) != 0; /*0x80d1de*/
    LOBYTE(a7) = (passInfo & 0x1000) != 0; /*0x80d1e8*/
    ShadowSceneNode = GetShadowSceneNode(passInfo >> 0x1C); /*0x80d1f4*/
    LightRef = ShadowSceneLight_GetLightRef(*(_DWORD **)(ShadowSceneNode + 0x118), &alpha); /*0x80d209*/
    LOBYTE(a8) = NiPoint3__NotEqual((const NiPoint3 *)(*LightRef + 0xF8), &stru_B3FA90); /*0x80d220*/
    if ( alpha != 0.0 ) /*0x80d22a*/
    {
      v15 = alpha; /*0x80d22c*/
      if ( !InterlockedDecrement((volatile LONG *)(LODWORD(alpha) + 4)) ) /*0x80d232*/
        (**(void (__thiscall ***)(_DWORD, int))LODWORD(v15))(LODWORD(v15), 1); /*0x80d248*/
    }
    v16 = flt_B46498; /*0x80d24d*/
    v17 = flt_B4649C; /*0x80d253*/
    alpha = StageCount->member.alpha; /*0x80d259*/
    v18 = flt_B464A0[0]; /*0x80d25d*/
    v57 = v16; /*0x80d262*/
    v19 = v16; /*0x80d266*/
    v20 = flt_B464A0[1]; /*0x80d26a*/
    v53 = v19; /*0x80d270*/
    v58 = v17; /*0x80d274*/
    v54 = v17; /*0x80d280*/
    v59 = v18; /*0x80d284*/
    v21 = v18; /*0x80d288*/
    v22 = v17; /*0x80d28c*/
    v55 = v21; /*0x80d290*/
    v60 = v20; /*0x80d298*/
    v23 = v55; /*0x80d29c*/
    *(float *)&v56 = alpha; /*0x80d2a0*/
    flt_B46498 = v53; /*0x80d2a4*/
    v24 = *(float *)&v56; /*0x80d2aa*/
    flt_B4649C = v22; /*0x80d2ae*/
    flt_B464A0[0] = v23; /*0x80d2b3*/
    flt_B464A0[1] = v24; /*0x80d2b9*/
  }
  v25 = (int)*(this + 0x27); /*0x80d2c7*/
  v26 = (NiD3DPass **)(this + 0x27); /*0x80d2cd*/
  if ( *(_WORD *)&OB_RendererGlobalState_010201A0.pad_00D[6] == 4 ) /*0x80d2d3*/
  {
    if ( !*(_DWORD *)(v25 + 0x30) ) /*0x80d2d9*/
      *(_DWORD *)(v25 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x80d2e4*/
    NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v25 + 0x30), 0x34u, 1u, 0); /*0x80d2f0*/
    v27 = *v26; /*0x80d2f5*/
    if ( !(*v26)->RenderStateGroup ) /*0x80d2f7*/
      v27->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x80d302*/
    NiD3DRenderStateGroup_SetRenderState((OblivionRenderStateGroupPrefix *)v27->RenderStateGroup, 0x38u, 8u, 0); /*0x80d30e*/
    v28 = *v26; /*0x80d313*/
    if ( !(*v26)->RenderStateGroup ) /*0x80d315*/
      v28->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x80d320*/
    NiD3DRenderStateGroup_SetRenderState((OblivionRenderStateGroupPrefix *)v28->RenderStateGroup, 0x37u, 7u, 0); /*0x80d32c*/
    v29 = *v26; /*0x80d331*/
    if ( !(*v26)->RenderStateGroup ) /*0x80d333*/
      v29->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x80d33e*/
    NiD3DRenderStateGroup_SetRenderState((OblivionRenderStateGroupPrefix *)v29->RenderStateGroup, 0x35u, 1u, 0); /*0x80d34a*/
    v30 = *v26; /*0x80d34f*/
    if ( !(*v26)->RenderStateGroup ) /*0x80d351*/
      v30->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x80d35c*/
    NiD3DRenderStateGroup_SetRenderState((OblivionRenderStateGroupPrefix *)v30->RenderStateGroup, 0x36u, 1u, 0); /*0x80d365*/
  }
  else
  {
    if ( !*(_DWORD *)(v25 + 0x30) ) /*0x80d367*/
      *(_DWORD *)(v25 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x80d372*/
    NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v25 + 0x30), 0x34u, 0, 0); /*0x80d37e*/
  }
  v31 = *(_DWORD *)OB_RendererGlobalState_010201A0.shaderPackageVersion_le; /*0x80d38a*/
  if ( OB_RendererGlobalState_010201A0.pad_00D[0x8C] ) /*0x80d383*/
  {
    if ( v31 != 1 ) /*0x80d39c*/
    {
      flt_B4616C[0] = *(float *)&StageCount[3].member.super.super.m_extraDataListLen; /*0x80d3ef*/
      v49 = this + 0x33; /*0x80d3f5*/
      flt_B4616C[1] = *(float *)&StageCount[3].member.super.flags; /*0x80d405*/
      LODWORD(alpha) = this + 0x3A; /*0x80d40a*/
      flt_B4616C[2] = *(float *)&StageCount[3].member.passInfo; /*0x80d414*/
      flt_B4616C[3] = StageCount[3].member.alpha; /*0x80d420*/
      goto LABEL_32; /*0x80d420*/
    }
  }
  else
  {
    v31 = 1; /*0x80d392*/
  }
  flt_B46638[0x14] = *(float *)&StageCount[3].member.super.super.m_extraDataListLen; /*0x80d3aa*/
  v49 = this + 0x29; /*0x80d3b0*/
  flt_B46638[0x15] = *(float *)&StageCount[3].member.super.flags; /*0x80d3c0*/
  LODWORD(alpha) = this + 0x30; /*0x80d3c5*/
  flt_B46638[0x16] = *(float *)&StageCount[3].member.passInfo; /*0x80d3cf*/
  flt_B46638[0x17] = StageCount[3].member.alpha; /*0x80d3db*/
LABEL_32:
  if ( arg3 ) /*0x80d42e*/
    v32 = *(this + 0x3E); /*0x80d430*/
  else
    v32 = *(this + 0x3D); /*0x80d438*/
  NiSmartPointer_Set__(this + 9, v32);          // Hair's complete selector switch normalizes selector-0xE0 and covers through 0x18F. Concrete cases are only 0xE0, 0xE1, and 0x18C..0x18F; all other in-range values map to default. /*0x80d43f*/
  switch ( v52 ) /*0x80d45f*/
  {
    case 0xE0: /*0x80d45f*/
      Stage = (*v26)->Stages.data->Stage; /*0x80d4db*/
      a5 = (NiD3DPass *)Stage; /*0x80d4df*/
      if ( Stage ) /*0x80d4e3*/
        ++*(_DWORD *)(Stage + 0x5C); /*0x80d4e5*/
      v34 = *((int (__thiscall **)(BSShaderProperty *, _DWORD))StageCount->vtbl + 0x22); /*0x80d4eb*/
      v61 = 0; /*0x80d4f5*/
      v35 = (NiTexture *)v34(StageCount, 0); /*0x80d4fd*/
      NiD3DTextureStage_SetTexture((NiD3DTextureStage *)Stage, v35); /*0x80d502*/
      sub_7AEC20((NiD3DTextureStage **)&a5, (NiD3DTextureStage *)(*v26)->Stages.data->Texture); /*0x80d514*/
      v36 = (NiTexture *)(*((int (__thiscall **)(BSShaderProperty *, _DWORD))StageCount->vtbl + 0x23))(StageCount, 0); /*0x80d525*/
      NiD3DTextureStage_SetTexture((NiD3DTextureStage *)a5, v36); /*0x80d52c*/
      sub_7AEC20((NiD3DTextureStage **)&a5, (NiD3DTextureStage *)(*v26)->Stages.data->Unk08); /*0x80d53e*/
      NiD3DTextureStage_SetTexture((NiD3DTextureStage *)a5, (NiTexture *)StageCount[3].member.lastRenderPassState); /*0x80d54e*/
      sub_7AEC20((NiD3DTextureStage **)&a5, (NiD3DTextureStage *)(*v26)->Stages.data[1].Stage); /*0x80d560*/
      v37 = (NiD3DTextureStage *)a5; /*0x80d56a*/
      NiD3DTextureStage_SetTexture((NiD3DTextureStage *)a5, (NiTexture *)unk_B430F8); /*0x80d571*/
      if ( v31 >= 2 ) /*0x80d579*/
      {
        sub_7AEC20((NiD3DTextureStage **)&a5, (NiD3DTextureStage *)(*v26)->Stages.data[1].Unk08); /*0x80d588*/
        v37 = (NiD3DTextureStage *)a5; /*0x80d593*/
        NiD3DTextureStage_SetTexture((NiD3DTextureStage *)a5, (NiTexture *)StageCount[3].member.passes.vtlb); /*0x80d59a*/
      }
      NiD3DPass_SetRenderState(*v26, 0x1C, 0, 0); /*0x80d5a7*/
      NiD3DPass_SetRenderState(*v26, 0xA8, 7u, 0); /*0x80d5b7*/
      NiD3DPass_SetRenderState(*v26, 0x1B, 1u, 0); /*0x80d5c4*/
      NiD3DPass_SetRenderState(*v26, 0x13, 5u, 0); /*0x80d5d1*/
      NiD3DPass_SetRenderState(*v26, 0x14, 6u, 0); /*0x80d5de*/
      NiD3DPass_SetRenderState(*v26, 7, 1u, 0); /*0x80d5eb*/
      NiD3DPass_SetRenderState(*v26, 0x17, 4u, 0); /*0x80d5f8*/
      NiD3DPass_SetRenderState(*v26, 0xE, 1u, 0); /*0x80d605*/
      NiD3DPass_SetVertexShader(*v26, (NiD3DVertexShader *)*v49); /*0x80d613*/
      if ( (_BYTE)a8 ) /*0x80d61d*/
        v38 = *(NiD3DPixelShader **)LODWORD(alpha); /*0x80d623*/
      else
        v38 = *(NiD3DPixelShader **)(LODWORD(alpha) + 8); /*0x80d62b*/
      NiD3DPass_SetPixelShader(*v26, v38); /*0x80d631*/
      v47 = v26; /*0x80d636*/
      v39 = v51; /*0x80d637*/
      NiTArray_NiD3DPass_SetAt((NiTArray_NiD3DPass *)v51 + 4, (unsigned int)v51[0xE], v47); /*0x80d63f*/
      goto LABEL_70; /*0x80d63f*/
    case 0xE1: /*0x80d45f*/
      v40 = (*v26)->Stages.data->Stage; /*0x80d649*/
      a5 = (NiD3DPass *)v40; /*0x80d64d*/
      if ( v40 ) /*0x80d651*/
        ++*(_DWORD *)(v40 + 0x5C); /*0x80d653*/
      v41 = *((int (__thiscall **)(BSShaderProperty *, _DWORD))StageCount->vtbl + 0x22); /*0x80d659*/
      v61 = 1; /*0x80d663*/
      v42 = (NiTexture *)v41(StageCount, 0); /*0x80d66b*/
      NiD3DTextureStage_SetTexture((NiD3DTextureStage *)v40, v42); /*0x80d670*/
      sub_7AEC20((NiD3DTextureStage **)&a5, (NiD3DTextureStage *)(*v26)->Stages.data->Texture); /*0x80d682*/
      v43 = (NiTexture *)(*((int (__thiscall **)(BSShaderProperty *, _DWORD))StageCount->vtbl + 0x23))(StageCount, 0); /*0x80d693*/
      NiD3DTextureStage_SetTexture((NiD3DTextureStage *)a5, v43); /*0x80d69a*/
      sub_7AEC20((NiD3DTextureStage **)&a5, (NiD3DTextureStage *)(*v26)->Stages.data->Unk08); /*0x80d6ac*/
      NiD3DTextureStage_SetTexture((NiD3DTextureStage *)a5, (NiTexture *)StageCount[3].member.lastRenderPassState); /*0x80d6bc*/
      sub_7AEC20((NiD3DTextureStage **)&a5, (NiD3DTextureStage *)(*v26)->Stages.data[1].Stage); /*0x80d6ce*/
      v37 = (NiD3DTextureStage *)a5; /*0x80d6d8*/
      NiD3DTextureStage_SetTexture((NiD3DTextureStage *)a5, (NiTexture *)unk_B430F8); /*0x80d6df*/
      if ( v31 >= 2 ) /*0x80d6e7*/
      {
        sub_7AEC20((NiD3DTextureStage **)&a5, (NiD3DTextureStage *)(*v26)->Stages.data[1].Unk08); /*0x80d6f6*/
        v37 = (NiD3DTextureStage *)a5; /*0x80d701*/
        NiD3DTextureStage_SetTexture((NiD3DTextureStage *)a5, (NiTexture *)StageCount[3].member.passes.vtlb); /*0x80d708*/
      }
      NiD3DPass_SetRenderState(*v26, 0x1C, 0, 0); /*0x80d715*/
      NiD3DPass_SetRenderState(*v26, 0xA8, 7u, 0); /*0x80d725*/
      NiD3DPass_SetRenderState(*v26, 0x1B, 1u, 0); /*0x80d732*/
      NiD3DPass_SetRenderState(*v26, 0x13, 5u, 0); /*0x80d73f*/
      NiD3DPass_SetRenderState(*v26, 0x14, 6u, 0); /*0x80d74c*/
      NiD3DPass_SetRenderState(*v26, 7, 1u, 0); /*0x80d759*/
      NiD3DPass_SetRenderState(*v26, 0x17, 4u, 0); /*0x80d766*/
      NiD3DPass_SetRenderState(*v26, 0xE, 1u, 0); /*0x80d773*/
      if ( (_BYTE)a6 || (_BYTE)a8 ) /*0x80d784*/
      {
        NiD3DPass_SetPixelShader(*v26, *(NiD3DPixelShader **)(LODWORD(alpha) + 4)); /*0x80d7fe*/
        if ( (_BYTE)a7 ) /*0x80d808*/
          v45 = (NiD3DVertexShader *)v49[4]; /*0x80d80e*/
        else
          v45 = (NiD3DVertexShader *)v49[2]; /*0x80d817*/
      }
      else
      {
        if ( *(int *)OB_RendererGlobalState_010201A0.shaderPackageVersion_le < 2 ) /*0x80d793*/
          v44 = *(NiD3DPixelShader **)LODWORD(alpha); /*0x80d7a2*/
        else
          v44 = *(NiD3DPixelShader **)(LODWORD(alpha) + 4); /*0x80d799*/
        NiD3DPass_SetPixelShader(*v26, v44); /*0x80d7a5*/
        if ( v62 ) /*0x80d7af*/
        {
          if ( (_BYTE)a7 ) /*0x80d7b6*/
          {
            if ( *(int *)OB_RendererGlobalState_010201A0.shaderPackageVersion_le < 2 ) /*0x80d7be*/
              v45 = (NiD3DVertexShader *)v49[3]; /*0x80d7cd*/
            else
              v45 = (NiD3DVertexShader *)v49[6]; /*0x80d7c4*/
          }
          else if ( *(int *)OB_RendererGlobalState_010201A0.shaderPackageVersion_le < 2 ) /*0x80d7d8*/
          {
            v45 = (NiD3DVertexShader *)v49[1]; /*0x80d7e7*/
          }
          else
          {
            v45 = (NiD3DVertexShader *)v49[5]; /*0x80d7de*/
          }
        }
        else
        {
          v45 = (NiD3DVertexShader *)*v49; /*0x80d7f0*/
        }
      }
      NiD3DPass_SetVertexShader(*v26, v45); /*0x80d81d*/
      v48 = v26; /*0x80d822*/
      v39 = v51; /*0x80d823*/
      NiTArray_NiD3DPass_SetAt((NiTArray_NiD3DPass *)v51 + 4, (unsigned int)v51[0xE], v48); /*0x80d82e*/
LABEL_70:
      v39[0xE] = (Ni2DBuffer *)((char *)v39[0xE] + 1); /*0x80d833*/
      v61 = 0xFFFFFFFF; /*0x80d83c*/
      if ( v37 ) /*0x80d840*/
      {
        if ( v37[7].Unk08-- == 1 ) /*0x80d842*/
          sub_772560(v37);                      // Hair default returns 0 after pass-queue reset. Stock flagged fallback records 0x160..0x162 therefore queue no Hair pass. High selectors 0x177..0x17A also default if presented, but the Hair producer graph cannot create them. /*0x80d849*/
      }
      break; /*0x80d849*/
    case 0x18C: /*0x80d45f*/
      NiD3DPassArray_AddTextureEffectPass1x( /*0x80d478*/
        (NiTArray_NiD3DPass *)this,
        (NiGeometry *)geometry,
        arg3,
        (int)a5,
        StageCount);
      break; /*0x80d47d*/
    case 0x18D: /*0x80d45f*/
      NiD3DPassArray_AddTextureEffectPass1xS( /*0x80d494*/
        (NiTArray_NiD3DPass *)this,
        (NiGeometry *)geometry,
        arg3,
        (int)a5,
        StageCount);
      break; /*0x80d499*/
    case 0x18E: /*0x80d45f*/
      NiD3DPassArray_AddTextureEffectPass2x( /*0x80d4b0*/
        (NiTArray_NiD3DPass *)this,
        (NiGeometry *)geometry,
        arg3,
        (int)a5,
        StageCount);
      break; /*0x80d4b5*/
    case 0x18F: /*0x80d45f*/
      NiD3DPassArray_AddTextureEffectPass2xS( /*0x80d4cc*/
        (NiTArray_NiD3DPass *)this,
        (NiGeometry *)geometry,
        arg3,
        (int)a5,
        StageCount);
      break; /*0x80d4d1*/
    default:
      return 0;                                 // Hair selector dispatch. Table entries for 0x177, 0x178, 0x179, and 0x17A all map to def_80D45F at 0x80D84E; there is no ShadowLightShader base fallback.
  }
  return 0; /*0x80d850*/
}
