void __thiscall sub_83F8A0(NiTArray_NiD3DPass *this, int a2, int a3, float Stage, _DWORD *a5)
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

  v6 = (NiRenderedTexture *)LODWORD(Stage); /*0x83f8c6*/
  v7 = unk_B4589C; /*0x83f8cd*/
  sub_848C40(*(float **)(LODWORD(Stage) + 0x10)); /*0x83f8d4*/
  m_controller = (float *)v6->member.super.super.m_controller; /*0x83f8d9*/
  sub_848E50(m_controller); /*0x83f8df*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, NiExtraData **))this->_vtbl + 0x2F))( /*0x83f8f8*/
    this,
    a2,
    m_controller,
    v6->member.super.super.m_extraDataList);
  v9 = a5; /*0x83f8fd*/
  v11 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x83f905*/
  Stage = **(float **)(v7 + 0x24); /*0x83f90f*/
  v10 = (NiRenderedTexture *)LODWORD(Stage); /*0x83f901*/
  v12 = v11(a5, 0); /*0x83f913*/
  m_uiRefCount = v10->member.super.super.super.m_uiRefCount; /*0x83f915*/
  v25 = v12; /*0x83f91a*/
  if ( m_uiRefCount != v12 ) /*0x83f91e*/
  {
    if ( m_uiRefCount ) /*0x83f922*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x83f928*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x83f93f*/
      v12 = v25; /*0x83f941*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v12; /*0x83f94b*/
    if ( v12 ) /*0x83f94e*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x83f954*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x83f962*/
  Stage = *(float *)(*(_DWORD *)(v7 + 0x24) + 4); /*0x83f972*/
  v14 = (NiRenderedTexture *)LODWORD(Stage); /*0x83f96a*/
  v15 = sub_848FD0(v9, 0); /*0x83f976*/
  v16 = v14->member.super.super.super.m_uiRefCount; /*0x83f97b*/
  v26 = v15; /*0x83f980*/
  if ( v16 != v15 ) /*0x83f984*/
  {
    if ( v16 ) /*0x83f988*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x83f98e*/
        (**(void (__thiscall ***)(UInt32, int))v16)(v16, 1); /*0x83f9a5*/
      v15 = v26; /*0x83f9a7*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v15; /*0x83f9b1*/
    if ( v15 ) /*0x83f9b4*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x83f9ba*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x83f9c8*/
  v17 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x18); /*0x83f9d0*/
  v18 = unk_B43108[0]; /*0x83f9d3*/
  v19 = *(_DWORD *)(v17 + 4); /*0x83f9d8*/
  v20 = (float *)(v17 + 4); /*0x83f9db*/
  v21 = v19 == LODWORD(unk_B43108[0]); /*0x83f9de*/
  Stage = unk_B43108[0]; /*0x83f9e0*/
  if ( !v21 ) /*0x83f9e4*/
  {
    if ( v19 ) /*0x83f9e8*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v19 + 4)) ) /*0x83f9ee*/
        (**(void (__thiscall ***)(int, int))v19)(v19, 1); /*0x83fa05*/
      v18 = Stage; /*0x83fa07*/
    }
    *v20 = v18; /*0x83fa0d*/
    if ( v18 != 0.0 ) /*0x83fa0f*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v18) + 4)); /*0x83fa15*/
  }
  v22 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x1C); /*0x83fa1e*/
  v23 = *(volatile LONG **)(v22 + 4); /*0x83fa26*/
  v21 = v23 == g_CanopyShadowMap; /*0x83fa29*/
  v24 = (NiRenderedTexture *)g_CanopyShadowMap; /*0x83fa2b*/
  Stage = *(float *)&g_CanopyShadowMap; /*0x83fa2d*/
  if ( !v21 ) /*0x83fa31*/
  {
    if ( v23 ) /*0x83fa35*/
    {
      if ( !InterlockedDecrement(v23 + 1) ) /*0x83fa3b*/
        (**(void (__thiscall ***)(void *, int))v23)((void *)v23, 1); /*0x83fa51*/
      v24 = (NiRenderedTexture *)LODWORD(Stage); /*0x83fa53*/
    }
    *(_DWORD *)(v22 + 4) = v24; /*0x83fa59*/
    if ( v24 ) /*0x83fa5c*/
      InterlockedIncrement((volatile LONG *)&v24->member); /*0x83fa62*/
  }
  ++*(_DWORD *)(v7 + 0x60); /*0x83fa6d*/
  Stage = *(float *)&v7; /*0x83fa70*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x83fa88*/
  v21 = (*(_DWORD *)(v7 + 0x60))-- == 1; /*0x83fa90*/
  if ( v21 ) /*0x83fa97*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v7); /*0x83fa9b*/
  ++*((_DWORD *)this + 0xE); /*0x83faa0*/
}
