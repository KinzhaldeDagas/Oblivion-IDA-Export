void __thiscall sub_875BD0(NiTArray_NiD3DPass *this, int a2, int a3, int a4, NiD3DPass *value)
{
  NiD3DPass *v6; // edi
  float *v7; // ebx
  UInt32 Stage; // ebx
  int v9; // eax
  int v10; // ebx
  int v11; // ebp
  NiTexture *Texture; // ebx
  int v13; // eax
  UInt32 m_uiRefCount; // ebx
  int v15; // ebp
  UInt32 v17; // [esp+30h] [ebp+Ch]
  NiTexture *v18; // [esp+30h] [ebp+Ch]

  v6 = (NiD3DPass *)unk_B47668; /*0x875bfd*/
  sub_848C40(*(float **)(a4 + 0x10)); /*0x875c04*/
  v7 = *(float **)(a4 + 0xC); /*0x875c09*/
  sub_848E50(v7); /*0x875c0f*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v7, 0); /*0x875c26*/
  Stage = v6->Stages.data->Stage; /*0x875c2f*/
  v17 = Stage; /*0x875c3b*/
  v9 = ((int (__thiscall *)(NiD3DPass *, _DWORD))value->__vftable[8].sub_75FD90)(value, 0); /*0x875c3f*/
  v10 = *(_DWORD *)(Stage + 4); /*0x875c41*/
  v11 = v9; /*0x875c44*/
  if ( v10 != v9 ) /*0x875c48*/
  {
    if ( v10 ) /*0x875c4c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x875c52*/
        (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x875c68*/
    }
    *(_DWORD *)(v17 + 4) = v11; /*0x875c70*/
    if ( v11 ) /*0x875c73*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x875c79*/
  }
  Texture = v6->Stages.data->Texture; /*0x875c86*/
  v18 = Texture; /*0x875c8e*/
  v13 = sub_848FD0(value, 0); /*0x875c92*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x875c97*/
  v15 = v13; /*0x875c9a*/
  if ( m_uiRefCount != v13 ) /*0x875c9e*/
  {
    if ( m_uiRefCount ) /*0x875ca2*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x875ca8*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x875cbe*/
    }
    v18->members.super.super.m_uiRefCount = v15; /*0x875cc6*/
    if ( v15 ) /*0x875cc9*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x875ccf*/
  }
  ++v6->RefCount; /*0x875cda*/
  value = v6; /*0x875cdd*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x875cf5*/
  if ( v6->RefCount-- == 1 ) /*0x875cfd*/
    NiD3DPass_ReleaseToPool(v6); /*0x875d08*/
  ++*((_DWORD *)this + 0xE); /*0x875d0d*/
}
