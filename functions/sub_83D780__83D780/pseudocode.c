void __thiscall sub_83D780(NiTArray_NiD3DPass *this, int a2, int a3, float Stage, _DWORD *a5)
{
  NiRenderedTexture *v6; // ebx
  int v7; // edi
  float *m_controller; // ebx
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

  v6 = (NiRenderedTexture *)LODWORD(Stage); /*0x83d7a6*/
  v7 = unk_B4581C; /*0x83d7ad*/
  sub_848C40(*(float **)(LODWORD(Stage) + 0x10)); /*0x83d7b4*/
  m_controller = (float *)v6->member.super.super.m_controller; /*0x83d7b9*/
  sub_848E50(m_controller); /*0x83d7bf*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, m_controller, 0); /*0x83d7d6*/
  v9 = a5; /*0x83d7db*/
  v11 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x83d7e3*/
  Stage = **(float **)(v7 + 0x24); /*0x83d7ed*/
  v10 = (NiRenderedTexture *)LODWORD(Stage); /*0x83d7df*/
  v12 = v11(a5, 0); /*0x83d7f1*/
  m_uiRefCount = v10->member.super.super.super.m_uiRefCount; /*0x83d7f3*/
  v25 = v12; /*0x83d7f8*/
  if ( m_uiRefCount != v12 ) /*0x83d7fc*/
  {
    if ( m_uiRefCount ) /*0x83d800*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x83d806*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x83d81d*/
      v12 = v25; /*0x83d81f*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v12; /*0x83d829*/
    if ( v12 ) /*0x83d82c*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x83d832*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x83d840*/
  Stage = *(float *)(*(_DWORD *)(v7 + 0x24) + 4); /*0x83d850*/
  v14 = (NiRenderedTexture *)LODWORD(Stage); /*0x83d848*/
  v15 = sub_848FD0(v9, 0); /*0x83d854*/
  v16 = v14->member.super.super.super.m_uiRefCount; /*0x83d859*/
  v26 = v15; /*0x83d85e*/
  if ( v16 != v15 ) /*0x83d862*/
  {
    if ( v16 ) /*0x83d866*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x83d86c*/
        (**(void (__thiscall ***)(UInt32, int))v16)(v16, 1); /*0x83d883*/
      v15 = v26; /*0x83d885*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v15; /*0x83d88f*/
    if ( v15 ) /*0x83d892*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x83d898*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x83d8a6*/
  v17 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x18); /*0x83d8ae*/
  v18 = unk_B43108[0]; /*0x83d8b1*/
  v19 = *(_DWORD *)(v17 + 4); /*0x83d8b6*/
  v20 = (float *)(v17 + 4); /*0x83d8b9*/
  v21 = v19 == LODWORD(unk_B43108[0]); /*0x83d8bc*/
  Stage = unk_B43108[0]; /*0x83d8be*/
  if ( !v21 ) /*0x83d8c2*/
  {
    if ( v19 ) /*0x83d8c6*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v19 + 4)) ) /*0x83d8cc*/
        (**(void (__thiscall ***)(int, int))v19)(v19, 1); /*0x83d8e3*/
      v18 = Stage; /*0x83d8e5*/
    }
    *v20 = v18; /*0x83d8eb*/
    if ( v18 != 0.0 ) /*0x83d8ed*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v18) + 4)); /*0x83d8f3*/
  }
  v22 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x1C); /*0x83d8fc*/
  v23 = *(volatile LONG **)(v22 + 4); /*0x83d904*/
  v21 = v23 == g_CanopyShadowMap; /*0x83d907*/
  v24 = (NiRenderedTexture *)g_CanopyShadowMap; /*0x83d909*/
  Stage = *(float *)&g_CanopyShadowMap; /*0x83d90b*/
  if ( !v21 ) /*0x83d90f*/
  {
    if ( v23 ) /*0x83d913*/
    {
      if ( !InterlockedDecrement(v23 + 1) ) /*0x83d919*/
        (**(void (__thiscall ***)(void *, int))v23)((void *)v23, 1); /*0x83d92f*/
      v24 = (NiRenderedTexture *)LODWORD(Stage); /*0x83d931*/
    }
    *(_DWORD *)(v22 + 4) = v24; /*0x83d937*/
    if ( v24 ) /*0x83d93a*/
      InterlockedIncrement((volatile LONG *)&v24->member); /*0x83d940*/
  }
  ++*(_DWORD *)(v7 + 0x60); /*0x83d94b*/
  Stage = *(float *)&v7; /*0x83d94e*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x83d966*/
  v21 = (*(_DWORD *)(v7 + 0x60))-- == 1; /*0x83d96e*/
  if ( v21 ) /*0x83d975*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v7); /*0x83d979*/
  ++*((_DWORD *)this + 0xE); /*0x83d97e*/
}
