// Oblivion ShadowLight render-pass setup. Mode 5 dispatches selectors 6..9, applies the geometry NiAlphaProperty so the original test function/reference are available, disables blending, and mutates the pooled pass bias. Normal caster bias is slope 0/depth 0; shader-property flag 0x80000 selects slope 1 and depth -0.0005.
int __thiscall ShadowLightShader__SetupRenderPass(
        Ni2DBuffer **this,
        float *geometry,
        int arg3,
        int a4,
        NiD3DPass *arg4,
        int a6,
        int a7,
        int a8)
{
  UInt32 StageCount; // ebp
  BOOL v11; // eax
  int v12; // ebx
  BOOL v13; // ebx
  int v14; // eax
  int v15; // ecx
  double v16; // st7
  float v17; // eax
  float v18; // ecx
  unsigned __int16 v19; // ax
  unsigned int *v20; // eax
  unsigned __int16 v21; // ax
  Ni2DBuffer *v22; // eax
  float w; // [esp+0h] [ebp-74h]
  char v25; // [esp+1Ah] [ebp-5Ah]
  char v26; // [esp+1Bh] [ebp-59h]
  int v27; // [esp+1Ch] [ebp-58h]
  float v28; // [esp+20h] [ebp-54h]
  bool arg4a; // [esp+84h] [ebp+10h]

  ((void (__thiscall *)(Ni2DBuffer **))(*this)[6].members.width)(this); /*0x7c9f61*/
  v27 = LODWORD(unk_B42E90); /*0x7c9f6a*/
  StageCount = arg4->StageCount; /*0x7c9f79*/
  v26 = 0; /*0x7c9f82*/
  v25 = 0; /*0x7c9f86*/
  v11 = StageCount /*0x7c9faa*/
     && (*(int (__thiscall **)(UInt32))(*(_DWORD *)StageCount + 0x54))(StageCount) >= 1
     && (*(int (__thiscall **)(UInt32))(*(_DWORD *)StageCount + 0x54))(StageCount) <= 0xA;
  v12 = 0; /*0x7c9fb9*/
  if ( (v11 ? StageCount : 0) != 0 )
  {
    v13 = StageCount /*0x7c9fe2*/
       && (*(int (__thiscall **)(UInt32))(*(_DWORD *)StageCount + 0x54))(StageCount) >= 5
       && (*(int (__thiscall **)(UInt32))(*(_DWORD *)StageCount + 0x54))(StageCount) <= 0xA;
    v12 = v13 ? StageCount : 0;
  }
  if ( !StageCount ) /*0x7c9ff3*/
  {
    if ( unk_B42E8C ) /*0x7c9ff5*/
      unk_B42E8C("Attempting to render geometry with a shader, but no shader property", 0); /*0x7ca008*/
    return 0; /*0x7ca00d*/
  }
  sub_7C87C0(v12, *(_DWORD *)&arg4->Name[0xC], v27); /*0x7ca01e*/
  v14 = *(_DWORD *)(StageCount + 0x1C); /*0x7ca023*/
  v15 = *(_DWORD *)&arg4->Name[4]; /*0x7ca026*/
  arg4a = (v14 & 2) != 0; /*0x7ca02b*/
  if ( v15 ) /*0x7ca03d*/
  {
    if ( (*(_WORD *)(v15 + 0x18) & 0x200) != 0 ) /*0x7ca049*/
      v25 = 1; /*0x7ca04b*/
    v16 = 1.0; /*0x7ca057*/
    if ( *(float *)(StageCount + 0x20) < 1.0 || (*(_BYTE *)(v15 + 0x18) & 1) != 0 && (v14 & 0x100) != 0 ) /*0x7ca06c*/
    {
      v26 = 1; /*0x7ca070*/
      goto LABEL_25; /*0x7ca075*/
    }
  }
  else
  {
    v16 = 1.0; /*0x7ca077*/
  }
  w = v16; /*0x7ca07c*/
  sub_7E2430(StageCount, w); /*0x7ca07f*/
LABEL_25:
  v28 = *(float *)(StageCount + 0x20); /*0x7ca084*/
  v17 = flt_B4649C; /*0x7ca0cc*/
  v18 = flt_B464A0[0]; /*0x7ca0dc*/
  unk_B46498 = unk_B46498; /*0x7ca0e4*/
  flt_B4649C = v17; /*0x7ca0ee*/
  flt_B464A0[0] = v18; /*0x7ca0f3*/
  flt_B464A0[1] = v28; /*0x7ca0f9*/
  if ( v12 ) /*0x7ca0ff*/
  {
    if ( *(_WORD *)&OB_RendererGlobalState_010201A0.pad_00D[6] == 1 ) /*0x7ca10f*/
    {
      v21 = OB_BSShaderProperty_CountPassListEntriesWithMarker_010201A0((void *)v12); /*0x7ca141*/
      if ( v21 > 0xAu ) /*0x7ca14d*/
        v21 = 0xA; /*0x7ca14f*/
      v20 = (unsigned int *)((char *)&unk_B2DD50 + 0x10 * v21); /*0x7ca15a*/
      goto LABEL_34; /*0x7ca15a*/
    }
    if ( *(_WORD *)&OB_RendererGlobalState_010201A0.pad_00D[6] == 2 ) /*0x7ca114*/
    {
      v19 = (*(int (__thiscall **)(int, float *))(*(_DWORD *)v12 + 0x60))(v12, geometry); /*0x7ca122*/
      if ( v19 > 0x10u ) /*0x7ca12b*/
        v19 = 0x10; /*0x7ca12d*/
      v20 = (unsigned int *)((char *)&unk_B2DE00 + 0x10 * v19); /*0x7ca138*/
LABEL_34:
      OB_BSShader_SetSharedFloat4Constant_010201A0(0, *v20, v20[1], v20[2], v20[3]); /*0x7ca15f*/
      OB_BSShader_SetSharedFloat4Constant_010201A0(0x19u, dword_B25AD0, dword_B25AD4, dword_B25AD8, dword_B25ADC); /*0x7ca1ab*/
    }
  }
  if ( arg4a ) /*0x7ca1bb*/
  {
    v22 = *(this + 0x20); /*0x7ca1bd*/
  }
  else if ( v12 && (*(_DWORD *)(v12 + 0x1C) & 0x1000) != 0 ) /*0x7ca1d0*/
  {
    v22 = *(this + 0x21); /*0x7ca1d2*/
  }
  else if ( v27 == 0x48 || v27 == 0x49 || v27 >= 0x168 && v27 <= 0x175 ) /*0x7ca1f4*/
  {
    v22 = *(this + 0x22); /*0x7ca1fb*/
  }
  else
  {
    v22 = *(this + 0x1F); /*0x7ca1f6*/
  }
  NiSmartPointer_Set__(this + 9, v22); /*0x7ca205*/
  if ( OB_ShaderPassControl_010201A0.bFullBrightLighting ) /*0x7ca20a*/
    OB_BSShader_SetSharedFloat4Constant_010201A0( /*0x7ca247*/
      0,
      COERCE_UNSIGNED_INT(1.0),
      COERCE_UNSIGNED_INT(1.0),
      COERCE_UNSIGNED_INT(1.0),
      COERCE_UNSIGNED_INT(1.0));
  switch ( v27 ) /*0x7ca265*/
  {
    case 0: /*0x7ca265*/
      sub_852030((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, v12); /*0x7ca2c6*/
      goto LABEL_251; /*0x7ca2cb*/
    case 2: /*0x7ca265*/
      sub_8520C0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, v12); /*0x7ca2da*/
      goto LABEL_251; /*0x7ca2df*/
    case 3: /*0x7ca265*/
      sub_8490F0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (NiD3DPass *)v12); /*0x7ca2ee*/
      goto LABEL_251; /*0x7ca2f3*/
    case 6: /*0x7ca265*/
      ShadowLightShader_EnqueueMode5RigidOpaquePass((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, v12); /*0x7ca276*/
      goto LABEL_251; /*0x7ca27b*/
    case 7: /*0x7ca265*/
      ShadowLightShader_EnqueueMode5RigidAlphaTestPass( /*0x7ca28a*/
        (NiTArray_NiD3DPass *)this,
        (int)geometry,
        arg3,
        (int)arg4,
        (NiD3DPass *)v12);
      goto LABEL_251; /*0x7ca28f*/
    case 8: /*0x7ca265*/
      ShadowLightShader_EnqueueMode5SkinnedOpaquePass((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, v12); /*0x7ca29e*/
      goto LABEL_251; /*0x7ca2a3*/
    case 9: /*0x7ca265*/
      ShadowLightShader_EnqueueMode5SkinnedAlphaTestPass( /*0x7ca2b2*/
        (NiTArray_NiD3DPass *)this,
        (int)geometry,
        arg3,
        (int)arg4,
        (NiD3DPass *)v12);
      goto LABEL_251; /*0x7ca2b7*/
    case 0xA: /*0x7ca265*/
      sub_850B50((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, v12); /*0x7cb1fc*/
      goto LABEL_251; /*0x7cb201*/
    case 0xB: /*0x7ca265*/
      sub_850BE0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, v12); /*0x7cb210*/
      goto LABEL_251; /*0x7cb215*/
    case 0x10: /*0x7ca265*/
      sub_849220((NiTArray_NiD3DPass *)this, (int)geometry, arg3, arg4, v12); /*0x7ca302*/
      goto LABEL_251; /*0x7ca307*/
    case 0x11: /*0x7ca265*/
      sub_8492B0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, v12); /*0x7ca316*/
      goto LABEL_251; /*0x7ca31b*/
    case 0x12: /*0x7ca265*/
      sub_849440((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (NiD3DPass *)v12); /*0x7ca32a*/
      goto LABEL_251; /*0x7ca32f*/
    case 0x13: /*0x7ca265*/
      sub_849550((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, v12); /*0x7ca33e*/
      goto LABEL_251; /*0x7ca343*/
    case 0x14: /*0x7ca265*/
      sub_8496E0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, arg4, v12); /*0x7ca352*/
      goto LABEL_251; /*0x7ca357*/
    case 0x15: /*0x7ca265*/
      sub_849770((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, v12); /*0x7ca366*/
      goto LABEL_251; /*0x7ca36b*/
    case 0x16: /*0x7ca265*/
      sub_849900((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (NiD3DPass *)v12); /*0x7ca37a*/
      goto LABEL_251; /*0x7ca37f*/
    case 0x17: /*0x7ca265*/
      sub_849A10((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, v12); /*0x7ca38e*/
      goto LABEL_251; /*0x7ca393*/
    case 0x19: /*0x7ca265*/
      sub_849BA0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12); /*0x7ca56e*/
      goto LABEL_251; /*0x7ca573*/
    case 0x1A: /*0x7ca265*/
      sub_849D60((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12); /*0x7ca582*/
      goto LABEL_251; /*0x7ca587*/
    case 0x1B: /*0x7ca265*/
      sub_84A2E0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12); /*0x7ca5be*/
      goto LABEL_251; /*0x7ca5c3*/
    case 0x1C: /*0x7ca265*/
      sub_84A510((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12); /*0x7ca5d2*/
      goto LABEL_251; /*0x7ca5d7*/
    case 0x1D: /*0x7ca265*/
      sub_84ABC0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, arg4, (_DWORD *)v12); /*0x7ca60e*/
      goto LABEL_251; /*0x7ca613*/
    case 0x1E: /*0x7ca265*/
      sub_84AE80((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12); /*0x7ca622*/
      goto LABEL_251; /*0x7ca627*/
    case 0x1F: /*0x7ca265*/
      sub_84B040((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12); /*0x7ca636*/
      goto LABEL_251; /*0x7ca63b*/
    case 0x20: /*0x7ca265*/
    case 0x21: /*0x7ca265*/
      sub_84B5C0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12); /*0x7ca672*/
      goto LABEL_251; /*0x7ca677*/
    case 0x22: /*0x7ca265*/
      sub_84B7F0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, arg4, (_DWORD *)v12); /*0x7ca69a*/
      goto LABEL_251; /*0x7ca69f*/
    case 0x23: /*0x7ca265*/
    case 0x2E: /*0x7ca265*/
    case 0x3D: /*0x7ca265*/
    case 0x47: /*0x7ca265*/
      nullsub_19((int)geometry, arg3, (int)arg4, v12); /*0x7ca87a*/
      goto LABEL_251; /*0x7ca87f*/
    case 0x24: /*0x7ca265*/
      sub_84C200((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12); /*0x7ca712*/
      goto LABEL_251; /*0x7ca717*/
    case 0x25: /*0x7ca265*/
      sub_84C3C0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12); /*0x7ca726*/
      goto LABEL_251; /*0x7ca72b*/
    case 0x26: /*0x7ca265*/
    case 0x27: /*0x7ca265*/
      sub_84C940((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12); /*0x7ca762*/
      goto LABEL_251; /*0x7ca767*/
    case 0x28: /*0x7ca265*/
      sub_84CFF0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, arg4, (_DWORD *)v12); /*0x7ca7b2*/
      goto LABEL_251; /*0x7ca7b7*/
    case 0x29: /*0x7ca265*/
      sub_84D580((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12); /*0x7ca88e*/
      goto LABEL_251; /*0x7ca893*/
    case 0x2A: /*0x7ca265*/
      sub_84D740((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12); /*0x7ca8a2*/
      goto LABEL_251; /*0x7ca8a7*/
    case 0x2B: /*0x7ca265*/
      sub_84DCC0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12); /*0x7ca802*/
      goto LABEL_251; /*0x7ca807*/
    case 0x2C: /*0x7ca265*/
      sub_84DEF0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12); /*0x7ca816*/
      goto LABEL_251; /*0x7ca81b*/
    case 0x2D: /*0x7ca265*/
      sub_84E120((NiTArray_NiD3DPass *)this, (int)geometry, arg3, arg4, (_DWORD *)v12); /*0x7ca82a*/
      goto LABEL_251; /*0x7ca82f*/
    case 0x31: /*0x7ca265*/
      sub_84E860((NiTArray_NiD3DPass *)this, (int)geometry, arg3, arg4, (_DWORD *)v12); /*0x7ca8b6*/
      goto LABEL_251; /*0x7ca8bb*/
    case 0x32: /*0x7ca265*/
      sub_84E9E0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, arg4, (_DWORD *)v12); /*0x7ca8ca*/
      goto LABEL_251; /*0x7ca8cf*/
    case 0x34: /*0x7ca265*/
      sub_849F20((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12); /*0x7ca596*/
      goto LABEL_251; /*0x7ca59b*/
    case 0x35: /*0x7ca265*/
      sub_84A100((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12); /*0x7ca5aa*/
      goto LABEL_251; /*0x7ca5af*/
    case 0x36: /*0x7ca265*/
      sub_84A740((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12); /*0x7ca5e6*/
      goto LABEL_251; /*0x7ca5eb*/
    case 0x37: /*0x7ca265*/
      sub_84A980((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12); /*0x7ca5fa*/
      goto LABEL_251; /*0x7ca5ff*/
    case 0x38: /*0x7ca265*/
      sub_84B200((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12); /*0x7ca64a*/
      goto LABEL_251; /*0x7ca64f*/
    case 0x39: /*0x7ca265*/
      sub_84B3E0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12); /*0x7ca65e*/
      goto LABEL_251; /*0x7ca663*/
    case 0x3A: /*0x7ca265*/
      sub_84BAB0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, arg4, (_DWORD *)v12); /*0x7ca6ae*/
      goto LABEL_251; /*0x7ca6b3*/
    case 0x3B: /*0x7ca265*/
      sub_84BD80((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12); /*0x7ca6c2*/
      goto LABEL_251; /*0x7ca6c7*/
    case 0x3C: /*0x7ca265*/
      sub_84BFC0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12); /*0x7ca6d6*/
      goto LABEL_251; /*0x7ca6db*/
    case 0x3E: /*0x7ca265*/
      sub_84C580((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12); /*0x7ca73a*/
      goto LABEL_251; /*0x7ca73f*/
    case 0x3F: /*0x7ca265*/
      sub_84C760((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12); /*0x7ca74e*/
      goto LABEL_251; /*0x7ca753*/
    case 0x40: /*0x7ca265*/
      sub_84CB70((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12); /*0x7ca78a*/
      goto LABEL_251; /*0x7ca78f*/
    case 0x41: /*0x7ca265*/
      sub_84CDB0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12); /*0x7ca79e*/
      goto LABEL_251; /*0x7ca7a3*/
    case 0x42: /*0x7ca265*/
      sub_84D900((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12); /*0x7ca7da*/
      goto LABEL_251; /*0x7ca7df*/
    case 0x43: /*0x7ca265*/
      sub_84DAE0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12); /*0x7ca7ee*/
      goto LABEL_251; /*0x7ca7f3*/
    case 0x44: /*0x7ca265*/
      sub_84D2B0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, arg4, (_DWORD *)v12); /*0x7ca7c6*/
      goto LABEL_251; /*0x7ca7cb*/
    case 0x45: /*0x7ca265*/
      sub_84E3E0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12); /*0x7ca83e*/
      goto LABEL_251; /*0x7ca843*/
    case 0x46: /*0x7ca265*/
      sub_84E620((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12); /*0x7ca852*/
      goto LABEL_251; /*0x7ca857*/
    case 0x48: /*0x7ca265*/
      sub_850C70((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (NiD3DTextureStage *)v12, (NiD3DPass *)1); /*0x7ca930*/
      goto LABEL_251; /*0x7ca935*/
    case 0x49: /*0x7ca265*/
      sub_846250((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12, (NiD3DPass *)1); /*0x7ca9b4*/
      goto LABEL_251; /*0x7ca9b9*/
    case 0x4A: /*0x7ca265*/
      sub_8419C0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12); /*0x7caaa4*/
      goto LABEL_251; /*0x7caaa9*/
    case 0x4B: /*0x7ca265*/
      sub_841B40((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12); /*0x7caab8*/
      goto LABEL_251; /*0x7caabd*/
    case 0x4F: /*0x7ca265*/
      sub_841D30((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12); /*0x7caacc*/
      goto LABEL_251; /*0x7caad1*/
    case 0x51: /*0x7ca265*/
      sub_841EB0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12); /*0x7caae0*/
      goto LABEL_251; /*0x7caae5*/
    case 0x55: /*0x7ca265*/
      sub_8420A0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (NiRenderedTexture *)arg4, (_DWORD *)v12); /*0x7caaf4*/
      goto LABEL_251; /*0x7caaf9*/
    case 0x56: /*0x7ca265*/
      sub_8422C0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (NiRenderedTexture *)arg4, (_DWORD *)v12); /*0x7cab08*/
      goto LABEL_251; /*0x7cab0d*/
    case 0x5A: /*0x7ca265*/
      sub_842550((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (NiRenderedTexture *)arg4, (_DWORD *)v12); /*0x7cab1c*/
      goto LABEL_251; /*0x7cab21*/
    case 0x5C: /*0x7ca265*/
      sub_842770((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (NiRenderedTexture *)arg4, (_DWORD *)v12); /*0x7cab30*/
      goto LABEL_251; /*0x7cab35*/
    case 0x60: /*0x7ca265*/
      ShadowLightShader_QueueSLS2023_SLS2031((NiTArray_NiD3DPass *)this, (int)geometry, arg3, arg4, (_DWORD *)v12); /*0x7cab44*/
      goto LABEL_251; /*0x7cab49*/
    case 0x61: /*0x7ca265*/
      ShadowLightShader_QueueSLS2023_SLS2032((NiTArray_NiD3DPass *)this, (int)geometry, arg3, arg4, (_DWORD *)v12); /*0x7cab58*/
      goto LABEL_251; /*0x7cab5d*/
    case 0x65: /*0x7ca265*/
      ShadowLightShader_QueueSLS2024_SLS2031((NiTArray_NiD3DPass *)this, (int)geometry, arg3, arg4, (_DWORD *)v12); /*0x7cab6c*/
      goto LABEL_251; /*0x7cab71*/
    case 0x67: /*0x7ca265*/
      ShadowLightShader_QueueSLS2024_SLS2032((NiTArray_NiD3DPass *)this, (int)geometry, arg3, arg4, (_DWORD *)v12); /*0x7cab80*/
      goto LABEL_251; /*0x7cab85*/
    case 0x6B: /*0x7ca265*/
      sub_8430E0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (NiRenderedTexture *)arg4, (_DWORD *)v12); /*0x7cab94*/
      goto LABEL_251; /*0x7cab99*/
    case 0x6C: /*0x7ca265*/
      sub_843300((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (NiRenderedTexture *)arg4, (_DWORD *)v12); /*0x7caba8*/
      goto LABEL_251; /*0x7cabad*/
    case 0x70: /*0x7ca265*/
      sub_843590((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (NiRenderedTexture *)arg4, (_DWORD *)v12); /*0x7cabbc*/
      goto LABEL_251; /*0x7cabc1*/
    case 0x72: /*0x7ca265*/
      sub_8437B0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (NiRenderedTexture *)arg4, (_DWORD *)v12); /*0x7cabd0*/
      goto LABEL_251; /*0x7cabd5*/
    case 0x76: /*0x7ca265*/
      sub_83AD30((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12); /*0x7cabe4*/
      goto LABEL_251; /*0x7cabe9*/
    case 0x77: /*0x7ca265*/
      sub_83AEB0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, v12); /*0x7cabf8*/
      goto LABEL_251; /*0x7cabfd*/
    case 0x78: /*0x7ca265*/
      sub_83B0F0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12); /*0x7cac0c*/
      goto LABEL_251; /*0x7cac11*/
    case 0x7C: /*0x7ca265*/
      sub_83B2E0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12); /*0x7cac20*/
      goto LABEL_251; /*0x7cac25*/
    case 0x7D: /*0x7ca265*/
      sub_83B4F0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12); /*0x7cac34*/
      goto LABEL_251; /*0x7cac39*/
    case 0x7E: /*0x7ca265*/
      sub_83B670((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12); /*0x7cac48*/
      goto LABEL_251; /*0x7cac4d*/
    case 0x83: /*0x7ca265*/
      sub_83B860((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12); /*0x7cac5c*/
      goto LABEL_251; /*0x7cac61*/
    case 0x84: /*0x7ca265*/
      sub_83BBF0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, *(float *)&arg4, (_DWORD *)v12); /*0x7cacfc*/
      goto LABEL_251; /*0x7cad01*/
    case 0x85: /*0x7ca265*/
      sub_83BE10((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12); /*0x7cad10*/
      goto LABEL_251; /*0x7cad15*/
    case 0x86: /*0x7ca265*/
      sub_83BFE0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (NiRenderedTexture *)arg4, (_DWORD *)v12); /*0x7cad24*/
      goto LABEL_251; /*0x7cad29*/
    case 0x8A: /*0x7ca265*/
      sub_83C270((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (NiRenderedTexture *)arg4, (float *)v12); /*0x7cad38*/
      goto LABEL_251; /*0x7cad3d*/
    case 0x8B: /*0x7ca265*/
      sub_83C520((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (NiRenderedTexture *)arg4, (_DWORD *)v12); /*0x7cad4c*/
      goto LABEL_251; /*0x7cad51*/
    case 0x8C: /*0x7ca265*/
      sub_83C740((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (NiRenderedTexture *)arg4, (_DWORD *)v12); /*0x7cad60*/
      goto LABEL_251; /*0x7cad65*/
    case 0x91: /*0x7ca265*/
      sub_83C9D0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (NiRenderedTexture *)arg4, (_DWORD *)v12); /*0x7cad74*/
      goto LABEL_251; /*0x7cad79*/
    case 0x92: /*0x7ca265*/
      sub_83CC80((NiTArray_NiD3DPass *)this, (int)geometry, arg3, arg4, (_DWORD *)v12); /*0x7cac84*/
      goto LABEL_251; /*0x7cac89*/
    case 0x93: /*0x7ca265*/
      ShadowLightShader_QueueSLS2007_SLS2010((NiTArray_NiD3DPass *)this, (int)geometry, arg3, arg4, (_DWORD *)v12); /*0x7cac98*/
      goto LABEL_251; /*0x7cac9d*/
    case 0x97: /*0x7ca265*/
      sub_83CFF0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12); /*0x7cacac*/
      goto LABEL_251; /*0x7cacb1*/
    case 0x98: /*0x7ca265*/
      sub_83D200((NiTArray_NiD3DPass *)this, (int)geometry, arg3, arg4, (_DWORD *)v12); /*0x7cacc0*/
      goto LABEL_251; /*0x7cacc5*/
    case 0x99: /*0x7ca265*/
      ShadowLightShader_QueueSLS2008_SLS2010((NiTArray_NiD3DPass *)this, (int)geometry, arg3, arg4, (_DWORD *)v12); /*0x7cacd4*/
      goto LABEL_251; /*0x7cacd9*/
    case 0x9E: /*0x7ca265*/
      sub_83D570((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12); /*0x7cace8*/
      goto LABEL_251; /*0x7caced*/
    case 0x9F: /*0x7ca265*/
      sub_83D780((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (NiRenderedTexture *)arg4, (_DWORD *)v12); /*0x7cad88*/
      goto LABEL_251; /*0x7cad8d*/
    case 0xA0: /*0x7ca265*/
      sub_83D9A0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (NiRenderedTexture *)arg4, (_DWORD *)v12); /*0x7cad9c*/
      goto LABEL_251; /*0x7cada1*/
    case 0xA4: /*0x7ca265*/
      sub_83DC30((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (NiRenderedTexture *)arg4, (_DWORD *)v12); /*0x7cadb0*/
      goto LABEL_251; /*0x7cadb5*/
    case 0xA5: /*0x7ca265*/
      sub_83DEE0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (NiRenderedTexture *)arg4, (_DWORD *)v12); /*0x7cadc4*/
      goto LABEL_251; /*0x7cadc9*/
    case 0xA6: /*0x7ca265*/
      sub_83E100((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (NiRenderedTexture *)arg4, (_DWORD *)v12); /*0x7cadd8*/
      goto LABEL_251; /*0x7caddd*/
    case 0xAB: /*0x7ca265*/
      sub_83E390((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (NiRenderedTexture *)arg4, (_DWORD *)v12); /*0x7cadec*/
      goto LABEL_251; /*0x7cadf1*/
    case 0xAC: /*0x7ca265*/
      sub_83E640((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12); /*0x7cae00*/
      goto LABEL_251; /*0x7cae05*/
    case 0xAD: /*0x7ca265*/
      sub_83E7C0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12); /*0x7cae14*/
      goto LABEL_251; /*0x7cae19*/
    case 0xAE: /*0x7ca265*/
      sub_83E9B0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12); /*0x7cae28*/
      goto LABEL_251; /*0x7cae2d*/
    case 0xB2: /*0x7ca265*/
      sub_83EBC0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12); /*0x7cae3c*/
      goto LABEL_251; /*0x7cae41*/
    case 0xB3: /*0x7ca265*/
      sub_83ED40((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12); /*0x7cae50*/
      goto LABEL_251; /*0x7cae55*/
    case 0xB4: /*0x7ca265*/
      sub_83EF30((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12); /*0x7cae64*/
      goto LABEL_251; /*0x7cae69*/
    case 0xB9: /*0x7ca265*/
      sub_83F140((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (NiRenderedTexture *)arg4, (_DWORD *)v12); /*0x7caef0*/
      goto LABEL_251; /*0x7caef5*/
    case 0xBA: /*0x7ca265*/
      sub_83F360((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (NiRenderedTexture *)arg4, (_DWORD *)v12); /*0x7caf04*/
      goto LABEL_251; /*0x7caf09*/
    case 0xBB: /*0x7ca265*/
      sub_83F5F0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (NiRenderedTexture *)arg4, (_DWORD *)v12); /*0x7caf18*/
      goto LABEL_251; /*0x7caf1d*/
    case 0xBF: /*0x7ca265*/
      sub_83F8A0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (NiRenderedTexture *)arg4, (_DWORD *)v12); /*0x7caf2c*/
      goto LABEL_251; /*0x7caf31*/
    case 0xC0: /*0x7ca265*/
      sub_83FAC0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (NiRenderedTexture *)arg4, (_DWORD *)v12); /*0x7caf40*/
      goto LABEL_251; /*0x7caf45*/
    case 0xC1: /*0x7ca265*/
      sub_83FD50((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (NiRenderedTexture *)arg4, (_DWORD *)v12); /*0x7caf54*/
      goto LABEL_251; /*0x7caf59*/
    case 0xC6: /*0x7ca265*/
      sub_840000((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12); /*0x7cae78*/
      goto LABEL_251; /*0x7cae7d*/
    case 0xC7: /*0x7ca265*/
      sub_840180((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12); /*0x7cae8c*/
      goto LABEL_251; /*0x7cae91*/
    case 0xC8: /*0x7ca265*/
      sub_840370((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12); /*0x7caea0*/
      goto LABEL_251; /*0x7caea5*/
    case 0xCC: /*0x7ca265*/
      sub_840580((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12); /*0x7caeb4*/
      goto LABEL_251; /*0x7caeb9*/
    case 0xCD: /*0x7ca265*/
      sub_840700((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12); /*0x7caec8*/
      goto LABEL_251; /*0x7caecd*/
    case 0xCE: /*0x7ca265*/
      sub_8408F0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12); /*0x7caedc*/
      goto LABEL_251; /*0x7caee1*/
    case 0xD3: /*0x7ca265*/
      sub_840B00((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (NiRenderedTexture *)arg4, (_DWORD *)v12); /*0x7caf68*/
      goto LABEL_251; /*0x7caf6d*/
    case 0xD4: /*0x7ca265*/
      sub_840D20((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (NiRenderedTexture *)arg4, (_DWORD *)v12); /*0x7caf7c*/
      goto LABEL_251; /*0x7caf81*/
    case 0xD5: /*0x7ca265*/
      sub_840FB0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (NiRenderedTexture *)arg4, (_DWORD *)v12); /*0x7caf90*/
      goto LABEL_251; /*0x7caf95*/
    case 0xD9: /*0x7ca265*/
      sub_841260((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (NiRenderedTexture *)arg4, (_DWORD *)v12); /*0x7cafa4*/
      goto LABEL_251; /*0x7cafa9*/
    case 0xDA: /*0x7ca265*/
      sub_841480((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (NiRenderedTexture *)arg4, (_DWORD *)v12); /*0x7cafb8*/
      goto LABEL_251; /*0x7cafbd*/
    case 0xDB: /*0x7ca265*/
      sub_841710((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (NiRenderedTexture *)arg4, (_DWORD *)v12); /*0x7cafcc*/
      goto LABEL_251; /*0x7cafd1*/
    case 0xE2: /*0x7ca265*/
      sub_84EB60((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (NiD3DPass *)v12); /*0x7ca442*/
      goto LABEL_251; /*0x7ca447*/
    case 0xE3: /*0x7ca265*/
      sub_84EC90((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (NiD3DPass *)v12); /*0x7ca456*/
      goto LABEL_251; /*0x7ca45b*/
    case 0xE4: /*0x7ca265*/
      sub_84EDC0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (NiD3DPass *)v12); /*0x7ca46a*/
      goto LABEL_251; /*0x7ca46f*/
    case 0xE5: /*0x7ca265*/
      sub_84EEF0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (NiD3DPass *)v12); /*0x7ca47e*/
      goto LABEL_251; /*0x7ca483*/
    case 0xE8: /*0x7ca265*/
      ShadowLightShader_QueueSLS2027_SLS2035( /*0x7cafe0*/
        (NiTArray_NiD3DPass *)this,
        (int)geometry,
        arg3,
        (int)arg4,
        (NiD3DPass *)v12);
      goto LABEL_251; /*0x7cafe5*/
    case 0xEB: /*0x7ca265*/
      ShadowLightShader_QueueSLS2028_SLS2035( /*0x7caff4*/
        (NiTArray_NiD3DPass *)this,
        (int)geometry,
        arg3,
        (int)arg4,
        (NiD3DPass *)v12);
      goto LABEL_251; /*0x7caff9*/
    case 0xF6: /*0x7ca265*/
      ShadowLightShader_QueueSLS2029_SLS2036( /*0x7cb008*/
        (NiTArray_NiD3DPass *)this,
        (int)geometry,
        arg3,
        (int)arg4,
        (NiD3DPass *)v12);
      goto LABEL_251; /*0x7cb00d*/
    case 0xF9: /*0x7ca265*/
      ShadowLightShader_QueueSLS2030_SLS2036( /*0x7cb01c*/
        (NiTArray_NiD3DPass *)this,
        (int)geometry,
        arg3,
        (int)arg4,
        (NiD3DPass *)v12);
      goto LABEL_251; /*0x7cb021*/
    case 0x104: /*0x7ca265*/
      sub_84F020((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (NiD3DPass *)v12); /*0x7ca492*/
      goto LABEL_251; /*0x7ca497*/
    case 0x105: /*0x7ca265*/
      sub_84F120((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (NiD3DPass *)v12); /*0x7ca4a6*/
      goto LABEL_251; /*0x7ca4ab*/
    case 0x106: /*0x7ca265*/
      sub_84F340((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (NiD3DPass *)v12); /*0x7ca4ba*/
      goto LABEL_251; /*0x7ca4bf*/
    case 0x107: /*0x7ca265*/
      sub_84F4F0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (NiD3DPass *)v12); /*0x7ca4ce*/
      goto LABEL_251; /*0x7ca4d3*/
    case 0x108: /*0x7ca265*/
      sub_84F5F0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (NiD3DPass *)v12); /*0x7ca4e2*/
      goto LABEL_251; /*0x7ca4e7*/
    case 0x109: /*0x7ca265*/
      sub_84F6F0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (NiD3DPass *)v12); /*0x7ca4f6*/
      goto LABEL_251; /*0x7ca4fb*/
    case 0x10A: /*0x7ca265*/
      sub_84F7F0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (NiD3DPass *)v12); /*0x7ca50a*/
      goto LABEL_251; /*0x7ca50f*/
    case 0x10F: /*0x7ca265*/
      sub_84FA10((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (NiD3DPass *)v12); /*0x7ca51e*/
      goto LABEL_251; /*0x7ca523*/
    case 0x110: /*0x7ca265*/
      sub_84FB40((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (NiD3DPass *)v12); /*0x7ca532*/
      goto LABEL_251; /*0x7ca537*/
    case 0x111: /*0x7ca265*/
      sub_84FC70((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (NiD3DPass *)v12); /*0x7ca546*/
      goto LABEL_251; /*0x7ca54b*/
    case 0x112: /*0x7ca265*/
      sub_84FDA0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (NiD3DPass *)v12); /*0x7ca55a*/
      goto LABEL_251; /*0x7ca55f*/
    case 0x115: /*0x7ca265*/
      sub_843DD0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (NiD3DPass *)v12); /*0x7cb030*/
      goto LABEL_251; /*0x7cb035*/
    case 0x116: /*0x7ca265*/
      sub_843ED0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (NiD3DPass *)v12); /*0x7cb044*/
      goto LABEL_251; /*0x7cb049*/
    case 0x118: /*0x7ca265*/
      sub_843FD0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (NiD3DPass *)v12); /*0x7cb058*/
      goto LABEL_251; /*0x7cb05d*/
    case 0x119: /*0x7ca265*/
      sub_8440D0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (NiD3DPass *)v12); /*0x7cb06c*/
      goto LABEL_251; /*0x7cb071*/
    case 0x11C: /*0x7ca265*/
      sub_8441D0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (NiRenderedTexture *)v12); /*0x7cb080*/
      goto LABEL_251; /*0x7cb085*/
    case 0x11D: /*0x7ca265*/
      sub_844370((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (NiRenderedTexture *)v12); /*0x7cb094*/
      goto LABEL_251; /*0x7cb099*/
    case 0x11F: /*0x7ca265*/
      sub_844510((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (NiRenderedTexture *)v12); /*0x7cb0a8*/
      goto LABEL_251; /*0x7cb0ad*/
    case 0x120: /*0x7ca265*/
      sub_8446B0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (NiRenderedTexture *)v12); /*0x7cb0bc*/
      goto LABEL_251; /*0x7cb0c1*/
    case 0x123: /*0x7ca265*/
      sub_844850((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (NiD3DPass *)v12); /*0x7cb0d0*/
      goto LABEL_251; /*0x7cb0d5*/
    case 0x124: /*0x7ca265*/
      sub_844950((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (NiD3DPass *)v12); /*0x7cb0e4*/
      goto LABEL_251; /*0x7cb0e9*/
    case 0x126: /*0x7ca265*/
      sub_844A50((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (NiD3DPass *)v12); /*0x7cb0f8*/
      goto LABEL_251; /*0x7cb0fd*/
    case 0x127: /*0x7ca265*/
      sub_844B50((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (NiD3DPass *)v12); /*0x7cb10c*/
      goto LABEL_251; /*0x7cb111*/
    case 0x160: /*0x7ca265*/
      ShadowLightShader_AppendSelector160RefractionPass( /*0x7cb224*/
        (NiTArray_NiD3DPass *)this,
        (int)geometry,
        arg3,
        (int)arg4,
        (NiD3DPass *)v12);
      goto LABEL_251; /*0x7cb229*/
    case 0x161: /*0x7ca265*/
      ShadowLightShader_AppendSelector161RefractionPass( /*0x7cb235*/
        (NiTArray_NiD3DPass *)this,
        (int)geometry,
        arg3,
        (int)arg4,
        (NiD3DPass *)v12);
      goto LABEL_251; /*0x7cb23a*/
    case 0x162: /*0x7ca265*/
      ShadowLightShader_AppendSelector162RefractFPass( /*0x7cb246*/
        (NiTArray_NiD3DPass *)this,
        (int)geometry,
        arg3,
        (int)arg4,
        (NiD3DPass *)v12);
      goto LABEL_251; /*0x7cb24b*/
    case 0x163: /*0x7ca265*/
      sub_848680((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, v12); /*0x7cb257*/
      goto LABEL_251; /*0x7cb25c*/
    case 0x164: /*0x7ca265*/
      sub_848710((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, v12); /*0x7cb268*/
      goto LABEL_251; /*0x7cb26d*/
    case 0x165: /*0x7ca265*/
      sub_8487A0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, v12); /*0x7cb279*/
      goto LABEL_251; /*0x7cb27e*/
    case 0x166: /*0x7ca265*/
      sub_848830((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, v12); /*0x7cb28a*/
      goto LABEL_251; /*0x7cb28f*/
    case 0x167: /*0x7ca265*/
      sub_8488C0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, v12); /*0x7cb29b*/
      goto LABEL_251; /*0x7cb29b*/
    case 0x168: /*0x7ca265*/
      sub_8517F0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12, (NiD3DPass *)1); /*0x7ca988*/
      goto LABEL_251; /*0x7ca98d*/
    case 0x169: /*0x7ca265*/
      ((void (__thiscall *)(Ni2DBuffer **, float *, int, NiD3DPass *, int, int))loc_846C50)( /*0x7ca9f6*/
        this,
        geometry,
        arg3,
        arg4,
        v12,
        1);
      goto LABEL_251; /*0x7ca9fb*/
    case 0x16A: /*0x7ca265*/
      sub_846DC0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12, (NiD3DPass *)1); /*0x7caa0c*/
      goto LABEL_251; /*0x7caa11*/
    case 0x16B: /*0x7ca265*/
      sub_8479E0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12, (NiD3DPass *)1); /*0x7caa7a*/
      goto LABEL_251; /*0x7caa7f*/
    case 0x16C: /*0x7ca265*/
      sub_846F90((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12, (NiD3DPass *)1); /*0x7caa22*/
      goto LABEL_251; /*0x7caa27*/
    case 0x16D: /*0x7ca265*/
      sub_851250((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, v12, (NiD3DPass *)1); /*0x7ca95c*/
      goto LABEL_251; /*0x7ca961*/
    case 0x16E: /*0x7ca265*/
      sub_850F60((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (NiD3DTextureStage *)v12, (NiD3DPass *)1); /*0x7ca946*/
      goto LABEL_251; /*0x7ca94b*/
    case 0x16F: /*0x7ca265*/
      sub_846570((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12, (NiD3DPass *)1); /*0x7ca9ca*/
      goto LABEL_251; /*0x7ca9cf*/
    case 0x170: /*0x7ca265*/
      sub_851520((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, v12, (NiD3DPass *)1); /*0x7ca972*/
      goto LABEL_251; /*0x7ca977*/
    case 0x171: /*0x7ca265*/
      sub_8519B0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12, (NiD3DPass *)1); /*0x7ca99e*/
      goto LABEL_251; /*0x7ca9a3*/
    case 0x172: /*0x7ca265*/
      sub_847160((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12, (NiD3DPass *)1); /*0x7caa38*/
      goto LABEL_251; /*0x7caa3d*/
    case 0x173: /*0x7ca265*/
      sub_847400((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12, (NiD3DPass *)1); /*0x7caa4e*/
      goto LABEL_251; /*0x7caa53*/
    case 0x174: /*0x7ca265*/
      sub_8476F0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12, (NiD3DPass *)1); /*0x7caa64*/
      goto LABEL_251; /*0x7caa69*/
    case 0x175: /*0x7ca265*/
      sub_847D50((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12, (NiD3DPass *)1); /*0x7caa90*/
      goto LABEL_251; /*0x7caa95*/
    case 0x176: /*0x7ca265*/
      sub_846890((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (float *)v12, (NiD3DPass *)1); /*0x7ca9e0*/
      goto LABEL_251; /*0x7ca9e5*/
    case 0x177: /*0x7ca265*/
      ShadowLightShader_AppendSelector177LightPass( /*0x7cb198*/
        (NiTArray_NiD3DPass *)this,
        (int)geometry,
        arg3,
        (int)arg4,
        (NiRenderedTexture *)v12);
      goto LABEL_251; /*0x7cb19d*/
    case 0x178: /*0x7ca265*/
      ShadowLightShader_AppendSelector178LightPass( /*0x7cb1ac*/
        (NiTArray_NiD3DPass *)this,
        (int)geometry,
        arg3,
        (int)arg4,
        (NiRenderedTexture *)v12);
      goto LABEL_251; /*0x7cb1b1*/
    case 0x179: /*0x7ca265*/
      ShadowLightShader_AppendSelector179LightPass( /*0x7cb1c0*/
        (NiTArray_NiD3DPass *)this,
        (int)geometry,
        arg3,
        (int)arg4,
        (NiRenderedTexture *)v12);
      goto LABEL_251; /*0x7cb1c5*/
    case 0x17B: /*0x7ca265*/
      sub_83BA70((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12); /*0x7cac70*/
      goto LABEL_251; /*0x7cac75*/
    case 0x180: /*0x7ca265*/
      sub_84FED0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (NiRenderedTexture *)v12); /*0x7ca3f2*/
      goto LABEL_251; /*0x7ca3f7*/
    case 0x181: /*0x7ca265*/
      sub_8500A0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (NiRenderedTexture *)v12); /*0x7ca406*/
      goto LABEL_251; /*0x7ca40b*/
    case 0x182: /*0x7ca265*/
      sub_850270((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (NiRenderedTexture *)v12); /*0x7ca41a*/
      goto LABEL_251; /*0x7ca41f*/
    case 0x183: /*0x7ca265*/
      sub_850440((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (NiRenderedTexture *)v12); /*0x7ca42e*/
      goto LABEL_251; /*0x7ca433*/
    case 0x184: /*0x7ca265*/
      sub_844C50((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (NiD3DPass *)v12); /*0x7cb120*/
      goto LABEL_251; /*0x7cb125*/
    case 0x185: /*0x7ca265*/
      sub_844E30((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (NiD3DPass *)v12); /*0x7cb134*/
      goto LABEL_251; /*0x7cb139*/
    case 0x186: /*0x7ca265*/
      sub_845010((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (NiD3DPass *)v12); /*0x7cb148*/
      goto LABEL_251; /*0x7cb14d*/
    case 0x187: /*0x7ca265*/
      sub_8451B0((NiTArray_NiD3DPass *)this, geometry, arg3, (int)arg4, (NiD3DPass *)v12); /*0x7cb15c*/
      goto LABEL_251; /*0x7cb161*/
    case 0x18A: /*0x7ca265*/
      sub_8453F0(this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12); /*0x7cb170*/
      goto LABEL_251; /*0x7cb175*/
    case 0x18B: /*0x7ca265*/
      sub_845870(this, (int)geometry, arg3, (int)arg4, (_DWORD *)v12); /*0x7cb184*/
      goto LABEL_251; /*0x7cb189*/
    case 0x18C: /*0x7ca265*/
      NiD3DPassArray_AddTextureEffectPass1x( /*0x7ca8de*/
        (NiTArray_NiD3DPass *)this,
        (NiGeometry *)geometry,
        arg3,
        (int)arg4,
        (BSShaderProperty *)v12);
      goto LABEL_251; /*0x7ca8e3*/
    case 0x18D: /*0x7ca265*/
      NiD3DPassArray_AddTextureEffectPass1xS( /*0x7ca8f2*/
        (NiTArray_NiD3DPass *)this,
        (NiGeometry *)geometry,
        arg3,
        (int)arg4,
        (BSShaderProperty *)v12);               // Verified (Oblivion): ShadowLightShader__SetupRenderPass dispatches selector 0x18D (BSSM_TEXEFFECT_S) to ShadowLightShader_BindTextureEffectSPass. Probable: _S is the controller/skinned-geometry variant; Oblivion selects it from passInfo bit 0x02, which SetupGeometry sets from geometry->m_controller, and Fallout's 1x homolog selects its alternate pass from abSkinned.
      goto LABEL_251; /*0x7ca8f7*/
    case 0x18E: /*0x7ca265*/
      NiD3DPassArray_AddTextureEffectPass2x( /*0x7ca906*/
        (NiTArray_NiD3DPass *)this,
        (NiGeometry *)geometry,
        arg3,
        (int)arg4,
        (BSShaderProperty *)v12);               // Verified (Oblivion): ShadowLightShader__SetupRenderPass dispatches selector 0x18E (BSSM_2x_TEXEFFECT) to ShadowLightShader_BindTextureEffect2xPass. Fallout's related 2x texture-effect pass uses selector ID 0x200; IDs are version-specific.
      goto LABEL_251; /*0x7ca90b*/
    case 0x18F: /*0x7ca265*/
      NiD3DPassArray_AddTextureEffectPass2xS( /*0x7ca91a*/
        (NiTArray_NiD3DPass *)this,
        (NiGeometry *)geometry,
        arg3,
        (int)arg4,
        (BSShaderProperty *)v12);               // Verified (Oblivion): ShadowLightShader__SetupRenderPass dispatches selector 0x18F (BSSM_2x_TEXEFFECT_S) to ShadowLightShader_BindTextureEffect2xSPass. Fallout uses 0x201 for its corresponding _S 2x pass; do not transfer selector IDs.
      goto LABEL_251; /*0x7ca91f*/
    case 0x190: /*0x7ca265*/
      sub_850610((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, v12); /*0x7ca3a2*/
      goto LABEL_251; /*0x7ca3a7*/
    case 0x191: /*0x7ca265*/
      sub_8506B0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, v12); /*0x7ca3b6*/
      goto LABEL_251; /*0x7ca3bb*/
    case 0x192: /*0x7ca265*/
      sub_8507A0((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, v12); /*0x7ca3ca*/
      goto LABEL_251; /*0x7ca3cf*/
    case 0x193: /*0x7ca265*/
      sub_850840((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, v12); /*0x7ca3de*/
      goto LABEL_251; /*0x7ca3e3*/
    case 0x19E: /*0x7ca265*/
      sub_850930((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (NiD3DPass *)v12); /*0x7cb1d4*/
      goto LABEL_251; /*0x7cb1d9*/
    case 0x19F: /*0x7ca265*/
      sub_850A40((NiTArray_NiD3DPass *)this, (int)geometry, arg3, (int)arg4, (NiD3DPass *)v12); /*0x7cb1e8*/
LABEL_251:
      if ( (unsigned int)(v27 - 0x34) <= 0x160 && (v27 < 0x160 || v27 > 0x167) && (v27 < 0x18A || v27 > 0x18F) ) /*0x7cb2d5*/
      {
        if ( sub_7C8510() ) /*0x7cb2db*/
        {
          if ( v26 || 1.0 != *(float *)(v12 + 0x20) ) /*0x7cb305*/
          {
            NiD3DPass_SetRenderState(*(NiD3DPass **)(4 * v27 + 0xB455A0), 0x1B, 1u, 0); /*0x7cb389*/
            (*((void (__thiscall **)(_DWORD, _DWORD))(*(this + 6))->__vftable + 2))( /*0x7cb39c*/
              *(this + 6),
              *(_DWORD *)&arg4->Name[4]);
            if ( v25 ) /*0x7cb3ac*/
            {
              NiD3DPass_SetRenderState(*(NiD3DPass **)(4 * v27 + 0xB455A0), 0xF, 1u, 0); /*0x7cb3b8*/
              NiD3DPass_SetRenderState( /*0x7cb3d2*/
                *(NiD3DPass **)(4 * v27 + 0xB455A0),
                0x18,
                *(unsigned __int8 *)(*(_DWORD *)&arg4->Name[4] + 0x1A),
                0);
              switch ( (*(unsigned __int16 *)(*(_DWORD *)&arg4->Name[4] + 0x18) >> 0xA) & 7 ) /*0x7cb3e9*/
              {
                case 0: /*0x7cb3e9*/
                case 1: /*0x7cb3e9*/
                case 2: /*0x7cb3e9*/
                case 3: /*0x7cb3e9*/
                case 4: /*0x7cb3e9*/
                case 5: /*0x7cb3e9*/
                case 6: /*0x7cb3e9*/
LABEL_270:
                  JUMPOUT(0x7CB41F); /*0x7cb41f*/
                default:
LABEL_264:
                  JUMPOUT(0x7CB41A); /*0x7cb41a*/
              }
            }
          }
          else
          {
            NiD3DPass_SetRenderState(*(NiD3DPass **)(4 * v27 + 0xB455A0), 0x1B, 0, 0); /*0x7cb314*/
            if ( v25 ) /*0x7cb327*/
            {
              NiD3DPass_SetRenderState(*(NiD3DPass **)(4 * v27 + 0xB455A0), 0xF, 1u, 0); /*0x7cb336*/
              NiD3DPass_SetRenderState( /*0x7cb350*/
                *(NiD3DPass **)(4 * v27 + 0xB455A0),
                0x18,
                *(unsigned __int8 *)(*(_DWORD *)&arg4->Name[4] + 0x1A),
                0);
              switch ( (*(unsigned __int16 *)(*(_DWORD *)&arg4->Name[4] + 0x18) >> 0xA) & 7 ) /*0x7cb36b*/
              {
                case 0: /*0x7cb36b*/
                case 1: /*0x7cb36b*/
                case 2: /*0x7cb36b*/
                case 3: /*0x7cb36b*/
                case 4: /*0x7cb36b*/
                case 5: /*0x7cb36b*/
                case 6: /*0x7cb36b*/
                  goto LABEL_270;
                default:
                  goto LABEL_264;
              }
            }
          }
          JUMPOUT(0x7CB42B); /*0x7cb42b*/
        }
        JUMPOUT(0x7CB44D); /*0x7cb44d*/
      }
      JUMPOUT(0x7CB4A5); /*0x7cb4a5*/
    default:
      return 0;
  }
  return 0; /*0x7cb892*/
}
