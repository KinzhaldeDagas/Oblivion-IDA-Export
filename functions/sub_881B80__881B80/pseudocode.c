void __thiscall sub_881B80(NiTArray_NiD3DPass *this, int a2, int a3, UInt32 Stage, _DWORD *a5)
{
  float v6; // ebx
  NiD3DPass *v7; // esi
  float *v8; // ebx
  _DWORD *v9; // ebp
  float v10; // ebx
  int (__thiscall *v11)(_DWORD *, _DWORD); // eax
  int v12; // eax
  int v13; // ebx
  float v14; // ebx
  int v15; // eax
  int v16; // ebx
  float v17; // ebx
  int (__thiscall *v18)(_DWORD *, int); // edx
  int v19; // eax
  int v20; // ebx
  int v21; // eax
  int v22; // ebp
  int v23; // ebx
  UInt32 Unk08; // ebp
  float v25; // eax
  int v26; // ebx
  float *v27; // ebp
  bool v28; // zf
  UInt32 v29; // ebp
  float v30; // eax
  int v31; // ebx
  float *v32; // ebp
  NiTexture *Texture; // ebp
  volatile LONG *m_uiRefCount; // ebx
  float v35; // ecx
  int v36; // [esp+40h] [ebp+4h]
  int v37; // [esp+40h] [ebp+4h]
  int v38; // [esp+40h] [ebp+4h]

  v6 = *(float *)&Stage; /*0x881ba6*/
  v7 = dword_B47754; /*0x881bad*/
  sub_848C40(*(float **)(Stage + 0x10)); /*0x881bb4*/
  v8 = *(float **)(LODWORD(v6) + 0xC); /*0x881bb9*/
  sub_848E50(v8); /*0x881bbf*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v8, 0); /*0x881bd6*/
  v9 = a5; /*0x881bdb*/
  v11 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x881be4*/
  Stage = v7->Stages.data->Stage; /*0x881bee*/
  v10 = *(float *)&Stage; /*0x881bdf*/
  v12 = v11(a5, 0); /*0x881bf2*/
  v13 = *(_DWORD *)(LODWORD(v10) + 4); /*0x881bf4*/
  v36 = v12; /*0x881bf9*/
  if ( v13 != v12 ) /*0x881bfd*/
  {
    if ( v13 ) /*0x881c01*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) ) /*0x881c07*/
        (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x881c1d*/
      v12 = v36; /*0x881c1f*/
    }
    *(_DWORD *)(Stage + 4) = v12; /*0x881c29*/
    if ( v12 ) /*0x881c2c*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x881c32*/
  }
  Stage = (UInt32)v7->Stages.data->Texture; /*0x881c43*/
  v14 = *(float *)&Stage; /*0x881c3b*/
  v15 = sub_848FD0(v9, 0); /*0x881c47*/
  v16 = *(_DWORD *)(LODWORD(v14) + 4); /*0x881c4c*/
  v37 = v15; /*0x881c51*/
  if ( v16 != v15 ) /*0x881c55*/
  {
    if ( v16 ) /*0x881c59*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x881c5f*/
        (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x881c75*/
      v15 = v37; /*0x881c77*/
    }
    *(_DWORD *)(Stage + 4) = v15; /*0x881c81*/
    if ( v15 ) /*0x881c84*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x881c8a*/
  }
  v18 = *(int (__thiscall **)(_DWORD *, int))(*v9 + 0x88); /*0x881c99*/
  Stage = v7->Stages.data->Unk08; /*0x881ca3*/
  v17 = *(float *)&Stage; /*0x881c93*/
  v19 = v18(v9, 1); /*0x881ca7*/
  v20 = *(_DWORD *)(LODWORD(v17) + 4); /*0x881ca9*/
  v38 = v19; /*0x881cae*/
  if ( v20 != v19 ) /*0x881cb2*/
  {
    if ( v20 ) /*0x881cb6*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) ) /*0x881cbc*/
        (**(void (__thiscall ***)(int, int))v20)(v20, 1); /*0x881cd2*/
      v19 = v38; /*0x881cd4*/
    }
    *(_DWORD *)(Stage + 4) = v19; /*0x881cde*/
    if ( v19 ) /*0x881ce1*/
      InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x881ce7*/
  }
  Stage = v7->Stages.data[1].Stage; /*0x881cf8*/
  v21 = sub_848FD0(v9, 1); /*0x881cfc*/
  v22 = *(_DWORD *)(Stage + 4); /*0x881d05*/
  v23 = v21; /*0x881d08*/
  if ( v22 != v21 ) /*0x881d0c*/
  {
    if ( v22 ) /*0x881d10*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v22 + 4)) ) /*0x881d16*/
        (**(void (__thiscall ***)(int, int))v22)(v22, 1); /*0x881d2d*/
    }
    *(_DWORD *)(Stage + 4) = v23; /*0x881d35*/
    if ( v23 ) /*0x881d38*/
      InterlockedIncrement((volatile LONG *)(v23 + 4)); /*0x881d3e*/
  }
  Unk08 = v7->Stages.data[1].Unk08; /*0x881d47*/
  v25 = flt_B43110[0]; /*0x881d4a*/
  v26 = *(_DWORD *)(Unk08 + 4); /*0x881d4f*/
  v27 = (float *)(Unk08 + 4); /*0x881d52*/
  v28 = v26 == LODWORD(flt_B43110[0]); /*0x881d55*/
  Stage = LODWORD(flt_B43110[0]); /*0x881d57*/
  if ( !v28 ) /*0x881d5b*/
  {
    if ( v26 ) /*0x881d5f*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v26 + 4)) ) /*0x881d65*/
        (**(void (__thiscall ***)(int, int))v26)(v26, 1); /*0x881d7b*/
      v25 = *(float *)&Stage; /*0x881d7d*/
    }
    *v27 = v25; /*0x881d83*/
    if ( v25 != 0.0 ) /*0x881d86*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v25) + 4)); /*0x881d8c*/
  }
  v29 = v7->Stages.data[2].Stage; /*0x881d95*/
  v30 = unk_B43108[0]; /*0x881d98*/
  v31 = *(_DWORD *)(v29 + 4); /*0x881d9d*/
  v32 = (float *)(v29 + 4); /*0x881da0*/
  v28 = v31 == LODWORD(unk_B43108[0]); /*0x881da3*/
  Stage = LODWORD(unk_B43108[0]); /*0x881da5*/
  if ( !v28 ) /*0x881da9*/
  {
    if ( v31 ) /*0x881dad*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v31 + 4)) ) /*0x881db3*/
        (**(void (__thiscall ***)(int, int))v31)(v31, 1); /*0x881dc9*/
      v30 = *(float *)&Stage; /*0x881dcb*/
    }
    *v32 = v30; /*0x881dd1*/
    if ( v30 != 0.0 ) /*0x881dd4*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v30) + 4)); /*0x881dda*/
  }
  Texture = v7->Stages.data[2].Texture; /*0x881de3*/
  m_uiRefCount = (volatile LONG *)Texture->members.super.super.m_uiRefCount; /*0x881deb*/
  v28 = m_uiRefCount == g_CanopyShadowMap; /*0x881dee*/
  v35 = *(float *)&g_CanopyShadowMap; /*0x881df0*/
  Stage = (UInt32)g_CanopyShadowMap; /*0x881df2*/
  if ( !v28 ) /*0x881df6*/
  {
    if ( m_uiRefCount ) /*0x881dfa*/
    {
      if ( !InterlockedDecrement(m_uiRefCount + 1) ) /*0x881e00*/
        (**(void (__thiscall ***)(void *, int))m_uiRefCount)((void *)m_uiRefCount, 1); /*0x881e16*/
      v35 = *(float *)&Stage; /*0x881e18*/
    }
    *(float *)&Texture->members.super.super.m_uiRefCount = v35; /*0x881e1e*/
    if ( v35 != 0.0 ) /*0x881e21*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v35) + 4)); /*0x881e27*/
  }
  ++v7->RefCount; /*0x881e32*/
  Stage = (UInt32)v7; /*0x881e35*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x881e4d*/
  v28 = v7->RefCount-- == 1; /*0x881e55*/
  if ( v28 ) /*0x881e5c*/
    NiD3DPass_ReleaseToPool(v7); /*0x881e60*/
  ++*((_DWORD *)this + 0xE); /*0x881e65*/
}
