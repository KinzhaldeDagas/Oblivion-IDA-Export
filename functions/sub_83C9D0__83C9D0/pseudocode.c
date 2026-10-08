void __thiscall sub_83C9D0(NiTArray_NiD3DPass *this, int a2, int a3, float Stage, float *a5)
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

  v6 = *(float **)(LODWORD(Stage) + 0xC); /*0x83c9fa*/
  v7 = unk_B457E4; /*0x83c9fd*/
  sub_848E50(v6); /*0x83ca04*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v6, 0); /*0x83ca1b*/
  v8 = a5; /*0x83ca1d*/
  flt_B464A0[0x62] = a5[0x2A]; /*0x83ca27*/
  flt_B464A0[0x63] = v8[0x2B]; /*0x83ca32*/
  flt_B464A0[0x64] = v8[0x2C]; /*0x83ca3e*/
  flt_B464A0[0x65] = v8[0x2D]; /*0x83ca4a*/
  v10 = *(int (__thiscall **)(float *, _DWORD))(*(_DWORD *)v8 + 0x88); /*0x83ca56*/
  Stage = **(float **)(v7 + 0x24); /*0x83ca60*/
  v9 = (NiRenderedTexture *)LODWORD(Stage); /*0x83ca52*/
  v11 = v10(v8, 0); /*0x83ca64*/
  m_uiRefCount = v9->member.super.super.super.m_uiRefCount; /*0x83ca66*/
  v28 = v11; /*0x83ca6b*/
  if ( m_uiRefCount != v11 ) /*0x83ca6f*/
  {
    if ( m_uiRefCount ) /*0x83ca73*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x83ca79*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x83ca90*/
      v11 = v28; /*0x83ca92*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v11; /*0x83ca9c*/
    if ( v11 ) /*0x83ca9f*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x83caa5*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v8); /*0x83cab3*/
  Stage = *(float *)(*(_DWORD *)(v7 + 0x24) + 4); /*0x83cac3*/
  v13 = (NiRenderedTexture *)LODWORD(Stage); /*0x83cabb*/
  v14 = sub_848FD0(v8, 0); /*0x83cac7*/
  v15 = v13->member.super.super.super.m_uiRefCount; /*0x83cacc*/
  v29 = v14; /*0x83cad1*/
  if ( v15 != v14 ) /*0x83cad5*/
  {
    if ( v15 ) /*0x83cad9*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v15 + 4)) ) /*0x83cadf*/
        (**(void (__thiscall ***)(UInt32, int))v15)(v15, 1); /*0x83caf6*/
      v14 = v29; /*0x83caf8*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v14; /*0x83cb02*/
    if ( v14 ) /*0x83cb05*/
      InterlockedIncrement((volatile LONG *)(v14 + 4)); /*0x83cb0b*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v8); /*0x83cb19*/
  v17 = *(int (__thiscall **)(float *, int))(*(_DWORD *)v8 + 0x88); /*0x83cb26*/
  Stage = *(float *)(*(_DWORD *)(v7 + 0x24) + 0x10); /*0x83cb30*/
  v16 = (NiRenderedTexture *)LODWORD(Stage); /*0x83cb21*/
  v18 = v17(v8, 1); /*0x83cb34*/
  v19 = v16->member.super.super.super.m_uiRefCount; /*0x83cb36*/
  v30 = v18; /*0x83cb3b*/
  if ( v19 != v18 ) /*0x83cb3f*/
  {
    if ( v19 ) /*0x83cb43*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v19 + 4)) ) /*0x83cb49*/
        (**(void (__thiscall ***)(UInt32, int))v19)(v19, 1); /*0x83cb60*/
      v18 = v30; /*0x83cb62*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v18; /*0x83cb6c*/
    if ( v18 ) /*0x83cb6f*/
      InterlockedIncrement((volatile LONG *)(v18 + 4)); /*0x83cb75*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v8); /*0x83cb83*/
  v20 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x18); /*0x83cb8b*/
  v21 = unk_B43108[0]; /*0x83cb8e*/
  v22 = *(_DWORD *)(v20 + 4); /*0x83cb93*/
  v23 = (float *)(v20 + 4); /*0x83cb96*/
  v24 = v22 == LODWORD(unk_B43108[0]); /*0x83cb99*/
  Stage = unk_B43108[0]; /*0x83cb9b*/
  if ( !v24 ) /*0x83cb9f*/
  {
    if ( v22 ) /*0x83cba3*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v22 + 4)) ) /*0x83cba9*/
        (**(void (__thiscall ***)(int, int))v22)(v22, 1); /*0x83cbc0*/
      v21 = Stage; /*0x83cbc2*/
    }
    *v23 = v21; /*0x83cbc8*/
    if ( v21 != 0.0 ) /*0x83cbca*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v21) + 4)); /*0x83cbd0*/
  }
  v25 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x1C); /*0x83cbd9*/
  v26 = *(volatile LONG **)(v25 + 4); /*0x83cbe1*/
  v24 = v26 == g_CanopyShadowMap; /*0x83cbe4*/
  v27 = (NiRenderedTexture *)g_CanopyShadowMap; /*0x83cbe6*/
  Stage = *(float *)&g_CanopyShadowMap; /*0x83cbe8*/
  if ( !v24 ) /*0x83cbec*/
  {
    if ( v26 ) /*0x83cbf0*/
    {
      if ( !InterlockedDecrement(v26 + 1) ) /*0x83cbf6*/
        (**(void (__thiscall ***)(void *, int))v26)((void *)v26, 1); /*0x83cc0c*/
      v27 = (NiRenderedTexture *)LODWORD(Stage); /*0x83cc0e*/
    }
    *(_DWORD *)(v25 + 4) = v27; /*0x83cc14*/
    if ( v27 ) /*0x83cc17*/
      InterlockedIncrement((volatile LONG *)&v27->member); /*0x83cc1d*/
  }
  ++*(_DWORD *)(v7 + 0x60); /*0x83cc28*/
  Stage = *(float *)&v7; /*0x83cc2b*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x83cc43*/
  v24 = (*(_DWORD *)(v7 + 0x60))-- == 1; /*0x83cc4b*/
  if ( v24 ) /*0x83cc52*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v7); /*0x83cc56*/
  ++*((_DWORD *)this + 0xE); /*0x83cc5b*/
}
