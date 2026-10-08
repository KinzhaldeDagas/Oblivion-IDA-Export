// SkinShader SetupRenderPass override. Its local selector cases handle skin-specific passes; all unhandled cases delegate to ShadowLightShader_SetupRenderPass. Therefore inherited selector records 0x177..0x179 remain concrete and drawable through the base ShadowLight consumer.
int __thiscall SkinShader_SetupRenderPass(
        Ni2DBuffer **this,
        float *geometry,
        int arg3,
        int a4,
        NiD3DPass *arg4,
        int a6,
        int a7,
        int a8)
{
  UInt32 StageCount; // esi
  BOOL v11; // eax
  BSShaderProperty *v12; // edi
  BOOL v13; // edi
  int v15; // eax
  float v16; // eax
  float v17; // ecx
  float v18; // edx
  double v19; // st7
  float v20; // eax
  double v21; // st7
  float v22; // edx
  float v23; // eax
  float v24; // ecx
  unsigned __int16 v25; // ax
  unsigned int *v26; // eax
  unsigned __int16 v27; // ax
  BSShader *shader; // eax
  Ni2DBuffer *m_uiRefCount; // eax
  unsigned __int16 v30; // di
  int v31; // esi
  NiD3DPass *v32; // ecx
  NiD3DPass **v33; // esi
  char v34; // al
  NiD3DPass *v35; // ecx
  char v36; // [esp+1Bh] [ebp-41h]
  unsigned __int16 v37; // [esp+1Ch] [ebp-40h]
  int v38; // [esp+20h] [ebp-3Ch]
  void *v39; // [esp+24h] [ebp-38h]
  void *slot; // [esp+28h] [ebp-34h] BYREF
  float v41; // [esp+2Ch] [ebp-30h]
  int v42; // [esp+30h] [ebp-2Ch]
  float v43; // [esp+34h] [ebp-28h]
  float v44; // [esp+38h] [ebp-24h]
  float v45; // [esp+3Ch] [ebp-20h]
  float v46; // [esp+40h] [ebp-1Ch]
  float v47; // [esp+44h] [ebp-18h]
  float v48; // [esp+48h] [ebp-14h]
  float v49; // [esp+4Ch] [ebp-10h]
  unsigned int v50; // [esp+58h] [ebp-4h]
  bool arg4a; // [esp+6Ch] [ebp+10h]

  ((void (__thiscall *)(Ni2DBuffer **))(*this)[6].members.width)(this); /*0x809911*/
  v38 = LODWORD(unk_B42E90); /*0x80991d*/
  if ( LODWORD(unk_B42E90) == 0x126 || LODWORD(unk_B42E90) == 0x123 ) /*0x80992c*/
    return ShadowLightShader__SetupRenderPass(this, geometry, arg3, a4, arg4, a6, a7, a8); /*0x80a054*/
  v37 = 0; /*0x809934*/
  slot = 0; /*0x809938*/
  StageCount = arg4->StageCount; /*0x809940*/
  v50 = 0; /*0x809945*/
  v36 = 0; /*0x809949*/
  v11 = StageCount /*0x80996c*/
     && (*(int (__thiscall **)(UInt32))(*(_DWORD *)StageCount + 0x54))(StageCount) >= 1
     && (*(int (__thiscall **)(UInt32))(*(_DWORD *)StageCount + 0x54))(StageCount) <= 0xA;
  v39 = v11 ? (void *)StageCount : 0;
  v12 = 0; /*0x80997f*/
  if ( v39 )
  {
    v13 = StageCount /*0x8099a6*/
       && (*(int (__thiscall **)(UInt32))(*(_DWORD *)StageCount + 0x54))(StageCount) >= 5
       && (*(int (__thiscall **)(UInt32))(*(_DWORD *)StageCount + 0x54))(StageCount) <= 0xA;
    v12 = v13 ? (BSShaderProperty *)StageCount : 0;
  }
  if ( !StageCount ) /*0x8099b7*/
  {
    if ( unk_B42E8C ) /*0x8099b9*/
      unk_B42E8C("Attempting to render geometry with a shader, but no shader property", 0); /*0x8099c8*/
    return 0; /*0x8099cf*/
  }
  v15 = *(_DWORD *)&arg4->Name[4]; /*0x8099d8*/
  arg4a = (*(_BYTE *)(StageCount + 0x1C) & 2) != 0; /*0x8099db*/
  if ( v15 && (*(_BYTE *)(v15 + 0x18) & 1) != 0 ) /*0x8099ec*/
  {
    v16 = flt_B46498; /*0x8099f1*/
    v17 = flt_B4649C; /*0x8099f6*/
    v41 = *(float *)(StageCount + 0x20); /*0x8099fc*/
    v18 = flt_B464A0[0]; /*0x809a00*/
    v46 = v16; /*0x809a06*/
    v19 = v16; /*0x809a0a*/
    v20 = flt_B464A0[1]; /*0x809a0e*/
    *(float *)&v42 = v19; /*0x809a13*/
    v47 = v17; /*0x809a17*/
    v43 = v17; /*0x809a23*/
    v48 = v18; /*0x809a27*/
    v21 = v18; /*0x809a2b*/
    v22 = v17; /*0x809a2f*/
    v44 = v21; /*0x809a33*/
    v49 = v20; /*0x809a3b*/
    v23 = v44; /*0x809a3f*/
    v45 = v41; /*0x809a43*/
    flt_B46498 = *(float *)&v42; /*0x809a47*/
    v24 = v45; /*0x809a4d*/
    flt_B4649C = v22; /*0x809a51*/
    flt_B464A0[0] = v23; /*0x809a57*/
    flt_B464A0[1] = v24; /*0x809a5c*/
    v36 = 1; /*0x809a62*/
  }
  else
  {
    sub_7E2430(StageCount, 1.0); /*0x809a71*/
  }
  if ( v39 ) /*0x809a7f*/
  {
    if ( *(_WORD *)&OB_RendererGlobalState_010201A0.pad_00D[6] == 1 ) /*0x809a8f*/
    {
      v27 = OB_BSShaderProperty_CountPassListEntriesWithMarker_010201A0(v39); /*0x809ac5*/
      if ( v27 > 0xAu ) /*0x809ad1*/
        v27 = 0xA; /*0x809ad3*/
      v26 = (unsigned int *)((char *)&unk_B2DD50 + 0x10 * v27); /*0x809ade*/
    }
    else
    {
      if ( *(_WORD *)&OB_RendererGlobalState_010201A0.pad_00D[6] != 2 ) /*0x809a94*/
        goto LABEL_33; /*0x809a94*/
      v25 = (*(int (__thiscall **)(void *, float *))(*(_DWORD *)v39 + 0x60))(v39, geometry); /*0x809aa4*/
      if ( v25 > 0x10u ) /*0x809aad*/
        v25 = 0x10; /*0x809aaf*/
      v26 = (unsigned int *)((char *)&unk_B2DE00 + 0x10 * v25); /*0x809aba*/
    }
    OB_BSShader_SetSharedFloat4Constant_010201A0(0, *v26, v26[1], v26[2], v26[3]); /*0x809b00*/
    OB_BSShader_SetSharedFloat4Constant_010201A0(0x19u, dword_B25AD0, dword_B25AD4, dword_B25AD8, dword_B25ADC); /*0x809b2f*/
  }
LABEL_33:
  shader = GetShaderDefinition(1u)->shader; /*0x809b37*/
  if ( arg4a ) /*0x809b4e*/
    m_uiRefCount = (Ni2DBuffer *)shader[1].member.super.super.super.super.m_uiRefCount; /*0x809b50*/
  else
    m_uiRefCount = (Ni2DBuffer *)shader[1].__vftable; /*0x809b58*/
  NiSmartPointer_Set__(this + 9, m_uiRefCount); /*0x809b5c*/
  if ( v38 > 0x18C ) /*0x809b6a*/
  {
    switch ( v38 ) /*0x809e2f*/
    {
      case 0x18D: /*0x809e2f*/
        NiD3DPassArray_AddTextureEffectPass1xS((NiTArray_NiD3DPass *)this, (NiGeometry *)geometry, arg3, (int)arg4, v12); /*0x809ea9*/
        break;
      case 0x18E: /*0x809e2f*/
        NiD3DPassArray_AddTextureEffectPass2x((NiTArray_NiD3DPass *)this, (NiGeometry *)geometry, arg3, (int)arg4, v12); /*0x809e95*/
        break;
      case 0x18F: /*0x809e2f*/
        NiD3DPassArray_AddTextureEffectPass2xS((NiTArray_NiD3DPass *)this, (NiGeometry *)geometry, arg3, (int)arg4, v12); /*0x809e81*/
        break;
      default:
LABEL_66:
        v31 = ShadowLightShader__SetupRenderPass(this, geometry, arg3, a4, arg4, a6, a7, a8); /*0x809e3b*/
        v50 = 0xFFFFFFFF; /*0x809e63*/
        NiPointerSlot_Release(&slot); /*0x809e6b*/
        return v31; /*0x809e72*/
    }
    goto LABEL_41; /*0x809e86*/
  }
  if ( v38 == 0x18C ) /*0x809b70*/
  {
    NiD3DPassArray_AddTextureEffectPass1x((NiTArray_NiD3DPass *)this, (NiGeometry *)geometry, arg3, (int)arg4, v12); /*0x809e20*/
LABEL_41:
    v30 = v37; /*0x809bc0*/
    NiD3DPass_SetRenderState(*(NiD3DPass **)(4 * v37 + 0xB47718), 0x1C, 0, 0);// Fog decode: shader-family pass builder disables fixed-function fog; fog is handled by shader constants. /*0x809bd4*/
    if ( (unsigned int)(v38 - 0x10F) > 0x1A ) /*0x809be5*/
    {
      if ( v38 == 0xA || v38 == 0xB ) /*0x809ecd*/
        NiD3DPass_SetRenderState(*(NiD3DPass **)(4 * v37 + 0xB47718), 0xA8, 8u, 0); /*0x809efa*/
      else
        NiD3DPass_SetRenderState(*(NiD3DPass **)(4 * v37 + 0xB47718), 0xA8, 7u, 0); /*0x809ee1*/
    }
    else
    {
      NiD3DPass_SetRenderState(*(NiD3DPass **)(4 * v37 + 0xB47718), 0xA8, 0xFu, 0); /*0x809bfb*/
    }
    goto LABEL_75; /*0x809c00*/
  }
  switch ( v38 ) /*0x809b8b*/
  {
    case 0x4E: /*0x809b8b*/
      sub_87FA20((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (NiD3DPass *)v12); /*0x809b9c*/
      v37 = 0; /*0x809ba1*/
      break; /*0x809ba1*/
    case 0x53: /*0x809b8b*/
      sub_87FBD0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (NiD3DPass *)v12); /*0x809c0f*/
      v37 = 1; /*0x809c14*/
      break; /*0x809c1c*/
    case 0x59: /*0x809b8b*/
      sub_87FD80((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, *(float *)&v12); /*0x809d40*/
      v37 = 2; /*0x809d45*/
      break; /*0x809d4d*/
    case 0x5E: /*0x809b8b*/
      sub_87FFC0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (NiRenderedTexture *)v12); /*0x809d5c*/
      v37 = 3; /*0x809d61*/
      break; /*0x809d69*/
    case 0x64: /*0x809b8b*/
      SkinShader_QueueSKIN2012_SKIN2006((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, *(float *)&v12); /*0x809c28*/
      v37 = 4; /*0x809c2d*/
      break; /*0x809c35*/
    case 0x69: /*0x809b8b*/
      SkinShader_QueueSKIN2013_SKIN2006((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, *(float *)&v12); /*0x809c44*/
      v37 = 5; /*0x809c49*/
      break; /*0x809c51*/
    case 0x6F: /*0x809b8b*/
      sub_880560((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (NiRenderedTexture *)v12); /*0x809d78*/
      v37 = 6; /*0x809d7d*/
      break; /*0x809d85*/
    case 0x74: /*0x809b8b*/
      sub_8807A0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (NiRenderedTexture *)v12); /*0x809d94*/
      v37 = 7; /*0x809d99*/
      break; /*0x809da1*/
    case 0x79: /*0x809b8b*/
      sub_8809E0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, v12); /*0x809c60*/
      v37 = 8; /*0x809c65*/
      break; /*0x809c6d*/
    case 0x7F: /*0x809b8b*/
      sub_880C00((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, v12); /*0x809c7c*/
      v37 = 9; /*0x809c81*/
      break; /*0x809c89*/
    case 0x87: /*0x809b8b*/
      sub_880E20((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (NiRenderedTexture *)arg4, v12); /*0x809db0*/
      v37 = 0xA; /*0x809db5*/
      break; /*0x809dbd*/
    case 0x8D: /*0x809b8b*/
      sub_8810E0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (NiRenderedTexture *)arg4, v12); /*0x809dcc*/
      v37 = 0xB; /*0x809dd1*/
      break; /*0x809dd9*/
    case 0x94: /*0x809b8b*/
      SkinShader_QueueSKIN2004_SKIN2002((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (UInt32)arg4, v12); /*0x809c98*/
      v37 = 0xC; /*0x809c9d*/
      break; /*0x809ca5*/
    case 0x9A: /*0x809b8b*/
      SkinShader_QueueSKIN2005_SKIN2002((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (UInt32)arg4, v12); /*0x809cb4*/
      v37 = 0xD; /*0x809cb9*/
      break; /*0x809cc1*/
    case 0xA1: /*0x809b8b*/
      sub_881880((NiTArray_NiD3DPass *)this, (int)geometry, arg3, *(float *)&arg4, v12); /*0x809de8*/
      v37 = 0xE; /*0x809ded*/
      break; /*0x809df5*/
    case 0xA7: /*0x809b8b*/
      sub_881B80((NiTArray_NiD3DPass *)this, (int)geometry, arg3, *(float *)&arg4, v12); /*0x809e04*/
      v37 = 0xF; /*0x809e09*/
      break; /*0x809e11*/
    case 0xE9: /*0x809b8b*/
      sub_881E80((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, v12); /*0x809cd0*/
      v37 = 0x10; /*0x809cd5*/
      break; /*0x809cdd*/
    case 0xEC: /*0x809b8b*/
      sub_881FD0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, v12); /*0x809cec*/
      v37 = 0x11; /*0x809cf1*/
      break; /*0x809cf9*/
    case 0xF7: /*0x809b8b*/
      sub_882120((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, v12); /*0x809d08*/
      v37 = 0x12; /*0x809d0d*/
      break; /*0x809d15*/
    case 0xFA: /*0x809b8b*/
      sub_882270((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, v12); /*0x809d24*/
      v37 = 0x13; /*0x809d29*/
      break; /*0x809d31*/
    default:
      goto LABEL_66;
  }
  if ( v38 >= 0 ) /*0x809baf*/
    goto LABEL_41; /*0x809baf*/
  v30 = v37; /*0x809f01*/
LABEL_75:
  v32 = *(NiD3DPass **)(4 * v30 + 0xB47718); /*0x809f05*/
  v33 = (NiD3DPass **)(4 * v30 + 0xB47718); /*0x809f17*/
  if ( *(_WORD *)&OB_RendererGlobalState_010201A0.pad_00D[6] == 4 ) /*0x809f20*/
  {
    NiD3DPass_SetRenderState(v32, 0x34, 1u, 0); /*0x809f26*/
    NiD3DPass_SetRenderState(*v33, 0x38, 8u, 0); /*0x809f33*/
    NiD3DPass_SetRenderState(*v33, 0x37, 7u, 0); /*0x809f40*/
    NiD3DPass_SetRenderState(*v33, 0x35, 1u, 0); /*0x809f4d*/
    NiD3DPass_SetRenderState(*v33, 0x36, 1u, 0); /*0x809f5a*/
  }
  else
  {
    NiD3DPass_SetRenderState(v32, 0x34, 0, 0); /*0x809f60*/
  }
  if ( (unsigned int)(v38 - 0x33) > 0x15F ) /*0x809f72*/
  {
    if ( (unsigned int)(v38 - 3) <= 0xDB ) /*0x809fe7*/
      NiD3DPass_SetRenderState(*v33, 0x1B, v36 != 0, 0); /*0x809ffe*/
  }
  else
  {
    v34 = sub_7C8510(); /*0x809f74*/
    v35 = *v33; /*0x809f7b*/
    if ( v34 ) /*0x809f7f*/
    {
      if ( v36 ) /*0x809f86*/
      {
        NiD3DPass_SetRenderState(v35, 0x1B, 1u, 0); /*0x809f97*/
        (*((void (__thiscall **)(_DWORD, _DWORD))(*(this + 6))->__vftable + 2))(*(this + 6), *(_DWORD *)&arg4->Name[4]); /*0x809faa*/
      }
      else
      {
        NiD3DPass_SetRenderState(v35, 0x1B, 0, 0); /*0x809f8c*/
      }
      NiD3DPass_SetRenderState(*v33, 0x17, 4u, 0); /*0x809fb4*/
      NiD3DPass_SetRenderState(*v33, 0xE, 1u, 0); /*0x809fbf*/
    }
    else
    {
      NiD3DPass_SetRenderState(v35, 0x1B, 1u, 0); /*0x809fc5*/
      NiD3DPass_SetRenderState(*v33, 0x17, 3u, 0); /*0x809fd2*/
      NiD3DPass_SetRenderState(*v33, 0xE, 0, 0); /*0x809fdd*/
    }
  }
  if ( *(_DWORD *)&OB_RendererGlobalState_010201A0.pad_00D[0x12] ) /*0x80a003*/
  {
    if ( !*(_BYTE *)(*(_DWORD *)&OB_RendererGlobalState_010201A0.pad_00D[0x12] + 7) ) /*0x80a00c*/
      flt_B46638[0x15] = 0.0; /*0x80a014*/
  }
  v50 = 0xFFFFFFFF; /*0x80a01e*/
  NiPointerSlot_Release(&slot); /*0x80a026*/
  return 0; /*0x80a059*/
}
