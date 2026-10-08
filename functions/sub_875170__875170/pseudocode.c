void __thiscall sub_875170(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DPass *Stage, _DWORD *a5)
{
  float *v6; // edi
  NiD3DPass *v7; // esi
  _DWORD *v8; // ebx
  NiD3DPass *v9; // edi
  int (__thiscall *v10)(_DWORD *, _DWORD); // eax
  int v11; // eax
  int v12; // edi
  int v13; // ebp
  NiD3DPass *v14; // edi
  int v15; // eax
  int v16; // edi
  int v17; // ebp
  UInt32 v18; // ebp
  int v19; // eax
  int v20; // edi
  int v21; // ebx
  NiTexture *Texture; // edi
  UInt32 m_uiRefCount; // ebx
  float *p_m_uiRefCount; // edi
  float v25; // ebp
  UInt32 Unk08; // edi
  int v27; // ebx
  float *v28; // edi
  float v29; // ebp
  UInt32 v30; // ebx
  volatile LONG *v31; // edi
  volatile LONG *v32; // ebp

  v6 = *(float **)&Stage->Name[8]; /*0x87519f*/
  v7 = (NiD3DPass *)unk_B47654; /*0x8751a2*/
  sub_848E50(v6); /*0x8751a9*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v6, 0); /*0x8751c0*/
  v8 = a5; /*0x8751c5*/
  v10 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x8751cd*/
  Stage = (NiD3DPass *)v7->Stages.data->Stage; /*0x8751d7*/
  v9 = Stage; /*0x8751c9*/
  v11 = v10(a5, 0); /*0x8751db*/
  v12 = *(_DWORD *)v9->Name; /*0x8751dd*/
  v13 = v11; /*0x8751e0*/
  if ( v12 != v11 ) /*0x8751e4*/
  {
    if ( v12 ) /*0x8751e8*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) ) /*0x8751ee*/
        (**(void (__thiscall ***)(int, int))v12)(v12, 1); /*0x875204*/
    }
    *(_DWORD *)Stage->Name = v13; /*0x87520c*/
    if ( v13 ) /*0x87520f*/
      InterlockedIncrement((volatile LONG *)(v13 + 4)); /*0x875215*/
  }
  Stage = (NiD3DPass *)v7->Stages.data->Texture; /*0x875228*/
  v14 = Stage; /*0x87521e*/
  v15 = sub_848FD0(v8, 0); /*0x87522c*/
  v16 = *(_DWORD *)v14->Name; /*0x875231*/
  v17 = v15; /*0x875234*/
  if ( v16 != v15 ) /*0x875238*/
  {
    if ( v16 ) /*0x87523c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x875242*/
        (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x875258*/
    }
    *(_DWORD *)Stage->Name = v17; /*0x875260*/
    if ( v17 ) /*0x875263*/
      InterlockedIncrement((volatile LONG *)(v17 + 4)); /*0x875269*/
  }
  v18 = v7->Stages.data[1].Stage; /*0x875274*/
  v19 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v8 + 0x90))(v8, 0); /*0x875281*/
  v20 = *(_DWORD *)(v18 + 4); /*0x875283*/
  v21 = v19; /*0x875286*/
  if ( v20 != v19 ) /*0x87528a*/
  {
    if ( v20 ) /*0x87528e*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) ) /*0x875294*/
        (**(void (__thiscall ***)(int, int))v20)(v20, 1); /*0x8752aa*/
    }
    *(_DWORD *)(v18 + 4) = v21; /*0x8752ae*/
    if ( v21 ) /*0x8752b1*/
      InterlockedIncrement((volatile LONG *)(v21 + 4)); /*0x8752b7*/
  }
  Texture = v7->Stages.data[1].Texture; /*0x8752c0*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x8752c8*/
  p_m_uiRefCount = (float *)&Texture->members.super.super.m_uiRefCount; /*0x8752cb*/
  v25 = flt_B43110[0]; /*0x8752d0*/
  if ( m_uiRefCount != LODWORD(flt_B43110[0]) ) /*0x8752d2*/
  {
    if ( m_uiRefCount ) /*0x8752d6*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x8752dc*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x8752f2*/
    }
    *p_m_uiRefCount = v25; /*0x8752f6*/
    if ( v25 != 0.0 ) /*0x8752f8*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v25) + 4)); /*0x8752fe*/
  }
  Unk08 = v7->Stages.data[1].Unk08; /*0x875307*/
  v27 = *(_DWORD *)(Unk08 + 4); /*0x87530f*/
  v28 = (float *)(Unk08 + 4); /*0x875312*/
  v29 = unk_B43108[0]; /*0x875317*/
  if ( v27 != LODWORD(unk_B43108[0]) ) /*0x875319*/
  {
    if ( v27 ) /*0x87531d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v27 + 4)) ) /*0x875323*/
        (**(void (__thiscall ***)(int, int))v27)(v27, 1); /*0x875339*/
    }
    *v28 = v29; /*0x87533d*/
    if ( v29 != 0.0 ) /*0x87533f*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v29) + 4)); /*0x875345*/
  }
  v30 = v7->Stages.data[2].Stage; /*0x87534e*/
  v31 = *(volatile LONG **)(v30 + 4); /*0x875356*/
  v32 = (volatile LONG *)g_CanopyShadowMap; /*0x87535b*/
  if ( v31 != g_CanopyShadowMap ) /*0x87535d*/
  {
    if ( v31 ) /*0x875361*/
    {
      if ( !InterlockedDecrement(v31 + 1) ) /*0x875367*/
        (**(void (__thiscall ***)(void *, int))v31)((void *)v31, 1); /*0x87537d*/
    }
    *(_DWORD *)(v30 + 4) = v32; /*0x875381*/
    if ( v32 ) /*0x875384*/
      InterlockedIncrement(v32 + 1); /*0x87538a*/
  }
  ++v7->RefCount; /*0x875395*/
  Stage = v7; /*0x875398*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &Stage); /*0x8753b4*/
  if ( v7->RefCount-- == 1 ) /*0x8753bc*/
    NiD3DPass_ReleaseToPool(v7); /*0x8753c7*/
  ++*((_DWORD *)this + 0xE); /*0x8753cc*/
}
