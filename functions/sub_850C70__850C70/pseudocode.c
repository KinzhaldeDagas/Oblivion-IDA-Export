void __thiscall sub_850C70(NiTArray_NiD3DPass *this, int a2, int a3, int a4, NiD3DTextureStage *a5, NiD3DPass *value)
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

  v7 = **(NiD3DTextureStage ***)(unk_B456C0 + 0x24); /*0x850cb1*/
  v30 = (NiD3DPass *)unk_B456C0; /*0x850cb3*/
  v28 = *(unsigned __int8 *)(*(_DWORD *)&OB_RendererGlobalState_010201A0[0x1F] + 9); /*0x850cbf*/
  v8 = (*(int (__thiscall **)(NiD3DTextureStage *, int))(a5->Stage + 0x88))(a5, v28); /*0x850cc6*/
  Texture = v7->Texture; /*0x850cc8*/
  v10 = (NiTexture *)v8; /*0x850ccb*/
  if ( Texture != (NiTexture *)v8 ) /*0x850ccf*/
  {
    if ( Texture ) /*0x850cd3*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x850cd9*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x850cef*/
    }
    v7->Texture = v10; /*0x850cf3*/
    if ( v10 ) /*0x850cf6*/
      InterlockedIncrement((volatile LONG *)&v10->members); /*0x850cfc*/
  }
  if ( v7 ) /*0x850d04*/
  {
    if ( unk_B42CDD ) /*0x850d06*/
    {
      v11 = (*(int (__thiscall **)(NiD3DTextureStage *))(a5->Stage + 0x78))(a5); /*0x850d16*/
      NiD3DTextureStage_ApplyAddressModePreset(v7, v11); /*0x850d1b*/
    }
  }
  v12 = (NiD3DTextureStage *)v30->Stages.data->Texture; /*0x850d27*/
  v13 = v28; /*0x850d2c*/
  v32 = v12; /*0x850d39*/
  if ( (*(int (__thiscall **)(NiD3DTextureStage *, int))(a5->Stage + 0x8C))(a5, v28) ) /*0x850d3d*/
  {
    v14 = (*(int (__thiscall **)(NiD3DTextureStage *, int))(a5->Stage + 0x8C))(a5, v28); /*0x850d50*/
  }
  else
  {
    v14 = unk_B430F0; /*0x850d5b*/
    if ( ((int)a5[2].Texture & 0x80) == 0 ) /*0x850d61*/
      v14 = LODWORD(flt_B430DC[0]); /*0x850d63*/
  }
  v15 = v12->Texture; /*0x850d69*/
  if ( v15 == (NiTexture *)v14 ) /*0x850d6e*/
  {
    v16 = v32; /*0x850da7*/
  }
  else
  {
    if ( v15 ) /*0x850d72*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v15->members) ) /*0x850d78*/
        v15->__vftable->super.super.Destructor((NiRefObject *)v15, 1); /*0x850d8e*/
    }
    v16 = v32; /*0x850d92*/
    v32->Texture = (NiTexture *)v14; /*0x850d96*/
    if ( v14 ) /*0x850d99*/
      InterlockedIncrement((volatile LONG *)(v14 + 4)); /*0x850d9f*/
  }
  if ( v16 ) /*0x850dad*/
  {
    if ( unk_B42CDD ) /*0x850daf*/
    {
      v17 = (*(int (__thiscall **)(NiD3DTextureStage *))(a5->Stage + 0x78))(a5); /*0x850dbf*/
      NiD3DTextureStage_ApplyAddressModePreset(v16, v17); /*0x850dc4*/
    }
  }
  v18 = 0.0; /*0x850dce*/
  if ( v28 == 4 ) /*0x850dd0*/
  {
    v19 = 1.0; /*0x850dd2*/
    v20 = 0.0; /*0x850dd2*/
    v29 = 1.0; /*0x850dd4*/
  }
  else
  {
    v29 = 0.0; /*0x850ddd*/
    if ( v13 == 3 ) /*0x850de1*/
    {
      v27 = 1.0; /*0x850de7*/
      v21 = 1.0; /*0x850deb*/
      goto LABEL_28; /*0x850deb*/
    }
    v19 = 1.0; /*0x850dfa*/
    v20 = 0.0; /*0x850dfa*/
  }
  v22 = v19; /*0x850dff*/
  v18 = v20; /*0x850dff*/
  v21 = v22; /*0x850dff*/
  v27 = v18; /*0x850e01*/
  if ( v13 == 2 ) /*0x850e05*/
  {
    v23 = v18; /*0x850e07*/
    v24 = v21; /*0x850e07*/
    v21 = v23; /*0x850e07*/
    v26 = v24; /*0x850e09*/
    goto LABEL_34; /*0x850e09*/
  }
LABEL_28:
  v26 = v18; /*0x850ded*/
  if ( v13 != 1 ) /*0x850df4*/
    v21 = v18; /*0x850e0f*/
LABEL_34:
  *(float *)&v33 = v21; /*0x850e11*/
  OB_BSShader_SetSharedFloat4Constant_010201A0(2u, v33, LODWORD(v26), LODWORD(v27), LODWORD(v29)); /*0x850e57*/
  OB_BSShader_SetSharedFloat4Constant_010201A0( /*0x850ee9*/
    3u,
    COERCE_UNSIGNED_INT(0.0),
    COERCE_UNSIGNED_INT(0.0),
    COERCE_UNSIGNED_INT(0.0),
    COERCE_UNSIGNED_INT(0.0));
  if ( (_BYTE)value ) /*0x850ef6*/
  {
    ++v30->RefCount; /*0x850f01*/
    value = v30; /*0x850f04*/
    NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x850f20*/
    if ( v30->RefCount-- == 1 ) /*0x850f28*/
      NiD3DPass_ReleaseToPool(v30); /*0x850f33*/
    ++*((_DWORD *)this + 0xE); /*0x850f38*/
  }
}
