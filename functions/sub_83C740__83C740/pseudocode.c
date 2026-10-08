void __thiscall sub_83C740(NiTArray_NiD3DPass *this, int a2, int a3, float Stage, _DWORD *a5)
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

  v6 = (NiRenderedTexture *)LODWORD(Stage); /*0x83c766*/
  v7 = unk_B457D0; /*0x83c76d*/
  sub_848DA0(*(float **)(LODWORD(Stage) + 0x10)); /*0x83c774*/
  m_controller = (float *)v6->member.super.super.m_controller; /*0x83c779*/
  sub_848E50(m_controller); /*0x83c77f*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, m_controller, 0); /*0x83c796*/
  v9 = a5; /*0x83c79b*/
  v11 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x83c7a3*/
  Stage = **(float **)(v7 + 0x24); /*0x83c7ad*/
  v10 = (NiRenderedTexture *)LODWORD(Stage); /*0x83c79f*/
  v12 = v11(a5, 0); /*0x83c7b1*/
  m_uiRefCount = v10->member.super.super.super.m_uiRefCount; /*0x83c7b3*/
  v29 = v12; /*0x83c7b8*/
  if ( m_uiRefCount != v12 ) /*0x83c7bc*/
  {
    if ( m_uiRefCount ) /*0x83c7c0*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x83c7c6*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x83c7dd*/
      v12 = v29; /*0x83c7df*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v12; /*0x83c7e9*/
    if ( v12 ) /*0x83c7ec*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x83c7f2*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x83c800*/
  Stage = *(float *)(*(_DWORD *)(v7 + 0x24) + 4); /*0x83c810*/
  v14 = (NiRenderedTexture *)LODWORD(Stage); /*0x83c808*/
  v15 = sub_848FD0(v9, 0); /*0x83c814*/
  v16 = v14->member.super.super.super.m_uiRefCount; /*0x83c819*/
  v30 = v15; /*0x83c81e*/
  if ( v16 != v15 ) /*0x83c822*/
  {
    if ( v16 ) /*0x83c826*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x83c82c*/
        (**(void (__thiscall ***)(UInt32, int))v16)(v16, 1); /*0x83c843*/
      v15 = v30; /*0x83c845*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v15; /*0x83c84f*/
    if ( v15 ) /*0x83c852*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x83c858*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x83c866*/
  v18 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v9 + 0x90); /*0x83c873*/
  Stage = *(float *)(*(_DWORD *)(v7 + 0x24) + 0x10); /*0x83c87d*/
  v17 = (NiRenderedTexture *)LODWORD(Stage); /*0x83c86e*/
  v19 = v18(v9, 0); /*0x83c881*/
  v20 = v17->member.super.super.super.m_uiRefCount; /*0x83c883*/
  v31 = v19; /*0x83c888*/
  if ( v20 != v19 ) /*0x83c88c*/
  {
    if ( v20 ) /*0x83c890*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) ) /*0x83c896*/
        (**(void (__thiscall ***)(UInt32, int))v20)(v20, 1); /*0x83c8ad*/
      v19 = v31; /*0x83c8af*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v19; /*0x83c8b9*/
    if ( v19 ) /*0x83c8bc*/
      InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x83c8c2*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x83c8d0*/
  v21 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x18); /*0x83c8d8*/
  v22 = unk_B43108[0]; /*0x83c8db*/
  v23 = *(_DWORD *)(v21 + 4); /*0x83c8e0*/
  v24 = (float *)(v21 + 4); /*0x83c8e3*/
  v25 = v23 == LODWORD(unk_B43108[0]); /*0x83c8e6*/
  Stage = unk_B43108[0]; /*0x83c8e8*/
  if ( !v25 ) /*0x83c8ec*/
  {
    if ( v23 ) /*0x83c8f0*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v23 + 4)) ) /*0x83c8f6*/
        (**(void (__thiscall ***)(int, int))v23)(v23, 1); /*0x83c90d*/
      v22 = Stage; /*0x83c90f*/
    }
    *v24 = v22; /*0x83c915*/
    if ( v22 != 0.0 ) /*0x83c917*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v22) + 4)); /*0x83c91d*/
  }
  v26 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x1C); /*0x83c926*/
  v27 = *(volatile LONG **)(v26 + 4); /*0x83c92e*/
  v25 = v27 == g_CanopyShadowMap; /*0x83c931*/
  v28 = (NiRenderedTexture *)g_CanopyShadowMap; /*0x83c933*/
  Stage = *(float *)&g_CanopyShadowMap; /*0x83c935*/
  if ( !v25 ) /*0x83c939*/
  {
    if ( v27 ) /*0x83c93d*/
    {
      if ( !InterlockedDecrement(v27 + 1) ) /*0x83c943*/
        (**(void (__thiscall ***)(void *, int))v27)((void *)v27, 1); /*0x83c959*/
      v28 = (NiRenderedTexture *)LODWORD(Stage); /*0x83c95b*/
    }
    *(_DWORD *)(v26 + 4) = v28; /*0x83c961*/
    if ( v28 ) /*0x83c964*/
      InterlockedIncrement((volatile LONG *)&v28->member); /*0x83c96a*/
  }
  ++*(_DWORD *)(v7 + 0x60); /*0x83c975*/
  Stage = *(float *)&v7; /*0x83c978*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x83c990*/
  v25 = (*(_DWORD *)(v7 + 0x60))-- == 1; /*0x83c998*/
  if ( v25 ) /*0x83c99f*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v7); /*0x83c9a3*/
  ++*((_DWORD *)this + 0xE); /*0x83c9a8*/
}
