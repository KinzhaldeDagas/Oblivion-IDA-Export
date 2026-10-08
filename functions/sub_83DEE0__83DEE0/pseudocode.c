void __thiscall sub_83DEE0(NiTArray_NiD3DPass *this, int a2, int a3, float Stage, _DWORD *a5)
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

  v6 = (NiRenderedTexture *)LODWORD(Stage); /*0x83df06*/
  v7 = unk_B45834; /*0x83df0d*/
  sub_848C40(*(float **)(LODWORD(Stage) + 0x10)); /*0x83df14*/
  m_controller = (float *)v6->member.super.super.m_controller; /*0x83df19*/
  sub_848E50(m_controller); /*0x83df1f*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, m_controller, 0); /*0x83df36*/
  v9 = a5; /*0x83df3b*/
  v11 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x83df43*/
  Stage = **(float **)(v7 + 0x24); /*0x83df4d*/
  v10 = (NiRenderedTexture *)LODWORD(Stage); /*0x83df3f*/
  v12 = v11(a5, 0); /*0x83df51*/
  m_uiRefCount = v10->member.super.super.super.m_uiRefCount; /*0x83df53*/
  v25 = v12; /*0x83df58*/
  if ( m_uiRefCount != v12 ) /*0x83df5c*/
  {
    if ( m_uiRefCount ) /*0x83df60*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x83df66*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x83df7d*/
      v12 = v25; /*0x83df7f*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v12; /*0x83df89*/
    if ( v12 ) /*0x83df8c*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x83df92*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x83dfa0*/
  Stage = *(float *)(*(_DWORD *)(v7 + 0x24) + 4); /*0x83dfb0*/
  v14 = (NiRenderedTexture *)LODWORD(Stage); /*0x83dfa8*/
  v15 = sub_848FD0(v9, 0); /*0x83dfb4*/
  v16 = v14->member.super.super.super.m_uiRefCount; /*0x83dfb9*/
  v26 = v15; /*0x83dfbe*/
  if ( v16 != v15 ) /*0x83dfc2*/
  {
    if ( v16 ) /*0x83dfc6*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x83dfcc*/
        (**(void (__thiscall ***)(UInt32, int))v16)(v16, 1); /*0x83dfe3*/
      v15 = v26; /*0x83dfe5*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v15; /*0x83dfef*/
    if ( v15 ) /*0x83dff2*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x83dff8*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x83e006*/
  v17 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x18); /*0x83e00e*/
  v18 = unk_B43108[0]; /*0x83e011*/
  v19 = *(_DWORD *)(v17 + 4); /*0x83e016*/
  v20 = (float *)(v17 + 4); /*0x83e019*/
  v21 = v19 == LODWORD(unk_B43108[0]); /*0x83e01c*/
  Stage = unk_B43108[0]; /*0x83e01e*/
  if ( !v21 ) /*0x83e022*/
  {
    if ( v19 ) /*0x83e026*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v19 + 4)) ) /*0x83e02c*/
        (**(void (__thiscall ***)(int, int))v19)(v19, 1); /*0x83e043*/
      v18 = Stage; /*0x83e045*/
    }
    *v20 = v18; /*0x83e04b*/
    if ( v18 != 0.0 ) /*0x83e04d*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v18) + 4)); /*0x83e053*/
  }
  v22 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x1C); /*0x83e05c*/
  v23 = *(volatile LONG **)(v22 + 4); /*0x83e064*/
  v21 = v23 == g_CanopyShadowMap; /*0x83e067*/
  v24 = (NiRenderedTexture *)g_CanopyShadowMap; /*0x83e069*/
  Stage = *(float *)&g_CanopyShadowMap; /*0x83e06b*/
  if ( !v21 ) /*0x83e06f*/
  {
    if ( v23 ) /*0x83e073*/
    {
      if ( !InterlockedDecrement(v23 + 1) ) /*0x83e079*/
        (**(void (__thiscall ***)(void *, int))v23)((void *)v23, 1); /*0x83e08f*/
      v24 = (NiRenderedTexture *)LODWORD(Stage); /*0x83e091*/
    }
    *(_DWORD *)(v22 + 4) = v24; /*0x83e097*/
    if ( v24 ) /*0x83e09a*/
      InterlockedIncrement((volatile LONG *)&v24->member); /*0x83e0a0*/
  }
  ++*(_DWORD *)(v7 + 0x60); /*0x83e0ab*/
  Stage = *(float *)&v7; /*0x83e0ae*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x83e0c6*/
  v21 = (*(_DWORD *)(v7 + 0x60))-- == 1; /*0x83e0ce*/
  if ( v21 ) /*0x83e0d5*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v7); /*0x83e0d9*/
  ++*((_DWORD *)this + 0xE); /*0x83e0de*/
}
