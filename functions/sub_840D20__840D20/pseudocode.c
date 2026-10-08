void __thiscall sub_840D20(NiTArray_NiD3DPass *this, int a2, int a3, float Stage, _DWORD *a5)
{
  NiRenderedTexture *v6; // edi
  int v7; // ebx
  float *m_controller; // ebp
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

  v6 = (NiRenderedTexture *)LODWORD(Stage); /*0x840d46*/
  v7 = unk_B458F0; /*0x840d4d*/
  sub_848DA0(*(float **)(LODWORD(Stage) + 0x10)); /*0x840d54*/
  m_controller = (float *)v6->member.super.super.m_controller; /*0x840d59*/
  sub_848E50(m_controller); /*0x840d5f*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, NiExtraData **))this->_vtbl + 0x2F))( /*0x840d78*/
    this,
    a2,
    m_controller,
    v6->member.super.super.m_extraDataList);
  v9 = a5; /*0x840d7d*/
  v11 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x840d85*/
  Stage = **(float **)(v7 + 0x24); /*0x840d8f*/
  v10 = (NiRenderedTexture *)LODWORD(Stage); /*0x840d81*/
  v12 = v11(a5, 0); /*0x840d93*/
  m_uiRefCount = v10->member.super.super.super.m_uiRefCount; /*0x840d95*/
  v29 = v12; /*0x840d9a*/
  if ( m_uiRefCount != v12 ) /*0x840d9e*/
  {
    if ( m_uiRefCount ) /*0x840da2*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x840da8*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x840dbf*/
      v12 = v29; /*0x840dc1*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v12; /*0x840dcb*/
    if ( v12 ) /*0x840dce*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x840dd4*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x840de2*/
  Stage = *(float *)(*(_DWORD *)(v7 + 0x24) + 4); /*0x840df2*/
  v14 = (NiRenderedTexture *)LODWORD(Stage); /*0x840dea*/
  v15 = sub_848FD0(v9, 0); /*0x840df6*/
  v16 = v14->member.super.super.super.m_uiRefCount; /*0x840dfb*/
  v30 = v15; /*0x840e00*/
  if ( v16 != v15 ) /*0x840e04*/
  {
    if ( v16 ) /*0x840e08*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x840e0e*/
        (**(void (__thiscall ***)(UInt32, int))v16)(v16, 1); /*0x840e25*/
      v15 = v30; /*0x840e27*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v15; /*0x840e31*/
    if ( v15 ) /*0x840e34*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x840e3a*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x840e48*/
  v18 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v9 + 0x90); /*0x840e55*/
  Stage = *(float *)(*(_DWORD *)(v7 + 0x24) + 0x10); /*0x840e5f*/
  v17 = (NiRenderedTexture *)LODWORD(Stage); /*0x840e50*/
  v19 = v18(v9, 0); /*0x840e63*/
  v20 = v17->member.super.super.super.m_uiRefCount; /*0x840e65*/
  v31 = v19; /*0x840e6a*/
  if ( v20 != v19 ) /*0x840e6e*/
  {
    if ( v20 ) /*0x840e72*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) ) /*0x840e78*/
        (**(void (__thiscall ***)(UInt32, int))v20)(v20, 1); /*0x840e8f*/
      v19 = v31; /*0x840e91*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v19; /*0x840e9b*/
    if ( v19 ) /*0x840e9e*/
      InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x840ea4*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x840eb2*/
  v21 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x18); /*0x840eba*/
  v22 = unk_B43108[0]; /*0x840ebd*/
  v23 = *(_DWORD *)(v21 + 4); /*0x840ec2*/
  v24 = (float *)(v21 + 4); /*0x840ec5*/
  v25 = v23 == LODWORD(unk_B43108[0]); /*0x840ec8*/
  Stage = unk_B43108[0]; /*0x840eca*/
  if ( !v25 ) /*0x840ece*/
  {
    if ( v23 ) /*0x840ed2*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v23 + 4)) ) /*0x840ed8*/
        (**(void (__thiscall ***)(int, int))v23)(v23, 1); /*0x840eef*/
      v22 = Stage; /*0x840ef1*/
    }
    *v24 = v22; /*0x840ef7*/
    if ( v22 != 0.0 ) /*0x840ef9*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v22) + 4)); /*0x840eff*/
  }
  v26 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x1C); /*0x840f08*/
  v27 = *(volatile LONG **)(v26 + 4); /*0x840f10*/
  v25 = v27 == g_CanopyShadowMap; /*0x840f13*/
  v28 = (NiRenderedTexture *)g_CanopyShadowMap; /*0x840f15*/
  Stage = *(float *)&g_CanopyShadowMap; /*0x840f17*/
  if ( !v25 ) /*0x840f1b*/
  {
    if ( v27 ) /*0x840f1f*/
    {
      if ( !InterlockedDecrement(v27 + 1) ) /*0x840f25*/
        (**(void (__thiscall ***)(void *, int))v27)((void *)v27, 1); /*0x840f3b*/
      v28 = (NiRenderedTexture *)LODWORD(Stage); /*0x840f3d*/
    }
    *(_DWORD *)(v26 + 4) = v28; /*0x840f43*/
    if ( v28 ) /*0x840f46*/
      InterlockedIncrement((volatile LONG *)&v28->member); /*0x840f4c*/
  }
  ++*(_DWORD *)(v7 + 0x60); /*0x840f57*/
  Stage = *(float *)&v7; /*0x840f5a*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x840f72*/
  v25 = (*(_DWORD *)(v7 + 0x60))-- == 1; /*0x840f7a*/
  if ( v25 ) /*0x840f81*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v7); /*0x840f85*/
  ++*((_DWORD *)this + 0xE); /*0x840f8a*/
}
