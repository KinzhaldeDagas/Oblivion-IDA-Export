void __thiscall sub_85C870(NiTArray_NiD3DPass *this, int a2, int a3, int a4, _DWORD *a5, NiD3DPass *value)
{
  NiD3DPass *v7; // edi
  float *v8; // ebx
  UInt32 Stage; // ebx
  int v10; // eax
  int v11; // ebx
  NiTexture *Texture; // ebx
  int v13; // eax
  UInt32 m_uiRefCount; // ebx
  int v16; // [esp+28h] [ebp+4h]
  int v17; // [esp+28h] [ebp+4h]
  UInt32 v18; // [esp+30h] [ebp+Ch]
  NiTexture *v19; // [esp+30h] [ebp+Ch]

  v7 = (NiD3DPass *)unk_B477C8; /*0x85c89d*/
  sub_848C40(*(float **)(a4 + 0x10)); /*0x85c8a4*/
  v8 = *(float **)(a4 + 0xC); /*0x85c8a9*/
  sub_848E50(v8); /*0x85c8af*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v8, 0); /*0x85c8c6*/
  Stage = v7->Stages.data->Stage; /*0x85c8cf*/
  v18 = Stage; /*0x85c8de*/
  v10 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88))(a5, 0); /*0x85c8e2*/
  v11 = *(_DWORD *)(Stage + 4); /*0x85c8e4*/
  v16 = v10; /*0x85c8e9*/
  if ( v11 != v10 ) /*0x85c8ed*/
  {
    if ( v11 ) /*0x85c8f1*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) ) /*0x85c8f7*/
        (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x85c90d*/
      v10 = v16; /*0x85c90f*/
    }
    *(_DWORD *)(v18 + 4) = v10; /*0x85c919*/
    if ( v10 ) /*0x85c91c*/
      InterlockedIncrement((volatile LONG *)(v10 + 4)); /*0x85c922*/
  }
  sub_848FA0((_DWORD **)v18, (int)a5); /*0x85c930*/
  Texture = v7->Stages.data->Texture; /*0x85c938*/
  v19 = Texture; /*0x85c940*/
  v13 = sub_848FD0(a5, 0); /*0x85c944*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x85c949*/
  v17 = v13; /*0x85c94e*/
  if ( m_uiRefCount != v13 ) /*0x85c952*/
  {
    if ( m_uiRefCount ) /*0x85c956*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x85c95c*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x85c972*/
      v13 = v17; /*0x85c974*/
    }
    v19->members.super.super.m_uiRefCount = v13; /*0x85c97e*/
    if ( v13 ) /*0x85c981*/
      InterlockedIncrement((volatile LONG *)(v13 + 4)); /*0x85c987*/
  }
  sub_848FA0(v19, (int)a5); /*0x85c995*/
  if ( !(_BYTE)value ) /*0x85c99f*/
  {
    ++v7->RefCount; /*0x85c9a6*/
    value = v7; /*0x85c9a9*/
    NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x85c9c1*/
    if ( v7->RefCount-- == 1 ) /*0x85c9c9*/
      NiD3DPass_ReleaseToPool(v7); /*0x85c9d4*/
    ++*((_DWORD *)this + 0xE); /*0x85c9d9*/
  }
}
