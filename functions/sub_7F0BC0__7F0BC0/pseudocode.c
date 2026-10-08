//
//
// [2026-10-02 Fallout comparative pass]
// Verified comparison with Fallout SetupGeometryConstants 0x822147E8: property table -> shader+0x7C, 0x300 bytes. Payload +0x18 * storage[0x246] -> [0x25A]; +0x1C * [0x247] -> [0x25E]; +0x14 -> [0x25B]; +0x10 -> [0x25F]; +0x0C -> [0x264]. Fallout splits work among SetupGeometryConstants and SetupGeometryTextures; Oblivion retains these within SetupPass. No whole-function identity or Fallout property offsets are assumed.
void __thiscall OB_SpeedTreeLeafShader_SetupPass_010201A0(
        _DWORD **this,
        float a2,
        int a3,
        int a4,
        _DWORD *a5,
        int a6,
        int a7,
        int a8)
{
  float *v10; // edi
  double v12; // st7
  int v13; // esi
  BOOL v14; // ebx
  void *v15; // ebx
  NiD3DTextureStage *v16; // esi
  int v17; // eax
  NiTexture *Texture; // esi
  int v19; // edi
  NiD3DTextureStage *v20; // esi
  NiD3DVertexShader *v21; // eax
  NiD3DPass *v22; // ecx
  NiD3DPixelShader *v23; // eax
  int v24; // esi
  int v25; // esi
  int v26; // esi
  int v27; // esi
  int v28; // esi
  int v29; // edi
  int v30; // edi
  int v31; // ebp
  float v33; // [esp+14h] [ebp-38h]
  float v34; // [esp+18h] [ebp-34h]
  float v35; // [esp+1Ch] [ebp-30h]
  float v36; // [esp+20h] [ebp-2Ch]
  float v37; // [esp+24h] [ebp-28h]
  float v38; // [esp+28h] [ebp-24h]
  float v39; // [esp+2Ch] [ebp-20h]
  float v40; // [esp+50h] [ebp+4h]
  float v41; // [esp+50h] [ebp+4h]
  float v42; // [esp+50h] [ebp+4h]
  NiD3DTextureStage *v43; // [esp+50h] [ebp+4h]
  char v44; // [esp+5Ch] [ebp+10h]
  float v45; // [esp+5Ch] [ebp+10h]

  (*(void (__thiscall **)(_DWORD, _DWORD))(**(this + 6) + 8))(*(this + 6), a5[2]); /*0x7f0bf9*/
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(this + 6) + 0x28))(*(this + 6), a5[0xB]); /*0x7f0c07*/
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(this + 6) + 0x24))(*(this + 6), a5[0xA]); /*0x7f0c15*/
  v10 = (float *)a5[3]; /*0x7f0c17*/
  v44 = 0; /*0x7f0c1c*/
  if ( v10 ) /*0x7f0c21*/
  {
    v35 = v10[0xB]; /*0x7f0c2e*/
    v36 = v10[0xC]; /*0x7f0c35*/
    v33 = *(float *)(LODWORD(a2) + 0x88) - flt_B46638[8]; /*0x7f0c61*/
    v40 = *(float *)(LODWORD(a2) + 0x8C) - flt_B46638[9]; /*0x7f0c6f*/
    v34 = *(float *)(LODWORD(a2) + 0x90) - flt_B46638[0xA]; /*0x7f0c7d*/
    v41 = v40 * v40 + v33 * v33 + v34 * v34; /*0x7f0c9d*/
    v42 = sqrt(v41); /*0x7f0caa*/
    if ( v35 < (double)v42 ) /*0x7f0cc5*/
    {
      v12 = v35; /*0x7f0d83*/
    }
    else
    {
      v12 = v35; /*0x7f0ce0*/
      if ( v35 >= v42 + *(float *)(a8 + 0xC) ) /*0x7f0ce5*/
        goto LABEL_4; /*0x7f0ce5*/
    }
    v37 = v10[8]; /*0x7f0d98*/
    v38 = v10[9]; /*0x7f0d9c*/
    v45 = v36 - v12; /*0x7f0da0*/
    v39 = v10[0xA]; /*0x7f0da4*/
    flt_B46638[0] = v36; /*0x7f0db4*/
    flt_B46638[1] = v45; /*0x7f0dc4*/
    v44 = 1;                                    // OBLIVION AUTHORITY (2026-08-24): Active-fog branch writes leaf c8 fog color. A black fog color plus full fog factor can black surviving RGB; texture alpha remains sampled independently. /*0x7f0dcd*/
    flt_B46638[2] = 0.0; /*0x7f0de6*/
    flt_B46638[3] = 0.0; /*0x7f0df8*/
    flt_B46638[4] = v37;                        // OBLIVION AUTHORITY (2026-08-24): Active-fog branch writes leaf c9 fog range/factor data. Null/inactive fog selects non-fog shader variants, so stale c8/c9 are ignored. /*0x7f0e0a*/
    flt_B46638[5] = v38; /*0x7f0e13*/
    flt_B46638[6] = v39; /*0x7f0e21*/
    flt_B46638[7] = 0.0; /*0x7f0e27*/
  }
