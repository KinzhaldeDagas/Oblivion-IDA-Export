void __thiscall sub_87A2D0(NiTArray_NiD3DPass *this, int a2, int a3, int a4, NiD3DPass *value)
{
  NiD3DPass *v6; // edi
  UInt32 Stage; // ebx
  int v8; // eax
  int v9; // ebx
  int v10; // ebp
  NiTexture *Texture; // ebx
  int v12; // eax
  UInt32 m_uiRefCount; // ebx
  int v14; // ebp
  UInt32 v16; // [esp+30h] [ebp+Ch]
  NiTexture *v17; // [esp+30h] [ebp+Ch]

  v6 = (NiD3DPass *)unk_B476F8; /*0x87a305*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, _DWORD, _DWORD))this->_vtbl + 0x2F))( /*0x87a313*/
    this,
    a2,
    0,
    *(_DWORD *)(a4 + 0x10));
  Stage = v6->Stages.data->Stage; /*0x87a31c*/
  v16 = Stage; /*0x87a323*/
  v8 = sub_848FD0(value, 0); /*0x87a327*/
  v9 = *(_DWORD *)(Stage + 4); /*0x87a32c*/
  v10 = v8; /*0x87a32f*/
  if ( v9 != v8 ) /*0x87a333*/
  {
    if ( v9 ) /*0x87a337*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) ) /*0x87a33d*/
        (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x87a353*/
    }
    *(_DWORD *)(v16 + 4) = v10; /*0x87a35b*/
    if ( v10 ) /*0x87a35e*/
      InterlockedIncrement((volatile LONG *)(v10 + 4)); /*0x87a364*/
  }
  Texture = v6->Stages.data->Texture; /*0x87a36d*/
  v17 = Texture; /*0x87a37e*/
  v12 = ((int (__thiscall *)(NiD3DPass *, _DWORD))value->__vftable[8].sub_75FD90)(value, 0); /*0x87a382*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x87a384*/
  v14 = v12; /*0x87a387*/
  if ( m_uiRefCount != v12 ) /*0x87a38b*/
  {
    if ( m_uiRefCount ) /*0x87a38f*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x87a395*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x87a3ab*/
    }
    v17->members.super.super.m_uiRefCount = v14; /*0x87a3b3*/
    if ( v14 ) /*0x87a3b6*/
      InterlockedIncrement((volatile LONG *)(v14 + 4)); /*0x87a3bc*/
  }
  ++v6->RefCount; /*0x87a3c7*/
  value = v6; /*0x87a3ca*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x87a3e2*/
  if ( v6->RefCount-- == 1 ) /*0x87a3ea*/
    NiD3DPass_ReleaseToPool(v6); /*0x87a3f5*/
  ++*((_DWORD *)this + 0xE); /*0x87a3fa*/
}
