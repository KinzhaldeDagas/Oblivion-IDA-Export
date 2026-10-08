void __thiscall sub_846570(NiTArray_NiD3DPass *this, int a2, int a3, int a4, _DWORD *a5, NiD3DPass *value)
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

  v6 = (NiD3DPass *)unk_B45B5C; /*0x8465a4*/
  v8 = **(_DWORD **)(unk_B45B5C + 0x24); /*0x8465b3*/
  v31 = *(unsigned __int8 *)(*(_DWORD *)&OB_RendererGlobalState_010201A0.pad_00D[0x12] + 9); /*0x8465b5*/
  v9 = (*(int (__thiscall **)(_DWORD *, int))(*a5 + 0x88))(a5, v31); /*0x8465c2*/
  v10 = *(_DWORD *)(v8 + 4); /*0x8465c4*/
  v35 = v9; /*0x8465c9*/
  if ( v10 != v9 ) /*0x8465cd*/
  {
    if ( v10 ) /*0x8465d1*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x8465d7*/
        (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x8465ed*/
      v9 = v35; /*0x8465ef*/
    }
    *(_DWORD *)(v8 + 4) = v9; /*0x8465f5*/
    if ( v9 ) /*0x8465f8*/
      InterlockedIncrement((volatile LONG *)(v9 + 4)); /*0x8465fe*/
  }
  sub_848FA0((_DWORD **)v8, (int)a5); /*0x84660c*/
  Texture = v6->Stages.data->Texture; /*0x846618*/
  v12 = sub_848FD0(a5, v31); /*0x84661f*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x846624*/
  v36 = v12; /*0x846629*/
  if ( m_uiRefCount != v12 ) /*0x84662d*/
  {
    if ( m_uiRefCount ) /*0x846631*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x846637*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x84664d*/
      v12 = v36; /*0x84664f*/
    }
    Texture->members.super.super.m_uiRefCount = v12; /*0x846655*/
    if ( v12 ) /*0x846658*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x84665e*/
  }
  sub_848FA0(Texture, (int)a5); /*0x84666a*/
  Unk08 = v6->Stages.data->Unk08; /*0x846672*/
  v15 = *(_DWORD *)(Unk08 + 4); /*0x84667a*/
  v16 = (float *)(Unk08 + 4); /*0x84667d*/
  v17 = unk_B43108[0]; /*0x846682*/
  if ( v15 != LODWORD(unk_B43108[0]) ) /*0x846684*/
  {
    if ( v15 ) /*0x846688*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v15 + 4)) ) /*0x84668e*/
        (**(void (__thiscall ***)(int, int))v15)(v15, 1); /*0x8466a4*/
    }
    *v16 = v17; /*0x8466a8*/
    if ( v17 != 0.0 ) /*0x8466aa*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v17) + 4)); /*0x8466b0*/
  }
  Stage = v6->Stages.data[1].Stage; /*0x8466b9*/
  v19 = *(volatile LONG **)(Stage + 4); /*0x8466c1*/
  v20 = (volatile LONG *)g_CanopyShadowMap; /*0x8466c6*/
  if ( v19 != g_CanopyShadowMap ) /*0x8466c8*/
  {
    if ( v19 ) /*0x8466cc*/
    {
      if ( !InterlockedDecrement(v19 + 1) ) /*0x8466d2*/
        (**(void (__thiscall ***)(void *, int))v19)((void *)v19, 1); /*0x8466e8*/
    }
    *(_DWORD *)(Stage + 4) = v20; /*0x8466ec*/
    if ( v20 ) /*0x8466ef*/
      InterlockedIncrement(v20 + 1); /*0x8466f5*/
  }
  v21 = v31; /*0x8466fb*/
  v22 = 0.0; /*0x846704*/
  if ( v31 == 4 ) /*0x846706*/
  {
    v23 = 1.0; /*0x846708*/
    v24 = 0.0; /*0x846708*/
    v34 = 1.0; /*0x84670a*/
  }
  else
  {
    v34 = 0.0; /*0x846713*/
    if ( v31 == 3 ) /*0x846717*/
    {
      v33 = 1.0; /*0x84671d*/
      v25 = 1.0; /*0x846721*/
      goto LABEL_31; /*0x846721*/
    }
    v23 = 1.0; /*0x846730*/
    v24 = 0.0; /*0x846730*/
  }
  v26 = v23; /*0x846735*/
  v22 = v24; /*0x846735*/
  v25 = v26; /*0x846735*/
  v33 = v22; /*0x846737*/
  if ( v31 == 2 ) /*0x84673b*/
  {
    v27 = v22; /*0x84673d*/
    v28 = v25; /*0x84673d*/
    v25 = v27; /*0x84673d*/
    v32 = v28; /*0x84673f*/
    goto LABEL_37; /*0x84673f*/
  }
LABEL_31:
  v32 = v22; /*0x846723*/
  if ( v21 != 1 ) /*0x84672a*/
    v25 = v22; /*0x846745*/
LABEL_37:
  *(float *)&v37 = v25; /*0x846747*/
  OB_BSShader_SetSharedFloat4Constant_010201A0(2u, v37, LODWORD(v32), LODWORD(v33), LODWORD(v34)); /*0x84678d*/
  OB_BSShader_SetSharedFloat4Constant_010201A0( /*0x84681f*/
    3u,
    COERCE_UNSIGNED_INT(0.0),
    COERCE_UNSIGNED_INT(0.0),
    COERCE_UNSIGNED_INT(0.0),
    COERCE_UNSIGNED_INT(0.0));
  if ( (_BYTE)value ) /*0x84682c*/
  {
    ++v6->RefCount; /*0x846833*/
    value = v6; /*0x846836*/
    NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x846852*/
    if ( v6->RefCount-- == 1 ) /*0x84685a*/
      NiD3DPass_ReleaseToPool(v6); /*0x846865*/
    ++*((_DWORD *)this + 0xE); /*0x84686a*/
  }
}
