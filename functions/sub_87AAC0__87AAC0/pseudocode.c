void __thiscall sub_87AAC0(NiTArray_NiD3DPass *this, int a2, int a3, int a4, float value)
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

  v6 = (NiD3DPass *)unk_B4770C; /*0x87aaf5*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, _DWORD, _DWORD))this->_vtbl + 0x2F))( /*0x87ab03*/
    this,
    a2,
    0,
    *(_DWORD *)(a4 + 0x10));
  Stage = v6->Stages.data->Stage; /*0x87ab0c*/
  v19 = Stage; /*0x87ab13*/
  v8 = sub_848FD0((_DWORD *)LODWORD(value), 0); /*0x87ab17*/
  v9 = *(_DWORD *)(Stage + 4); /*0x87ab1c*/
  v10 = v8; /*0x87ab1f*/
  if ( v9 != v8 ) /*0x87ab23*/
  {
    if ( v9 ) /*0x87ab27*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) ) /*0x87ab2d*/
        (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x87ab43*/
    }
    *(_DWORD *)(v19 + 4) = v10; /*0x87ab4b*/
    if ( v10 ) /*0x87ab4e*/
      InterlockedIncrement((volatile LONG *)(v10 + 4)); /*0x87ab54*/
  }
  Texture = v6->Stages.data->Texture; /*0x87ab5d*/
  v20 = Texture; /*0x87ab6e*/
  v12 = (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)LODWORD(value) + 0x88))(LODWORD(value), 0); /*0x87ab72*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x87ab74*/
  v14 = v12; /*0x87ab77*/
  if ( m_uiRefCount != v12 ) /*0x87ab7b*/
  {
    if ( m_uiRefCount ) /*0x87ab7f*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x87ab85*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x87ab9b*/
    }
    v20->members.super.super.m_uiRefCount = v14; /*0x87aba3*/
    if ( v14 ) /*0x87aba6*/
      InterlockedIncrement((volatile LONG *)(v14 + 4)); /*0x87abac*/
  }
  v15 = v6->Stages.data[1].Stage; /*0x87abb5*/
  v16 = *(_DWORD *)(v15 + 4); /*0x87abbd*/
  v17 = v16 == LODWORD(flt_B43110[0]); /*0x87abc0*/
  v18 = flt_B43110[0]; /*0x87abc2*/
  value = flt_B43110[0]; /*0x87abc4*/
  if ( !v17 ) /*0x87abc8*/
  {
    if ( v16 ) /*0x87abcc*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x87abd2*/
        (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x87abe8*/
      v18 = value; /*0x87abea*/
    }
    *(float *)(v15 + 4) = v18; /*0x87abf0*/
    if ( v18 != 0.0 ) /*0x87abf3*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v18) + 4)); /*0x87abf9*/
  }
  ++v6->RefCount; /*0x87ac04*/
  value = *(float *)&v6; /*0x87ac07*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&value); /*0x87ac1f*/
  v17 = v6->RefCount-- == 1; /*0x87ac27*/
  if ( v17 ) /*0x87ac2e*/
    NiD3DPass_ReleaseToPool(v6); /*0x87ac32*/
  ++*((_DWORD *)this + 0xE); /*0x87ac37*/
}
