void __thiscall sub_83E390(NiTArray_NiD3DPass *this, int a2, int a3, float Stage, float *a5)
{
  float *v6; // esi
  int v7; // ebx
  float *v8; // esi
  NiRenderedTexture *v9; // ebp
  int (__thiscall *v10)(float *, _DWORD); // eax
  UInt32 v11; // eax
  UInt32 m_uiRefCount; // ebp
  NiRenderedTexture *v13; // ebp
  UInt32 v14; // eax
  UInt32 v15; // ebp
  NiRenderedTexture *v16; // ebp
  int (__thiscall *v17)(float *, int); // eax
  UInt32 v18; // eax
  UInt32 v19; // ebp
  int v20; // esi
  float v21; // eax
  int v22; // ebp
  float *v23; // esi
  bool v24; // zf
  int v25; // ebp
  volatile LONG *v26; // esi
  NiRenderedTexture *v27; // ecx
  UInt32 v28; // [esp+38h] [ebp+4h]
  UInt32 v29; // [esp+38h] [ebp+4h]
  UInt32 v30; // [esp+38h] [ebp+4h]

  v6 = *(float **)(LODWORD(Stage) + 0xC); /*0x83e3ba*/
  v7 = unk_B4584C; /*0x83e3bd*/
  sub_848E50(v6); /*0x83e3c4*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v6, 0); /*0x83e3db*/
  v8 = a5; /*0x83e3dd*/
  flt_B464A0[0x62] = a5[0x2A]; /*0x83e3e7*/
  flt_B464A0[0x63] = v8[0x2B]; /*0x83e3f2*/
  flt_B464A0[0x64] = v8[0x2C]; /*0x83e3fe*/
  flt_B464A0[0x65] = v8[0x2D]; /*0x83e40a*/
  v10 = *(int (__thiscall **)(float *, _DWORD))(*(_DWORD *)v8 + 0x88); /*0x83e416*/
  Stage = **(float **)(v7 + 0x24); /*0x83e420*/
  v9 = (NiRenderedTexture *)LODWORD(Stage); /*0x83e412*/
  v11 = v10(v8, 0); /*0x83e424*/
  m_uiRefCount = v9->member.super.super.super.m_uiRefCount; /*0x83e426*/
  v28 = v11; /*0x83e42b*/
  if ( m_uiRefCount != v11 ) /*0x83e42f*/
  {
    if ( m_uiRefCount ) /*0x83e433*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x83e439*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x83e450*/
      v11 = v28; /*0x83e452*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v11; /*0x83e45c*/
    if ( v11 ) /*0x83e45f*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x83e465*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v8); /*0x83e473*/
  Stage = *(float *)(*(_DWORD *)(v7 + 0x24) + 4); /*0x83e483*/
  v13 = (NiRenderedTexture *)LODWORD(Stage); /*0x83e47b*/
  v14 = sub_848FD0(v8, 0); /*0x83e487*/
  v15 = v13->member.super.super.super.m_uiRefCount; /*0x83e48c*/
  v29 = v14; /*0x83e491*/
  if ( v15 != v14 ) /*0x83e495*/
  {
    if ( v15 ) /*0x83e499*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v15 + 4)) ) /*0x83e49f*/
        (**(void (__thiscall ***)(UInt32, int))v15)(v15, 1); /*0x83e4b6*/
      v14 = v29; /*0x83e4b8*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v14; /*0x83e4c2*/
    if ( v14 ) /*0x83e4c5*/
      InterlockedIncrement((volatile LONG *)(v14 + 4)); /*0x83e4cb*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v8); /*0x83e4d9*/
  v17 = *(int (__thiscall **)(float *, int))(*(_DWORD *)v8 + 0x88); /*0x83e4e6*/
  Stage = *(float *)(*(_DWORD *)(v7 + 0x24) + 0x10); /*0x83e4f0*/
  v16 = (NiRenderedTexture *)LODWORD(Stage); /*0x83e4e1*/
  v18 = v17(v8, 1); /*0x83e4f4*/
  v19 = v16->member.super.super.super.m_uiRefCount; /*0x83e4f6*/
  v30 = v18; /*0x83e4fb*/
  if ( v19 != v18 ) /*0x83e4ff*/
  {
    if ( v19 ) /*0x83e503*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v19 + 4)) ) /*0x83e509*/
        (**(void (__thiscall ***)(UInt32, int))v19)(v19, 1); /*0x83e520*/
      v18 = v30; /*0x83e522*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v18; /*0x83e52c*/
    if ( v18 ) /*0x83e52f*/
      InterlockedIncrement((volatile LONG *)(v18 + 4)); /*0x83e535*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v8); /*0x83e543*/
  v20 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x18); /*0x83e54b*/
  v21 = unk_B43108[0]; /*0x83e54e*/
  v22 = *(_DWORD *)(v20 + 4); /*0x83e553*/
  v23 = (float *)(v20 + 4); /*0x83e556*/
  v24 = v22 == LODWORD(unk_B43108[0]); /*0x83e559*/
  Stage = unk_B43108[0]; /*0x83e55b*/
  if ( !v24 ) /*0x83e55f*/
  {
    if ( v22 ) /*0x83e563*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v22 + 4)) ) /*0x83e569*/
        (**(void (__thiscall ***)(int, int))v22)(v22, 1); /*0x83e580*/
      v21 = Stage; /*0x83e582*/
    }
    *v23 = v21; /*0x83e588*/
    if ( v21 != 0.0 ) /*0x83e58a*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v21) + 4)); /*0x83e590*/
  }
  v25 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x1C); /*0x83e599*/
  v26 = *(volatile LONG **)(v25 + 4); /*0x83e5a1*/
  v24 = v26 == g_CanopyShadowMap; /*0x83e5a4*/
  v27 = (NiRenderedTexture *)g_CanopyShadowMap; /*0x83e5a6*/
  Stage = *(float *)&g_CanopyShadowMap; /*0x83e5a8*/
  if ( !v24 ) /*0x83e5ac*/
  {
    if ( v26 ) /*0x83e5b0*/
    {
      if ( !InterlockedDecrement(v26 + 1) ) /*0x83e5b6*/
        (**(void (__thiscall ***)(void *, int))v26)((void *)v26, 1); /*0x83e5cc*/
      v27 = (NiRenderedTexture *)LODWORD(Stage); /*0x83e5ce*/
    }
    *(_DWORD *)(v25 + 4) = v27; /*0x83e5d4*/
    if ( v27 ) /*0x83e5d7*/
      InterlockedIncrement((volatile LONG *)&v27->member); /*0x83e5dd*/
  }
  ++*(_DWORD *)(v7 + 0x60); /*0x83e5e8*/
  Stage = *(float *)&v7; /*0x83e5eb*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x83e603*/
  v24 = (*(_DWORD *)(v7 + 0x60))-- == 1; /*0x83e60b*/
  if ( v24 ) /*0x83e612*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v7); /*0x83e616*/
  ++*((_DWORD *)this + 0xE); /*0x83e61b*/
}
