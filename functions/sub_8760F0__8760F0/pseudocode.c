void __thiscall sub_8760F0(NiTArray_NiD3DPass *this, int a2, int a3, float Stage, int *a5)
{
  float *v6; // edi
  int v7; // esi
  int *v8; // ebp
  NiRenderedTexture *v9; // edi
  int (__thiscall *v10)(int *, _DWORD); // eax
  UInt32 v11; // eax
  UInt32 m_uiRefCount; // edi
  NiRenderedTexture *v13; // edi
  UInt32 v14; // eax
  UInt32 v15; // edi
  int v16; // edx
  int v17; // eax
  UInt32 v18; // ebp
  UInt32 v19; // edi
  int v20; // edi
  float v21; // eax
  int v22; // ebp
  float *v23; // edi
  bool v24; // zf
  int v25; // edi
  volatile LONG *v26; // ebp
  NiRenderedTexture *v27; // ecx
  UInt32 v28; // [esp+38h] [ebp+4h]
  UInt32 v29; // [esp+38h] [ebp+4h]

  v6 = *(float **)(LODWORD(Stage) + 0xC); /*0x87611a*/
  v7 = unk_B47674; /*0x87611d*/
  sub_848E50(v6); /*0x876124*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v6, 0); /*0x87613b*/
  v8 = a5; /*0x876140*/
  v10 = *(int (__thiscall **)(int *, _DWORD))(*a5 + 0x88); /*0x876149*/
  Stage = **(float **)(v7 + 0x24); /*0x876153*/
  v9 = (NiRenderedTexture *)LODWORD(Stage); /*0x876144*/
  v11 = v10(a5, 0); /*0x876157*/
  m_uiRefCount = v9->member.super.super.super.m_uiRefCount; /*0x876159*/
  v28 = v11; /*0x87615e*/
  if ( m_uiRefCount != v11 ) /*0x876162*/
  {
    if ( m_uiRefCount ) /*0x876166*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x87616c*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x876182*/
      v11 = v28; /*0x876184*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v11; /*0x87618e*/
    if ( v11 ) /*0x876191*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x876197*/
  }
  Stage = *(float *)(*(_DWORD *)(v7 + 0x24) + 4); /*0x8761a8*/
  v13 = (NiRenderedTexture *)LODWORD(Stage); /*0x8761a0*/
  v14 = sub_848FD0(v8, 0); /*0x8761ac*/
  v15 = v13->member.super.super.super.m_uiRefCount; /*0x8761b1*/
  v29 = v14; /*0x8761b6*/
  if ( v15 != v14 ) /*0x8761ba*/
  {
    if ( v15 ) /*0x8761be*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v15 + 4)) ) /*0x8761c4*/
        (**(void (__thiscall ***)(UInt32, int))v15)(v15, 1); /*0x8761da*/
      v14 = v29; /*0x8761dc*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v14; /*0x8761e6*/
    if ( v14 ) /*0x8761e9*/
      InterlockedIncrement((volatile LONG *)(v14 + 4)); /*0x8761ef*/
  }
  v16 = *v8; /*0x8761fb*/
  Stage = *(float *)(*(_DWORD *)(v7 + 0x24) + 0x10); /*0x8761fe*/
  v17 = (*(int (__thiscall **)(int *, _DWORD))(v16 + 0x90))(v8, 0); /*0x87620c*/
  v18 = *(_DWORD *)(LODWORD(Stage) + 4); /*0x876212*/
  v19 = v17; /*0x876215*/
  if ( v18 != v17 ) /*0x876219*/
  {
    if ( v18 ) /*0x87621d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) ) /*0x876223*/
        (**(void (__thiscall ***)(UInt32, int))v18)(v18, 1); /*0x87623a*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v19; /*0x876242*/
    if ( v19 ) /*0x876245*/
      InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x87624b*/
  }
  v20 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x18); /*0x876254*/
  v21 = unk_B43108[0]; /*0x876257*/
  v22 = *(_DWORD *)(v20 + 4); /*0x87625c*/
  v23 = (float *)(v20 + 4); /*0x87625f*/
  v24 = v22 == LODWORD(unk_B43108[0]); /*0x876262*/
  Stage = unk_B43108[0]; /*0x876264*/
  if ( !v24 ) /*0x876268*/
  {
    if ( v22 ) /*0x87626c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v22 + 4)) ) /*0x876272*/
        (**(void (__thiscall ***)(int, int))v22)(v22, 1); /*0x876289*/
      v21 = Stage; /*0x87628b*/
    }
    *v23 = v21; /*0x876291*/
    if ( v21 != 0.0 ) /*0x876293*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v21) + 4)); /*0x876299*/
  }
  v25 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x1C); /*0x8762a2*/
  v26 = *(volatile LONG **)(v25 + 4); /*0x8762aa*/
  v24 = v26 == g_CanopyShadowMap; /*0x8762ad*/
  v27 = (NiRenderedTexture *)g_CanopyShadowMap; /*0x8762af*/
  Stage = *(float *)&g_CanopyShadowMap; /*0x8762b1*/
  if ( !v24 ) /*0x8762b5*/
  {
    if ( v26 ) /*0x8762b9*/
    {
      if ( !InterlockedDecrement(v26 + 1) ) /*0x8762bf*/
        (**(void (__thiscall ***)(void *, int))v26)((void *)v26, 1); /*0x8762d6*/
      v27 = (NiRenderedTexture *)LODWORD(Stage); /*0x8762d8*/
    }
    *(_DWORD *)(v25 + 4) = v27; /*0x8762de*/
    if ( v27 ) /*0x8762e1*/
      InterlockedIncrement((volatile LONG *)&v27->member); /*0x8762e7*/
  }
  ++*(_DWORD *)(v7 + 0x60); /*0x8762f2*/
  Stage = *(float *)&v7; /*0x8762f5*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x87630d*/
  v24 = (*(_DWORD *)(v7 + 0x60))-- == 1; /*0x876315*/
  if ( v24 ) /*0x87631c*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v7); /*0x876320*/
  ++*((_DWORD *)this + 0xE); /*0x876325*/
}
