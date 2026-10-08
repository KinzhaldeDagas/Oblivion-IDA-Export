// Build the native one-stage Lighting30 mode-5 caster pass for selector 0x154 or 0x155. Lighting30Shader_ResolveSelectorStages binds shader-property texture 0/BaseMap; no receiver ShadowMap texture is bound on this producer path.
int __userpurge sub_7FF080@<eax>(_DWORD *this@<ecx>, double a2@<st0>, float a3, float a4, int a5)
{
  float v6; // ebp
  NiD3DPass *v7; // edi
  Ni2DBuffer *v8; // eax
  int v9; // ecx
  int i; // eax
  int v11; // edx
  float *v12; // ecx
  double v13; // st6
  double v14; // st5
  float v15; // eax
  double v16; // st7
  float v17; // ecx
  float v18; // eax
  float v19; // ecx
  float v20; // ecx
  float v21; // eax
  float v22; // ecx
  float v23; // ecx
  float v24; // eax
  int v25; // ecx
  float v28; // [esp+14h] [ebp-2Ch]
  float v29; // [esp+1Ch] [ebp-24h]
  float v30; // [esp+24h] [ebp-1Ch]

  v6 = a3; /*0x7ff0a9*/
  *(float *)&v7 = COERCE_FLOAT(Lighting30Shader_ResolveSelectorStages(a2, SLODWORD(a4), (_DWORD *)LODWORD(a3), 0)); /*0x7ff0bf*/
  if ( (*(_BYTE *)(LODWORD(v6) + 0x1C) & 2) != 0 ) /*0x7ff0c4*/
    v8 = (Ni2DBuffer *)*(this + 0x24); /*0x7ff0c6*/
  else
    v8 = (Ni2DBuffer *)*(this + 0x23); /*0x7ff0ce*/
  NiSmartPointer_Set__((Ni2DBuffer **)this + 9, v8); /*0x7ff0d5*/
  OB_ShaderConstantStorage_010201A0[0x471] = 0.0; /*0x7ff0dc*/
  OB_ShaderConstantStorage_010201A0[0x472] = 0.0; /*0x7ff0e2*/
  *(_DWORD *)(*(this + 0x27) + 0x20) = 0xB; /*0x7ff0ee*/
  *(_BYTE *)(LODWORD(OB_ShaderConstantStorage_010201A0[0x381]) + 8) = 0; /*0x7ff0fb*/
  *(_BYTE *)(LODWORD(OB_ShaderConstantStorage_010201A0[0x380]) + 8) = 0; /*0x7ff104*/
  v9 = dword_B2DCFC; /*0x7ff107*/
  for ( i = 0; i < v9; ++i ) /*0x7ff111*/
  {
    *(_BYTE *)(2 * i + 0xB4693A) = 0; /*0x7ff113*/
    *(_BYTE *)(2 * i + 0xB46939) = 0; /*0x7ff11a*/
  }
  v11 = a5; /*0x7ff128*/
  BYTE2(OB_ShaderConstantStorage_010201A0[0x2C9]) = 1; /*0x7ff12c*/
  v12 = *(float **)(v11 + 0xC);                 // Fog render consumer decode: Lighting30 mode-5 loads active fog property from render/property state +0x0C. /*0x7ff133*/
  if ( v12 ) /*0x7ff138*/
  {
    a4 = v12[0xB]; /*0x7ff141*/
    a3 = v12[0xC]; /*0x7ff148*/
    v13 = a3; /*0x7ff156*/
    v14 = a4; /*0x7ff15b*/
    if ( a3 != 0.0 || 0.0 != v14 ) /*0x7ff16a*/
    {
      v28 = v12[8]; /*0x7ff1af*/
      v18 = v12[9]; /*0x7ff1b3*/
      v19 = v12[0xA]; /*0x7ff1b6*/
      a3 = v13 - v14; /*0x7ff1b9*/
      v30 = v13; /*0x7ff1c1*/
      v29 = v19; /*0x7ff1cd*/
      v20 = a3; /*0x7ff1d5*/
      OB_ShaderConstantStorage_010201A0[0x3E9] = v30;// Fog render consumer decode: Lighting30 mode-5 grouped FogParam B45E14[0x3E9..0x3EC] / B46DB8 = (fogEnd, fogEnd - fogStart, 1, 0). /*0x7ff1db*/
      OB_ShaderConstantStorage_010201A0[0x3EA] = v20; /*0x7ff1e4*/
      v16 = 1.0; /*0x7ff1ee*/
      OB_ShaderConstantStorage_010201A0[0x3EB] = 1.0; /*0x7ff1f4*/
      OB_ShaderConstantStorage_010201A0[0x3EC] = 0.0; /*0x7ff205*/
      OB_ShaderConstantStorage_010201A0[0x3ED] = v28;// Fog render consumer decode: Lighting30 mode-5 grouped FogColor B45E14[0x3ED..0x3F0] / B46DC8 = (fog.r, fog.g, fog.b, 1). /*0x7ff217*/
      OB_ShaderConstantStorage_010201A0[0x3EE] = v18; /*0x7ff228*/
      v21 = v29; /*0x7ff22e*/
      v22 = 1.0; /*0x7ff236*/
      goto LABEL_13; /*0x7ff23a*/
    }
    OB_ShaderConstantStorage_010201A0[0x3E9] = flt_A93350;// Fog render consumer decode: Lighting30 mode-5 zero/invalid fog range fallback writes default grouped FogParam. /*0x7ff17e*/
    OB_ShaderConstantStorage_010201A0[0x3EA] = 0.0; /*0x7ff18d*/
    v15 = 1.0; /*0x7ff197*/
    v16 = 1.0; /*0x7ff19b*/
    v17 = 0.0; /*0x7ff1a1*/
  }
  else
  {
    OB_ShaderConstantStorage_010201A0[0x3E9] = flt_A93350;// Fog render consumer decode: Lighting30 mode-5 null-property fallback writes default grouped FogParam/FogColor. /*0x7ff24a*/
    OB_ShaderConstantStorage_010201A0[0x3EA] = 0.0; /*0x7ff259*/
    v15 = 1.0; /*0x7ff263*/
    v16 = 1.0; /*0x7ff267*/
    v17 = 0.0; /*0x7ff26d*/
  }
  OB_ShaderConstantStorage_010201A0[0x3EC] = v17; /*0x7ff271*/
  v23 = *(float *)&dword_B25AD4; /*0x7ff277*/
  OB_ShaderConstantStorage_010201A0[0x3EB] = v15; /*0x7ff27d*/
  v24 = *(float *)&dword_B25AD0; /*0x7ff282*/
  OB_ShaderConstantStorage_010201A0[0x3EE] = v23; /*0x7ff287*/
  v22 = *(float *)&dword_B25ADC; /*0x7ff28d*/
  OB_ShaderConstantStorage_010201A0[0x3ED] = v24; /*0x7ff293*/
  v21 = *(float *)&dword_B25AD8; /*0x7ff298*/
LABEL_13:
  OB_ShaderConstantStorage_010201A0[0x3EF] = v21; /*0x7ff29d*/
  OB_ShaderConstantStorage_010201A0[0x3F0] = v22; /*0x7ff2a2*/
  v25 = *(_DWORD *)(v11 + 0x10); /*0x7ff2a8*/
  if ( v25 ) /*0x7ff2ad*/
  {
    a3 = *(float *)(v25 + 0x50); /*0x7ff2b2*/
    if ( v16 > a3 ) /*0x7ff2bf*/
      v16 = *(float *)(v25 + 0x50); /*0x7ff2c3*/
  }
  OB_ShaderConstantStorage_010201A0[0x465] = v16; /*0x7ff2c6*/
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 0xC) + 0x48))(*(this + 0xC)); /*0x7ff2d4*/
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 0xB) + 0x48))(*(this + 0xB)); /*0x7ff2de*/
  if ( !v7->RenderStateGroup ) /*0x7ff2e0*/
    v7->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x7ff2ea*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v7->RenderStateGroup, 0x1B, 0, 0); /*0x7ff2f4*/
  ++v7->RefCount; /*0x7ff2fe*/
  a3 = *(float *)&v7; /*0x7ff301*/
  NiTArray_NiD3DPass_SetAt((NiTArray_NiD3DPass *)this + 4, (NiD3DPass *)*(this + 0xE), (NiD3DPass **)&a3); /*0x7ff315*/
  if ( v7->RefCount-- == 1 ) /*0x7ff31d*/
    NiD3DPass_ReleaseToPool(v7); /*0x7ff328*/
  ++*(this + 0xE); /*0x7ff32d*/
  return 0; /*0x7ff332*/
}
