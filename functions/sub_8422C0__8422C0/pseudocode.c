void __thiscall sub_8422C0(NiTArray_NiD3DPass *this, int a2, int a3, float Stage, _DWORD *a5)
{
  NiRenderedTexture *v6; // edi
  int v7; // ebx
  float *m_controller; // edi
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

  v6 = (NiRenderedTexture *)LODWORD(Stage); /*0x8422e6*/
  v7 = unk_B456F8; /*0x8422ed*/
  sub_848DA0(*(float **)(LODWORD(Stage) + 0x10)); /*0x8422f4*/
  m_controller = (float *)v6->member.super.super.m_controller; /*0x8422f9*/
  sub_848E50(m_controller); /*0x8422ff*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, m_controller, 0); /*0x842316*/
  v9 = a5; /*0x84231b*/
  v11 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x842323*/
  Stage = **(float **)(v7 + 0x24); /*0x84232d*/
  v10 = (NiRenderedTexture *)LODWORD(Stage); /*0x84231f*/
  v12 = v11(a5, 0); /*0x842331*/
  m_uiRefCount = v10->member.super.super.super.m_uiRefCount; /*0x842333*/
  v29 = v12; /*0x842338*/
  if ( m_uiRefCount != v12 ) /*0x84233c*/
  {
    if ( m_uiRefCount ) /*0x842340*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x842346*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x84235d*/
      v12 = v29; /*0x84235f*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v12; /*0x842369*/
    if ( v12 ) /*0x84236c*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x842372*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x842380*/
  Stage = *(float *)(*(_DWORD *)(v7 + 0x24) + 4); /*0x842390*/
  v14 = (NiRenderedTexture *)LODWORD(Stage); /*0x842388*/
  v15 = sub_848FD0(v9, 0); /*0x842394*/
  v16 = v14->member.super.super.super.m_uiRefCount; /*0x842399*/
  v30 = v15; /*0x84239e*/
  if ( v16 != v15 ) /*0x8423a2*/
  {
    if ( v16 ) /*0x8423a6*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x8423ac*/
        (**(void (__thiscall ***)(UInt32, int))v16)(v16, 1); /*0x8423c3*/
      v15 = v30; /*0x8423c5*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v15; /*0x8423cf*/
    if ( v15 ) /*0x8423d2*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x8423d8*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x8423e6*/
  v18 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v9 + 0x90); /*0x8423f3*/
  Stage = *(float *)(*(_DWORD *)(v7 + 0x24) + 0xC); /*0x8423fd*/
  v17 = (NiRenderedTexture *)LODWORD(Stage); /*0x8423ee*/
  v19 = v18(v9, 0); /*0x842401*/
  v20 = v17->member.super.super.super.m_uiRefCount; /*0x842403*/
  v31 = v19; /*0x842408*/
  if ( v20 != v19 ) /*0x84240c*/
  {
    if ( v20 ) /*0x842410*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) ) /*0x842416*/
        (**(void (__thiscall ***)(UInt32, int))v20)(v20, 1); /*0x84242d*/
      v19 = v31; /*0x84242f*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v19; /*0x842439*/
    if ( v19 ) /*0x84243c*/
      InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x842442*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x842450*/
  v21 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x14); /*0x842458*/
  v22 = unk_B43108[0]; /*0x84245b*/
  v23 = *(_DWORD *)(v21 + 4); /*0x842460*/
  v24 = (float *)(v21 + 4); /*0x842463*/
  v25 = v23 == LODWORD(unk_B43108[0]); /*0x842466*/
  Stage = unk_B43108[0]; /*0x842468*/
  if ( !v25 ) /*0x84246c*/
  {
    if ( v23 ) /*0x842470*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v23 + 4)) ) /*0x842476*/
        (**(void (__thiscall ***)(int, int))v23)(v23, 1); /*0x84248d*/
      v22 = Stage; /*0x84248f*/
    }
    *v24 = v22; /*0x842495*/
    if ( v22 != 0.0 ) /*0x842497*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v22) + 4)); /*0x84249d*/
  }
  v26 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x18); /*0x8424a6*/
  v27 = *(volatile LONG **)(v26 + 4); /*0x8424ae*/
  v25 = v27 == g_CanopyShadowMap; /*0x8424b1*/
  v28 = (NiRenderedTexture *)g_CanopyShadowMap; /*0x8424b3*/
  Stage = *(float *)&g_CanopyShadowMap; /*0x8424b5*/
  if ( !v25 ) /*0x8424b9*/
  {
    if ( v27 ) /*0x8424bd*/
    {
      if ( !InterlockedDecrement(v27 + 1) ) /*0x8424c3*/
        (**(void (__thiscall ***)(void *, int))v27)((void *)v27, 1); /*0x8424d9*/
      v28 = (NiRenderedTexture *)LODWORD(Stage); /*0x8424db*/
    }
    *(_DWORD *)(v26 + 4) = v28; /*0x8424e1*/
    if ( v28 ) /*0x8424e4*/
      InterlockedIncrement((volatile LONG *)&v28->member); /*0x8424ea*/
  }
  ++*(_DWORD *)(v7 + 0x60); /*0x8424f5*/
  Stage = *(float *)&v7; /*0x8424f8*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x842510*/
  v25 = (*(_DWORD *)(v7 + 0x60))-- == 1; /*0x842518*/
  if ( v25 ) /*0x84251f*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v7); /*0x842523*/
  ++*((_DWORD *)this + 0xE); /*0x842528*/
}
