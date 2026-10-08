void __thiscall sub_851250(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DTextureStage *a4, int a5, NiD3DPass *value)
{
  NiD3DPass *v6; // edi
  NiD3DTextureStage *Stage; // esi
  int v8; // eax
  NiTexture *Texture; // esi
  NiTexture *v10; // ebp
  NiD3DTextureStage *v11; // esi
  unsigned int v12; // eax
  NiD3DTextureStage *v13; // esi
  int v14; // eax
  NiTexture *v15; // esi
  NiTexture *v16; // ebp
  NiD3DTextureStage *v17; // esi
  unsigned int v18; // eax
  int v19; // esi
  double v20; // st6
  double v21; // st6
  double v22; // st7
  double v23; // st7
  double v24; // rtt
  double v25; // rt0
  double v26; // st6
  int v28; // [esp+14h] [ebp-28h]
  float v29; // [esp+14h] [ebp-28h]
  float v30; // [esp+18h] [ebp-24h]
  NiD3DTextureStage *v32; // [esp+48h] [ebp+Ch]
  NiD3DTextureStage *v33; // [esp+48h] [ebp+Ch]
  unsigned int v34; // [esp+48h] [ebp+Ch]
  float v35; // [esp+4Ch] [ebp+10h]

  v6 = (NiD3DPass *)unk_B45B54; /*0x851282*/
  sub_848DA0((float *)a4[1].Texture); /*0x851289*/
  Stage = (NiD3DTextureStage *)v6->Stages.data->Stage; /*0x85129b*/
  v28 = *(unsigned __int8 *)(*(_DWORD *)&OB_RendererGlobalState_010201A0.pad_00D[0x12] + 9); /*0x8512a3*/
  v32 = Stage; /*0x8512b0*/
  v8 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a5 + 0x88))(a5, v28); /*0x8512b4*/
  Texture = Stage->Texture; /*0x8512b6*/
  v10 = (NiTexture *)v8; /*0x8512b9*/
  if ( Texture == (NiTexture *)v8 ) /*0x8512bd*/
  {
    v11 = v32; /*0x8512f6*/
  }
  else
  {
    if ( Texture ) /*0x8512c1*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x8512c7*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x8512dd*/
    }
    v11 = v32; /*0x8512e1*/
    v32->Texture = v10; /*0x8512e5*/
    if ( v10 ) /*0x8512e8*/
      InterlockedIncrement((volatile LONG *)&v10->members); /*0x8512ee*/
  }
  if ( v11 ) /*0x8512fc*/
  {
    if ( unk_B42CDD ) /*0x8512fe*/
    {
      v12 = (*(int (__thiscall **)(int))(*(_DWORD *)a5 + 0x78))(a5); /*0x85130e*/
      NiD3DTextureStage_ApplyAddressModePreset(v11, v12); /*0x851313*/
    }
  }
  v13 = (NiD3DTextureStage *)v6->Stages.data->Texture; /*0x85131b*/
  v33 = v13; /*0x85132d*/
  v14 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a5 + 0x90))(a5, v28); /*0x851331*/
  v15 = v13->Texture; /*0x851333*/
  v16 = (NiTexture *)v14; /*0x851336*/
  if ( v15 == (NiTexture *)v14 ) /*0x85133a*/
  {
    v17 = v33; /*0x851373*/
  }
  else
  {
    if ( v15 ) /*0x85133e*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v15->members) ) /*0x851344*/
        v15->__vftable->super.super.Destructor((NiRefObject *)v15, 1); /*0x85135a*/
    }
    v17 = v33; /*0x85135e*/
    v33->Texture = v16; /*0x851362*/
    if ( v16 ) /*0x851365*/
      InterlockedIncrement((volatile LONG *)&v16->members); /*0x85136b*/
  }
  if ( v17 ) /*0x851379*/
  {
    if ( unk_B42CDD ) /*0x85137b*/
    {
      v18 = (*(int (__thiscall **)(int))(*(_DWORD *)a5 + 0x78))(a5); /*0x85138b*/
      NiD3DTextureStage_ApplyAddressModePreset(v17, v18); /*0x851390*/
    }
  }
  v19 = v28; /*0x851395*/
  v20 = 0.0; /*0x85139e*/
  if ( v28 == 4 ) /*0x8513a0*/
  {
    v21 = 1.0; /*0x8513a2*/
    v22 = 0.0; /*0x8513a2*/
    v30 = 1.0; /*0x8513a4*/
  }
  else
  {
    v30 = 0.0; /*0x8513ad*/
    if ( v28 == 3 ) /*0x8513b1*/
    {
      v29 = 1.0; /*0x8513b7*/
      v23 = 1.0; /*0x8513bb*/
      goto LABEL_25; /*0x8513bb*/
    }
    v21 = 1.0; /*0x8513ca*/
    v22 = 0.0; /*0x8513ca*/
  }
  v24 = v21; /*0x8513cf*/
  v20 = v22; /*0x8513cf*/
  v23 = v24; /*0x8513cf*/
  v29 = v20; /*0x8513d1*/
  if ( v19 == 2 ) /*0x8513d5*/
  {
    v25 = v20; /*0x8513d7*/
    v26 = v23; /*0x8513d7*/
    v23 = v25; /*0x8513d7*/
    v35 = v26; /*0x8513d9*/
    goto LABEL_31; /*0x8513d9*/
  }
LABEL_25:
  v35 = v20; /*0x8513bd*/
  if ( v19 != 1 ) /*0x8513c4*/
    v23 = v20; /*0x8513df*/
LABEL_31:
  *(float *)&v34 = v23; /*0x8513e1*/
  OB_BSShader_SetSharedFloat4Constant_010201A0(2u, v34, LODWORD(v35), LODWORD(v29), LODWORD(v30)); /*0x851427*/
  OB_BSShader_SetSharedFloat4Constant_010201A0( /*0x8514b9*/
    3u,
    COERCE_UNSIGNED_INT(0.0),
    COERCE_UNSIGNED_INT(0.0),
    COERCE_UNSIGNED_INT(0.0),
    COERCE_UNSIGNED_INT(0.0));
  if ( (_BYTE)value ) /*0x8514c6*/
  {
    ++v6->RefCount; /*0x8514cd*/
    value = v6; /*0x8514d0*/
    NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x8514ec*/
    if ( v6->RefCount-- == 1 ) /*0x8514f4*/
      NiD3DPass_ReleaseToPool(v6); /*0x8514ff*/
    ++*((_DWORD *)this + 0xE); /*0x851504*/
  }
}
