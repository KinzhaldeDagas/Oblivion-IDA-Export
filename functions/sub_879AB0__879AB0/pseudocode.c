void __thiscall sub_879AB0(NiTArray_NiD3DPass *this, int a2, int a3, int a4, float value)
{
  NiD3DPass *v6; // esi
  UInt32 Stage; // ebx
  int v8; // eax
  int v9; // ebx
  int v10; // ebp
  NiTexture *Texture; // ebx
  int v12; // eax
  UInt32 m_uiRefCount; // ebx
  int v14; // ebp
  UInt32 v15; // ebp
  int v16; // ebx
  bool v17; // zf
  float v18; // ecx
  UInt32 v19; // [esp+2Ch] [ebp+4h]
  NiTexture *v20; // [esp+2Ch] [ebp+4h]

  v6 = (NiD3DPass *)unk_B476E0; /*0x879ae2*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, _DWORD, _DWORD))this->_vtbl + 0x2F))(this, a2, 0, 0); /*0x879aef*/
  Stage = v6->Stages.data->Stage; /*0x879af8*/
  v19 = Stage; /*0x879aff*/
  v8 = sub_848FD0((_DWORD *)LODWORD(value), 0); /*0x879b03*/
  v9 = *(_DWORD *)(Stage + 4); /*0x879b08*/
  v10 = v8; /*0x879b0b*/
  if ( v9 != v8 ) /*0x879b0f*/
  {
    if ( v9 ) /*0x879b13*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) ) /*0x879b19*/
        (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x879b2f*/
    }
    *(_DWORD *)(v19 + 4) = v10; /*0x879b37*/
    if ( v10 ) /*0x879b3a*/
      InterlockedIncrement((volatile LONG *)(v10 + 4)); /*0x879b40*/
  }
  Texture = v6->Stages.data->Texture; /*0x879b49*/
  v20 = Texture; /*0x879b5a*/
  v12 = (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)LODWORD(value) + 0x88))(LODWORD(value), 0); /*0x879b5e*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x879b60*/
  v14 = v12; /*0x879b63*/
  if ( m_uiRefCount != v12 ) /*0x879b67*/
  {
    if ( m_uiRefCount ) /*0x879b6b*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x879b71*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x879b87*/
    }
    v20->members.super.super.m_uiRefCount = v14; /*0x879b8f*/
    if ( v14 ) /*0x879b92*/
      InterlockedIncrement((volatile LONG *)(v14 + 4)); /*0x879b98*/
  }
  v15 = v6->Stages.data[1].Stage; /*0x879ba1*/
  v16 = *(_DWORD *)(v15 + 4); /*0x879ba9*/
  v17 = v16 == LODWORD(flt_B43110[0]); /*0x879bac*/
  v18 = flt_B43110[0]; /*0x879bae*/
  value = flt_B43110[0]; /*0x879bb0*/
  if ( !v17 ) /*0x879bb4*/
  {
    if ( v16 ) /*0x879bb8*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x879bbe*/
        (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x879bd4*/
      v18 = value; /*0x879bd6*/
    }
    *(float *)(v15 + 4) = v18; /*0x879bdc*/
    if ( v18 != 0.0 ) /*0x879bdf*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v18) + 4)); /*0x879be5*/
  }
  ++v6->RefCount; /*0x879bf0*/
  value = *(float *)&v6; /*0x879bf3*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&value); /*0x879c0b*/
  v17 = v6->RefCount-- == 1; /*0x879c13*/
  if ( v17 ) /*0x879c1a*/
    NiD3DPass_ReleaseToPool(v6); /*0x879c1e*/
  ++*((_DWORD *)this + 0xE); /*0x879c23*/
}
