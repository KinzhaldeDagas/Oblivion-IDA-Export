void __thiscall sub_83FAC0(NiTArray_NiD3DPass *this, int a2, int a3, float Stage, _DWORD *a5)
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

  v6 = (NiRenderedTexture *)LODWORD(Stage); /*0x83fae6*/
  v7 = unk_B458A0; /*0x83faed*/
  sub_848DA0(*(float **)(LODWORD(Stage) + 0x10)); /*0x83faf4*/
  m_controller = (float *)v6->member.super.super.m_controller; /*0x83faf9*/
  sub_848E50(m_controller); /*0x83faff*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, NiExtraData **))this->_vtbl + 0x2F))( /*0x83fb18*/
    this,
    a2,
    m_controller,
    v6->member.super.super.m_extraDataList);
  v9 = a5; /*0x83fb1d*/
  v11 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x83fb25*/
  Stage = **(float **)(v7 + 0x24); /*0x83fb2f*/
  v10 = (NiRenderedTexture *)LODWORD(Stage); /*0x83fb21*/
  v12 = v11(a5, 0); /*0x83fb33*/
  m_uiRefCount = v10->member.super.super.super.m_uiRefCount; /*0x83fb35*/
  v29 = v12; /*0x83fb3a*/
  if ( m_uiRefCount != v12 ) /*0x83fb3e*/
  {
    if ( m_uiRefCount ) /*0x83fb42*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x83fb48*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x83fb5f*/
      v12 = v29; /*0x83fb61*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v12; /*0x83fb6b*/
    if ( v12 ) /*0x83fb6e*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x83fb74*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x83fb82*/
  Stage = *(float *)(*(_DWORD *)(v7 + 0x24) + 4); /*0x83fb92*/
  v14 = (NiRenderedTexture *)LODWORD(Stage); /*0x83fb8a*/
  v15 = sub_848FD0(v9, 0); /*0x83fb96*/
  v16 = v14->member.super.super.super.m_uiRefCount; /*0x83fb9b*/
  v30 = v15; /*0x83fba0*/
  if ( v16 != v15 ) /*0x83fba4*/
  {
    if ( v16 ) /*0x83fba8*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x83fbae*/
        (**(void (__thiscall ***)(UInt32, int))v16)(v16, 1); /*0x83fbc5*/
      v15 = v30; /*0x83fbc7*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v15; /*0x83fbd1*/
    if ( v15 ) /*0x83fbd4*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x83fbda*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x83fbe8*/
  v18 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v9 + 0x90); /*0x83fbf5*/
  Stage = *(float *)(*(_DWORD *)(v7 + 0x24) + 0x10); /*0x83fbff*/
  v17 = (NiRenderedTexture *)LODWORD(Stage); /*0x83fbf0*/
  v19 = v18(v9, 0); /*0x83fc03*/
  v20 = v17->member.super.super.super.m_uiRefCount; /*0x83fc05*/
  v31 = v19; /*0x83fc0a*/
  if ( v20 != v19 ) /*0x83fc0e*/
  {
    if ( v20 ) /*0x83fc12*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) ) /*0x83fc18*/
        (**(void (__thiscall ***)(UInt32, int))v20)(v20, 1); /*0x83fc2f*/
      v19 = v31; /*0x83fc31*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v19; /*0x83fc3b*/
    if ( v19 ) /*0x83fc3e*/
      InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x83fc44*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x83fc52*/
  v21 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x18); /*0x83fc5a*/
  v22 = unk_B43108[0]; /*0x83fc5d*/
  v23 = *(_DWORD *)(v21 + 4); /*0x83fc62*/
  v24 = (float *)(v21 + 4); /*0x83fc65*/
  v25 = v23 == LODWORD(unk_B43108[0]); /*0x83fc68*/
  Stage = unk_B43108[0]; /*0x83fc6a*/
  if ( !v25 ) /*0x83fc6e*/
  {
    if ( v23 ) /*0x83fc72*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v23 + 4)) ) /*0x83fc78*/
        (**(void (__thiscall ***)(int, int))v23)(v23, 1); /*0x83fc8f*/
      v22 = Stage; /*0x83fc91*/
    }
    *v24 = v22; /*0x83fc97*/
    if ( v22 != 0.0 ) /*0x83fc99*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v22) + 4)); /*0x83fc9f*/
  }
  v26 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x1C); /*0x83fca8*/
  v27 = *(volatile LONG **)(v26 + 4); /*0x83fcb0*/
  v25 = v27 == g_CanopyShadowMap; /*0x83fcb3*/
  v28 = (NiRenderedTexture *)g_CanopyShadowMap; /*0x83fcb5*/
  Stage = *(float *)&g_CanopyShadowMap; /*0x83fcb7*/
  if ( !v25 ) /*0x83fcbb*/
  {
    if ( v27 ) /*0x83fcbf*/
    {
      if ( !InterlockedDecrement(v27 + 1) ) /*0x83fcc5*/
        (**(void (__thiscall ***)(void *, int))v27)((void *)v27, 1); /*0x83fcdb*/
      v28 = (NiRenderedTexture *)LODWORD(Stage); /*0x83fcdd*/
    }
    *(_DWORD *)(v26 + 4) = v28; /*0x83fce3*/
    if ( v28 ) /*0x83fce6*/
      InterlockedIncrement((volatile LONG *)&v28->member); /*0x83fcec*/
  }
  ++*(_DWORD *)(v7 + 0x60); /*0x83fcf7*/
  Stage = *(float *)&v7; /*0x83fcfa*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x83fd12*/
  v25 = (*(_DWORD *)(v7 + 0x60))-- == 1; /*0x83fd1a*/
  if ( v25 ) /*0x83fd21*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v7); /*0x83fd25*/
  ++*((_DWORD *)this + 0xE); /*0x83fd2a*/
}