LABEL_4:
  if ( OB_DisplayDebugFlags_010201A0[2] )       // OBLIVION AUTHORITY (2026-08-24): Direct check of B42E86, bFullBrightLighting:Display / Lite Brite debug flag. If set, forces c5=(1,1,1,1) and c6=(0,0.4,0,0); this branch is not a normal black-lighting path. /*0x7f0ced*/
  {
    OB_BSShader_SetSharedFloat4Constant_010201A0( /*0x7f0d2a*/
      0,
      COERCE_UNSIGNED_INT(1.0),
      COERCE_UNSIGNED_INT(1.0),
      COERCE_UNSIGNED_INT(1.0),
      COERCE_UNSIGNED_INT(1.0));
    OB_BSShader_SetSharedFloat4Constant_010201A0( /*0x7f0d69*/
      1u,
      COERCE_UNSIGNED_INT(0.0),
      LODWORD(flt_A47E6C),
      COERCE_UNSIGNED_INT(0.0),
      COERCE_UNSIGNED_INT(0.0));
  }
  v13 = a5[6]; /*0x7f0d71*/
  if ( v13 ) /*0x7f0d76*/
    v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 0x54))(v13) == 9; /*0x7f0e3f*/
  else
    v14 = 0; /*0x7f0d7c*/
  v15 = v14 ? (void *)v13 : 0;
  qmemcpy(this + 0x1F, (const void *)(*(int (__thiscall **)(void *))(*(_DWORD *)v15 + 0xA0))(v15), 0x300u);// LeafBase c34 table affects card geometry/normal and hence NdotL only. It cannot zero nonzero ambient by itself; whole-term zero instead occurs when the v3.z packed-green fraction is zero. /*0x7f0e5e*/
  flt_B46638[0x51] = *(float *)((*(int (__thiscall **)(void *))(*(_DWORD *)v15 + 0x9C))(v15) + 0x18) * flt_B46638[0x3D]; /*0x7f0e7f*/
  flt_B46638[0x55] = *(float *)((*(int (__thiscall **)(void *))(*(_DWORD *)v15 + 0x9C))(v15) + 0x1C) * flt_B46638[0x3E]; /*0x7f0ea2*/
  flt_B46638[0x52] = *(float *)((*(int (__thiscall **)(void *))(*(_DWORD *)v15 + 0x9C))(v15) + 0x14); /*0x7f0eb5*/
  flt_B46638[0x56] = *(float *)((*(int (__thiscall **)(void *))(*(_DWORD *)v15 + 0x9C))(v15) + 0x10); /*0x7f0eca*/
  flt_B46638[0x5A] = 0.0; /*0x7f0ed4*/
  flt_B46638[0x5B] = 0.0; /*0x7f0eda*/
  flt_B46638[0x5C] = 0.0; /*0x7f0ee0*/
  flt_B46638[0x5D] = 0.0; /*0x7f0ee6*/
  flt_B46638[0x5B] = *(float *)((*(int (__thiscall **)(void *))(*(_DWORD *)v15 + 0x9C))(v15) + 0xC); /*0x7f0ef9*/
  v16 = *(NiD3DTextureStage **)(*(this + 0xE5))[9]; /*0x7f0f08*/
  v43 = v16; /*0x7f0f0c*/
  if ( v16 ) /*0x7f0f10*/
    ++v16[7].Unk08; /*0x7f0f12*/
  v17 = (*(int (__thiscall **)(void *))(*(_DWORD *)v15 + 0x78))(v15);// Sole leaf diffuse-texture bind. Replacing this reference changes sampled RGB/alpha but not the packed BLENDINDICES dimmer stream, light constants, fog constants, or alpha reference. /*0x7f0f25*/
  Texture = v16->Texture; /*0x7f0f27*/
  v19 = v17; /*0x7f0f2a*/
  if ( Texture == (NiTexture *)v17 ) /*0x7f0f2e*/
  {
    v20 = v43; /*0x7f0f67*/
  }
  else
  {
    if ( Texture ) /*0x7f0f32*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x7f0f38*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x7f0f4e*/
    }
    v20 = v43; /*0x7f0f52*/
    v43->Texture = (NiTexture *)v19; /*0x7f0f56*/
    if ( v19 ) /*0x7f0f59*/
      InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x7f0f5f*/
  }
  if ( OB_DisplayDebugFlags_010201A0[2] )       // Lite Brite/full-bright flag forces base VS0 and bypasses point/fog selector. Normal mode selects VS by marker-count point bit plus fog-active bit. /*0x7f0f6b*/
  {
    v21 = (NiD3DVertexShader *)*(this + 0xDF); /*0x7f0f74*/
  }
  else
  {                                             // OBLIVION AUTHORITY (2026-08-24): Pass-list marker count selects base versus point-light leaf VS. Base variants have no point addend, so packed-green fraction zero forces their lighting RGB to zero; point variants may retain the separately added c7 contribution.
    if ( !(unsigned __int16)OB_BSShaderProperty_CountPassListEntriesWithMarker_010201A0(v15) ) /*0x7f0f7e*/
    {
      v22 = (NiD3DPass *)*(this + 0xE5); /*0x7f0f8c*/
      if ( v44 ) /*0x7f0f92*/
      {
        NiD3DPass_SetVertexShader(v22, (NiD3DVertexShader *)*(this + 0xE0));// Fogged variant can turn surviving nonblack RGB black only through its lighting/fog math; sampled alpha is preserved. Distinguish this from terminal-mip alpha falling below alpha-test coverage. /*0x7f0f9b*/
        v23 = (NiD3DPixelShader *)*(this + 0xE4); /*0x7f0fa0*/
        goto LABEL_31; /*0x7f0fa6*/
      }
      v21 = (NiD3DVertexShader *)*(this + 0xDF); /*0x7f0fa8*/
      goto LABEL_30; /*0x7f0fae*/
    }
    if ( v44 ) /*0x7f0fb5*/
    {
      NiD3DPass_SetVertexShader((NiD3DPass *)*(this + 0xE5), (NiD3DVertexShader *)*(this + 0xE2));// Point + fog selects VS3 and PS1. Non-fog paths select VS0/VS2 and PS0. /*0x7f0fc4*/
      v23 = (NiD3DPixelShader *)*(this + 0xE4); /*0x7f0fc9*/
      goto LABEL_31; /*0x7f0fcf*/
    }
    v21 = (NiD3DVertexShader *)*(this + 0xE1); /*0x7f0fd1*/
  }
  v22 = (NiD3DPass *)*(this + 0xE5); /*0x7f0fd7*/
