void __thiscall sub_85D720(NiTArray_NiD3DPass *this, int a2, int a3, int a4, _DWORD *a5, NiD3DPass *value)
{
  float *v7; // ebx
  NiD3DPass *v8; // edi
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

  v7 = *(float **)(a4 + 0xC); /*0x85d74a*/
  v8 = (NiD3DPass *)unk_B477C0; /*0x85d74d*/
  sub_848E50(v7); /*0x85d754*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v7, 0); /*0x85d76b*/
  Stage = v8->Stages.data->Stage; /*0x85d774*/
  v18 = Stage; /*0x85d783*/
  v10 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88))(a5, 0); /*0x85d787*/
  v11 = *(_DWORD *)(Stage + 4); /*0x85d789*/
  v16 = v10; /*0x85d78e*/
  if ( v11 != v10 ) /*0x85d792*/
  {
    if ( v11 ) /*0x85d796*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) ) /*0x85d79c*/
        (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x85d7b2*/
      v10 = v16; /*0x85d7b4*/
    }
    *(_DWORD *)(v18 + 4) = v10; /*0x85d7be*/
    if ( v10 ) /*0x85d7c1*/
      InterlockedIncrement((volatile LONG *)(v10 + 4)); /*0x85d7c7*/
  }
  sub_848FA0((_DWORD **)v18, (int)a5); /*0x85d7d5*/
  Texture = v8->Stages.data->Texture; /*0x85d7dd*/
  v19 = Texture; /*0x85d7e5*/
  v13 = sub_848FD0(a5, 0); /*0x85d7e9*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x85d7ee*/
  v17 = v13; /*0x85d7f3*/
  if ( m_uiRefCount != v13 ) /*0x85d7f7*/
  {
    if ( m_uiRefCount ) /*0x85d7fb*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x85d801*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x85d817*/
      v13 = v17; /*0x85d819*/
    }
    v19->members.super.super.m_uiRefCount = v13; /*0x85d823*/
    if ( v13 ) /*0x85d826*/
      InterlockedIncrement((volatile LONG *)(v13 + 4)); /*0x85d82c*/
  }
  sub_848FA0(v19, (int)a5); /*0x85d83a*/
  if ( !(_BYTE)value ) /*0x85d844*/
  {
    ++v8->RefCount; /*0x85d84b*/
    value = v8; /*0x85d84e*/
    NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x85d866*/
    if ( v8->RefCount-- == 1 ) /*0x85d86e*/
      NiD3DPass_ReleaseToPool(v8); /*0x85d879*/
    ++*((_DWORD *)this + 0xE); /*0x85d87e*/
  }
}
