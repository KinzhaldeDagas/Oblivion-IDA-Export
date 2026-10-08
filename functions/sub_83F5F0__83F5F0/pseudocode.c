void __thiscall sub_83F5F0(NiTArray_NiD3DPass *this, int a2, int a3, float Stage, float *a5)
{
  NiRenderedTexture *v6; // ebp
  float *v7; // esi
  int v8; // ebx
  float *v9; // esi
  NiRenderedTexture *v10; // ebp
  int (__thiscall *v11)(float *, _DWORD); // eax
  UInt32 v12; // eax
  UInt32 m_uiRefCount; // ebp
  NiRenderedTexture *v14; // ebp
  UInt32 v15; // eax
  UInt32 v16; // ebp
  NiRenderedTexture *v17; // ebp
  int (__thiscall *v18)(float *, int); // eax
  UInt32 v19; // eax
  UInt32 v20; // ebp
  int v21; // esi
  float v22; // eax
  int v23; // ebp
  float *v24; // esi
  bool v25; // zf
  int v26; // ebp
  volatile LONG *v27; // esi
  NiRenderedTexture *v28; // ecx
  UInt32 v29; // [esp+38h] [ebp+4h]
  UInt32 v30; // [esp+38h] [ebp+4h]
  UInt32 v31; // [esp+38h] [ebp+4h]

  v6 = (NiRenderedTexture *)LODWORD(Stage); /*0x83f616*/
  v7 = *(float **)(LODWORD(Stage) + 0xC); /*0x83f61a*/
  v8 = unk_B4588C; /*0x83f61d*/
  sub_848E50(v7); /*0x83f624*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, NiExtraData **))this->_vtbl + 0x2F))( /*0x83f63d*/
    this,
    a2,
    v7,
    v6->member.super.super.m_extraDataList);
  v9 = a5; /*0x83f63f*/
  flt_B464A0[0x62] = a5[0x2A]; /*0x83f649*/
  flt_B464A0[0x63] = v9[0x2B]; /*0x83f654*/
  flt_B464A0[0x64] = v9[0x2C]; /*0x83f660*/
  flt_B464A0[0x65] = v9[0x2D]; /*0x83f66c*/
  v11 = *(int (__thiscall **)(float *, _DWORD))(*(_DWORD *)v9 + 0x88); /*0x83f678*/
  Stage = **(float **)(v8 + 0x24); /*0x83f682*/
  v10 = (NiRenderedTexture *)LODWORD(Stage); /*0x83f674*/
  v12 = v11(v9, 0); /*0x83f686*/
  m_uiRefCount = v10->member.super.super.super.m_uiRefCount; /*0x83f688*/
  v29 = v12; /*0x83f68d*/
  if ( m_uiRefCount != v12 ) /*0x83f691*/
  {
    if ( m_uiRefCount ) /*0x83f695*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x83f69b*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x83f6b2*/
      v12 = v29; /*0x83f6b4*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v12; /*0x83f6be*/
    if ( v12 ) /*0x83f6c1*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x83f6c7*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x83f6d5*/
  Stage = *(float *)(*(_DWORD *)(v8 + 0x24) + 4); /*0x83f6e5*/
  v14 = (NiRenderedTexture *)LODWORD(Stage); /*0x83f6dd*/
  v15 = sub_848FD0(v9, 0); /*0x83f6e9*/
  v16 = v14->member.super.super.super.m_uiRefCount; /*0x83f6ee*/
  v30 = v15; /*0x83f6f3*/
  if ( v16 != v15 ) /*0x83f6f7*/
  {
    if ( v16 ) /*0x83f6fb*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x83f701*/
        (**(void (__thiscall ***)(UInt32, int))v16)(v16, 1); /*0x83f718*/
      v15 = v30; /*0x83f71a*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v15; /*0x83f724*/
    if ( v15 ) /*0x83f727*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x83f72d*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x83f73b*/
  v18 = *(int (__thiscall **)(float *, int))(*(_DWORD *)v9 + 0x88); /*0x83f748*/
  Stage = *(float *)(*(_DWORD *)(v8 + 0x24) + 0x10); /*0x83f752*/
  v17 = (NiRenderedTexture *)LODWORD(Stage); /*0x83f743*/
  v19 = v18(v9, 1); /*0x83f756*/
  v20 = v17->member.super.super.super.m_uiRefCount; /*0x83f758*/
  v31 = v19; /*0x83f75d*/
  if ( v20 != v19 ) /*0x83f761*/
  {
    if ( v20 ) /*0x83f765*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) ) /*0x83f76b*/
        (**(void (__thiscall ***)(UInt32, int))v20)(v20, 1); /*0x83f782*/
      v19 = v31; /*0x83f784*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v19; /*0x83f78e*/
    if ( v19 ) /*0x83f791*/
      InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x83f797*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x83f7a5*/
  v21 = *(_DWORD *)(*(_DWORD *)(v8 + 0x24) + 0x18); /*0x83f7ad*/
  v22 = unk_B43108[0]; /*0x83f7b0*/
  v23 = *(_DWORD *)(v21 + 4); /*0x83f7b5*/
  v24 = (float *)(v21 + 4); /*0x83f7b8*/
  v25 = v23 == LODWORD(unk_B43108[0]); /*0x83f7bb*/
  Stage = unk_B43108[0]; /*0x83f7bd*/
  if ( !v25 ) /*0x83f7c1*/
  {
    if ( v23 ) /*0x83f7c5*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v23 + 4)) ) /*0x83f7cb*/
        (**(void (__thiscall ***)(int, int))v23)(v23, 1); /*0x83f7e2*/
      v22 = Stage; /*0x83f7e4*/
    }
    *v24 = v22; /*0x83f7ea*/
    if ( v22 != 0.0 ) /*0x83f7ec*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v22) + 4)); /*0x83f7f2*/
  }
  v26 = *(_DWORD *)(*(_DWORD *)(v8 + 0x24) + 0x1C); /*0x83f7fb*/
  v27 = *(volatile LONG **)(v26 + 4); /*0x83f803*/
  v25 = v27 == g_CanopyShadowMap; /*0x83f806*/
  v28 = (NiRenderedTexture *)g_CanopyShadowMap; /*0x83f808*/
  Stage = *(float *)&g_CanopyShadowMap; /*0x83f80a*/
  if ( !v25 ) /*0x83f80e*/
  {
    if ( v27 ) /*0x83f812*/
    {
      if ( !InterlockedDecrement(v27 + 1) ) /*0x83f818*/
        (**(void (__thiscall ***)(void *, int))v27)((void *)v27, 1); /*0x83f82e*/
      v28 = (NiRenderedTexture *)LODWORD(Stage); /*0x83f830*/
    }
    *(_DWORD *)(v26 + 4) = v28; /*0x83f836*/
    if ( v28 ) /*0x83f839*/
      InterlockedIncrement((volatile LONG *)&v28->member); /*0x83f83f*/
  }
  ++*(_DWORD *)(v8 + 0x60); /*0x83f84a*/
  Stage = *(float *)&v8; /*0x83f84d*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x83f865*/
  v25 = (*(_DWORD *)(v8 + 0x60))-- == 1; /*0x83f86d*/
  if ( v25 ) /*0x83f874*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v8); /*0x83f878*/
  ++*((_DWORD *)this + 0xE); /*0x83f87d*/
}
