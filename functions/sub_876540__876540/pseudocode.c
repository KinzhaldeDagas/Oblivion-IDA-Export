void __thiscall sub_876540(NiTArray_NiD3DPass *this, int a2, int a3, float Stage, int *a5)
{
  float *v6; // edi
  int v7; // esi
  int *v8; // ebp
  NiRenderedTexture *v9; // edi
  int (__thiscall *v10)(int *, _DWORD); // eax
  UInt32 v11; // eax
  UInt32 m_uiRefCount; // edi
  NiRenderedTexture *v13; // edi
  UInt32 v14; // eax
  UInt32 v15; // edi
  int v16; // edx
  int v17; // eax
  UInt32 v18; // ebp
  UInt32 v19; // edi
  int v20; // edi
  float v21; // eax
  int v22; // ebp
  float *v23; // edi
  bool v24; // zf
  int v25; // edi
  volatile LONG *v26; // ebp
  NiRenderedTexture *v27; // ecx
  UInt32 v28; // [esp+38h] [ebp+4h]
  UInt32 v29; // [esp+38h] [ebp+4h]

  v6 = *(float **)(LODWORD(Stage) + 0xC); /*0x87656a*/
  v7 = unk_B4767C; /*0x87656d*/
  sub_848E50(v6); /*0x876574*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v6, 0); /*0x87658b*/
  v8 = a5; /*0x876590*/
  v10 = *(int (__thiscall **)(int *, _DWORD))(*a5 + 0x88); /*0x876599*/
  Stage = **(float **)(v7 + 0x24); /*0x8765a3*/
  v9 = (NiRenderedTexture *)LODWORD(Stage); /*0x876594*/
  v11 = v10(a5, 0); /*0x8765a7*/
  m_uiRefCount = v9->member.super.super.super.m_uiRefCount; /*0x8765a9*/
  v28 = v11; /*0x8765ae*/
  if ( m_uiRefCount != v11 ) /*0x8765b2*/
  {
    if ( m_uiRefCount ) /*0x8765b6*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x8765bc*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x8765d2*/
      v11 = v28; /*0x8765d4*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v11; /*0x8765de*/
    if ( v11 ) /*0x8765e1*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x8765e7*/
  }
  Stage = *(float *)(*(_DWORD *)(v7 + 0x24) + 4); /*0x8765f8*/
  v13 = (NiRenderedTexture *)LODWORD(Stage); /*0x8765f0*/
  v14 = sub_848FD0(v8, 0); /*0x8765fc*/
  v15 = v13->member.super.super.super.m_uiRefCount; /*0x876601*/
  v29 = v14; /*0x876606*/
  if ( v15 != v14 ) /*0x87660a*/
  {
    if ( v15 ) /*0x87660e*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v15 + 4)) ) /*0x876614*/
        (**(void (__thiscall ***)(UInt32, int))v15)(v15, 1); /*0x87662a*/
      v14 = v29; /*0x87662c*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v14; /*0x876636*/
    if ( v14 ) /*0x876639*/
      InterlockedIncrement((volatile LONG *)(v14 + 4)); /*0x87663f*/
  }
  v16 = *v8; /*0x87664b*/
  Stage = *(float *)(*(_DWORD *)(v7 + 0x24) + 0x10); /*0x87664e*/
  v17 = (*(int (__thiscall **)(int *, _DWORD))(v16 + 0x90))(v8, 0); /*0x87665c*/
  v18 = *(_DWORD *)(LODWORD(Stage) + 4); /*0x876662*/
  v19 = v17; /*0x876665*/
  if ( v18 != v17 ) /*0x876669*/
  {
    if ( v18 ) /*0x87666d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) ) /*0x876673*/
        (**(void (__thiscall ***)(UInt32, int))v18)(v18, 1); /*0x87668a*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v19; /*0x876692*/
    if ( v19 ) /*0x876695*/
      InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x87669b*/
  }
  v20 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x18); /*0x8766a4*/
  v21 = unk_B43108[0]; /*0x8766a7*/
  v22 = *(_DWORD *)(v20 + 4); /*0x8766ac*/
  v23 = (float *)(v20 + 4); /*0x8766af*/
  v24 = v22 == LODWORD(unk_B43108[0]); /*0x8766b2*/
  Stage = unk_B43108[0]; /*0x8766b4*/
  if ( !v24 ) /*0x8766b8*/
  {
    if ( v22 ) /*0x8766bc*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v22 + 4)) ) /*0x8766c2*/
        (**(void (__thiscall ***)(int, int))v22)(v22, 1); /*0x8766d9*/
      v21 = Stage; /*0x8766db*/
    }
    *v23 = v21; /*0x8766e1*/
    if ( v21 != 0.0 ) /*0x8766e3*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v21) + 4)); /*0x8766e9*/
  }
  v25 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x1C); /*0x8766f2*/
  v26 = *(volatile LONG **)(v25 + 4); /*0x8766fa*/
  v24 = v26 == g_CanopyShadowMap; /*0x8766fd*/
  v27 = (NiRenderedTexture *)g_CanopyShadowMap; /*0x8766ff*/
  Stage = *(float *)&g_CanopyShadowMap; /*0x876701*/
  if ( !v24 ) /*0x876705*/
  {
    if ( v26 ) /*0x876709*/
    {
      if ( !InterlockedDecrement(v26 + 1) ) /*0x87670f*/
        (**(void (__thiscall ***)(void *, int))v26)((void *)v26, 1); /*0x876726*/
      v27 = (NiRenderedTexture *)LODWORD(Stage); /*0x876728*/
    }
    *(_DWORD *)(v25 + 4) = v27; /*0x87672e*/
    if ( v27 ) /*0x876731*/
      InterlockedIncrement((volatile LONG *)&v27->member); /*0x876737*/
  }
  ++*(_DWORD *)(v7 + 0x60); /*0x876742*/
  Stage = *(float *)&v7; /*0x876745*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x87675d*/
  v24 = (*(_DWORD *)(v7 + 0x60))-- == 1; /*0x876765*/
  if ( v24 ) /*0x87676c*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v7); /*0x876770*/
  ++*((_DWORD *)this + 0xE); /*0x876775*/
}
