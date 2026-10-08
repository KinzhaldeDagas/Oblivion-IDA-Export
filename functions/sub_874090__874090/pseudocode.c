void __thiscall sub_874090(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DPass *Stage, _DWORD *a5)
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

  v6 = *(float **)&Stage->Name[8]; /*0x8740bf*/
  v7 = (NiD3DPass *)unk_B47634; /*0x8740c2*/
  sub_848E50(v6); /*0x8740c9*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v6, 0); /*0x8740e0*/
  v8 = a5; /*0x8740e5*/
  v10 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x8740ed*/
  Stage = (NiD3DPass *)v7->Stages.data->Stage; /*0x8740f7*/
  v9 = Stage; /*0x8740e9*/
  v11 = v10(a5, 0); /*0x8740fb*/
  v12 = *(_DWORD *)v9->Name; /*0x8740fd*/
  v13 = v11; /*0x874100*/
  if ( v12 != v11 ) /*0x874104*/
  {
    if ( v12 ) /*0x874108*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) ) /*0x87410e*/
        (**(void (__thiscall ***)(int, int))v12)(v12, 1); /*0x874124*/
    }
    *(_DWORD *)Stage->Name = v13; /*0x87412c*/
    if ( v13 ) /*0x87412f*/
      InterlockedIncrement((volatile LONG *)(v13 + 4)); /*0x874135*/
  }
  Stage = (NiD3DPass *)v7->Stages.data->Texture; /*0x874148*/
  v14 = Stage; /*0x87413e*/
  v15 = sub_848FD0(v8, 0); /*0x87414c*/
  v16 = *(_DWORD *)v14->Name; /*0x874151*/
  v17 = v15; /*0x874154*/
  if ( v16 != v15 ) /*0x874158*/
  {
    if ( v16 ) /*0x87415c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x874162*/
        (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x874178*/
    }
    *(_DWORD *)Stage->Name = v17; /*0x874180*/
    if ( v17 ) /*0x874183*/
      InterlockedIncrement((volatile LONG *)(v17 + 4)); /*0x874189*/
  }
  v18 = v7->Stages.data[1].Stage; /*0x874194*/
  v19 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v8 + 0x90))(v8, 0); /*0x8741a1*/
  v20 = *(_DWORD *)(v18 + 4); /*0x8741a3*/
  v21 = v19; /*0x8741a6*/
  if ( v20 != v19 ) /*0x8741aa*/
  {
    if ( v20 ) /*0x8741ae*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) ) /*0x8741b4*/
        (**(void (__thiscall ***)(int, int))v20)(v20, 1); /*0x8741ca*/
    }
    *(_DWORD *)(v18 + 4) = v21; /*0x8741ce*/
    if ( v21 ) /*0x8741d1*/
      InterlockedIncrement((volatile LONG *)(v21 + 4)); /*0x8741d7*/
  }
  Texture = v7->Stages.data[1].Texture; /*0x8741e0*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x8741e8*/
  p_m_uiRefCount = (float *)&Texture->members.super.super.m_uiRefCount; /*0x8741eb*/
  v25 = flt_B43110[0]; /*0x8741f0*/
  if ( m_uiRefCount != LODWORD(flt_B43110[0]) ) /*0x8741f2*/
  {
    if ( m_uiRefCount ) /*0x8741f6*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x8741fc*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x874212*/
    }
    *p_m_uiRefCount = v25; /*0x874216*/
    if ( v25 != 0.0 ) /*0x874218*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v25) + 4)); /*0x87421e*/
  }
  Unk08 = v7->Stages.data[1].Unk08; /*0x874227*/
  v27 = *(_DWORD *)(Unk08 + 4); /*0x87422f*/
  v28 = (float *)(Unk08 + 4); /*0x874232*/
  v29 = unk_B43108[0]; /*0x874237*/
  if ( v27 != LODWORD(unk_B43108[0]) ) /*0x874239*/
  {
    if ( v27 ) /*0x87423d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v27 + 4)) ) /*0x874243*/
        (**(void (__thiscall ***)(int, int))v27)(v27, 1); /*0x874259*/
    }
    *v28 = v29; /*0x87425d*/
    if ( v29 != 0.0 ) /*0x87425f*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v29) + 4)); /*0x874265*/
  }
  v30 = v7->Stages.data[2].Stage; /*0x87426e*/
  v31 = *(volatile LONG **)(v30 + 4); /*0x874276*/
  v32 = (volatile LONG *)g_CanopyShadowMap; /*0x87427b*/
  if ( v31 != g_CanopyShadowMap ) /*0x87427d*/
  {
    if ( v31 ) /*0x874281*/
    {
      if ( !InterlockedDecrement(v31 + 1) ) /*0x874287*/
        (**(void (__thiscall ***)(void *, int))v31)((void *)v31, 1); /*0x87429d*/
    }
    *(_DWORD *)(v30 + 4) = v32; /*0x8742a1*/
    if ( v32 ) /*0x8742a4*/
      InterlockedIncrement(v32 + 1); /*0x8742aa*/
  }
  ++v7->RefCount; /*0x8742b5*/
  Stage = v7; /*0x8742b8*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &Stage); /*0x8742d4*/
  if ( v7->RefCount-- == 1 ) /*0x8742dc*/
    NiD3DPass_ReleaseToPool(v7); /*0x8742e7*/
  ++*((_DWORD *)this + 0xE); /*0x8742ec*/
}
