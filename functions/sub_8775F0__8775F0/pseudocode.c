void __thiscall sub_8775F0(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DPass *Stage, _DWORD *a5)
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
  NiTexture *Texture; // ebp
  int v19; // eax
  UInt32 m_uiRefCount; // edi
  int v21; // ebx
  UInt32 Unk08; // edi
  int v23; // ebx
  float *v24; // edi
  float v25; // ebp
  UInt32 v26; // edi
  int v27; // ebx
  float *v28; // edi
  float v29; // ebp
  NiTexture *v30; // ebx
  volatile LONG *v31; // edi
  volatile LONG *v32; // ebp

  v6 = *(float **)&Stage->Name[8]; /*0x87761f*/
  v7 = (NiD3DPass *)unk_B4769C; /*0x877622*/
  sub_848E50(v6); /*0x877629*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v6, 0); /*0x877640*/
  v8 = a5; /*0x877645*/
  v10 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x87764d*/
  Stage = (NiD3DPass *)v7->Stages.data->Stage; /*0x877657*/
  v9 = Stage; /*0x877649*/
  v11 = v10(a5, 0); /*0x87765b*/
  v12 = *(_DWORD *)v9->Name; /*0x87765d*/
  v13 = v11; /*0x877660*/
  if ( v12 != v11 ) /*0x877664*/
  {
    if ( v12 ) /*0x877668*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) ) /*0x87766e*/
        (**(void (__thiscall ***)(int, int))v12)(v12, 1); /*0x877684*/
    }
    *(_DWORD *)Stage->Name = v13; /*0x87768c*/
    if ( v13 ) /*0x87768f*/
      InterlockedIncrement((volatile LONG *)(v13 + 4)); /*0x877695*/
  }
  Stage = (NiD3DPass *)v7->Stages.data->Texture; /*0x8776a8*/
  v14 = Stage; /*0x87769e*/
  v15 = sub_848FD0(v8, 0); /*0x8776ac*/
  v16 = *(_DWORD *)v14->Name; /*0x8776b1*/
  v17 = v15; /*0x8776b4*/
  if ( v16 != v15 ) /*0x8776b8*/
  {
    if ( v16 ) /*0x8776bc*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x8776c2*/
        (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x8776d8*/
    }
    *(_DWORD *)Stage->Name = v17; /*0x8776e0*/
    if ( v17 ) /*0x8776e3*/
      InterlockedIncrement((volatile LONG *)(v17 + 4)); /*0x8776e9*/
  }
  Texture = v7->Stages.data[1].Texture; /*0x8776f4*/
  v19 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v8 + 0x90))(v8, 0); /*0x877701*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x877703*/
  v21 = v19; /*0x877706*/
  if ( m_uiRefCount != v19 ) /*0x87770a*/
  {
    if ( m_uiRefCount ) /*0x87770e*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x877714*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x87772a*/
    }
    Texture->members.super.super.m_uiRefCount = v21; /*0x87772e*/
    if ( v21 ) /*0x877731*/
      InterlockedIncrement((volatile LONG *)(v21 + 4)); /*0x877737*/
  }
  Unk08 = v7->Stages.data[1].Unk08; /*0x877740*/
  v23 = *(_DWORD *)(Unk08 + 4); /*0x877748*/
  v24 = (float *)(Unk08 + 4); /*0x87774b*/
  v25 = flt_B43110[0]; /*0x877750*/
  if ( v23 != LODWORD(flt_B43110[0]) ) /*0x877752*/
  {
    if ( v23 ) /*0x877756*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v23 + 4)) ) /*0x87775c*/
        (**(void (__thiscall ***)(int, int))v23)(v23, 1); /*0x877772*/
    }
    *v24 = v25; /*0x877776*/
    if ( v25 != 0.0 ) /*0x877778*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v25) + 4)); /*0x87777e*/
  }
  v26 = v7->Stages.data[2].Stage; /*0x877787*/
  v27 = *(_DWORD *)(v26 + 4); /*0x87778f*/
  v28 = (float *)(v26 + 4); /*0x877792*/
  v29 = unk_B43108[0]; /*0x877797*/
  if ( v27 != LODWORD(unk_B43108[0]) ) /*0x877799*/
  {
    if ( v27 ) /*0x87779d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v27 + 4)) ) /*0x8777a3*/
        (**(void (__thiscall ***)(int, int))v27)(v27, 1); /*0x8777b9*/
    }
    *v28 = v29; /*0x8777bd*/
    if ( v29 != 0.0 ) /*0x8777bf*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v29) + 4)); /*0x8777c5*/
  }
  v30 = v7->Stages.data[2].Texture; /*0x8777ce*/
  v31 = (volatile LONG *)v30->members.super.super.m_uiRefCount; /*0x8777d6*/
  v32 = (volatile LONG *)g_CanopyShadowMap; /*0x8777db*/
  if ( v31 != g_CanopyShadowMap ) /*0x8777dd*/
  {
    if ( v31 ) /*0x8777e1*/
    {
      if ( !InterlockedDecrement(v31 + 1) ) /*0x8777e7*/
        (**(void (__thiscall ***)(void *, int))v31)((void *)v31, 1); /*0x8777fd*/
    }
    v30->members.super.super.m_uiRefCount = (UInt32)v32; /*0x877801*/
    if ( v32 ) /*0x877804*/
      InterlockedIncrement(v32 + 1); /*0x87780a*/
  }
  ++v7->RefCount; /*0x877815*/
  Stage = v7; /*0x877818*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &Stage); /*0x877834*/
  if ( v7->RefCount-- == 1 ) /*0x87783c*/
    NiD3DPass_ReleaseToPool(v7); /*0x877847*/
  ++*((_DWORD *)this + 0xE); /*0x87784c*/
}
