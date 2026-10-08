void __thiscall sub_8437B0(NiTArray_NiD3DPass *this, int a2, int a3, float Stage, _DWORD *a5)
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

  v6 = (NiRenderedTexture *)LODWORD(Stage); /*0x8437d6*/
  v7 = unk_B45768; /*0x8437dd*/
  sub_848DA0(*(float **)(LODWORD(Stage) + 0x10)); /*0x8437e4*/
  m_controller = (float *)v6->member.super.super.m_controller; /*0x8437e9*/
  sub_848E50(m_controller); /*0x8437ef*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, m_controller, 0); /*0x843806*/
  v9 = a5; /*0x84380b*/
  v11 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x843813*/
  Stage = **(float **)(v7 + 0x24); /*0x84381d*/
  v10 = (NiRenderedTexture *)LODWORD(Stage); /*0x84380f*/
  v12 = v11(a5, 0); /*0x843821*/
  m_uiRefCount = v10->member.super.super.super.m_uiRefCount; /*0x843823*/
  v29 = v12; /*0x843828*/
  if ( m_uiRefCount != v12 ) /*0x84382c*/
  {
    if ( m_uiRefCount ) /*0x843830*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x843836*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x84384d*/
      v12 = v29; /*0x84384f*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v12; /*0x843859*/
    if ( v12 ) /*0x84385c*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x843862*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x843870*/
  Stage = *(float *)(*(_DWORD *)(v7 + 0x24) + 4); /*0x843880*/
  v14 = (NiRenderedTexture *)LODWORD(Stage); /*0x843878*/
  v15 = sub_848FD0(v9, 0); /*0x843884*/
  v16 = v14->member.super.super.super.m_uiRefCount; /*0x843889*/
  v30 = v15; /*0x84388e*/
  if ( v16 != v15 ) /*0x843892*/
  {
    if ( v16 ) /*0x843896*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x84389c*/
        (**(void (__thiscall ***)(UInt32, int))v16)(v16, 1); /*0x8438b3*/
      v15 = v30; /*0x8438b5*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v15; /*0x8438bf*/
    if ( v15 ) /*0x8438c2*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x8438c8*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x8438d6*/
  v18 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v9 + 0x90); /*0x8438e3*/
  Stage = *(float *)(*(_DWORD *)(v7 + 0x24) + 0xC); /*0x8438ed*/
  v17 = (NiRenderedTexture *)LODWORD(Stage); /*0x8438de*/
  v19 = v18(v9, 0); /*0x8438f1*/
  v20 = v17->member.super.super.super.m_uiRefCount; /*0x8438f3*/
  v31 = v19; /*0x8438f8*/
  if ( v20 != v19 ) /*0x8438fc*/
  {
    if ( v20 ) /*0x843900*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) ) /*0x843906*/
        (**(void (__thiscall ***)(UInt32, int))v20)(v20, 1); /*0x84391d*/
      v19 = v31; /*0x84391f*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v19; /*0x843929*/
    if ( v19 ) /*0x84392c*/
      InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x843932*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x843940*/
  v21 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x14); /*0x843948*/
  v22 = unk_B43108[0]; /*0x84394b*/
  v23 = *(_DWORD *)(v21 + 4); /*0x843950*/
  v24 = (float *)(v21 + 4); /*0x843953*/
  v25 = v23 == LODWORD(unk_B43108[0]); /*0x843956*/
  Stage = unk_B43108[0]; /*0x843958*/
  if ( !v25 ) /*0x84395c*/
  {
    if ( v23 ) /*0x843960*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v23 + 4)) ) /*0x843966*/
        (**(void (__thiscall ***)(int, int))v23)(v23, 1); /*0x84397d*/
      v22 = Stage; /*0x84397f*/
    }
    *v24 = v22; /*0x843985*/
    if ( v22 != 0.0 ) /*0x843987*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v22) + 4)); /*0x84398d*/
  }
  v26 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x18); /*0x843996*/
  v27 = *(volatile LONG **)(v26 + 4); /*0x84399e*/
  v25 = v27 == g_CanopyShadowMap; /*0x8439a1*/
  v28 = (NiRenderedTexture *)g_CanopyShadowMap; /*0x8439a3*/
  Stage = *(float *)&g_CanopyShadowMap; /*0x8439a5*/
  if ( !v25 ) /*0x8439a9*/
  {
    if ( v27 ) /*0x8439ad*/
    {
      if ( !InterlockedDecrement(v27 + 1) ) /*0x8439b3*/
        (**(void (__thiscall ***)(void *, int))v27)((void *)v27, 1); /*0x8439c9*/
      v28 = (NiRenderedTexture *)LODWORD(Stage); /*0x8439cb*/
    }
    *(_DWORD *)(v26 + 4) = v28; /*0x8439d1*/
    if ( v28 ) /*0x8439d4*/
      InterlockedIncrement((volatile LONG *)&v28->member); /*0x8439da*/
  }
  ++*(_DWORD *)(v7 + 0x60); /*0x8439e5*/
  Stage = *(float *)&v7; /*0x8439e8*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x843a00*/
  v25 = (*(_DWORD *)(v7 + 0x60))-- == 1; /*0x843a08*/
  if ( v25 ) /*0x843a0f*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v7); /*0x843a13*/
  ++*((_DWORD *)this + 0xE); /*0x843a18*/
}
