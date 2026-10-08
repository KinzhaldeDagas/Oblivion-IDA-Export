void __thiscall sub_846250(NiTArray_NiD3DPass *this, int a2, int a3, int a4, _DWORD *a5, NiD3DPass *value)
{
  NiD3DPass *v6; // edi
  int v8; // ebp
  int v9; // eax
  int v10; // ebx
  NiTexture *Texture; // ebp
  int v12; // eax
  UInt32 m_uiRefCount; // ebx
  UInt32 Unk08; // esi
  int v15; // ebx
  float *v16; // esi
  float v17; // ebp
  UInt32 Stage; // ebx
  volatile LONG *v19; // esi
  volatile LONG *v20; // ebp
  int v21; // esi
  double v22; // st6
  double v23; // st6
  double v24; // st7
  double v25; // st7
  double v26; // rtt
  double v27; // rt0
  double v28; // st6
  int v31; // [esp+18h] [ebp-28h]
  float v32; // [esp+18h] [ebp-28h]
  float v33; // [esp+1Ch] [ebp-24h]
  float v34; // [esp+20h] [ebp-20h]
  int v35; // [esp+50h] [ebp+10h]
  int v36; // [esp+50h] [ebp+10h]
  unsigned int v37; // [esp+50h] [ebp+10h]

  v6 = (NiD3DPass *)unk_B456C4; /*0x846284*/
  v8 = **(_DWORD **)(unk_B456C4 + 0x24); /*0x846293*/
  v31 = *(unsigned __int8 *)(*(_DWORD *)&OB_RendererGlobalState_010201A0.pad_00D[0x12] + 9); /*0x846295*/
  v9 = (*(int (__thiscall **)(_DWORD *, int))(*a5 + 0x88))(a5, v31); /*0x8462a2*/
  v10 = *(_DWORD *)(v8 + 4); /*0x8462a4*/
  v35 = v9; /*0x8462a9*/
  if ( v10 != v9 ) /*0x8462ad*/
  {
    if ( v10 ) /*0x8462b1*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x8462b7*/
        (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x8462cd*/
      v9 = v35; /*0x8462cf*/
    }
    *(_DWORD *)(v8 + 4) = v9; /*0x8462d5*/
    if ( v9 ) /*0x8462d8*/
      InterlockedIncrement((volatile LONG *)(v9 + 4)); /*0x8462de*/
  }
  sub_848FA0((_DWORD **)v8, (int)a5); /*0x8462ec*/
  Texture = v6->Stages.data->Texture; /*0x8462f8*/
  v12 = sub_848FD0(a5, v31); /*0x8462ff*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x846304*/
  v36 = v12; /*0x846309*/
  if ( m_uiRefCount != v12 ) /*0x84630d*/
  {
    if ( m_uiRefCount ) /*0x846311*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x846317*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x84632d*/
      v12 = v36; /*0x84632f*/
    }
    Texture->members.super.super.m_uiRefCount = v12; /*0x846335*/
    if ( v12 ) /*0x846338*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x84633e*/
  }
  sub_848FA0(Texture, (int)a5); /*0x84634a*/
  Unk08 = v6->Stages.data->Unk08; /*0x846352*/
  v15 = *(_DWORD *)(Unk08 + 4); /*0x84635a*/
  v16 = (float *)(Unk08 + 4); /*0x84635d*/
  v17 = unk_B43108[0]; /*0x846362*/
  if ( v15 != LODWORD(unk_B43108[0]) ) /*0x846364*/
  {
    if ( v15 ) /*0x846368*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v15 + 4)) ) /*0x84636e*/
        (**(void (__thiscall ***)(int, int))v15)(v15, 1); /*0x846384*/
    }
    *v16 = v17; /*0x846388*/
    if ( v17 != 0.0 ) /*0x84638a*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v17) + 4)); /*0x846390*/
  }
  Stage = v6->Stages.data[1].Stage; /*0x846399*/
  v19 = *(volatile LONG **)(Stage + 4); /*0x8463a1*/
  v20 = (volatile LONG *)g_CanopyShadowMap; /*0x8463a6*/
  if ( v19 != g_CanopyShadowMap ) /*0x8463a8*/
  {
    if ( v19 ) /*0x8463ac*/
    {
      if ( !InterlockedDecrement(v19 + 1) ) /*0x8463b2*/
        (**(void (__thiscall ***)(void *, int))v19)((void *)v19, 1); /*0x8463c8*/
    }
    *(_DWORD *)(Stage + 4) = v20; /*0x8463cc*/
    if ( v20 ) /*0x8463cf*/
      InterlockedIncrement(v20 + 1); /*0x8463d5*/
  }
  v21 = v31; /*0x8463db*/
  v22 = 0.0; /*0x8463e4*/
  if ( v31 == 4 ) /*0x8463e6*/
  {
    v23 = 1.0; /*0x8463e8*/
    v24 = 0.0; /*0x8463e8*/
    v34 = 1.0; /*0x8463ea*/
  }
  else
  {
    v34 = 0.0; /*0x8463f3*/
    if ( v31 == 3 ) /*0x8463f7*/
    {
      v33 = 1.0; /*0x8463fd*/
      v25 = 1.0; /*0x846401*/
      goto LABEL_31; /*0x846401*/
    }
    v23 = 1.0; /*0x846410*/
    v24 = 0.0; /*0x846410*/
  }
  v26 = v23; /*0x846415*/
  v22 = v24; /*0x846415*/
  v25 = v26; /*0x846415*/
  v33 = v22; /*0x846417*/
  if ( v31 == 2 ) /*0x84641b*/
  {
    v27 = v22; /*0x84641d*/
    v28 = v25; /*0x84641d*/
    v25 = v27; /*0x84641d*/
    v32 = v28; /*0x84641f*/
    goto LABEL_37; /*0x84641f*/
  }
LABEL_31:
  v32 = v22; /*0x846403*/
  if ( v21 != 1 ) /*0x84640a*/
    v25 = v22; /*0x846425*/
LABEL_37:
  *(float *)&v37 = v25; /*0x846427*/
  OB_BSShader_SetSharedFloat4Constant_010201A0(2u, v37, LODWORD(v32), LODWORD(v33), LODWORD(v34)); /*0x84646d*/
  OB_BSShader_SetSharedFloat4Constant_010201A0( /*0x8464ff*/
    3u,
    COERCE_UNSIGNED_INT(0.0),
    COERCE_UNSIGNED_INT(0.0),
    COERCE_UNSIGNED_INT(0.0),
    COERCE_UNSIGNED_INT(0.0));
  if ( (_BYTE)value ) /*0x84650c*/
  {
    ++v6->RefCount; /*0x846513*/
    value = v6; /*0x846516*/
    NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x846532*/
    if ( v6->RefCount-- == 1 ) /*0x84653a*/
      NiD3DPass_ReleaseToPool(v6); /*0x846545*/
    ++*((_DWORD *)this + 0xE); /*0x84654a*/
  }
}
