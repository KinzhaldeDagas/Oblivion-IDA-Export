void __thiscall sub_8810E0(NiTArray_NiD3DPass *this, int a2, int a3, float Stage, _DWORD *a5)
{
  NiRenderedTexture *v6; // ebx
  int v7; // edi
  float *m_controller; // ebx
  _DWORD *v9; // ebp
  NiRenderedTexture *v10; // ebx
  int (__thiscall *v11)(_DWORD *, _DWORD); // eax
  UInt32 v12; // eax
  UInt32 m_uiRefCount; // ebx
  NiRenderedTexture *v14; // ebx
  UInt32 v15; // eax
  UInt32 v16; // ebx
  NiRenderedTexture *v17; // ebx
  int (__thiscall *v18)(_DWORD *, int); // edx
  UInt32 v19; // eax
  UInt32 v20; // ebx
  int v21; // eax
  UInt32 v22; // ebp
  UInt32 v23; // ebx
  int v24; // ebx
  float v25; // eax
  int v26; // ebp
  float *v27; // ebx
  bool v28; // zf
  int v29; // ebx
  volatile LONG *v30; // ebp
  NiRenderedTexture *v31; // ecx
  UInt32 v32; // [esp+3Ch] [ebp+4h]
  UInt32 v33; // [esp+3Ch] [ebp+4h]
  UInt32 v34; // [esp+3Ch] [ebp+4h]

  v6 = (NiRenderedTexture *)LODWORD(Stage); /*0x881106*/
  v7 = unk_B47744; /*0x88110d*/
  sub_848C40(*(float **)(LODWORD(Stage) + 0x10)); /*0x881114*/
  m_controller = (float *)v6->member.super.super.m_controller; /*0x881119*/
  sub_848E50(m_controller); /*0x88111f*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, m_controller, 0); /*0x881136*/
  v9 = a5; /*0x88113b*/
  v11 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x881144*/
  Stage = **(float **)(v7 + 0x24); /*0x88114e*/
  v10 = (NiRenderedTexture *)LODWORD(Stage); /*0x88113f*/
  v12 = v11(a5, 0); /*0x881152*/
  m_uiRefCount = v10->member.super.super.super.m_uiRefCount; /*0x881154*/
  v32 = v12; /*0x881159*/
  if ( m_uiRefCount != v12 ) /*0x88115d*/
  {
    if ( m_uiRefCount ) /*0x881161*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x881167*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x88117d*/
      v12 = v32; /*0x88117f*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v12; /*0x881189*/
    if ( v12 ) /*0x88118c*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x881192*/
  }
  Stage = *(float *)(*(_DWORD *)(v7 + 0x24) + 4); /*0x8811a3*/
  v14 = (NiRenderedTexture *)LODWORD(Stage); /*0x88119b*/
  v15 = sub_848FD0(v9, 0); /*0x8811a7*/
  v16 = v14->member.super.super.super.m_uiRefCount; /*0x8811ac*/
  v33 = v15; /*0x8811b1*/
  if ( v16 != v15 ) /*0x8811b5*/
  {
    if ( v16 ) /*0x8811b9*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x8811bf*/
        (**(void (__thiscall ***)(UInt32, int))v16)(v16, 1); /*0x8811d5*/
      v15 = v33; /*0x8811d7*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v15; /*0x8811e1*/
    if ( v15 ) /*0x8811e4*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x8811ea*/
  }
  v18 = *(int (__thiscall **)(_DWORD *, int))(*v9 + 0x88); /*0x8811f9*/
  Stage = *(float *)(*(_DWORD *)(v7 + 0x24) + 8); /*0x881203*/
  v17 = (NiRenderedTexture *)LODWORD(Stage); /*0x8811f3*/
  v19 = v18(v9, 1); /*0x881207*/
  v20 = v17->member.super.super.super.m_uiRefCount; /*0x881209*/
  v34 = v19; /*0x88120e*/
  if ( v20 != v19 ) /*0x881212*/
  {
    if ( v20 ) /*0x881216*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) ) /*0x88121c*/
        (**(void (__thiscall ***)(UInt32, int))v20)(v20, 1); /*0x881232*/
      v19 = v34; /*0x881234*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v19; /*0x88123e*/
    if ( v19 ) /*0x881241*/
      InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x881247*/
  }
  Stage = *(float *)(*(_DWORD *)(v7 + 0x24) + 0xC); /*0x881258*/
  v21 = sub_848FD0(v9, 1); /*0x88125c*/
  v22 = *(_DWORD *)(LODWORD(Stage) + 4); /*0x881265*/
  v23 = v21; /*0x881268*/
  if ( v22 != v21 ) /*0x88126c*/
  {
    if ( v22 ) /*0x881270*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v22 + 4)) ) /*0x881276*/
        (**(void (__thiscall ***)(UInt32, int))v22)(v22, 1); /*0x88128d*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v23; /*0x881295*/
    if ( v23 ) /*0x881298*/
      InterlockedIncrement((volatile LONG *)(v23 + 4)); /*0x88129e*/
  }
  v24 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x18); /*0x8812a7*/
  v25 = unk_B43108[0]; /*0x8812aa*/
  v26 = *(_DWORD *)(v24 + 4); /*0x8812af*/
  v27 = (float *)(v24 + 4); /*0x8812b2*/
  v28 = v26 == LODWORD(unk_B43108[0]); /*0x8812b5*/
  Stage = unk_B43108[0]; /*0x8812b7*/
  if ( !v28 ) /*0x8812bb*/
  {
    if ( v26 ) /*0x8812bf*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v26 + 4)) ) /*0x8812c5*/
        (**(void (__thiscall ***)(int, int))v26)(v26, 1); /*0x8812dc*/
      v25 = Stage; /*0x8812de*/
    }
    *v27 = v25; /*0x8812e4*/
    if ( v25 != 0.0 ) /*0x8812e6*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v25) + 4)); /*0x8812ec*/
  }
  v29 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x1C); /*0x8812f5*/
  v30 = *(volatile LONG **)(v29 + 4); /*0x8812fd*/
  v28 = v30 == g_CanopyShadowMap; /*0x881300*/
  v31 = (NiRenderedTexture *)g_CanopyShadowMap; /*0x881302*/
  Stage = *(float *)&g_CanopyShadowMap; /*0x881304*/
  if ( !v28 ) /*0x881308*/
  {
    if ( v30 ) /*0x88130c*/
    {
      if ( !InterlockedDecrement(v30 + 1) ) /*0x881312*/
        (**(void (__thiscall ***)(void *, int))v30)((void *)v30, 1); /*0x881329*/
      v31 = (NiRenderedTexture *)LODWORD(Stage); /*0x88132b*/
    }
    *(_DWORD *)(v29 + 4) = v31; /*0x881331*/
    if ( v31 ) /*0x881334*/
      InterlockedIncrement((volatile LONG *)&v31->member); /*0x88133a*/
  }
  ++*(_DWORD *)(v7 + 0x60); /*0x881345*/
  Stage = *(float *)&v7; /*0x881348*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x881360*/
  v28 = (*(_DWORD *)(v7 + 0x60))-- == 1; /*0x881368*/
  if ( v28 ) /*0x88136f*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v7); /*0x881373*/
  ++*((_DWORD *)this + 0xE); /*0x881378*/
}
