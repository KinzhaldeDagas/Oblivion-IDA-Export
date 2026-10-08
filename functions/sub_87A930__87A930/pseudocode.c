void __thiscall sub_87A930(NiTArray_NiD3DPass *this, int a2, int a3, int a4, float value)
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
  UInt32 v19; // [esp+34h] [ebp+Ch]
  NiTexture *v20; // [esp+34h] [ebp+Ch]

  v6 = (NiD3DPass *)unk_B47708; /*0x87a965*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, _DWORD, _DWORD))this->_vtbl + 0x2F))( /*0x87a973*/
    this,
    a2,
    0,
    *(_DWORD *)(a4 + 0x10));
  Stage = v6->Stages.data->Stage; /*0x87a97c*/
  v19 = Stage; /*0x87a983*/
  v8 = sub_848FD0((_DWORD *)LODWORD(value), 0); /*0x87a987*/
  v9 = *(_DWORD *)(Stage + 4); /*0x87a98c*/
  v10 = v8; /*0x87a98f*/
  if ( v9 != v8 ) /*0x87a993*/
  {
    if ( v9 ) /*0x87a997*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) ) /*0x87a99d*/
        (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x87a9b3*/
    }
    *(_DWORD *)(v19 + 4) = v10; /*0x87a9bb*/
    if ( v10 ) /*0x87a9be*/
      InterlockedIncrement((volatile LONG *)(v10 + 4)); /*0x87a9c4*/
  }
  Texture = v6->Stages.data->Texture; /*0x87a9cd*/
  v20 = Texture; /*0x87a9de*/
  v12 = (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)LODWORD(value) + 0x88))(LODWORD(value), 0); /*0x87a9e2*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x87a9e4*/
  v14 = v12; /*0x87a9e7*/
  if ( m_uiRefCount != v12 ) /*0x87a9eb*/
  {
    if ( m_uiRefCount ) /*0x87a9ef*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x87a9f5*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x87aa0b*/
    }
    v20->members.super.super.m_uiRefCount = v14; /*0x87aa13*/
    if ( v14 ) /*0x87aa16*/
      InterlockedIncrement((volatile LONG *)(v14 + 4)); /*0x87aa1c*/
  }
  v15 = v6->Stages.data[1].Stage; /*0x87aa25*/
  v16 = *(_DWORD *)(v15 + 4); /*0x87aa2d*/
  v17 = v16 == LODWORD(flt_B43110[0]); /*0x87aa30*/
  v18 = flt_B43110[0]; /*0x87aa32*/
  value = flt_B43110[0]; /*0x87aa34*/
  if ( !v17 ) /*0x87aa38*/
  {
    if ( v16 ) /*0x87aa3c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x87aa42*/
        (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x87aa58*/
      v18 = value; /*0x87aa5a*/
    }
    *(float *)(v15 + 4) = v18; /*0x87aa60*/
    if ( v18 != 0.0 ) /*0x87aa63*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v18) + 4)); /*0x87aa69*/
  }
  ++v6->RefCount; /*0x87aa74*/
  value = *(float *)&v6; /*0x87aa77*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&value); /*0x87aa8f*/
  v17 = v6->RefCount-- == 1; /*0x87aa97*/
  if ( v17 ) /*0x87aa9e*/
    NiD3DPass_ReleaseToPool(v6); /*0x87aaa2*/
  ++*((_DWORD *)this + 0xE); /*0x87aaa7*/
}
