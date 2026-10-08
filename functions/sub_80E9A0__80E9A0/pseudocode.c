// SpeedTreeFrondShader render/setup. Requires shader property virtual +0x54 to return id 8, pulls texture from virtual +0x78, selects frond VS/PS variants, writes render state, and appends pass +0x94.
//
// [2026-10-03 fog restoration] a5+0C (a5[3]) is the fog-property input: near/far and color fields drive c14/c15 and fog variant selection. Plugin formerly nulled it whenever misnamed shaderPackage(B42EAC)==0, which is ordinary render mode. That mutation and later restoration are removed; native fog input is preserved. RGB bypass workarounds still require separate shader-bytecode/runtime acceptance.
//
// [2026-10-03 implemented correction] Frond-only CALL 0x80EC73 originally counts marker-qualified property lights (including disabled). Plugin replaces that call with current RenderPass B42EB8 validation: matching geometry property, lightCount>=2, nonnull slot1 light and positive finite radius. This selects PT according to actual dispatched sources. Native fog-property handling remains active. Corrected embedded shaders connect light RGB via COLOR0 for ps1_3 and TEXCOORD1 for ps2_0; fog RGB/amount use TEXCOORD2 and legacy scalar uses COLOR1 alpha.
// [2026-10-03 implementation] Plugin wraps vtable+2C with same7-stack-argument ABI, calls original setup then binds pooled stages1/2 through76C910 using textures owned by its private STSP-derived allocation. Native diffuse/fog/point/pass selection retained. Shader5 modern PS2 set now shades normal map in exported tangent basis and multiplies direct light by independent shadow sample; ambient remains unshadowed. Legacy PS1.3 retains diffuse lighting and logs its capability limit.
int __thiscall OB_SpeedTreeFrondShader_RenderSetup_010201A0(
        char *this,
        float *a2,
        int a3,
        int a4,
        NiD3DTextureStage *a5,
        int a6,
        int a7,
        int a8)
{
  UInt32 Stage; // ebp
  char v11; // bl
  double v13; // st7
  UInt32 v14; // edi
  BOOL v15; // eax
  void *v16; // eax
  NiDX9Renderer *v17; // edi
  void *v18; // ebp
  NiDX9Renderer *v19; // eax
  NiRTTI *v20; // eax
  char v21; // al
  NiD3DTextureStage *v22; // eax
  NiD3DPass **v23; // edi
  NiTexture *v24; // eax
  __int16 v25; // ax
  NiD3DPass *v26; // ecx
  NiD3DPixelShader *v27; // eax
  NiD3DVertexShader *v28; // eax
  NiD3DPass *v29; // ebp
  NiD3DPass *v30; // ebp
  NiD3DPass *v31; // ebp
  NiD3DPass *v32; // ebp
  NiD3DPass *v33; // ebp
  NiD3DPass *v34; // ebp
  NiD3DPass *v35; // ebp
  float v38; // [esp+14h] [ebp-34h]
  float v39; // [esp+18h] [ebp-30h]
  float v40; // [esp+1Ch] [ebp-2Ch]
  float v41; // [esp+20h] [ebp-28h]
  float v42; // [esp+24h] [ebp-24h]
  float v43; // [esp+28h] [ebp-20h]
  float v44; // [esp+4Ch] [ebp+4h]
  float v45; // [esp+58h] [ebp+10h]
  float v46; // [esp+58h] [ebp+10h]
  float v47; // [esp+58h] [ebp+10h]
  float v48; // [esp+58h] [ebp+10h]
  NiD3DTextureStage *v49; // [esp+58h] [ebp+10h]

  (*(void (__thiscall **)(char *))(*(_DWORD *)this + 0x80))(this); /*0x80e9d1*/
  (*(void (__thiscall **)(_DWORD, UInt32))(**((_DWORD **)this + 6) + 8))(*((_DWORD *)this + 6), a5->Unk08); /*0x80e9e3*/
  (*(void (__thiscall **)(_DWORD, NiTexture *))(**((_DWORD **)this + 6) + 0x20))(*((_DWORD *)this + 6), a5[2].Texture); /*0x80e9f1*/
  (*(void (__thiscall **)(_DWORD, UInt32))(**((_DWORD **)this + 6) + 0x28))(*((_DWORD *)this + 6), a5[3].Unk08); /*0x80e9ff*/
  (*(void (__thiscall **)(_DWORD, NiTexture *))(**((_DWORD **)this + 6) + 0x24))(*((_DWORD *)this + 6), a5[3].Texture); /*0x80ea0d*/
  Stage = a5[1].Stage; /*0x80ea0f*/
  v11 = 0; /*0x80ea12*/
  if ( Stage ) /*0x80ea16*/
  {
    v39 = *(float *)(Stage + 0x2C); /*0x80ea23*/
    v40 = *(float *)(Stage + 0x30); /*0x80ea2a*/
    v44 = a2[0x22] - flt_B46638[8]; /*0x80ea56*/
    v45 = a2[0x23] - flt_B46638[9]; /*0x80ea64*/
    v38 = a2[0x24] - flt_B46638[0xA]; /*0x80ea72*/
    v46 = v45 * v45 + v44 * v44 + v38 * v38; /*0x80ea92*/
    v47 = sqrt(v46); /*0x80ea9f*/
    if ( v39 < (double)v47 ) /*0x80eaba*/
    {
      v13 = v39; /*0x80eb31*/
    }
    else
    {
      v13 = v39; /*0x80ead1*/
      if ( v39 >= v47 + *(float *)(a8 + 0xC) ) /*0x80ead6*/
        goto LABEL_4; /*0x80ead6*/
    }
    v41 = *(float *)(Stage + 0x20); /*0x80eb46*/
    v42 = *(float *)(Stage + 0x24); /*0x80eb4a*/
    v48 = v40 - v13; /*0x80eb4e*/
    v43 = *(float *)(Stage + 0x28); /*0x80eb52*/
    v11 = 1; /*0x80eb56*/
    flt_B46638[0] = v40; /*0x80eb64*/
    flt_B46638[1] = v48; /*0x80eb74*/
    flt_B46638[2] = 0.0; /*0x80eb91*/
    flt_B46638[3] = 0.0; /*0x80eba3*/
    flt_B46638[4] = v41; /*0x80ebb5*/
    flt_B46638[5] = v42; /*0x80ebbe*/
    flt_B46638[6] = v43; /*0x80ebcc*/
    flt_B46638[7] = 0.0; /*0x80ebd2*/
  }
LABEL_4:
  if ( OB_DisplayDebugFlags_010201A0[2] ) /*0x80eada*/
    OB_BSShader_SetSharedFloat4Constant_010201A0( /*0x80eb17*/
      0,
      COERCE_UNSIGNED_INT(1.0),
      COERCE_UNSIGNED_INT(1.0),
      COERCE_UNSIGNED_INT(1.0),
      COERCE_UNSIGNED_INT(1.0));
  v14 = a5[2].Stage; /*0x80eb1f*/
  if ( v14 ) /*0x80eb24*/
    v15 = (*(int (__thiscall **)(UInt32))(*(_DWORD *)v14 + 0x54))(v14) == 8; /*0x80ebed*/
  else
    v15 = 0; /*0x80eb2a*/
  v16 = v15 ? (void *)v14 : 0;
  v17 = unk_B43104; /*0x80ebf5*/
  v18 = v16; /*0x80ebfd*/
  if ( unk_B43104 )
  {
    v20 = (NiRTTI *)(*(int (__thiscall **)(NiDX9Renderer *))&v17->__vftable->super.gap0[4])(unk_B43104); /*0x80ec0c*/
    if ( v20 ) /*0x80ec10*/
    {
      while ( v20 != &stru_B42168 ) /*0x80ec17*/
      {
        v20 = v20->parent; /*0x80ec19*/
        if ( !v20 ) /*0x80ec1e*/
          goto LABEL_16; /*0x80ec1e*/
      }
      v21 = 1; /*0x80ec97*/
    }
    else
    {
LABEL_16:
      v21 = 0; /*0x80ec20*/
    }
    v19 = v21 != 0 ? v17 : 0;
  }
  else
  {
    v19 = 0; /*0x80ec01*/
  }
  if ( v18 && v19 ) /*0x80ec32*/
  {
    v22 = **(NiD3DTextureStage ***)(*((_DWORD *)this + 0x25) + 0x24); /*0x80ec41*/
    v23 = (NiD3DPass **)(this + 0x94); /*0x80ec45*/
    v49 = v22; /*0x80ec4b*/
    if ( v22 ) /*0x80ec4f*/
      ++v22[7].Unk08; /*0x80ec51*/
    v24 = (NiTexture *)(*(int (__thiscall **)(void *))(*(_DWORD *)v18 + 0x78))(v18); /*0x80ec65*/
    NiD3DTextureStage_SetTexture(v49, v24); /*0x80ec6c*/
    v25 = OB_BSShaderProperty_CountPassListEntriesWithMarker_010201A0(v18); /*0x80ec73*/
    v26 = *v23; /*0x80ec7b*/
    if ( v25 ) /*0x80ec7d*/
    {
      if ( v11 ) /*0x80eca2*/
      {
        NiD3DPass_SetVertexShader(v26, *((NiD3DVertexShader **)this + 0x22)); /*0x80ecab*/
        v27 = *((NiD3DPixelShader **)this + 0x24); /*0x80ecb0*/
        goto LABEL_31; /*0x80ecb6*/
      }
      v28 = *((NiD3DVertexShader **)this + 0x21); /*0x80ecb8*/
    }
    else
    {
      if ( v11 ) /*0x80ec81*/
      {
        NiD3DPass_SetVertexShader(v26, *((NiD3DVertexShader **)this + 0x20)); /*0x80ec8a*/
        v27 = *((NiD3DPixelShader **)this + 0x24); /*0x80ec8f*/
LABEL_31:
        NiD3DPass_SetPixelShader(*v23, v27); /*0x80ecca*/
        v29 = *v23; /*0x80ecda*/
        if ( *(_WORD *)&OB_RendererGlobalState_010201A0[0x13] == 4 ) /*0x80ecdc*/
        {
          if ( !v29->RenderStateGroup ) /*0x80ece2*/
            v29->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x80eced*/
          NiD3DRenderStateGroup_SetRenderState((_DWORD *)v29->RenderStateGroup, 0x34, 1, 0); /*0x80ecf9*/
          v30 = *v23; /*0x80ecfe*/
          if ( !(*v23)->RenderStateGroup ) /*0x80ed00*/
            v30->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x80ed0b*/
          NiD3DRenderStateGroup_SetRenderState((_DWORD *)v30->RenderStateGroup, 0x38, 8, 0); /*0x80ed17*/
          v31 = *v23; /*0x80ed1c*/
          if ( !(*v23)->RenderStateGroup ) /*0x80ed1e*/
            v31->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x80ed29*/
          NiD3DRenderStateGroup_SetRenderState((_DWORD *)v31->RenderStateGroup, 0x37, 7, 0); /*0x80ed35*/
          v32 = *v23; /*0x80ed3a*/
          if ( !(*v23)->RenderStateGroup ) /*0x80ed3c*/
            v32->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x80ed47*/
          NiD3DRenderStateGroup_SetRenderState((_DWORD *)v32->RenderStateGroup, 0x35, 1, 0); /*0x80ed53*/
          v33 = *v23; /*0x80ed58*/
          if ( !(*v23)->RenderStateGroup ) /*0x80ed5a*/
            v33->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x80ed65*/
          NiD3DRenderStateGroup_SetRenderState((_DWORD *)v33->RenderStateGroup, 0x36, 1, 0); /*0x80ed6e*/
        }
        else
        {
          if ( !v29->RenderStateGroup ) /*0x80ed70*/
            v29->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x80ed7b*/
          NiD3DRenderStateGroup_SetRenderState((_DWORD *)v29->RenderStateGroup, 0x34, 0, 0); /*0x80ed87*/
        }
        v34 = *v23; /*0x80ed8c*/
        if ( !(*v23)->RenderStateGroup ) /*0x80ed8e*/
          v34->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x80ed99*/
        NiD3DRenderStateGroup_SetRenderState((_DWORD *)v34->RenderStateGroup, 0xA8, 7, 0); /*0x80eda8*/
        v35 = *v23; /*0x80edad*/
        if ( !(*v23)->RenderStateGroup ) /*0x80edaf*/
          v35->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x80edba*/
        NiD3DRenderStateGroup_SetRenderState((_DWORD *)v35->RenderStateGroup, 0x1C, 0, 0); /*0x80edc6*/
        NiTArray_NiD3DPass_SetAt((NiTArray_NiD3DPass *)this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)this + 0x25); /*0x80edd3*/
        ++*((_DWORD *)this + 0xE); /*0x80eddc*/
        if ( v49 ) /*0x80ede9*/
        {
          if ( v49[7].Unk08-- == 1 ) /*0x80edeb*/
            sub_772560(v49); /*0x80edf0*/
        }
        return 0; /*0x80edf0*/
      }
      v28 = *((NiD3DVertexShader **)this + 0x1F); /*0x80ec9b*/
    }
    NiD3DPass_SetVertexShader(v26, v28); /*0x80ecbf*/
    v27 = *((NiD3DPixelShader **)this + 0x23); /*0x80ecc4*/
    goto LABEL_31; /*0x80ecc4*/
  }
  return 0; /*0x80edf7*/
}
