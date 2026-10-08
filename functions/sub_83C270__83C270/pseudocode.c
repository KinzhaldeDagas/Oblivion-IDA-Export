void __thiscall sub_83C270(NiTArray_NiD3DPass *this, int a2, int a3, float Stage, float *a5)
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

  v6 = *(float **)(LODWORD(Stage) + 0xC); /*0x83c29a*/
  v7 = unk_B457C8; /*0x83c29d*/
  sub_848E50(v6); /*0x83c2a4*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v6, 0); /*0x83c2bb*/
  v8 = a5; /*0x83c2bd*/
  flt_B464A0[0x62] = a5[0x2A]; /*0x83c2c7*/
  flt_B464A0[0x63] = v8[0x2B]; /*0x83c2d2*/
  flt_B464A0[0x64] = v8[0x2C]; /*0x83c2de*/
  flt_B464A0[0x65] = v8[0x2D]; /*0x83c2ea*/
  v10 = *(int (__thiscall **)(float *, _DWORD))(*(_DWORD *)v8 + 0x88); /*0x83c2f6*/
  Stage = **(float **)(v7 + 0x24); /*0x83c300*/
  v9 = (NiRenderedTexture *)LODWORD(Stage); /*0x83c2f2*/
  v11 = v10(v8, 0); /*0x83c304*/
  m_uiRefCount = v9->member.super.super.super.m_uiRefCount; /*0x83c306*/
  v28 = v11; /*0x83c30b*/
  if ( m_uiRefCount != v11 ) /*0x83c30f*/
  {
    if ( m_uiRefCount ) /*0x83c313*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x83c319*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x83c330*/
      v11 = v28; /*0x83c332*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v11; /*0x83c33c*/
    if ( v11 ) /*0x83c33f*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x83c345*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v8); /*0x83c353*/
  Stage = *(float *)(*(_DWORD *)(v7 + 0x24) + 4); /*0x83c363*/
  v13 = (NiRenderedTexture *)LODWORD(Stage); /*0x83c35b*/
  v14 = sub_848FD0(v8, 0); /*0x83c367*/
  v15 = v13->member.super.super.super.m_uiRefCount; /*0x83c36c*/
  v29 = v14; /*0x83c371*/
  if ( v15 != v14 ) /*0x83c375*/
  {
    if ( v15 ) /*0x83c379*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v15 + 4)) ) /*0x83c37f*/
        (**(void (__thiscall ***)(UInt32, int))v15)(v15, 1); /*0x83c396*/
      v14 = v29; /*0x83c398*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v14; /*0x83c3a2*/
    if ( v14 ) /*0x83c3a5*/
      InterlockedIncrement((volatile LONG *)(v14 + 4)); /*0x83c3ab*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v8); /*0x83c3b9*/
  v17 = *(int (__thiscall **)(float *, int))(*(_DWORD *)v8 + 0x88); /*0x83c3c6*/
  Stage = *(float *)(*(_DWORD *)(v7 + 0x24) + 0x10); /*0x83c3d0*/
  v16 = (NiRenderedTexture *)LODWORD(Stage); /*0x83c3c1*/
  v18 = v17(v8, 1); /*0x83c3d4*/
  v19 = v16->member.super.super.super.m_uiRefCount; /*0x83c3d6*/
  v30 = v18; /*0x83c3db*/
  if ( v19 != v18 ) /*0x83c3df*/
  {
    if ( v19 ) /*0x83c3e3*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v19 + 4)) ) /*0x83c3e9*/
        (**(void (__thiscall ***)(UInt32, int))v19)(v19, 1); /*0x83c400*/
      v18 = v30; /*0x83c402*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v18; /*0x83c40c*/
    if ( v18 ) /*0x83c40f*/
      InterlockedIncrement((volatile LONG *)(v18 + 4)); /*0x83c415*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v8); /*0x83c423*/
  v20 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x18); /*0x83c42b*/
  v21 = unk_B43108[0]; /*0x83c42e*/
  v22 = *(_DWORD *)(v20 + 4); /*0x83c433*/
  v23 = (float *)(v20 + 4); /*0x83c436*/
  v24 = v22 == LODWORD(unk_B43108[0]); /*0x83c439*/
  Stage = unk_B43108[0]; /*0x83c43b*/
  if ( !v24 ) /*0x83c43f*/
  {
    if ( v22 ) /*0x83c443*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v22 + 4)) ) /*0x83c449*/
        (**(void (__thiscall ***)(int, int))v22)(v22, 1); /*0x83c460*/
      v21 = Stage; /*0x83c462*/
    }
    *v23 = v21; /*0x83c468*/
    if ( v21 != 0.0 ) /*0x83c46a*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v21) + 4)); /*0x83c470*/
  }
  v25 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x1C); /*0x83c479*/
  v26 = *(volatile LONG **)(v25 + 4); /*0x83c481*/
  v24 = v26 == g_CanopyShadowMap; /*0x83c484*/
  v27 = (NiRenderedTexture *)g_CanopyShadowMap; /*0x83c486*/
  Stage = *(float *)&g_CanopyShadowMap; /*0x83c488*/
  if ( !v24 ) /*0x83c48c*/
  {
    if ( v26 ) /*0x83c490*/
    {
      if ( !InterlockedDecrement(v26 + 1) ) /*0x83c496*/
        (**(void (__thiscall ***)(void *, int))v26)((void *)v26, 1); /*0x83c4ac*/
      v27 = (NiRenderedTexture *)LODWORD(Stage); /*0x83c4ae*/
    }
    *(_DWORD *)(v25 + 4) = v27; /*0x83c4b4*/
    if ( v27 ) /*0x83c4b7*/
      InterlockedIncrement((volatile LONG *)&v27->member); /*0x83c4bd*/
  }
  ++*(_DWORD *)(v7 + 0x60); /*0x83c4c8*/
  Stage = *(float *)&v7; /*0x83c4cb*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x83c4e3*/
  v24 = (*(_DWORD *)(v7 + 0x60))-- == 1; /*0x83c4eb*/
  if ( v24 ) /*0x83c4f2*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v7); /*0x83c4f6*/
  ++*((_DWORD *)this + 0xE); /*0x83c4fb*/
}