LABEL_30:
  NiD3DPass_SetVertexShader(v22, v21); /*0x7f0fdd*/
  v23 = (NiD3DPixelShader *)*(this + 0xE3); /*0x7f0fe3*/
LABEL_31:
  NiD3DPass_SetPixelShader((NiD3DPass *)*(this + 0xE5), v23); /*0x7f0fe9*/
  if ( *(_WORD *)&OB_RendererGlobalState_010201A0[0x13] == 4 ) /*0x7f0ffd*/
  {
    v24 = (int)*(this + 0xE5); /*0x7f1003*/
    if ( !*(_DWORD *)(v24 + 0x30) ) /*0x7f1009*/
      *(_DWORD *)(v24 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7f1014*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v24 + 0x30), 0x34, 1, 0); /*0x7f1020*/
    v25 = (int)*(this + 0xE5); /*0x7f1025*/
    if ( !*(_DWORD *)(v25 + 0x30) ) /*0x7f102b*/
      *(_DWORD *)(v25 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7f1036*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v25 + 0x30), 0x38, 8, 0); /*0x7f1042*/
    v26 = (int)*(this + 0xE5); /*0x7f1047*/
    if ( !*(_DWORD *)(v26 + 0x30) ) /*0x7f104d*/
      *(_DWORD *)(v26 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7f1058*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v26 + 0x30), 0x37, 7, 0); /*0x7f1064*/
    v27 = (int)*(this + 0xE5); /*0x7f1069*/
    if ( !*(_DWORD *)(v27 + 0x30) ) /*0x7f106f*/
      *(_DWORD *)(v27 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7f107a*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v27 + 0x30), 0x35, 1, 0); /*0x7f1086*/
    v28 = (int)*(this + 0xE5); /*0x7f108b*/
    if ( !*(_DWORD *)(v28 + 0x30) ) /*0x7f1091*/
      *(_DWORD *)(v28 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7f109c*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v28 + 0x30), 0x36, 1, 0); /*0x7f10a8*/
    v20 = v43; /*0x7f10ad*/
  }
  else
  {
    v29 = (int)*(this + 0xE5); /*0x7f10b3*/
    if ( !*(_DWORD *)(v29 + 0x30) ) /*0x7f10b9*/
      *(_DWORD *)(v29 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7f10c4*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v29 + 0x30), 0x34, 0, 0); /*0x7f10d0*/
  }
  v30 = (int)*(this + 0xE5); /*0x7f10d5*/
  if ( !*(_DWORD *)(v30 + 0x30) ) /*0x7f10db*/
    *(_DWORD *)(v30 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7f10e6*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v30 + 0x30), 0xA8, 7, 0); /*0x7f10f5*/
  v31 = (int)*(this + 0xE5); /*0x7f10fa*/
  if ( !*(_DWORD *)(v31 + 0x30) ) /*0x7f1100*/
    *(_DWORD *)(v31 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7f110b*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v31 + 0x30), 0x1C, 0, 0);// Last leaf setup render-state write is FOGENABLE=0. No later setup write changes alpha test/reference, texture factor, or sampler state. /*0x7f1117*/
  if ( v20 ) /*0x7f1125*/
  {
    if ( v20[7].Unk08-- == 1 ) /*0x7f1127*/
      sub_772560(v20); /*0x7f112e*/
  }
}
