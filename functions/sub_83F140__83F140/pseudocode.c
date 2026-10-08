void __thiscall sub_83F140(NiTArray_NiD3DPass *this, int a2, int a3, float Stage, _DWORD *a5)
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

  v6 = (NiRenderedTexture *)LODWORD(Stage); /*0x83f166*/
  v7 = unk_B45884; /*0x83f16d*/
  sub_848C40(*(float **)(LODWORD(Stage) + 0x10)); /*0x83f174*/
  m_controller = (float *)v6->member.super.super.m_controller; /*0x83f179*/
  sub_848E50(m_controller); /*0x83f17f*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, NiExtraData **))this->_vtbl + 0x2F))( /*0x83f198*/
    this,
    a2,
    m_controller,
    v6->member.super.super.m_extraDataList);
  v9 = a5; /*0x83f19d*/
  v11 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x83f1a5*/
  Stage = **(float **)(v7 + 0x24); /*0x83f1af*/
  v10 = (NiRenderedTexture *)LODWORD(Stage); /*0x83f1a1*/
  v12 = v11(a5, 0); /*0x83f1b3*/
  m_uiRefCount = v10->member.super.super.super.m_uiRefCount; /*0x83f1b5*/
  v25 = v12; /*0x83f1ba*/
  if ( m_uiRefCount != v12 ) /*0x83f1be*/
  {
    if ( m_uiRefCount ) /*0x83f1c2*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x83f1c8*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x83f1df*/
      v12 = v25; /*0x83f1e1*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v12; /*0x83f1eb*/
    if ( v12 ) /*0x83f1ee*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x83f1f4*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x83f202*/
  Stage = *(float *)(*(_DWORD *)(v7 + 0x24) + 4); /*0x83f212*/
  v14 = (NiRenderedTexture *)LODWORD(Stage); /*0x83f20a*/
  v15 = sub_848FD0(v9, 0); /*0x83f216*/
  v16 = v14->member.super.super.super.m_uiRefCount; /*0x83f21b*/
  v26 = v15; /*0x83f220*/
  if ( v16 != v15 ) /*0x83f224*/
  {
    if ( v16 ) /*0x83f228*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x83f22e*/
        (**(void (__thiscall ***)(UInt32, int))v16)(v16, 1); /*0x83f245*/
      v15 = v26; /*0x83f247*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v15; /*0x83f251*/
    if ( v15 ) /*0x83f254*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x83f25a*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x83f268*/
  v17 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x18); /*0x83f270*/
  v18 = unk_B43108[0]; /*0x83f273*/
  v19 = *(_DWORD *)(v17 + 4); /*0x83f278*/
  v20 = (float *)(v17 + 4); /*0x83f27b*/
  v21 = v19 == LODWORD(unk_B43108[0]); /*0x83f27e*/
  Stage = unk_B43108[0]; /*0x83f280*/
  if ( !v21 ) /*0x83f284*/
  {
    if ( v19 ) /*0x83f288*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v19 + 4)) ) /*0x83f28e*/
        (**(void (__thiscall ***)(int, int))v19)(v19, 1); /*0x83f2a5*/
      v18 = Stage; /*0x83f2a7*/
    }
    *v20 = v18; /*0x83f2ad*/
    if ( v18 != 0.0 ) /*0x83f2af*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v18) + 4)); /*0x83f2b5*/
  }
  v22 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x1C); /*0x83f2be*/
  v23 = *(volatile LONG **)(v22 + 4); /*0x83f2c6*/
  v21 = v23 == g_CanopyShadowMap; /*0x83f2c9*/
  v24 = (NiRenderedTexture *)g_CanopyShadowMap; /*0x83f2cb*/
  Stage = *(float *)&g_CanopyShadowMap; /*0x83f2cd*/
  if ( !v21 ) /*0x83f2d1*/
  {
    if ( v23 ) /*0x83f2d5*/
    {
      if ( !InterlockedDecrement(v23 + 1) ) /*0x83f2db*/
        (**(void (__thiscall ***)(void *, int))v23)((void *)v23, 1); /*0x83f2f1*/
      v24 = (NiRenderedTexture *)LODWORD(Stage); /*0x83f2f3*/
    }
    *(_DWORD *)(v22 + 4) = v24; /*0x83f2f9*/
    if ( v24 ) /*0x83f2fc*/
      InterlockedIncrement((volatile LONG *)&v24->member); /*0x83f302*/
  }
  ++*(_DWORD *)(v7 + 0x60); /*0x83f30d*/
  Stage = *(float *)&v7; /*0x83f310*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x83f328*/
  v21 = (*(_DWORD *)(v7 + 0x60))-- == 1; /*0x83f330*/
  if ( v21 ) /*0x83f337*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v7); /*0x83f33b*/
  ++*((_DWORD *)this + 0xE); /*0x83f340*/
}
