void __thiscall sub_879F60(NiTArray_NiD3DPass *this, int a2, int a3, int a4, float value)
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

  v6 = (NiD3DPass *)unk_B476EC; /*0x879f92*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, _DWORD, _DWORD))this->_vtbl + 0x2F))(this, a2, 0, 0); /*0x879f9f*/
  Stage = v6->Stages.data->Stage; /*0x879fa8*/
  v19 = Stage; /*0x879faf*/
  v8 = sub_848FD0((_DWORD *)LODWORD(value), 0); /*0x879fb3*/
  v9 = *(_DWORD *)(Stage + 4); /*0x879fb8*/
  v10 = v8; /*0x879fbb*/
  if ( v9 != v8 ) /*0x879fbf*/
  {
    if ( v9 ) /*0x879fc3*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) ) /*0x879fc9*/
        (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x879fdf*/
    }
    *(_DWORD *)(v19 + 4) = v10; /*0x879fe7*/
    if ( v10 ) /*0x879fea*/
      InterlockedIncrement((volatile LONG *)(v10 + 4)); /*0x879ff0*/
  }
  Texture = v6->Stages.data->Texture; /*0x879ff9*/
  v20 = Texture; /*0x87a00a*/
  v12 = (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)LODWORD(value) + 0x88))(LODWORD(value), 0); /*0x87a00e*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x87a010*/
  v14 = v12; /*0x87a013*/
  if ( m_uiRefCount != v12 ) /*0x87a017*/
  {
    if ( m_uiRefCount ) /*0x87a01b*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x87a021*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x87a037*/
    }
    v20->members.super.super.m_uiRefCount = v14; /*0x87a03f*/
    if ( v14 ) /*0x87a042*/
      InterlockedIncrement((volatile LONG *)(v14 + 4)); /*0x87a048*/
  }
  v15 = v6->Stages.data[1].Stage; /*0x87a051*/
  v16 = *(_DWORD *)(v15 + 4); /*0x87a059*/
  v17 = v16 == LODWORD(flt_B43110[0]); /*0x87a05c*/
  v18 = flt_B43110[0]; /*0x87a05e*/
  value = flt_B43110[0]; /*0x87a060*/
  if ( !v17 ) /*0x87a064*/
  {
    if ( v16 ) /*0x87a068*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x87a06e*/
        (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x87a084*/
      v18 = value; /*0x87a086*/
    }
    *(float *)(v15 + 4) = v18; /*0x87a08c*/
    if ( v18 != 0.0 ) /*0x87a08f*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v18) + 4)); /*0x87a095*/
  }
  ++v6->RefCount; /*0x87a0a0*/
  value = *(float *)&v6; /*0x87a0a3*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&value); /*0x87a0bb*/
  v17 = v6->RefCount-- == 1; /*0x87a0c3*/
  if ( v17 ) /*0x87a0ca*/
    NiD3DPass_ReleaseToPool(v6); /*0x87a0ce*/
  ++*((_DWORD *)this + 0xE); /*0x87a0d3*/
}
