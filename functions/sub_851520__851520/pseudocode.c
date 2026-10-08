void __thiscall sub_851520(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DTextureStage *a4, int a5, NiD3DPass *value)
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

  v6 = (NiD3DPass *)unk_B45B60; /*0x851552*/
  sub_848DA0((float *)a4[1].Texture); /*0x851559*/
  Stage = (NiD3DTextureStage *)v6->Stages.data->Stage; /*0x85156b*/
  v28 = *(unsigned __int8 *)(*(_DWORD *)&OB_RendererGlobalState_010201A0.pad_00D[0x12] + 9); /*0x851573*/
  v32 = Stage; /*0x851580*/
  v8 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a5 + 0x88))(a5, v28); /*0x851584*/
  Texture = Stage->Texture; /*0x851586*/
  v10 = (NiTexture *)v8; /*0x851589*/
  if ( Texture == (NiTexture *)v8 ) /*0x85158d*/
  {
    v11 = v32; /*0x8515c6*/
  }
  else
  {
    if ( Texture ) /*0x851591*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x851597*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x8515ad*/
    }
    v11 = v32; /*0x8515b1*/
    v32->Texture = v10; /*0x8515b5*/
    if ( v10 ) /*0x8515b8*/
      InterlockedIncrement((volatile LONG *)&v10->members); /*0x8515be*/
  }
  if ( v11 ) /*0x8515cc*/
  {
    if ( unk_B42CDD ) /*0x8515ce*/
    {
      v12 = (*(int (__thiscall **)(int))(*(_DWORD *)a5 + 0x78))(a5); /*0x8515de*/
      NiD3DTextureStage_ApplyAddressModePreset(v11, v12); /*0x8515e3*/
    }
  }
  v13 = (NiD3DTextureStage *)v6->Stages.data->Texture; /*0x8515eb*/
  v33 = v13; /*0x8515fd*/
  v14 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a5 + 0x90))(a5, v28); /*0x851601*/
  v15 = v13->Texture; /*0x851603*/
  v16 = (NiTexture *)v14; /*0x851606*/
  if ( v15 == (NiTexture *)v14 ) /*0x85160a*/
  {
    v17 = v33; /*0x851643*/
  }
  else
  {
    if ( v15 ) /*0x85160e*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v15->members) ) /*0x851614*/
        v15->__vftable->super.super.Destructor((NiRefObject *)v15, 1); /*0x85162a*/
    }
    v17 = v33; /*0x85162e*/
    v33->Texture = v16; /*0x851632*/
    if ( v16 ) /*0x851635*/
      InterlockedIncrement((volatile LONG *)&v16->members); /*0x85163b*/
  }
  if ( v17 ) /*0x851649*/
  {
    if ( unk_B42CDD ) /*0x85164b*/
    {
      v18 = (*(int (__thiscall **)(int))(*(_DWORD *)a5 + 0x78))(a5); /*0x85165b*/
      NiD3DTextureStage_ApplyAddressModePreset(v17, v18); /*0x851660*/
    }
  }
  v19 = v28; /*0x851665*/
  v20 = 0.0; /*0x85166e*/
  if ( v28 == 4 ) /*0x851670*/
  {
    v21 = 1.0; /*0x851672*/
    v22 = 0.0; /*0x851672*/
    v30 = 1.0; /*0x851674*/
  }
  else
  {
    v30 = 0.0; /*0x85167d*/
    if ( v28 == 3 ) /*0x851681*/
    {
      v29 = 1.0; /*0x851687*/
      v23 = 1.0; /*0x85168b*/
      goto LABEL_25; /*0x85168b*/
    }
    v21 = 1.0; /*0x85169a*/
    v22 = 0.0; /*0x85169a*/
  }
  v24 = v21; /*0x85169f*/
  v20 = v22; /*0x85169f*/
  v23 = v24; /*0x85169f*/
  v29 = v20; /*0x8516a1*/
  if ( v19 == 2 ) /*0x8516a5*/
  {
    v25 = v20; /*0x8516a7*/
    v26 = v23; /*0x8516a7*/
    v23 = v25; /*0x8516a7*/
    v35 = v26; /*0x8516a9*/
    goto LABEL_31; /*0x8516a9*/
  }
LABEL_25:
  v35 = v20; /*0x85168d*/
  if ( v19 != 1 ) /*0x851694*/
    v23 = v20; /*0x8516af*/
LABEL_31:
  *(float *)&v34 = v23; /*0x8516b1*/
  OB_BSShader_SetSharedFloat4Constant_010201A0(2u, v34, LODWORD(v35), LODWORD(v29), LODWORD(v30)); /*0x8516f7*/
  OB_BSShader_SetSharedFloat4Constant_010201A0( /*0x851789*/
    3u,
    COERCE_UNSIGNED_INT(0.0),
    COERCE_UNSIGNED_INT(0.0),
    COERCE_UNSIGNED_INT(0.0),
    COERCE_UNSIGNED_INT(0.0));
  if ( (_BYTE)value ) /*0x851796*/
  {
    ++v6->RefCount; /*0x85179d*/
    value = v6; /*0x8517a0*/
    NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x8517bc*/
    if ( v6->RefCount-- == 1 ) /*0x8517c4*/
      NiD3DPass_ReleaseToPool(v6); /*0x8517cf*/
    ++*((_DWORD *)this + 0xE); /*0x8517d4*/
  }
}
