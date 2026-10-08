void __thiscall sub_8430E0(NiTArray_NiD3DPass *this, int a2, int a3, float Stage, _DWORD *a5)
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

  v6 = (NiRenderedTexture *)LODWORD(Stage); /*0x843106*/
  v7 = unk_B4574C; /*0x84310d*/
  sub_848C40(*(float **)(LODWORD(Stage) + 0x10)); /*0x843114*/
  m_controller = (float *)v6->member.super.super.m_controller; /*0x843119*/
  sub_848E50(m_controller); /*0x84311f*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, m_controller, 0); /*0x843136*/
  v9 = a5; /*0x84313b*/
  v11 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x843143*/
  Stage = **(float **)(v7 + 0x24); /*0x84314d*/
  v10 = (NiRenderedTexture *)LODWORD(Stage); /*0x84313f*/
  v12 = v11(a5, 0); /*0x843151*/
  m_uiRefCount = v10->member.super.super.super.m_uiRefCount; /*0x843153*/
  v25 = v12; /*0x843158*/
  if ( m_uiRefCount != v12 ) /*0x84315c*/
  {
    if ( m_uiRefCount ) /*0x843160*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x843166*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x84317d*/
      v12 = v25; /*0x84317f*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v12; /*0x843189*/
    if ( v12 ) /*0x84318c*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x843192*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x8431a0*/
  Stage = *(float *)(*(_DWORD *)(v7 + 0x24) + 4); /*0x8431b0*/
  v14 = (NiRenderedTexture *)LODWORD(Stage); /*0x8431a8*/
  v15 = sub_848FD0(v9, 0); /*0x8431b4*/
  v16 = v14->member.super.super.super.m_uiRefCount; /*0x8431b9*/
  v26 = v15; /*0x8431be*/
  if ( v16 != v15 ) /*0x8431c2*/
  {
    if ( v16 ) /*0x8431c6*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x8431cc*/
        (**(void (__thiscall ***)(UInt32, int))v16)(v16, 1); /*0x8431e3*/
      v15 = v26; /*0x8431e5*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v15; /*0x8431ef*/
    if ( v15 ) /*0x8431f2*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x8431f8*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x843206*/
  v17 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x14); /*0x84320e*/
  v18 = unk_B43108[0]; /*0x843211*/
  v19 = *(_DWORD *)(v17 + 4); /*0x843216*/
  v20 = (float *)(v17 + 4); /*0x843219*/
  v21 = v19 == LODWORD(unk_B43108[0]); /*0x84321c*/
  Stage = unk_B43108[0]; /*0x84321e*/
  if ( !v21 ) /*0x843222*/
  {
    if ( v19 ) /*0x843226*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v19 + 4)) ) /*0x84322c*/
        (**(void (__thiscall ***)(int, int))v19)(v19, 1); /*0x843243*/
      v18 = Stage; /*0x843245*/
    }
    *v20 = v18; /*0x84324b*/
    if ( v18 != 0.0 ) /*0x84324d*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v18) + 4)); /*0x843253*/
  }
  v22 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x18); /*0x84325c*/
  v23 = *(volatile LONG **)(v22 + 4); /*0x843264*/
  v21 = v23 == g_CanopyShadowMap; /*0x843267*/
  v24 = (NiRenderedTexture *)g_CanopyShadowMap; /*0x843269*/
  Stage = *(float *)&g_CanopyShadowMap; /*0x84326b*/
  if ( !v21 ) /*0x84326f*/
  {
    if ( v23 ) /*0x843273*/
    {
      if ( !InterlockedDecrement(v23 + 1) ) /*0x843279*/
        (**(void (__thiscall ***)(void *, int))v23)((void *)v23, 1); /*0x84328f*/
      v24 = (NiRenderedTexture *)LODWORD(Stage); /*0x843291*/
    }
    *(_DWORD *)(v22 + 4) = v24; /*0x843297*/
    if ( v24 ) /*0x84329a*/
      InterlockedIncrement((volatile LONG *)&v24->member); /*0x8432a0*/
  }
  ++*(_DWORD *)(v7 + 0x60); /*0x8432ab*/
  Stage = *(float *)&v7; /*0x8432ae*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x8432c6*/
  v21 = (*(_DWORD *)(v7 + 0x60))-- == 1; /*0x8432ce*/
  if ( v21 ) /*0x8432d5*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v7); /*0x8432d9*/
  ++*((_DWORD *)this + 0xE); /*0x8432de*/
}
