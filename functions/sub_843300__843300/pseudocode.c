void __thiscall sub_843300(NiTArray_NiD3DPass *this, int a2, int a3, float Stage, _DWORD *a5)
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

  v6 = (NiRenderedTexture *)LODWORD(Stage); /*0x843326*/
  v7 = unk_B45750; /*0x84332d*/
  sub_848DA0(*(float **)(LODWORD(Stage) + 0x10)); /*0x843334*/
  m_controller = (float *)v6->member.super.super.m_controller; /*0x843339*/
  sub_848E50(m_controller); /*0x84333f*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, m_controller, 0); /*0x843356*/
  v9 = a5; /*0x84335b*/
  v11 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x843363*/
  Stage = **(float **)(v7 + 0x24); /*0x84336d*/
  v10 = (NiRenderedTexture *)LODWORD(Stage); /*0x84335f*/
  v12 = v11(a5, 0); /*0x843371*/
  m_uiRefCount = v10->member.super.super.super.m_uiRefCount; /*0x843373*/
  v29 = v12; /*0x843378*/
  if ( m_uiRefCount != v12 ) /*0x84337c*/
  {
    if ( m_uiRefCount ) /*0x843380*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x843386*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x84339d*/
      v12 = v29; /*0x84339f*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v12; /*0x8433a9*/
    if ( v12 ) /*0x8433ac*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x8433b2*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x8433c0*/
  Stage = *(float *)(*(_DWORD *)(v7 + 0x24) + 4); /*0x8433d0*/
  v14 = (NiRenderedTexture *)LODWORD(Stage); /*0x8433c8*/
  v15 = sub_848FD0(v9, 0); /*0x8433d4*/
  v16 = v14->member.super.super.super.m_uiRefCount; /*0x8433d9*/
  v30 = v15; /*0x8433de*/
  if ( v16 != v15 ) /*0x8433e2*/
  {
    if ( v16 ) /*0x8433e6*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x8433ec*/
        (**(void (__thiscall ***)(UInt32, int))v16)(v16, 1); /*0x843403*/
      v15 = v30; /*0x843405*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v15; /*0x84340f*/
    if ( v15 ) /*0x843412*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x843418*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x843426*/
  v18 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v9 + 0x90); /*0x843433*/
  Stage = *(float *)(*(_DWORD *)(v7 + 0x24) + 0xC); /*0x84343d*/
  v17 = (NiRenderedTexture *)LODWORD(Stage); /*0x84342e*/
  v19 = v18(v9, 0); /*0x843441*/
  v20 = v17->member.super.super.super.m_uiRefCount; /*0x843443*/
  v31 = v19; /*0x843448*/
  if ( v20 != v19 ) /*0x84344c*/
  {
    if ( v20 ) /*0x843450*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) ) /*0x843456*/
        (**(void (__thiscall ***)(UInt32, int))v20)(v20, 1); /*0x84346d*/
      v19 = v31; /*0x84346f*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v19; /*0x843479*/
    if ( v19 ) /*0x84347c*/
      InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x843482*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x843490*/
  v21 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x14); /*0x843498*/
  v22 = unk_B43108[0]; /*0x84349b*/
  v23 = *(_DWORD *)(v21 + 4); /*0x8434a0*/
  v24 = (float *)(v21 + 4); /*0x8434a3*/
  v25 = v23 == LODWORD(unk_B43108[0]); /*0x8434a6*/
  Stage = unk_B43108[0]; /*0x8434a8*/
  if ( !v25 ) /*0x8434ac*/
  {
    if ( v23 ) /*0x8434b0*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v23 + 4)) ) /*0x8434b6*/
        (**(void (__thiscall ***)(int, int))v23)(v23, 1); /*0x8434cd*/
      v22 = Stage; /*0x8434cf*/
    }
    *v24 = v22; /*0x8434d5*/
    if ( v22 != 0.0 ) /*0x8434d7*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v22) + 4)); /*0x8434dd*/
  }
  v26 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x18); /*0x8434e6*/
  v27 = *(volatile LONG **)(v26 + 4); /*0x8434ee*/
  v25 = v27 == g_CanopyShadowMap; /*0x8434f1*/
  v28 = (NiRenderedTexture *)g_CanopyShadowMap; /*0x8434f3*/
  Stage = *(float *)&g_CanopyShadowMap; /*0x8434f5*/
  if ( !v25 ) /*0x8434f9*/
  {
    if ( v27 ) /*0x8434fd*/
    {
      if ( !InterlockedDecrement(v27 + 1) ) /*0x843503*/
        (**(void (__thiscall ***)(void *, int))v27)((void *)v27, 1); /*0x843519*/
      v28 = (NiRenderedTexture *)LODWORD(Stage); /*0x84351b*/
    }
    *(_DWORD *)(v26 + 4) = v28; /*0x843521*/
    if ( v28 ) /*0x843524*/
      InterlockedIncrement((volatile LONG *)&v28->member); /*0x84352a*/
  }
  ++*(_DWORD *)(v7 + 0x60); /*0x843535*/
  Stage = *(float *)&v7; /*0x843538*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x843550*/
  v25 = (*(_DWORD *)(v7 + 0x60))-- == 1; /*0x843558*/
  if ( v25 ) /*0x84355f*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v7); /*0x843563*/
  ++*((_DWORD *)this + 0xE); /*0x843568*/
}
