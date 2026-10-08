void __thiscall sub_841710(NiTArray_NiD3DPass *this, int a2, int a3, float Stage, float *a5)
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

  v6 = (NiRenderedTexture *)LODWORD(Stage); /*0x841736*/
  v7 = *(float **)(LODWORD(Stage) + 0xC); /*0x84173a*/
  v8 = unk_B4590C; /*0x84173d*/
  sub_848E50(v7); /*0x841744*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, NiExtraData **))this->_vtbl + 0x2F))( /*0x84175d*/
    this,
    a2,
    v7,
    v6->member.super.super.m_extraDataList);
  v9 = a5; /*0x84175f*/
  flt_B464A0[0x62] = a5[0x2A]; /*0x841769*/
  flt_B464A0[0x63] = v9[0x2B]; /*0x841774*/
  flt_B464A0[0x64] = v9[0x2C]; /*0x841780*/
  flt_B464A0[0x65] = v9[0x2D]; /*0x84178c*/
  v11 = *(int (__thiscall **)(float *, _DWORD))(*(_DWORD *)v9 + 0x88); /*0x841798*/
  Stage = **(float **)(v8 + 0x24); /*0x8417a2*/
  v10 = (NiRenderedTexture *)LODWORD(Stage); /*0x841794*/
  v12 = v11(v9, 0); /*0x8417a6*/
  m_uiRefCount = v10->member.super.super.super.m_uiRefCount; /*0x8417a8*/
  v29 = v12; /*0x8417ad*/
  if ( m_uiRefCount != v12 ) /*0x8417b1*/
  {
    if ( m_uiRefCount ) /*0x8417b5*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x8417bb*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x8417d2*/
      v12 = v29; /*0x8417d4*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v12; /*0x8417de*/
    if ( v12 ) /*0x8417e1*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x8417e7*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x8417f5*/
  Stage = *(float *)(*(_DWORD *)(v8 + 0x24) + 4); /*0x841805*/
  v14 = (NiRenderedTexture *)LODWORD(Stage); /*0x8417fd*/
  v15 = sub_848FD0(v9, 0); /*0x841809*/
  v16 = v14->member.super.super.super.m_uiRefCount; /*0x84180e*/
  v30 = v15; /*0x841813*/
  if ( v16 != v15 ) /*0x841817*/
  {
    if ( v16 ) /*0x84181b*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x841821*/
        (**(void (__thiscall ***)(UInt32, int))v16)(v16, 1); /*0x841838*/
      v15 = v30; /*0x84183a*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v15; /*0x841844*/
    if ( v15 ) /*0x841847*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x84184d*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x84185b*/
  v18 = *(int (__thiscall **)(float *, int))(*(_DWORD *)v9 + 0x88); /*0x841868*/
  Stage = *(float *)(*(_DWORD *)(v8 + 0x24) + 0x10); /*0x841872*/
  v17 = (NiRenderedTexture *)LODWORD(Stage); /*0x841863*/
  v19 = v18(v9, 1); /*0x841876*/
  v20 = v17->member.super.super.super.m_uiRefCount; /*0x841878*/
  v31 = v19; /*0x84187d*/
  if ( v20 != v19 ) /*0x841881*/
  {
    if ( v20 ) /*0x841885*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) ) /*0x84188b*/
        (**(void (__thiscall ***)(UInt32, int))v20)(v20, 1); /*0x8418a2*/
      v19 = v31; /*0x8418a4*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v19; /*0x8418ae*/
    if ( v19 ) /*0x8418b1*/
      InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x8418b7*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x8418c5*/
  v21 = *(_DWORD *)(*(_DWORD *)(v8 + 0x24) + 0x18); /*0x8418cd*/
  v22 = unk_B43108[0]; /*0x8418d0*/
  v23 = *(_DWORD *)(v21 + 4); /*0x8418d5*/
  v24 = (float *)(v21 + 4); /*0x8418d8*/
  v25 = v23 == LODWORD(unk_B43108[0]); /*0x8418db*/
  Stage = unk_B43108[0]; /*0x8418dd*/
  if ( !v25 ) /*0x8418e1*/
  {
    if ( v23 ) /*0x8418e5*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v23 + 4)) ) /*0x8418eb*/
        (**(void (__thiscall ***)(int, int))v23)(v23, 1); /*0x841902*/
      v22 = Stage; /*0x841904*/
    }
    *v24 = v22; /*0x84190a*/
    if ( v22 != 0.0 ) /*0x84190c*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v22) + 4)); /*0x841912*/
  }
  v26 = *(_DWORD *)(*(_DWORD *)(v8 + 0x24) + 0x1C); /*0x84191b*/
  v27 = *(volatile LONG **)(v26 + 4); /*0x841923*/
  v25 = v27 == g_CanopyShadowMap; /*0x841926*/
  v28 = (NiRenderedTexture *)g_CanopyShadowMap; /*0x841928*/
  Stage = *(float *)&g_CanopyShadowMap; /*0x84192a*/
  if ( !v25 ) /*0x84192e*/
  {
    if ( v27 ) /*0x841932*/
    {
      if ( !InterlockedDecrement(v27 + 1) ) /*0x841938*/
        (**(void (__thiscall ***)(void *, int))v27)((void *)v27, 1); /*0x84194e*/
      v28 = (NiRenderedTexture *)LODWORD(Stage); /*0x841950*/
    }
    *(_DWORD *)(v26 + 4) = v28; /*0x841956*/
    if ( v28 ) /*0x841959*/
      InterlockedIncrement((volatile LONG *)&v28->member); /*0x84195f*/
  }
  ++*(_DWORD *)(v8 + 0x60); /*0x84196a*/
  Stage = *(float *)&v8; /*0x84196d*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x841985*/
  v25 = (*(_DWORD *)(v8 + 0x60))-- == 1; /*0x84198d*/
  if ( v25 ) /*0x841994*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v8); /*0x841998*/
  ++*((_DWORD *)this + 0xE); /*0x84199d*/
}
