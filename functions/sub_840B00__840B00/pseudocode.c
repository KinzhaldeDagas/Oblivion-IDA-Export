void __thiscall sub_840B00(NiTArray_NiD3DPass *this, int a2, int a3, float Stage, _DWORD *a5)
{
  NiRenderedTexture *v6; // ebx
  int v7; // edi
  float *m_controller; // ebp
  _DWORD *v9; // ebx
  NiRenderedTexture *v10; // ebp
  int (__thiscall *v11)(_DWORD *, _DWORD); // eax
  UInt32 v12; // eax
  UInt32 m_uiRefCount; // ebp
  NiRenderedTexture *v14; // ebp
  UInt32 v15; // eax
  UInt32 v16; // ebp
  int v17; // ebx
  float v18; // eax
  int v19; // ebp
  float *v20; // ebx
  bool v21; // zf
  int v22; // ebp
  volatile LONG *v23; // ebx
  NiRenderedTexture *v24; // ecx
  UInt32 v25; // [esp+30h] [ebp+4h]
  UInt32 v26; // [esp+30h] [ebp+4h]

  v6 = (NiRenderedTexture *)LODWORD(Stage); /*0x840b26*/
  v7 = unk_B458EC; /*0x840b2d*/
  sub_848C40(*(float **)(LODWORD(Stage) + 0x10)); /*0x840b34*/
  m_controller = (float *)v6->member.super.super.m_controller; /*0x840b39*/
  sub_848E50(m_controller); /*0x840b3f*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, NiExtraData **))this->_vtbl + 0x2F))( /*0x840b58*/
    this,
    a2,
    m_controller,
    v6->member.super.super.m_extraDataList);
  v9 = a5; /*0x840b5d*/
  v11 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x840b65*/
  Stage = **(float **)(v7 + 0x24); /*0x840b6f*/
  v10 = (NiRenderedTexture *)LODWORD(Stage); /*0x840b61*/
  v12 = v11(a5, 0); /*0x840b73*/
  m_uiRefCount = v10->member.super.super.super.m_uiRefCount; /*0x840b75*/
  v25 = v12; /*0x840b7a*/
  if ( m_uiRefCount != v12 ) /*0x840b7e*/
  {
    if ( m_uiRefCount ) /*0x840b82*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x840b88*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x840b9f*/
      v12 = v25; /*0x840ba1*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v12; /*0x840bab*/
    if ( v12 ) /*0x840bae*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x840bb4*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x840bc2*/
  Stage = *(float *)(*(_DWORD *)(v7 + 0x24) + 4); /*0x840bd2*/
  v14 = (NiRenderedTexture *)LODWORD(Stage); /*0x840bca*/
  v15 = sub_848FD0(v9, 0); /*0x840bd6*/
  v16 = v14->member.super.super.super.m_uiRefCount; /*0x840bdb*/
  v26 = v15; /*0x840be0*/
  if ( v16 != v15 ) /*0x840be4*/
  {
    if ( v16 ) /*0x840be8*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x840bee*/
        (**(void (__thiscall ***)(UInt32, int))v16)(v16, 1); /*0x840c05*/
      v15 = v26; /*0x840c07*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v15; /*0x840c11*/
    if ( v15 ) /*0x840c14*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x840c1a*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x840c28*/
  v17 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x18); /*0x840c30*/
  v18 = unk_B43108[0]; /*0x840c33*/
  v19 = *(_DWORD *)(v17 + 4); /*0x840c38*/
  v20 = (float *)(v17 + 4); /*0x840c3b*/
  v21 = v19 == LODWORD(unk_B43108[0]); /*0x840c3e*/
  Stage = unk_B43108[0]; /*0x840c40*/
  if ( !v21 ) /*0x840c44*/
  {
    if ( v19 ) /*0x840c48*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v19 + 4)) ) /*0x840c4e*/
        (**(void (__thiscall ***)(int, int))v19)(v19, 1); /*0x840c65*/
      v18 = Stage; /*0x840c67*/
    }
    *v20 = v18; /*0x840c6d*/
    if ( v18 != 0.0 ) /*0x840c6f*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v18) + 4)); /*0x840c75*/
  }
  v22 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x1C); /*0x840c7e*/
  v23 = *(volatile LONG **)(v22 + 4); /*0x840c86*/
  v21 = v23 == g_CanopyShadowMap; /*0x840c89*/
  v24 = (NiRenderedTexture *)g_CanopyShadowMap; /*0x840c8b*/
  Stage = *(float *)&g_CanopyShadowMap; /*0x840c8d*/
  if ( !v21 ) /*0x840c91*/
  {
    if ( v23 ) /*0x840c95*/
    {
      if ( !InterlockedDecrement(v23 + 1) ) /*0x840c9b*/
        (**(void (__thiscall ***)(void *, int))v23)((void *)v23, 1); /*0x840cb1*/
      v24 = (NiRenderedTexture *)LODWORD(Stage); /*0x840cb3*/
    }
    *(_DWORD *)(v22 + 4) = v24; /*0x840cb9*/
    if ( v24 ) /*0x840cbc*/
      InterlockedIncrement((volatile LONG *)&v24->member); /*0x840cc2*/
  }
  ++*(_DWORD *)(v7 + 0x60); /*0x840ccd*/
  Stage = *(float *)&v7; /*0x840cd0*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x840ce8*/
  v21 = (*(_DWORD *)(v7 + 0x60))-- == 1; /*0x840cf0*/
  if ( v21 ) /*0x840cf7*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v7); /*0x840cfb*/
  ++*((_DWORD *)this + 0xE); /*0x840d00*/
}
