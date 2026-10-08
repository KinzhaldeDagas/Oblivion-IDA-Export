void __thiscall sub_8519B0(NiTArray_NiD3DPass *this, int a2, int a3, int a4, NiD3DTextureStage *a5, NiD3DPass *value)
{
  NiD3DTextureStage *v7; // ebp
  int v8; // eax
  NiTexture *Texture; // esi
  NiTexture *v10; // ebx
  unsigned int v11; // eax
  NiD3DTextureStage *v12; // esi
  int v13; // ebp
  int v14; // ebx
  NiTexture *v15; // esi
  NiD3DTextureStage *v16; // esi
  unsigned int v17; // eax
  double v18; // st6
  double v19; // st6
  double v20; // st7
  double v21; // st7
  double v22; // rtt
  double v23; // rt0
  double v24; // st6
  float v26; // [esp+14h] [ebp-30h]
  float v27; // [esp+18h] [ebp-2Ch]
  int v28; // [esp+1Ch] [ebp-28h]
  float v29; // [esp+1Ch] [ebp-28h]
  NiD3DPass *v30; // [esp+20h] [ebp-24h]
  NiD3DTextureStage *v32; // [esp+54h] [ebp+10h]
  unsigned int v33; // [esp+54h] [ebp+10h]

  v7 = **(NiD3DTextureStage ***)(unk_B45B64 + 0x24); /*0x8519f1*/
  v30 = (NiD3DPass *)unk_B45B64; /*0x8519f3*/
  v28 = *(unsigned __int8 *)(*(_DWORD *)&OB_RendererGlobalState_010201A0.pad_00D[0x12] + 9); /*0x8519ff*/
  v8 = (*(int (__thiscall **)(NiD3DTextureStage *, int))(a5->Stage + 0x88))(a5, v28); /*0x851a06*/
  Texture = v7->Texture; /*0x851a08*/
  v10 = (NiTexture *)v8; /*0x851a0b*/
  if ( Texture != (NiTexture *)v8 ) /*0x851a0f*/
  {
    if ( Texture ) /*0x851a13*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x851a19*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x851a2f*/
    }
    v7->Texture = v10; /*0x851a33*/
    if ( v10 ) /*0x851a36*/
      InterlockedIncrement((volatile LONG *)&v10->members); /*0x851a3c*/
  }
  if ( v7 ) /*0x851a44*/
  {
    if ( unk_B42CDD ) /*0x851a46*/
    {
      v11 = (*(int (__thiscall **)(NiD3DTextureStage *))(a5->Stage + 0x78))(a5); /*0x851a56*/
      NiD3DTextureStage_ApplyAddressModePreset(v7, v11); /*0x851a5b*/
    }
  }
  v12 = (NiD3DTextureStage *)v30->Stages.data->Texture; /*0x851a67*/
  v13 = v28; /*0x851a6c*/
  v32 = v12; /*0x851a79*/
  if ( (*(int (__thiscall **)(NiD3DTextureStage *, int))(a5->Stage + 0x8C))(a5, v28) ) /*0x851a7d*/
  {
    v14 = (*(int (__thiscall **)(NiD3DTextureStage *, int))(a5->Stage + 0x8C))(a5, v28); /*0x851a90*/
  }
  else
  {
    v14 = unk_B430F0; /*0x851a9b*/
    if ( ((int)a5[2].Texture & 0x80) == 0 ) /*0x851aa1*/
      v14 = LODWORD(flt_B430DC[0]); /*0x851aa3*/
  }
  v15 = v12->Texture; /*0x851aa9*/
  if ( v15 == (NiTexture *)v14 ) /*0x851aae*/
  {
    v16 = v32; /*0x851ae7*/
  }
  else
  {
    if ( v15 ) /*0x851ab2*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v15->members) ) /*0x851ab8*/
        v15->__vftable->super.super.Destructor((NiRefObject *)v15, 1); /*0x851ace*/
    }
    v16 = v32; /*0x851ad2*/
    v32->Texture = (NiTexture *)v14; /*0x851ad6*/
    if ( v14 ) /*0x851ad9*/
      InterlockedIncrement((volatile LONG *)(v14 + 4)); /*0x851adf*/
  }
  if ( v16 ) /*0x851aed*/
  {
    if ( unk_B42CDD ) /*0x851aef*/
    {
      v17 = (*(int (__thiscall **)(NiD3DTextureStage *))(a5->Stage + 0x78))(a5); /*0x851aff*/
      NiD3DTextureStage_ApplyAddressModePreset(v16, v17); /*0x851b04*/
    }
  }
  v18 = 0.0; /*0x851b0e*/
  if ( v28 == 4 ) /*0x851b10*/
  {
    v19 = 1.0; /*0x851b12*/
    v20 = 0.0; /*0x851b12*/
    v29 = 1.0; /*0x851b14*/
  }
  else
  {
    v29 = 0.0; /*0x851b1d*/
    if ( v13 == 3 ) /*0x851b21*/
    {
      v27 = 1.0; /*0x851b27*/
      v21 = 1.0; /*0x851b2b*/
      goto LABEL_28; /*0x851b2b*/
    }
    v19 = 1.0; /*0x851b3a*/
    v20 = 0.0; /*0x851b3a*/
  }
  v22 = v19; /*0x851b3f*/
  v18 = v20; /*0x851b3f*/
  v21 = v22; /*0x851b3f*/
  v27 = v18; /*0x851b41*/
  if ( v13 == 2 ) /*0x851b45*/
  {
    v23 = v18; /*0x851b47*/
    v24 = v21; /*0x851b47*/
    v21 = v23; /*0x851b47*/
    v26 = v24; /*0x851b49*/
    goto LABEL_34; /*0x851b49*/
  }
LABEL_28:
  v26 = v18; /*0x851b2d*/
  if ( v13 != 1 ) /*0x851b34*/
    v21 = v18; /*0x851b4f*/
LABEL_34:
  *(float *)&v33 = v21; /*0x851b51*/
  OB_BSShader_SetSharedFloat4Constant_010201A0(2u, v33, LODWORD(v26), LODWORD(v27), LODWORD(v29)); /*0x851b97*/
  OB_BSShader_SetSharedFloat4Constant_010201A0( /*0x851c29*/
    3u,
    COERCE_UNSIGNED_INT(0.0),
    COERCE_UNSIGNED_INT(0.0),
    COERCE_UNSIGNED_INT(0.0),
    COERCE_UNSIGNED_INT(0.0));
  if ( (_BYTE)value ) /*0x851c36*/
  {
    ++v30->RefCount; /*0x851c41*/
    value = v30; /*0x851c44*/
    NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x851c60*/
    if ( v30->RefCount-- == 1 ) /*0x851c68*/
      NiD3DPass_ReleaseToPool(v30); /*0x851c73*/
    ++*((_DWORD *)this + 0xE); /*0x851c78*/
  }
}
