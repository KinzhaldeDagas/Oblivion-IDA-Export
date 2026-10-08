void __thiscall sub_8479E0(NiTArray_NiD3DPass *this, int a2, int a3, int a4, _DWORD *a5, NiD3DPass *value)
{
  int v6; // ebx
  NiD3DPass *v8; // edi
  UInt32 Stage; // ebp
  int v10; // eax
  int v11; // ebx
  NiTexture *Texture; // ebx
  int v13; // eax
  UInt32 m_uiRefCount; // ebp
  UInt32 Unk08; // esi
  int v16; // ebp
  float *v17; // esi
  float v18; // ebx
  UInt32 v19; // ebx
  volatile LONG *v20; // esi
  volatile LONG *v21; // ebp
  int v22; // esi
  double v23; // st6
  double v24; // rt0
  double v25; // st6
  double v26; // st7
  double v27; // st6
  int v30; // [esp+18h] [ebp-28h]
  float v31; // [esp+18h] [ebp-28h]
  float v32; // [esp+1Ch] [ebp-24h]
  float v33; // [esp+20h] [ebp-20h]
  unsigned int v34; // [esp+2Ch] [ebp-14h]
  int v35; // [esp+50h] [ebp+10h]
  int v36; // [esp+50h] [ebp+10h]
  unsigned int v37; // [esp+50h] [ebp+10h]

  v6 = *(unsigned __int8 *)(*(_DWORD *)&OB_RendererGlobalState_010201A0.pad_00D[0x12] + 9); /*0x847a12*/
  v8 = (NiD3DPass *)unk_B45B4C; /*0x847a30*/
  *(float *)&v34 = (float)*(unsigned __int8 *)(a5[0x32] + v6); /*0x847a64*/
  v30 = v6; /*0x847a71*/
  OB_BSShader_SetSharedFloat4Constant_010201A0(0x1Fu, COERCE_UNSIGNED_INT(1.0), dword_B25AD4, v34, dword_B25ADC); /*0x847a78*/
  Stage = v8->Stages.data->Stage; /*0x847a82*/
  v10 = (*(int (__thiscall **)(_DWORD *, int))(*a5 + 0x88))(a5, v6); /*0x847a90*/
  v11 = *(_DWORD *)(Stage + 4); /*0x847a92*/
  v35 = v10; /*0x847a97*/
  if ( v11 != v10 ) /*0x847a9b*/
  {
    if ( v11 ) /*0x847a9f*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) ) /*0x847aa5*/
        (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x847abb*/
      v10 = v35; /*0x847abd*/
    }
    *(_DWORD *)(Stage + 4) = v10; /*0x847ac3*/
    if ( v10 ) /*0x847ac6*/
      InterlockedIncrement((volatile LONG *)(v10 + 4)); /*0x847acc*/
  }
  sub_848FA0((_DWORD **)Stage, (int)a5); /*0x847ada*/
  Texture = v8->Stages.data->Texture; /*0x847ae6*/
  v13 = sub_848FD0(a5, v30); /*0x847aed*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x847af2*/
  v36 = v13; /*0x847af7*/
  if ( m_uiRefCount != v13 ) /*0x847afb*/
  {
    if ( m_uiRefCount ) /*0x847aff*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x847b05*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x847b1c*/
      v13 = v36; /*0x847b1e*/
    }
    Texture->members.super.super.m_uiRefCount = v13; /*0x847b24*/
    if ( v13 ) /*0x847b27*/
      InterlockedIncrement((volatile LONG *)(v13 + 4)); /*0x847b2d*/
  }
  sub_848FA0(Texture, (int)a5); /*0x847b39*/
  Unk08 = v8->Stages.data->Unk08; /*0x847b41*/
  v16 = *(_DWORD *)(Unk08 + 4); /*0x847b49*/
  v17 = (float *)(Unk08 + 4); /*0x847b4c*/
  v18 = unk_B43108[0]; /*0x847b51*/
  if ( v16 != LODWORD(unk_B43108[0]) ) /*0x847b53*/
  {
    if ( v16 ) /*0x847b57*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x847b5d*/
        (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x847b74*/
    }
    *v17 = v18; /*0x847b78*/
    if ( v18 != 0.0 ) /*0x847b7a*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v18) + 4)); /*0x847b80*/
  }
  v19 = v8->Stages.data[1].Stage; /*0x847b89*/
  v20 = *(volatile LONG **)(v19 + 4); /*0x847b91*/
  v21 = (volatile LONG *)g_CanopyShadowMap; /*0x847b96*/
  if ( v20 != g_CanopyShadowMap ) /*0x847b98*/
  {
    if ( v20 ) /*0x847b9c*/
    {
      if ( !InterlockedDecrement(v20 + 1) ) /*0x847ba2*/
        (**(void (__thiscall ***)(void *, int))v20)((void *)v20, 1); /*0x847bb8*/
    }
    *(_DWORD *)(v19 + 4) = v21; /*0x847bbc*/
    if ( v21 ) /*0x847bbf*/
      InterlockedIncrement(v21 + 1); /*0x847bc5*/
  }
  v22 = v30; /*0x847bcb*/
  if ( v30 == 4 ) /*0x847bd4*/
  {
    v23 = 1.0; /*0x847bd6*/
    v33 = 1.0; /*0x847bd8*/
  }
  else
  {
    v33 = 0.0; /*0x847bf2*/
    v23 = 1.0; /*0x847bf6*/
    if ( v30 == 3 ) /*0x847bf8*/
    {
      v32 = 1.0; /*0x847bfa*/
      v25 = 0.0; /*0x847bfe*/
      v26 = 1.0; /*0x847bfe*/
      goto LABEL_33; /*0x847bfe*/
    }
  }
  v24 = v23; /*0x847bdf*/
  v25 = 0.0; /*0x847bdf*/
  v26 = v24; /*0x847bdf*/
  v32 = 0.0; /*0x847be1*/
  if ( v30 == 2 ) /*0x847be5*/
  {
    v27 = v26; /*0x847be7*/
    v26 = 0.0; /*0x847be7*/
    v31 = v27; /*0x847be9*/
    goto LABEL_35; /*0x847bed*/
  }
LABEL_33:
  v31 = v25; /*0x847c00*/
  if ( v22 != 1 ) /*0x847c07*/
    v26 = v25; /*0x847c0d*/
LABEL_35:
  *(float *)&v37 = v26; /*0x847c0f*/
  OB_BSShader_SetSharedFloat4Constant_010201A0(2u, v37, LODWORD(v31), LODWORD(v32), LODWORD(v33)); /*0x847c55*/
  OB_BSShader_SetSharedFloat4Constant_010201A0( /*0x847ce7*/
    3u,
    COERCE_UNSIGNED_INT(0.0),
    COERCE_UNSIGNED_INT(0.0),
    COERCE_UNSIGNED_INT(0.0),
    COERCE_UNSIGNED_INT(0.0));
  if ( (_BYTE)value ) /*0x847cf4*/
  {
    ++v8->RefCount; /*0x847cfb*/
    value = v8; /*0x847cfe*/
    NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x847d1a*/
    if ( v8->RefCount-- == 1 ) /*0x847d22*/
      NiD3DPass_ReleaseToPool(v8); /*0x847d2d*/
    ++*((_DWORD *)this + 0xE); /*0x847d32*/
  }
}
