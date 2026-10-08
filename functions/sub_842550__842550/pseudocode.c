void __thiscall sub_842550(NiTArray_NiD3DPass *this, int a2, int a3, float Stage, _DWORD *a5)
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

  v6 = (NiRenderedTexture *)LODWORD(Stage); /*0x842576*/
  v7 = unk_B45708; /*0x84257d*/
  sub_848C40(*(float **)(LODWORD(Stage) + 0x10)); /*0x842584*/
  m_controller = (float *)v6->member.super.super.m_controller; /*0x842589*/
  sub_848E50(m_controller); /*0x84258f*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, m_controller, 0); /*0x8425a6*/
  v9 = a5; /*0x8425ab*/
  v11 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x8425b3*/
  Stage = **(float **)(v7 + 0x24); /*0x8425bd*/
  v10 = (NiRenderedTexture *)LODWORD(Stage); /*0x8425af*/
  v12 = v11(a5, 0); /*0x8425c1*/
  m_uiRefCount = v10->member.super.super.super.m_uiRefCount; /*0x8425c3*/
  v25 = v12; /*0x8425c8*/
  if ( m_uiRefCount != v12 ) /*0x8425cc*/
  {
    if ( m_uiRefCount ) /*0x8425d0*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x8425d6*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x8425ed*/
      v12 = v25; /*0x8425ef*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v12; /*0x8425f9*/
    if ( v12 ) /*0x8425fc*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x842602*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x842610*/
  Stage = *(float *)(*(_DWORD *)(v7 + 0x24) + 4); /*0x842620*/
  v14 = (NiRenderedTexture *)LODWORD(Stage); /*0x842618*/
  v15 = sub_848FD0(v9, 0); /*0x842624*/
  v16 = v14->member.super.super.super.m_uiRefCount; /*0x842629*/
  v26 = v15; /*0x84262e*/
  if ( v16 != v15 ) /*0x842632*/
  {
    if ( v16 ) /*0x842636*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x84263c*/
        (**(void (__thiscall ***)(UInt32, int))v16)(v16, 1); /*0x842653*/
      v15 = v26; /*0x842655*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v15; /*0x84265f*/
    if ( v15 ) /*0x842662*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x842668*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x842676*/
  v17 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x14); /*0x84267e*/
  v18 = unk_B43108[0]; /*0x842681*/
  v19 = *(_DWORD *)(v17 + 4); /*0x842686*/
  v20 = (float *)(v17 + 4); /*0x842689*/
  v21 = v19 == LODWORD(unk_B43108[0]); /*0x84268c*/
  Stage = unk_B43108[0]; /*0x84268e*/
  if ( !v21 ) /*0x842692*/
  {
    if ( v19 ) /*0x842696*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v19 + 4)) ) /*0x84269c*/
        (**(void (__thiscall ***)(int, int))v19)(v19, 1); /*0x8426b3*/
      v18 = Stage; /*0x8426b5*/
    }
    *v20 = v18; /*0x8426bb*/
    if ( v18 != 0.0 ) /*0x8426bd*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v18) + 4)); /*0x8426c3*/
  }
  v22 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x18); /*0x8426cc*/
  v23 = *(volatile LONG **)(v22 + 4); /*0x8426d4*/
  v21 = v23 == g_CanopyShadowMap; /*0x8426d7*/
  v24 = (NiRenderedTexture *)g_CanopyShadowMap; /*0x8426d9*/
  Stage = *(float *)&g_CanopyShadowMap; /*0x8426db*/
  if ( !v21 ) /*0x8426df*/
  {
    if ( v23 ) /*0x8426e3*/
    {
      if ( !InterlockedDecrement(v23 + 1) ) /*0x8426e9*/
        (**(void (__thiscall ***)(void *, int))v23)((void *)v23, 1); /*0x8426ff*/
      v24 = (NiRenderedTexture *)LODWORD(Stage); /*0x842701*/
    }
    *(_DWORD *)(v22 + 4) = v24; /*0x842707*/
    if ( v24 ) /*0x84270a*/
      InterlockedIncrement((volatile LONG *)&v24->member); /*0x842710*/
  }
  ++*(_DWORD *)(v7 + 0x60); /*0x84271b*/
  Stage = *(float *)&v7; /*0x84271e*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x842736*/
  v21 = (*(_DWORD *)(v7 + 0x60))-- == 1; /*0x84273e*/
  if ( v21 ) /*0x842745*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v7); /*0x842749*/
  ++*((_DWORD *)this + 0xE); /*0x84274e*/
}
