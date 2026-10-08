void __thiscall sub_83DC30(NiTArray_NiD3DPass *this, int a2, int a3, float Stage, float *a5)
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

  v6 = *(float **)(LODWORD(Stage) + 0xC); /*0x83dc5a*/
  v7 = unk_B45830; /*0x83dc5d*/
  sub_848E50(v6); /*0x83dc64*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v6, 0); /*0x83dc7b*/
  v8 = a5; /*0x83dc7d*/
  flt_B464A0[0x62] = a5[0x2A]; /*0x83dc87*/
  flt_B464A0[0x63] = v8[0x2B]; /*0x83dc92*/
  flt_B464A0[0x64] = v8[0x2C]; /*0x83dc9e*/
  flt_B464A0[0x65] = v8[0x2D]; /*0x83dcaa*/
  v10 = *(int (__thiscall **)(float *, _DWORD))(*(_DWORD *)v8 + 0x88); /*0x83dcb6*/
  Stage = **(float **)(v7 + 0x24); /*0x83dcc0*/
  v9 = (NiRenderedTexture *)LODWORD(Stage); /*0x83dcb2*/
  v11 = v10(v8, 0); /*0x83dcc4*/
  m_uiRefCount = v9->member.super.super.super.m_uiRefCount; /*0x83dcc6*/
  v28 = v11; /*0x83dccb*/
  if ( m_uiRefCount != v11 ) /*0x83dccf*/
  {
    if ( m_uiRefCount ) /*0x83dcd3*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x83dcd9*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x83dcf0*/
      v11 = v28; /*0x83dcf2*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v11; /*0x83dcfc*/
    if ( v11 ) /*0x83dcff*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x83dd05*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v8); /*0x83dd13*/
  Stage = *(float *)(*(_DWORD *)(v7 + 0x24) + 4); /*0x83dd23*/
  v13 = (NiRenderedTexture *)LODWORD(Stage); /*0x83dd1b*/
  v14 = sub_848FD0(v8, 0); /*0x83dd27*/
  v15 = v13->member.super.super.super.m_uiRefCount; /*0x83dd2c*/
  v29 = v14; /*0x83dd31*/
  if ( v15 != v14 ) /*0x83dd35*/
  {
    if ( v15 ) /*0x83dd39*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v15 + 4)) ) /*0x83dd3f*/
        (**(void (__thiscall ***)(UInt32, int))v15)(v15, 1); /*0x83dd56*/
      v14 = v29; /*0x83dd58*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v14; /*0x83dd62*/
    if ( v14 ) /*0x83dd65*/
      InterlockedIncrement((volatile LONG *)(v14 + 4)); /*0x83dd6b*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v8); /*0x83dd79*/
  v17 = *(int (__thiscall **)(float *, int))(*(_DWORD *)v8 + 0x88); /*0x83dd86*/
  Stage = *(float *)(*(_DWORD *)(v7 + 0x24) + 0x10); /*0x83dd90*/
  v16 = (NiRenderedTexture *)LODWORD(Stage); /*0x83dd81*/
  v18 = v17(v8, 1); /*0x83dd94*/
  v19 = v16->member.super.super.super.m_uiRefCount; /*0x83dd96*/
  v30 = v18; /*0x83dd9b*/
  if ( v19 != v18 ) /*0x83dd9f*/
  {
    if ( v19 ) /*0x83dda3*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v19 + 4)) ) /*0x83dda9*/
        (**(void (__thiscall ***)(UInt32, int))v19)(v19, 1); /*0x83ddc0*/
      v18 = v30; /*0x83ddc2*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v18; /*0x83ddcc*/
    if ( v18 ) /*0x83ddcf*/
      InterlockedIncrement((volatile LONG *)(v18 + 4)); /*0x83ddd5*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v8); /*0x83dde3*/
  v20 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x18); /*0x83ddeb*/
  v21 = unk_B43108[0]; /*0x83ddee*/
  v22 = *(_DWORD *)(v20 + 4); /*0x83ddf3*/
  v23 = (float *)(v20 + 4); /*0x83ddf6*/
  v24 = v22 == LODWORD(unk_B43108[0]); /*0x83ddf9*/
  Stage = unk_B43108[0]; /*0x83ddfb*/
  if ( !v24 ) /*0x83ddff*/
  {
    if ( v22 ) /*0x83de03*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v22 + 4)) ) /*0x83de09*/
        (**(void (__thiscall ***)(int, int))v22)(v22, 1); /*0x83de20*/
      v21 = Stage; /*0x83de22*/
    }
    *v23 = v21; /*0x83de28*/
    if ( v21 != 0.0 ) /*0x83de2a*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v21) + 4)); /*0x83de30*/
  }
  v25 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x1C); /*0x83de39*/
  v26 = *(volatile LONG **)(v25 + 4); /*0x83de41*/
  v24 = v26 == g_CanopyShadowMap; /*0x83de44*/
  v27 = (NiRenderedTexture *)g_CanopyShadowMap; /*0x83de46*/
  Stage = *(float *)&g_CanopyShadowMap; /*0x83de48*/
  if ( !v24 ) /*0x83de4c*/
  {
    if ( v26 ) /*0x83de50*/
    {
      if ( !InterlockedDecrement(v26 + 1) ) /*0x83de56*/
        (**(void (__thiscall ***)(void *, int))v26)((void *)v26, 1); /*0x83de6c*/
      v27 = (NiRenderedTexture *)LODWORD(Stage); /*0x83de6e*/
    }
    *(_DWORD *)(v25 + 4) = v27; /*0x83de74*/
    if ( v27 ) /*0x83de77*/
      InterlockedIncrement((volatile LONG *)&v27->member); /*0x83de7d*/
  }
  ++*(_DWORD *)(v7 + 0x60); /*0x83de88*/
  Stage = *(float *)&v7; /*0x83de8b*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x83dea3*/
  v24 = (*(_DWORD *)(v7 + 0x60))-- == 1; /*0x83deab*/
  if ( v24 ) /*0x83deb2*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v7); /*0x83deb6*/
  ++*((_DWORD *)this + 0xE); /*0x83debb*/
}
