void __thiscall sub_840FB0(NiTArray_NiD3DPass *this, int a2, int a3, float Stage, float *a5)
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

  v6 = (NiRenderedTexture *)LODWORD(Stage); /*0x840fd6*/
  v7 = *(float **)(LODWORD(Stage) + 0xC); /*0x840fda*/
  v8 = unk_B458F4; /*0x840fdd*/
  sub_848E50(v7); /*0x840fe4*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, NiExtraData **))this->_vtbl + 0x2F))( /*0x840ffd*/
    this,
    a2,
    v7,
    v6->member.super.super.m_extraDataList);
  v9 = a5; /*0x840fff*/
  flt_B464A0[0x62] = a5[0x2A]; /*0x841009*/
  flt_B464A0[0x63] = v9[0x2B]; /*0x841014*/
  flt_B464A0[0x64] = v9[0x2C]; /*0x841020*/
  flt_B464A0[0x65] = v9[0x2D]; /*0x84102c*/
  v11 = *(int (__thiscall **)(float *, _DWORD))(*(_DWORD *)v9 + 0x88); /*0x841038*/
  Stage = **(float **)(v8 + 0x24); /*0x841042*/
  v10 = (NiRenderedTexture *)LODWORD(Stage); /*0x841034*/
  v12 = v11(v9, 0); /*0x841046*/
  m_uiRefCount = v10->member.super.super.super.m_uiRefCount; /*0x841048*/
  v29 = v12; /*0x84104d*/
  if ( m_uiRefCount != v12 ) /*0x841051*/
  {
    if ( m_uiRefCount ) /*0x841055*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x84105b*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x841072*/
      v12 = v29; /*0x841074*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v12; /*0x84107e*/
    if ( v12 ) /*0x841081*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x841087*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x841095*/
  Stage = *(float *)(*(_DWORD *)(v8 + 0x24) + 4); /*0x8410a5*/
  v14 = (NiRenderedTexture *)LODWORD(Stage); /*0x84109d*/
  v15 = sub_848FD0(v9, 0); /*0x8410a9*/
  v16 = v14->member.super.super.super.m_uiRefCount; /*0x8410ae*/
  v30 = v15; /*0x8410b3*/
  if ( v16 != v15 ) /*0x8410b7*/
  {
    if ( v16 ) /*0x8410bb*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x8410c1*/
        (**(void (__thiscall ***)(UInt32, int))v16)(v16, 1); /*0x8410d8*/
      v15 = v30; /*0x8410da*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v15; /*0x8410e4*/
    if ( v15 ) /*0x8410e7*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x8410ed*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x8410fb*/
  v18 = *(int (__thiscall **)(float *, int))(*(_DWORD *)v9 + 0x88); /*0x841108*/
  Stage = *(float *)(*(_DWORD *)(v8 + 0x24) + 0x10); /*0x841112*/
  v17 = (NiRenderedTexture *)LODWORD(Stage); /*0x841103*/
  v19 = v18(v9, 1); /*0x841116*/
  v20 = v17->member.super.super.super.m_uiRefCount; /*0x841118*/
  v31 = v19; /*0x84111d*/
  if ( v20 != v19 ) /*0x841121*/
  {
    if ( v20 ) /*0x841125*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) ) /*0x84112b*/
        (**(void (__thiscall ***)(UInt32, int))v20)(v20, 1); /*0x841142*/
      v19 = v31; /*0x841144*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v19; /*0x84114e*/
    if ( v19 ) /*0x841151*/
      InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x841157*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x841165*/
  v21 = *(_DWORD *)(*(_DWORD *)(v8 + 0x24) + 0x18); /*0x84116d*/
  v22 = unk_B43108[0]; /*0x841170*/
  v23 = *(_DWORD *)(v21 + 4); /*0x841175*/
  v24 = (float *)(v21 + 4); /*0x841178*/
  v25 = v23 == LODWORD(unk_B43108[0]); /*0x84117b*/
  Stage = unk_B43108[0]; /*0x84117d*/
  if ( !v25 ) /*0x841181*/
  {
    if ( v23 ) /*0x841185*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v23 + 4)) ) /*0x84118b*/
        (**(void (__thiscall ***)(int, int))v23)(v23, 1); /*0x8411a2*/
      v22 = Stage; /*0x8411a4*/
    }
    *v24 = v22; /*0x8411aa*/
    if ( v22 != 0.0 ) /*0x8411ac*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v22) + 4)); /*0x8411b2*/
  }
  v26 = *(_DWORD *)(*(_DWORD *)(v8 + 0x24) + 0x1C); /*0x8411bb*/
  v27 = *(volatile LONG **)(v26 + 4); /*0x8411c3*/
  v25 = v27 == g_CanopyShadowMap; /*0x8411c6*/
  v28 = (NiRenderedTexture *)g_CanopyShadowMap; /*0x8411c8*/
  Stage = *(float *)&g_CanopyShadowMap; /*0x8411ca*/
  if ( !v25 ) /*0x8411ce*/
  {
    if ( v27 ) /*0x8411d2*/
    {
      if ( !InterlockedDecrement(v27 + 1) ) /*0x8411d8*/
        (**(void (__thiscall ***)(void *, int))v27)((void *)v27, 1); /*0x8411ee*/
      v28 = (NiRenderedTexture *)LODWORD(Stage); /*0x8411f0*/
    }
    *(_DWORD *)(v26 + 4) = v28; /*0x8411f6*/
    if ( v28 ) /*0x8411f9*/
      InterlockedIncrement((volatile LONG *)&v28->member); /*0x8411ff*/
  }
  ++*(_DWORD *)(v8 + 0x60); /*0x84120a*/
  Stage = *(float *)&v8; /*0x84120d*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x841225*/
  v25 = (*(_DWORD *)(v8 + 0x60))-- == 1; /*0x84122d*/
  if ( v25 ) /*0x841234*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v8); /*0x841238*/
  ++*((_DWORD *)this + 0xE); /*0x84123d*/
}
