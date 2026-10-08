int __thiscall sub_7BD3D0(SkyShader *this, int a2, int a3, int a4, NiD3DPass *a5, int a6, int a7, int a8)
{
  double v9; // st7
  NiD3DPass *v10; // eax
  UInt32 StageCount; // ebx
  int v12; // ecx
  int v13; // ebp
  float v14; // eax
  UInt32 Unk070; // esi
  int v16; // ecx
  NiD3DPixelShader *v17; // eax
  NiD3DPass *v18; // ecx
  NiD3DPass *v19; // ecx
  int v20; // eax
  int v21; // edx
  int v22; // eax
  int v23; // ecx
  int v24; // edx
  int v25; // eax
  int v26; // ecx
  int v27; // edx
  int v28; // eax
  int v29; // ecx
  int v30; // edx
  int v31; // eax
  NiDX9RenderState *v32; // eax
  char v35; // [esp+17h] [ebp-31h]
  int v36; // [esp+1Ch] [ebp-2Ch]
  int v37; // [esp+20h] [ebp-28h]
  int v38; // [esp+24h] [ebp-24h]
  int v39; // [esp+28h] [ebp-20h]

  this->super.__vftable->super.RemoveShaderPassesMaybe((NiD3DShader *)this); /*0x7bd401*/
  *(float *)&v37 = flt_B46638[8] - MEMORY[0xB3F92C]; /*0x7bd42f*/
  *(float *)&v38 = flt_B46638[9] - unk_B3F930; /*0x7bd441*/
  *(float *)&v39 = flt_B46638[0xA] - unk_B3F934; /*0x7bd44f*/
  flt_B43168 = *(float *)&v37; /*0x7bd463*/
  flt_B4316C = *(float *)&v38; /*0x7bd475*/
  v9 = 0.0; /*0x7bd483*/
  flt_B43170 = *(float *)&v39; /*0x7bd485*/
  v10 = a5; /*0x7bd48a*/
  flt_B43174 = 0.0; /*0x7bd496*/
  StageCount = v10->StageCount; /*0x7bd49c*/
  v12 = *(_DWORD *)(StageCount + 0x88); /*0x7bd49f*/
  if ( v12 == 2 || v12 == 4 ) /*0x7bd4b0*/
    v13 = 0; /*0x7bd4b2*/
  else
    v13 = **((_DWORD **)v10->Stages._vtbl + 8); /*0x7bd4b9*/
  v36 = *(_DWORD *)&v10->Name[4]; /*0x7bd4be*/
  v14 = unk_B42E90; /*0x7bd4c2*/
  Unk070 = 0; /*0x7bd4c7*/
  if ( LODWORD(unk_B42E90) == 0x17D || (v35 = 0, LODWORD(v14) == 0x19C) ) /*0x7bd4da*/
    v35 = 1; /*0x7bd4dc*/
  if ( LODWORD(v14) == 0x19D && v12 != 2 ) /*0x7bd4eb*/
  {
    LOBYTE(a5) = 1; /*0x7bd4ef*/
    if ( v12 ) /*0x7bd4f4*/
    {
      v16 = v12 - 3; /*0x7bd4f6*/
      if ( v16 ) /*0x7bd4f9*/
      {
        if ( v16 == 1 ) /*0x7bd4fe*/
          Unk070 = this->unkAC[3]; /*0x7bd504*/
      }
      else
      {
        Unk070 = this->unkAC[5]; /*0x7bd524*/
      }
    }
    else
    {
      Unk070 = this->unkAC[4]; /*0x7bd52f*/
    }
    goto LABEL_42; /*0x7bd50a*/
  }
  LOBYTE(a5) = 0; /*0x7bd512*/
  if ( LODWORD(v14) == 3 ) /*0x7bd517*/
  {
    Unk070 = this->unkAC[2]; /*0x7bd519*/
    goto LABEL_42; /*0x7bd51f*/
  }
  if ( v12 == 1 ) /*0x7bd53d*/
  {
    Unk070 = this->unkAC[0]; /*0x7bd53f*/
    goto LABEL_42; /*0x7bd545*/
  }
  Unk070 = this->super.member.Unk070; /*0x7bd54f*/
  if ( v12 == 5 ) /*0x7bd552*/
  {
    NiD3DPass_SetVertexShader((NiD3DPass *)Unk070, this->Vertex[3]); /*0x7bd55d*/
    v17 = this->Pixel[4]; /*0x7bd562*/
LABEL_29:
    NiD3DPass_SetPixelShader((NiD3DPass *)this->super.member.Unk070, v17); /*0x7bd602*/
    goto LABEL_30; /*0x7bd606*/
  }
  if ( v12 != 3 ) /*0x7bd570*/
  {
    v19 = (NiD3DPass *)this->super.member.Unk070; /*0x7bd5db*/
    if ( v13 ) /*0x7bd5dd*/
    {
      NiD3DPass_SetVertexShader(v19, this->Vertex[1]); /*0x7bd5e6*/
      v17 = this->Pixel[0]; /*0x7bd5eb*/
    }
    else
    {
      NiD3DPass_SetVertexShader(v19, this->Vertex[0]); /*0x7bd5f7*/
      v17 = this->Pixel[2]; /*0x7bd5fc*/
    }
    goto LABEL_29; /*0x7bd5f1*/
  }
  v18 = (NiD3DPass *)this->super.member.Unk070; /*0x7bd583*/
  this->unkDC[0] = *(UInt32 *)(4 * *(unsigned __int16 *)(StageCount + 0x84) + 0xB4315C); /*0x7bd585*/
  if ( !MEMORY[0xB43164] ) /*0x7bd592*/
  {
    NiD3DPass_SetVertexShader(v18, this->Vertex[5]); /*0x7bd5cc*/
    v17 = this->Pixel[0]; /*0x7bd5d1*/
    goto LABEL_29; /*0x7bd5d7*/
  }
  NiD3DPass_SetVertexShader(v18, this->Vertex[6]); /*0x7bd59b*/
  NiD3DPass_SetPixelShader((NiD3DPass *)this->super.member.Unk070, this->Pixel[1]); /*0x7bd5aa*/
  flt_B43170 = -unk_B4314C / dbl_A49318; /*0x7bd5bd*/
LABEL_30:
  if ( !*(_DWORD *)(Unk070 + 0x30) ) /*0x7bd60b*/
    *(_DWORD *)(Unk070 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7bd616*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(Unk070 + 0x30), 0x1B, 1, 0); /*0x7bd622*/
  v20 = *(_DWORD *)(StageCount + 0x88); /*0x7bd627*/
  if ( v20 == 5 || !v20 || v20 == 6 ) /*0x7bd639*/
  {
    if ( !*(_DWORD *)(Unk070 + 0x30) ) /*0x7bd657*/
      *(_DWORD *)(Unk070 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7bd662*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(Unk070 + 0x30), 0x13, 5, 0); /*0x7bd66e*/
    if ( !*(_DWORD *)(Unk070 + 0x30) ) /*0x7bd673*/
      *(_DWORD *)(Unk070 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7bd67e*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(Unk070 + 0x30), 0x14, 2, 0); /*0x7bd68a*/
  }
  else
  {
    NiD3DPass_SetRenderState((NiD3DPass *)Unk070, 0x13, 5u, 0); /*0x7bd643*/
    NiD3DPass_SetRenderState((NiD3DPass *)Unk070, 0x14, 6u, 0); /*0x7bd650*/
  }
  v9 = 0.0; /*0x7bd68f*/
LABEL_42:
  if ( *(_DWORD *)(StageCount + 0x88) == 3 ) /*0x7bd698*/
    this->unkDC[1] = *(UInt32 *)(StageCount + 0x80); /*0x7bd6a8*/
  else
    *(float *)&this->unkDC[1] = v9; /*0x7bd6b0*/
  if ( OB_RendererGlobalState_010201A0[0x1D7] ) /*0x7bd6b6*/
    *(float *)&this->unkDC[2] = flt_B2C73C /*0x7bd6ed*/
                              + (flt_B2C740 - flt_B2C73C) * ((*(float *)(StageCount + 0x80) - 0.0) / (1.0 - 0.0));
  switch ( *(_DWORD *)(StageCount + 0x88) ) /*0x7bd709*/
  {
    case 0: /*0x7bd709*/
    case 1: /*0x7bd709*/
    case 3: /*0x7bd709*/
    case 5: /*0x7bd709*/
    case 6: /*0x7bd709*/
    case 7: /*0x7bd709*/
      LODWORD(qword_B43178[0]) = *(_DWORD *)(StageCount + 0x6C); /*0x7bd715*/
      HIDWORD(qword_B43178[0]) = *(_DWORD *)(StageCount + 0x70); /*0x7bd71d*/
      LODWORD(qword_B43178[1]) = *(_DWORD *)(StageCount + 0x74); /*0x7bd726*/
      HIDWORD(qword_B43178[1]) = *(_DWORD *)(StageCount + 0x78); /*0x7bd72f*/
      break; /*0x7bd734*/
    case 2: /*0x7bd709*/
      v21 = HIDWORD(qword_B43178[6]); /*0x7bd741*/
      v22 = qword_B43178[7]; /*0x7bd747*/
      LODWORD(qword_B43178[0]) = qword_B43178[6]; /*0x7bd74c*/
      v23 = HIDWORD(qword_B43178[7]); /*0x7bd752*/
      HIDWORD(qword_B43178[0]) = v21; /*0x7bd758*/
      v24 = qword_B43178[8]; /*0x7bd75e*/
      LODWORD(qword_B43178[1]) = v22; /*0x7bd764*/
      v25 = HIDWORD(qword_B43178[8]); /*0x7bd769*/
      HIDWORD(qword_B43178[1]) = v23; /*0x7bd76e*/
      v26 = qword_B43178[9]; /*0x7bd774*/
      LODWORD(qword_B43178[2]) = v24; /*0x7bd77a*/
      v27 = HIDWORD(qword_B43178[9]); /*0x7bd780*/
      HIDWORD(qword_B43178[2]) = v25; /*0x7bd786*/
      v28 = qword_B43178[0xA]; /*0x7bd78b*/
      LODWORD(qword_B43178[3]) = v26; /*0x7bd790*/
      v29 = HIDWORD(qword_B43178[0xA]); /*0x7bd796*/
      HIDWORD(qword_B43178[3]) = v27; /*0x7bd79c*/
      v30 = qword_B43178[0xB]; /*0x7bd7a2*/
      LODWORD(qword_B43178[4]) = v28; /*0x7bd7a8*/
      v31 = HIDWORD(qword_B43178[0xB]); /*0x7bd7ad*/
      HIDWORD(qword_B43178[4]) = v29; /*0x7bd7b2*/
      LODWORD(qword_B43178[5]) = v30; /*0x7bd7b8*/
      HIDWORD(qword_B43178[5]) = v31; /*0x7bd7be*/
      break; /*0x7bd7c3*/
    default:
      *(float *)qword_B43178 = v9; /*0x7bd7c5*/
      *((float *)qword_B43178 + 1) = v9; /*0x7bd7cb*/
      *(float *)&qword_B43178[1] = v9; /*0x7bd7d1*/
      *((float *)&qword_B43178[1] + 1) = 1.0; /*0x7bd7d9*/
      *(float *)&qword_B43178[2] = v9; /*0x7bd7df*/
      *((float *)&qword_B43178[2] + 1) = v9; /*0x7bd7e5*/
      *(float *)&qword_B43178[3] = v9; /*0x7bd7eb*/
      *(float *)&qword_B43178[4] = v9; /*0x7bd7f1*/
      *((float *)&qword_B43178[4] + 1) = v9; /*0x7bd7f7*/
      *(float *)&qword_B43178[5] = v9; /*0x7bd7fd*/
      break; /*0x7bd7fd*/
  }
  this->super.__vftable->Unk094((BSShader *)this, Unk070); /*0x7bd80e*/
  if ( v13 ) /*0x7bd812*/
  {
    NiD3DTextureStage_SetTexture(**(NiD3DTextureStage ***)(Unk070 + 0x24), *(NiRenderedTexture **)(v13 + 8)); /*0x7bd81d*/
    NiD3DTextureStage_ApplyFilterPreset(**(NiD3DTextureStage ***)(Unk070 + 0x24), *(_BYTE *)(v13 + 5) & 0xF); /*0x7bd82f*/
    NiD3DTextureStage_ApplyAddressModePreset( /*0x7bd844*/
      **(NiD3DTextureStage ***)(Unk070 + 0x24),
      (*(unsigned __int16 *)(v13 + 4) >> 0xC) & 3);
    if ( !(_BYTE)a5 && *(_DWORD *)(StageCount + 0x88) == 3 ) /*0x7bd857*/
    {
      NiD3DTextureStage_SetTexture( /*0x7bd863*/
        *(NiD3DTextureStage **)(*(_DWORD *)(Unk070 + 0x24) + 4),
        *(NiRenderedTexture **)(StageCount + 0x7C));
      NiD3DTextureStage_ApplyFilterPreset( /*0x7bd876*/
        *(NiD3DTextureStage **)(*(_DWORD *)(Unk070 + 0x24) + 4),
        *(_BYTE *)(v13 + 5) & 0xF);
      NiD3DTextureStage_ApplyAddressModePreset( /*0x7bd88c*/
        *(NiD3DTextureStage **)(*(_DWORD *)(Unk070 + 0x24) + 4),
        (*(unsigned __int16 *)(v13 + 4) >> 0xC) & 3);
    }
  }
  if ( v35 ) /*0x7bd896*/
  {
    v32 = sub_75F9D0(); /*0x7bd89a*/
    ((void (__thiscall *)(NiDX9RenderState *, int))v32->vtbl->SetAlpha)(v32, v36); /*0x7bd8ab*/
  }
  a5 = (NiD3DPass *)Unk070; /*0x7bd8af*/
  if ( Unk070 ) /*0x7bd8b8*/
    ++*(_DWORD *)(Unk070 + 0x60); /*0x7bd8ba*/
  NiTArray_NiD3DPass_SetAt(&this->super.member.super.Passes, this->super.member.super.PassCount, &a5); /*0x7bd8d1*/
  if ( Unk070 ) /*0x7bd8df*/
  {
    if ( (*(_DWORD *)(Unk070 + 0x60))-- == 1 ) /*0x7bd8e1*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)Unk070); /*0x7bd8e8*/
  }
  ++this->super.member.super.PassCount; /*0x7bd8ed*/
  return 0; /*0x7bd8f2*/
}
