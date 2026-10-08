void __thiscall sub_875630(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DPass *Stage, _DWORD *a5)
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

  v6 = *(float **)&Stage->Name[8]; /*0x87565f*/
  v7 = (NiD3DPass *)unk_B4765C; /*0x875662*/
  sub_848E50(v6); /*0x875669*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v6, 0); /*0x875680*/
  v8 = a5; /*0x875685*/
  v10 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x87568d*/
  Stage = (NiD3DPass *)v7->Stages.data->Stage; /*0x875697*/
  v9 = Stage; /*0x875689*/
  v11 = v10(a5, 0); /*0x87569b*/
  v12 = *(_DWORD *)v9->Name; /*0x87569d*/
  v13 = v11; /*0x8756a0*/
  if ( v12 != v11 ) /*0x8756a4*/
  {
    if ( v12 ) /*0x8756a8*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) ) /*0x8756ae*/
        (**(void (__thiscall ***)(int, int))v12)(v12, 1); /*0x8756c4*/
    }
    *(_DWORD *)Stage->Name = v13; /*0x8756cc*/
    if ( v13 ) /*0x8756cf*/
      InterlockedIncrement((volatile LONG *)(v13 + 4)); /*0x8756d5*/
  }
  Stage = (NiD3DPass *)v7->Stages.data->Texture; /*0x8756e8*/
  v14 = Stage; /*0x8756de*/
  v15 = sub_848FD0(v8, 0); /*0x8756ec*/
  v16 = *(_DWORD *)v14->Name; /*0x8756f1*/
  v17 = v15; /*0x8756f4*/
  if ( v16 != v15 ) /*0x8756f8*/
  {
    if ( v16 ) /*0x8756fc*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x875702*/
        (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x875718*/
    }
    *(_DWORD *)Stage->Name = v17; /*0x875720*/
    if ( v17 ) /*0x875723*/
      InterlockedIncrement((volatile LONG *)(v17 + 4)); /*0x875729*/
  }
  v18 = v7->Stages.data[1].Stage; /*0x875734*/
  v19 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v8 + 0x90))(v8, 0); /*0x875741*/
  v20 = *(_DWORD *)(v18 + 4); /*0x875743*/
  v21 = v19; /*0x875746*/
  if ( v20 != v19 ) /*0x87574a*/
  {
    if ( v20 ) /*0x87574e*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) ) /*0x875754*/
        (**(void (__thiscall ***)(int, int))v20)(v20, 1); /*0x87576a*/
    }
    *(_DWORD *)(v18 + 4) = v21; /*0x87576e*/
    if ( v21 ) /*0x875771*/
      InterlockedIncrement((volatile LONG *)(v21 + 4)); /*0x875777*/
  }
  Texture = v7->Stages.data[1].Texture; /*0x875780*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x875788*/
  p_m_uiRefCount = (float *)&Texture->members.super.super.m_uiRefCount; /*0x87578b*/
  v25 = flt_B43110[0]; /*0x875790*/
  if ( m_uiRefCount != LODWORD(flt_B43110[0]) ) /*0x875792*/
  {
    if ( m_uiRefCount ) /*0x875796*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x87579c*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x8757b2*/
    }
    *p_m_uiRefCount = v25; /*0x8757b6*/
    if ( v25 != 0.0 ) /*0x8757b8*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v25) + 4)); /*0x8757be*/
  }
  Unk08 = v7->Stages.data[1].Unk08; /*0x8757c7*/
  v27 = *(_DWORD *)(Unk08 + 4); /*0x8757cf*/
  v28 = (float *)(Unk08 + 4); /*0x8757d2*/
  v29 = unk_B43108[0]; /*0x8757d7*/
  if ( v27 != LODWORD(unk_B43108[0]) ) /*0x8757d9*/
  {
    if ( v27 ) /*0x8757dd*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v27 + 4)) ) /*0x8757e3*/
        (**(void (__thiscall ***)(int, int))v27)(v27, 1); /*0x8757f9*/
    }
    *v28 = v29; /*0x8757fd*/
    if ( v29 != 0.0 ) /*0x8757ff*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v29) + 4)); /*0x875805*/
  }
  v30 = v7->Stages.data[2].Stage; /*0x87580e*/
  v31 = *(volatile LONG **)(v30 + 4); /*0x875816*/
  v32 = (volatile LONG *)g_CanopyShadowMap; /*0x87581b*/
  if ( v31 != g_CanopyShadowMap ) /*0x87581d*/
  {
    if ( v31 ) /*0x875821*/
    {
      if ( !InterlockedDecrement(v31 + 1) ) /*0x875827*/
        (**(void (__thiscall ***)(void *, int))v31)((void *)v31, 1); /*0x87583d*/
    }
    *(_DWORD *)(v30 + 4) = v32; /*0x875841*/
    if ( v32 ) /*0x875844*/
      InterlockedIncrement(v32 + 1); /*0x87584a*/
  }
  ++v7->RefCount; /*0x875855*/
  Stage = v7; /*0x875858*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &Stage); /*0x875874*/
  if ( v7->RefCount-- == 1 ) /*0x87587c*/
    NiD3DPass_ReleaseToPool(v7); /*0x875887*/
  ++*((_DWORD *)this + 0xE); /*0x87588c*/
}
