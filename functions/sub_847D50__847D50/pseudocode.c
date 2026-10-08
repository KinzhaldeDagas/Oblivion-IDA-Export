void __thiscall sub_847D50(NiTArray_NiD3DPass *this, int a2, int a3, int a4, _DWORD *a5, NiD3DPass *value)
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

  v6 = *(unsigned __int8 *)(*(_DWORD *)&OB_RendererGlobalState_010201A0.pad_00D[0x12] + 9); /*0x847d82*/
  v8 = (NiD3DPass *)unk_B45B74; /*0x847da0*/
  *(float *)&v34 = (float)*(unsigned __int8 *)(a5[0x32] + v6); /*0x847dd4*/
  v30 = v6; /*0x847de1*/
  OB_BSShader_SetSharedFloat4Constant_010201A0(0x1Fu, COERCE_UNSIGNED_INT(1.0), dword_B25AD4, v34, dword_B25ADC); /*0x847de8*/
  Stage = v8->Stages.data->Stage; /*0x847df2*/
  v10 = (*(int (__thiscall **)(_DWORD *, int))(*a5 + 0x88))(a5, v6); /*0x847e00*/
  v11 = *(_DWORD *)(Stage + 4); /*0x847e02*/
  v35 = v10; /*0x847e07*/
  if ( v11 != v10 ) /*0x847e0b*/
  {
    if ( v11 ) /*0x847e0f*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) ) /*0x847e15*/
        (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x847e2b*/
      v10 = v35; /*0x847e2d*/
    }
    *(_DWORD *)(Stage + 4) = v10; /*0x847e33*/
    if ( v10 ) /*0x847e36*/
      InterlockedIncrement((volatile LONG *)(v10 + 4)); /*0x847e3c*/
  }
  sub_848FA0((_DWORD **)Stage, (int)a5); /*0x847e4a*/
  Texture = v8->Stages.data->Texture; /*0x847e56*/
  v13 = sub_848FD0(a5, v30); /*0x847e5d*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x847e62*/
  v36 = v13; /*0x847e67*/
  if ( m_uiRefCount != v13 ) /*0x847e6b*/
  {
    if ( m_uiRefCount ) /*0x847e6f*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x847e75*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x847e8c*/
      v13 = v36; /*0x847e8e*/
    }
    Texture->members.super.super.m_uiRefCount = v13; /*0x847e94*/
    if ( v13 ) /*0x847e97*/
      InterlockedIncrement((volatile LONG *)(v13 + 4)); /*0x847e9d*/
  }
  sub_848FA0(Texture, (int)a5); /*0x847ea9*/
  Unk08 = v8->Stages.data->Unk08; /*0x847eb1*/
  v16 = *(_DWORD *)(Unk08 + 4); /*0x847eb9*/
  v17 = (float *)(Unk08 + 4); /*0x847ebc*/
  v18 = unk_B43108[0]; /*0x847ec1*/
  if ( v16 != LODWORD(unk_B43108[0]) ) /*0x847ec3*/
  {
    if ( v16 ) /*0x847ec7*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x847ecd*/
        (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x847ee4*/
    }
    *v17 = v18; /*0x847ee8*/
    if ( v18 != 0.0 ) /*0x847eea*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v18) + 4)); /*0x847ef0*/
  }
  v19 = v8->Stages.data[1].Stage; /*0x847ef9*/
  v20 = *(volatile LONG **)(v19 + 4); /*0x847f01*/
  v21 = (volatile LONG *)g_CanopyShadowMap; /*0x847f06*/
  if ( v20 != g_CanopyShadowMap ) /*0x847f08*/
  {
    if ( v20 ) /*0x847f0c*/
    {
      if ( !InterlockedDecrement(v20 + 1) ) /*0x847f12*/
        (**(void (__thiscall ***)(void *, int))v20)((void *)v20, 1); /*0x847f28*/
    }
    *(_DWORD *)(v19 + 4) = v21; /*0x847f2c*/
    if ( v21 ) /*0x847f2f*/
      InterlockedIncrement(v21 + 1); /*0x847f35*/
  }
  v22 = v30; /*0x847f3b*/
  if ( v30 == 4 ) /*0x847f44*/
  {
    v23 = 1.0; /*0x847f46*/
    v33 = 1.0; /*0x847f48*/
  }
  else
  {
    v33 = 0.0; /*0x847f62*/
    v23 = 1.0; /*0x847f66*/
    if ( v30 == 3 ) /*0x847f68*/
    {
      v32 = 1.0; /*0x847f6a*/
      v25 = 0.0; /*0x847f6e*/
      v26 = 1.0; /*0x847f6e*/
      goto LABEL_33; /*0x847f6e*/
    }
  }
  v24 = v23; /*0x847f4f*/
  v25 = 0.0; /*0x847f4f*/
  v26 = v24; /*0x847f4f*/
  v32 = 0.0; /*0x847f51*/
  if ( v30 == 2 ) /*0x847f55*/
  {
    v27 = v26; /*0x847f57*/
    v26 = 0.0; /*0x847f57*/
    v31 = v27; /*0x847f59*/
    goto LABEL_35; /*0x847f5d*/
  }
LABEL_33:
  v31 = v25; /*0x847f70*/
  if ( v22 != 1 ) /*0x847f77*/
    v26 = v25; /*0x847f7d*/
LABEL_35:
  *(float *)&v37 = v26; /*0x847f7f*/
  OB_BSShader_SetSharedFloat4Constant_010201A0(2u, v37, LODWORD(v31), LODWORD(v32), LODWORD(v33)); /*0x847fc5*/
  OB_BSShader_SetSharedFloat4Constant_010201A0( /*0x848057*/
    3u,
    COERCE_UNSIGNED_INT(0.0),
    COERCE_UNSIGNED_INT(0.0),
    COERCE_UNSIGNED_INT(0.0),
    COERCE_UNSIGNED_INT(0.0));
  if ( (_BYTE)value ) /*0x848064*/
  {
    ++v8->RefCount; /*0x84806b*/
    value = v8; /*0x84806e*/
    NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x84808a*/
    if ( v8->RefCount-- == 1 ) /*0x848092*/
      NiD3DPass_ReleaseToPool(v8); /*0x84809d*/
    ++*((_DWORD *)this + 0xE); /*0x8480a2*/
  }
}
