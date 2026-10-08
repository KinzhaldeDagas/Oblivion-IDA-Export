void __thiscall sub_83E100(NiTArray_NiD3DPass *this, int a2, int a3, float Stage, _DWORD *a5)
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

  v6 = (NiRenderedTexture *)LODWORD(Stage); /*0x83e126*/
  v7 = unk_B45838; /*0x83e12d*/
  sub_848DA0(*(float **)(LODWORD(Stage) + 0x10)); /*0x83e134*/
  m_controller = (float *)v6->member.super.super.m_controller; /*0x83e139*/
  sub_848E50(m_controller); /*0x83e13f*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, m_controller, 0); /*0x83e156*/
  v9 = a5; /*0x83e15b*/
  v11 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x83e163*/
  Stage = **(float **)(v7 + 0x24); /*0x83e16d*/
  v10 = (NiRenderedTexture *)LODWORD(Stage); /*0x83e15f*/
  v12 = v11(a5, 0); /*0x83e171*/
  m_uiRefCount = v10->member.super.super.super.m_uiRefCount; /*0x83e173*/
  v29 = v12; /*0x83e178*/
  if ( m_uiRefCount != v12 ) /*0x83e17c*/
  {
    if ( m_uiRefCount ) /*0x83e180*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x83e186*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x83e19d*/
      v12 = v29; /*0x83e19f*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v12; /*0x83e1a9*/
    if ( v12 ) /*0x83e1ac*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x83e1b2*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x83e1c0*/
  Stage = *(float *)(*(_DWORD *)(v7 + 0x24) + 4); /*0x83e1d0*/
  v14 = (NiRenderedTexture *)LODWORD(Stage); /*0x83e1c8*/
  v15 = sub_848FD0(v9, 0); /*0x83e1d4*/
  v16 = v14->member.super.super.super.m_uiRefCount; /*0x83e1d9*/
  v30 = v15; /*0x83e1de*/
  if ( v16 != v15 ) /*0x83e1e2*/
  {
    if ( v16 ) /*0x83e1e6*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x83e1ec*/
        (**(void (__thiscall ***)(UInt32, int))v16)(v16, 1); /*0x83e203*/
      v15 = v30; /*0x83e205*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v15; /*0x83e20f*/
    if ( v15 ) /*0x83e212*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x83e218*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x83e226*/
  v18 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v9 + 0x90); /*0x83e233*/
  Stage = *(float *)(*(_DWORD *)(v7 + 0x24) + 0x10); /*0x83e23d*/
  v17 = (NiRenderedTexture *)LODWORD(Stage); /*0x83e22e*/
  v19 = v18(v9, 0); /*0x83e241*/
  v20 = v17->member.super.super.super.m_uiRefCount; /*0x83e243*/
  v31 = v19; /*0x83e248*/
  if ( v20 != v19 ) /*0x83e24c*/
  {
    if ( v20 ) /*0x83e250*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) ) /*0x83e256*/
        (**(void (__thiscall ***)(UInt32, int))v20)(v20, 1); /*0x83e26d*/
      v19 = v31; /*0x83e26f*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v19; /*0x83e279*/
    if ( v19 ) /*0x83e27c*/
      InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x83e282*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x83e290*/
  v21 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x18); /*0x83e298*/
  v22 = unk_B43108[0]; /*0x83e29b*/
  v23 = *(_DWORD *)(v21 + 4); /*0x83e2a0*/
  v24 = (float *)(v21 + 4); /*0x83e2a3*/
  v25 = v23 == LODWORD(unk_B43108[0]); /*0x83e2a6*/
  Stage = unk_B43108[0]; /*0x83e2a8*/
  if ( !v25 ) /*0x83e2ac*/
  {
    if ( v23 ) /*0x83e2b0*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v23 + 4)) ) /*0x83e2b6*/
        (**(void (__thiscall ***)(int, int))v23)(v23, 1); /*0x83e2cd*/
      v22 = Stage; /*0x83e2cf*/
    }
    *v24 = v22; /*0x83e2d5*/
    if ( v22 != 0.0 ) /*0x83e2d7*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v22) + 4)); /*0x83e2dd*/
  }
  v26 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x1C); /*0x83e2e6*/
  v27 = *(volatile LONG **)(v26 + 4); /*0x83e2ee*/
  v25 = v27 == g_CanopyShadowMap; /*0x83e2f1*/
  v28 = (NiRenderedTexture *)g_CanopyShadowMap; /*0x83e2f3*/
  Stage = *(float *)&g_CanopyShadowMap; /*0x83e2f5*/
  if ( !v25 ) /*0x83e2f9*/
  {
    if ( v27 ) /*0x83e2fd*/
    {
      if ( !InterlockedDecrement(v27 + 1) ) /*0x83e303*/
        (**(void (__thiscall ***)(void *, int))v27)((void *)v27, 1); /*0x83e319*/
      v28 = (NiRenderedTexture *)LODWORD(Stage); /*0x83e31b*/
    }
    *(_DWORD *)(v26 + 4) = v28; /*0x83e321*/
    if ( v28 ) /*0x83e324*/
      InterlockedIncrement((volatile LONG *)&v28->member); /*0x83e32a*/
  }
  ++*(_DWORD *)(v7 + 0x60); /*0x83e335*/
  Stage = *(float *)&v7; /*0x83e338*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x83e350*/
  v25 = (*(_DWORD *)(v7 + 0x60))-- == 1; /*0x83e358*/
  if ( v25 ) /*0x83e35f*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v7); /*0x83e363*/
  ++*((_DWORD *)this + 0xE); /*0x83e368*/
}
