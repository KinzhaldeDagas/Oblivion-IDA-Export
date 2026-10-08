void __thiscall sub_83C520(NiTArray_NiD3DPass *this, int a2, int a3, float Stage, _DWORD *a5)
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

  v6 = (NiRenderedTexture *)LODWORD(Stage); /*0x83c546*/
  v7 = unk_B457CC; /*0x83c54d*/
  sub_848C40(*(float **)(LODWORD(Stage) + 0x10)); /*0x83c554*/
  m_controller = (float *)v6->member.super.super.m_controller; /*0x83c559*/
  sub_848E50(m_controller); /*0x83c55f*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, m_controller, 0); /*0x83c576*/
  v9 = a5; /*0x83c57b*/
  v11 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x83c583*/
  Stage = **(float **)(v7 + 0x24); /*0x83c58d*/
  v10 = (NiRenderedTexture *)LODWORD(Stage); /*0x83c57f*/
  v12 = v11(a5, 0); /*0x83c591*/
  m_uiRefCount = v10->member.super.super.super.m_uiRefCount; /*0x83c593*/
  v25 = v12; /*0x83c598*/
  if ( m_uiRefCount != v12 ) /*0x83c59c*/
  {
    if ( m_uiRefCount ) /*0x83c5a0*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x83c5a6*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x83c5bd*/
      v12 = v25; /*0x83c5bf*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v12; /*0x83c5c9*/
    if ( v12 ) /*0x83c5cc*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x83c5d2*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x83c5e0*/
  Stage = *(float *)(*(_DWORD *)(v7 + 0x24) + 4); /*0x83c5f0*/
  v14 = (NiRenderedTexture *)LODWORD(Stage); /*0x83c5e8*/
  v15 = sub_848FD0(v9, 0); /*0x83c5f4*/
  v16 = v14->member.super.super.super.m_uiRefCount; /*0x83c5f9*/
  v26 = v15; /*0x83c5fe*/
  if ( v16 != v15 ) /*0x83c602*/
  {
    if ( v16 ) /*0x83c606*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x83c60c*/
        (**(void (__thiscall ***)(UInt32, int))v16)(v16, 1); /*0x83c623*/
      v15 = v26; /*0x83c625*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v15; /*0x83c62f*/
    if ( v15 ) /*0x83c632*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x83c638*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x83c646*/
  v17 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x18); /*0x83c64e*/
  v18 = unk_B43108[0]; /*0x83c651*/
  v19 = *(_DWORD *)(v17 + 4); /*0x83c656*/
  v20 = (float *)(v17 + 4); /*0x83c659*/
  v21 = v19 == LODWORD(unk_B43108[0]); /*0x83c65c*/
  Stage = unk_B43108[0]; /*0x83c65e*/
  if ( !v21 ) /*0x83c662*/
  {
    if ( v19 ) /*0x83c666*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v19 + 4)) ) /*0x83c66c*/
        (**(void (__thiscall ***)(int, int))v19)(v19, 1); /*0x83c683*/
      v18 = Stage; /*0x83c685*/
    }
    *v20 = v18; /*0x83c68b*/
    if ( v18 != 0.0 ) /*0x83c68d*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v18) + 4)); /*0x83c693*/
  }
  v22 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x1C); /*0x83c69c*/
  v23 = *(volatile LONG **)(v22 + 4); /*0x83c6a4*/
  v21 = v23 == g_CanopyShadowMap; /*0x83c6a7*/
  v24 = (NiRenderedTexture *)g_CanopyShadowMap; /*0x83c6a9*/
  Stage = *(float *)&g_CanopyShadowMap; /*0x83c6ab*/
  if ( !v21 ) /*0x83c6af*/
  {
    if ( v23 ) /*0x83c6b3*/
    {
      if ( !InterlockedDecrement(v23 + 1) ) /*0x83c6b9*/
        (**(void (__thiscall ***)(void *, int))v23)((void *)v23, 1); /*0x83c6cf*/
      v24 = (NiRenderedTexture *)LODWORD(Stage); /*0x83c6d1*/
    }
    *(_DWORD *)(v22 + 4) = v24; /*0x83c6d7*/
    if ( v24 ) /*0x83c6da*/
      InterlockedIncrement((volatile LONG *)&v24->member); /*0x83c6e0*/
  }
  ++*(_DWORD *)(v7 + 0x60); /*0x83c6eb*/
  Stage = *(float *)&v7; /*0x83c6ee*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x83c706*/
  v21 = (*(_DWORD *)(v7 + 0x60))-- == 1; /*0x83c70e*/
  if ( v21 ) /*0x83c715*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v7); /*0x83c719*/
  ++*((_DWORD *)this + 0xE); /*0x83c71e*/
}
