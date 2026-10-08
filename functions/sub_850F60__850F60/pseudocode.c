void __thiscall sub_850F60(NiTArray_NiD3DPass *this, int a2, int a3, int a4, NiD3DTextureStage *a5, NiD3DPass *value)
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

  v7 = **(NiD3DTextureStage ***)(unk_B45B58 + 0x24); /*0x850fa1*/
  v30 = (NiD3DPass *)unk_B45B58; /*0x850fa3*/
  v28 = *(unsigned __int8 *)(*(_DWORD *)&OB_RendererGlobalState_010201A0[0x1F] + 9); /*0x850faf*/
  v8 = (*(int (__thiscall **)(NiD3DTextureStage *, int))(a5->Stage + 0x88))(a5, v28); /*0x850fb6*/
  Texture = v7->Texture; /*0x850fb8*/
  v10 = (NiTexture *)v8; /*0x850fbb*/
  if ( Texture != (NiTexture *)v8 ) /*0x850fbf*/
  {
    if ( Texture ) /*0x850fc3*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x850fc9*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x850fdf*/
    }
    v7->Texture = v10; /*0x850fe3*/
    if ( v10 ) /*0x850fe6*/
      InterlockedIncrement((volatile LONG *)&v10->members); /*0x850fec*/
  }
  if ( v7 ) /*0x850ff4*/
  {
    if ( unk_B42CDD ) /*0x850ff6*/
    {
      v11 = (*(int (__thiscall **)(NiD3DTextureStage *))(a5->Stage + 0x78))(a5); /*0x851006*/
      NiD3DTextureStage_ApplyAddressModePreset(v7, v11); /*0x85100b*/
    }
  }
  v12 = (NiD3DTextureStage *)v30->Stages.data->Texture; /*0x851017*/
  v13 = v28; /*0x85101c*/
  v32 = v12; /*0x851029*/
  if ( (*(int (__thiscall **)(NiD3DTextureStage *, int))(a5->Stage + 0x8C))(a5, v28) ) /*0x85102d*/
  {
    v14 = (*(int (__thiscall **)(NiD3DTextureStage *, int))(a5->Stage + 0x8C))(a5, v28); /*0x851040*/
  }
  else
  {
    v14 = unk_B430F0; /*0x85104b*/
    if ( ((int)a5[2].Texture & 0x80) == 0 ) /*0x851051*/
      v14 = LODWORD(flt_B430DC[0]); /*0x851053*/
  }
  v15 = v12->Texture; /*0x851059*/
  if ( v15 == (NiTexture *)v14 ) /*0x85105e*/
  {
    v16 = v32; /*0x851097*/
  }
  else
  {
    if ( v15 ) /*0x851062*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v15->members) ) /*0x851068*/
        v15->__vftable->super.super.Destructor((NiRefObject *)v15, 1); /*0x85107e*/
    }
    v16 = v32; /*0x851082*/
    v32->Texture = (NiTexture *)v14; /*0x851086*/
    if ( v14 ) /*0x851089*/
      InterlockedIncrement((volatile LONG *)(v14 + 4)); /*0x85108f*/
  }
  if ( v16 ) /*0x85109d*/
  {
    if ( unk_B42CDD ) /*0x85109f*/
    {
      v17 = (*(int (__thiscall **)(NiD3DTextureStage *))(a5->Stage + 0x78))(a5); /*0x8510af*/
      NiD3DTextureStage_ApplyAddressModePreset(v16, v17); /*0x8510b4*/
    }
  }
  v18 = 0.0; /*0x8510be*/
  if ( v28 == 4 ) /*0x8510c0*/
  {
    v19 = 1.0; /*0x8510c2*/
    v20 = 0.0; /*0x8510c2*/
    v29 = 1.0; /*0x8510c4*/
  }
  else
  {
    v29 = 0.0; /*0x8510cd*/
    if ( v13 == 3 ) /*0x8510d1*/
    {
      v27 = 1.0; /*0x8510d7*/
      v21 = 1.0; /*0x8510db*/
      goto LABEL_28; /*0x8510db*/
    }
    v19 = 1.0; /*0x8510ea*/
    v20 = 0.0; /*0x8510ea*/
  }
  v22 = v19; /*0x8510ef*/
  v18 = v20; /*0x8510ef*/
  v21 = v22; /*0x8510ef*/
  v27 = v18; /*0x8510f1*/
  if ( v13 == 2 ) /*0x8510f5*/
  {
    v23 = v18; /*0x8510f7*/
    v24 = v21; /*0x8510f7*/
    v21 = v23; /*0x8510f7*/
    v26 = v24; /*0x8510f9*/
    goto LABEL_34; /*0x8510f9*/
  }
LABEL_28:
  v26 = v18; /*0x8510dd*/
  if ( v13 != 1 ) /*0x8510e4*/
    v21 = v18; /*0x8510ff*/
LABEL_34:
  *(float *)&v33 = v21; /*0x851101*/
  OB_BSShader_SetSharedFloat4Constant_010201A0(2u, v33, LODWORD(v26), LODWORD(v27), LODWORD(v29)); /*0x851147*/
  OB_BSShader_SetSharedFloat4Constant_010201A0( /*0x8511d9*/
    3u,
    COERCE_UNSIGNED_INT(0.0),
    COERCE_UNSIGNED_INT(0.0),
    COERCE_UNSIGNED_INT(0.0),
    COERCE_UNSIGNED_INT(0.0));
  if ( (_BYTE)value ) /*0x8511e6*/
  {
    ++v30->RefCount; /*0x8511f1*/
    value = v30; /*0x8511f4*/
    NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x851210*/
    if ( v30->RefCount-- == 1 ) /*0x851218*/
      NiD3DPass_ReleaseToPool(v30); /*0x851223*/
    ++*((_DWORD *)this + 0xE); /*0x851228*/
  }
}
