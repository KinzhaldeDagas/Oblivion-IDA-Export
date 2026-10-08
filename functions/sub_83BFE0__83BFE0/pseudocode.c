void __thiscall sub_83BFE0(NiTArray_NiD3DPass *this, int a2, int a3, float Stage, _DWORD *a5)
{
  NiRenderedTexture *v6; // edi
  int v7; // ebx
  float *m_controller; // edi
  _DWORD *v9; // edi
  NiRenderedTexture *v10; // ebp
  int (__thiscall *v11)(_DWORD *, _DWORD); // eax
  UInt32 v12; // eax
  UInt32 m_uiRefCount; // ebp
  NiRenderedTexture *v14; // ebp
  UInt32 v15; // eax
  UInt32 v16; // ebp
  NiRenderedTexture *v17; // ebp
  int (__thiscall *v18)(_DWORD *, _DWORD); // eax
  UInt32 v19; // eax
  UInt32 v20; // ebp
  int v21; // edi
  float v22; // eax
  int v23; // ebp
  float *v24; // edi
  bool v25; // zf
  int v26; // ebp
  volatile LONG *v27; // edi
  NiRenderedTexture *v28; // ecx
  UInt32 v29; // [esp+38h] [ebp+4h]
  UInt32 v30; // [esp+38h] [ebp+4h]
  UInt32 v31; // [esp+38h] [ebp+4h]

  v6 = (NiRenderedTexture *)LODWORD(Stage); /*0x83c006*/
  v7 = unk_B457B8; /*0x83c00d*/
  sub_848DA0(*(float **)(LODWORD(Stage) + 0x10)); /*0x83c014*/
  m_controller = (float *)v6->member.super.super.m_controller; /*0x83c019*/
  sub_848E50(m_controller); /*0x83c01f*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, m_controller, 0); /*0x83c036*/
  v9 = a5; /*0x83c03b*/
  v11 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x83c043*/
  Stage = **(float **)(v7 + 0x24); /*0x83c04d*/
  v10 = (NiRenderedTexture *)LODWORD(Stage); /*0x83c03f*/
  v12 = v11(a5, 0); /*0x83c051*/
  m_uiRefCount = v10->member.super.super.super.m_uiRefCount; /*0x83c053*/
  v29 = v12; /*0x83c058*/
  if ( m_uiRefCount != v12 ) /*0x83c05c*/
  {
    if ( m_uiRefCount ) /*0x83c060*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x83c066*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x83c07d*/
      v12 = v29; /*0x83c07f*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v12; /*0x83c089*/
    if ( v12 ) /*0x83c08c*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x83c092*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x83c0a0*/
  Stage = *(float *)(*(_DWORD *)(v7 + 0x24) + 4); /*0x83c0b0*/
  v14 = (NiRenderedTexture *)LODWORD(Stage); /*0x83c0a8*/
  v15 = sub_848FD0(v9, 0); /*0x83c0b4*/
  v16 = v14->member.super.super.super.m_uiRefCount; /*0x83c0b9*/
  v30 = v15; /*0x83c0be*/
  if ( v16 != v15 ) /*0x83c0c2*/
  {
    if ( v16 ) /*0x83c0c6*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x83c0cc*/
        (**(void (__thiscall ***)(UInt32, int))v16)(v16, 1); /*0x83c0e3*/
      v15 = v30; /*0x83c0e5*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v15; /*0x83c0ef*/
    if ( v15 ) /*0x83c0f2*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x83c0f8*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x83c106*/
  v18 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v9 + 0x90); /*0x83c113*/
  Stage = *(float *)(*(_DWORD *)(v7 + 0x24) + 0x10); /*0x83c11d*/
  v17 = (NiRenderedTexture *)LODWORD(Stage); /*0x83c10e*/
  v19 = v18(v9, 0); /*0x83c121*/
  v20 = v17->member.super.super.super.m_uiRefCount; /*0x83c123*/
  v31 = v19; /*0x83c128*/
  if ( v20 != v19 ) /*0x83c12c*/
  {
    if ( v20 ) /*0x83c130*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) ) /*0x83c136*/
        (**(void (__thiscall ***)(UInt32, int))v20)(v20, 1); /*0x83c14d*/
      v19 = v31; /*0x83c14f*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v19; /*0x83c159*/
    if ( v19 ) /*0x83c15c*/
      InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x83c162*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x83c170*/
  v21 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x18); /*0x83c178*/
  v22 = unk_B43108[0]; /*0x83c17b*/
  v23 = *(_DWORD *)(v21 + 4); /*0x83c180*/
  v24 = (float *)(v21 + 4); /*0x83c183*/
  v25 = v23 == LODWORD(unk_B43108[0]); /*0x83c186*/
  Stage = unk_B43108[0]; /*0x83c188*/
  if ( !v25 ) /*0x83c18c*/
  {
    if ( v23 ) /*0x83c190*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v23 + 4)) ) /*0x83c196*/
        (**(void (__thiscall ***)(int, int))v23)(v23, 1); /*0x83c1ad*/
      v22 = Stage; /*0x83c1af*/
    }
    *v24 = v22; /*0x83c1b5*/
    if ( v22 != 0.0 ) /*0x83c1b7*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v22) + 4)); /*0x83c1bd*/
  }
  v26 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x1C); /*0x83c1c6*/
  v27 = *(volatile LONG **)(v26 + 4); /*0x83c1ce*/
  v25 = v27 == g_CanopyShadowMap; /*0x83c1d1*/
  v28 = (NiRenderedTexture *)g_CanopyShadowMap; /*0x83c1d3*/
  Stage = *(float *)&g_CanopyShadowMap; /*0x83c1d5*/
  if ( !v25 ) /*0x83c1d9*/
  {
    if ( v27 ) /*0x83c1dd*/
    {
      if ( !InterlockedDecrement(v27 + 1) ) /*0x83c1e3*/
        (**(void (__thiscall ***)(void *, int))v27)((void *)v27, 1); /*0x83c1f9*/
      v28 = (NiRenderedTexture *)LODWORD(Stage); /*0x83c1fb*/
    }
    *(_DWORD *)(v26 + 4) = v28; /*0x83c201*/
    if ( v28 ) /*0x83c204*/
      InterlockedIncrement((volatile LONG *)&v28->member); /*0x83c20a*/
  }
  ++*(_DWORD *)(v7 + 0x60); /*0x83c215*/
  Stage = *(float *)&v7; /*0x83c218*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x83c230*/
  v25 = (*(_DWORD *)(v7 + 0x60))-- == 1; /*0x83c238*/
  if ( v25 ) /*0x83c23f*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v7); /*0x83c243*/
  ++*((_DWORD *)this + 0xE); /*0x83c248*/
}
