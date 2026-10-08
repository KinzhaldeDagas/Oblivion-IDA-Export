void __thiscall sub_83BBF0(NiTArray_NiD3DPass *this, int a2, int a3, float Stage, _DWORD *a5)
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

  v6 = (NiRenderedTexture *)LODWORD(Stage); /*0x83bc16*/
  v7 = unk_B457B0; /*0x83bc1d*/
  sub_848C40(*(float **)(LODWORD(Stage) + 0x10)); /*0x83bc24*/
  m_controller = (float *)v6->member.super.super.m_controller; /*0x83bc29*/
  sub_848E50(m_controller); /*0x83bc2f*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, m_controller, 0); /*0x83bc46*/
  v9 = a5; /*0x83bc4b*/
  v11 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x83bc53*/
  Stage = **(float **)(v7 + 0x24); /*0x83bc5d*/
  v10 = (NiRenderedTexture *)LODWORD(Stage); /*0x83bc4f*/
  v12 = v11(a5, 0); /*0x83bc61*/
  m_uiRefCount = v10->member.super.super.super.m_uiRefCount; /*0x83bc63*/
  v25 = v12; /*0x83bc68*/
  if ( m_uiRefCount != v12 ) /*0x83bc6c*/
  {
    if ( m_uiRefCount ) /*0x83bc70*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x83bc76*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x83bc8d*/
      v12 = v25; /*0x83bc8f*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v12; /*0x83bc99*/
    if ( v12 ) /*0x83bc9c*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x83bca2*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x83bcb0*/
  Stage = *(float *)(*(_DWORD *)(v7 + 0x24) + 4); /*0x83bcc0*/
  v14 = (NiRenderedTexture *)LODWORD(Stage); /*0x83bcb8*/
  v15 = sub_848FD0(v9, 0); /*0x83bcc4*/
  v16 = v14->member.super.super.super.m_uiRefCount; /*0x83bcc9*/
  v26 = v15; /*0x83bcce*/
  if ( v16 != v15 ) /*0x83bcd2*/
  {
    if ( v16 ) /*0x83bcd6*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x83bcdc*/
        (**(void (__thiscall ***)(UInt32, int))v16)(v16, 1); /*0x83bcf3*/
      v15 = v26; /*0x83bcf5*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v15; /*0x83bcff*/
    if ( v15 ) /*0x83bd02*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x83bd08*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x83bd16*/
  v17 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x18); /*0x83bd1e*/
  v18 = unk_B43108[0]; /*0x83bd21*/
  v19 = *(_DWORD *)(v17 + 4); /*0x83bd26*/
  v20 = (float *)(v17 + 4); /*0x83bd29*/
  v21 = v19 == LODWORD(unk_B43108[0]); /*0x83bd2c*/
  Stage = unk_B43108[0]; /*0x83bd2e*/
  if ( !v21 ) /*0x83bd32*/
  {
    if ( v19 ) /*0x83bd36*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v19 + 4)) ) /*0x83bd3c*/
        (**(void (__thiscall ***)(int, int))v19)(v19, 1); /*0x83bd53*/
      v18 = Stage; /*0x83bd55*/
    }
    *v20 = v18; /*0x83bd5b*/
    if ( v18 != 0.0 ) /*0x83bd5d*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v18) + 4)); /*0x83bd63*/
  }
  v22 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x1C); /*0x83bd6c*/
  v23 = *(volatile LONG **)(v22 + 4); /*0x83bd74*/
  v21 = v23 == g_CanopyShadowMap; /*0x83bd77*/
  v24 = (NiRenderedTexture *)g_CanopyShadowMap; /*0x83bd79*/
  Stage = *(float *)&g_CanopyShadowMap; /*0x83bd7b*/
  if ( !v21 ) /*0x83bd7f*/
  {
    if ( v23 ) /*0x83bd83*/
    {
      if ( !InterlockedDecrement(v23 + 1) ) /*0x83bd89*/
        (**(void (__thiscall ***)(void *, int))v23)((void *)v23, 1); /*0x83bd9f*/
      v24 = (NiRenderedTexture *)LODWORD(Stage); /*0x83bda1*/
    }
    *(_DWORD *)(v22 + 4) = v24; /*0x83bda7*/
    if ( v24 ) /*0x83bdaa*/
      InterlockedIncrement((volatile LONG *)&v24->member); /*0x83bdb0*/
  }
  ++*(_DWORD *)(v7 + 0x60); /*0x83bdbb*/
  Stage = *(float *)&v7; /*0x83bdbe*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x83bdd6*/
  v21 = (*(_DWORD *)(v7 + 0x60))-- == 1; /*0x83bdde*/
  if ( v21 ) /*0x83bde5*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v7); /*0x83bde9*/
  ++*((_DWORD *)this + 0xE); /*0x83bdee*/
}
