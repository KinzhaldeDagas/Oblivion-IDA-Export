void __thiscall sub_85CFD0(NiTArray_NiD3DPass *this, int a2, int a3, int a4, _DWORD *a5, NiD3DPass *value)
{
  NiD3DPass *v7; // edi
  float *v8; // ebp
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

  v7 = (NiD3DPass *)unk_B477D8; /*0x85cffd*/
  sub_848C40(*(float **)(a4 + 0x10)); /*0x85d004*/
  v8 = *(float **)(a4 + 0xC); /*0x85d009*/
  sub_848E50(v8); /*0x85d00f*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))( /*0x85d028*/
    this,
    a2,
    v8,
    *(_DWORD *)(a4 + 0x10));
  Stage = v7->Stages.data->Stage; /*0x85d031*/
  v18 = Stage; /*0x85d040*/
  v10 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88))(a5, 0); /*0x85d044*/
  v11 = *(_DWORD *)(Stage + 4); /*0x85d046*/
  v16 = v10; /*0x85d04b*/
  if ( v11 != v10 ) /*0x85d04f*/
  {
    if ( v11 ) /*0x85d053*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) ) /*0x85d059*/
        (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x85d06f*/
      v10 = v16; /*0x85d071*/
    }
    *(_DWORD *)(v18 + 4) = v10; /*0x85d07b*/
    if ( v10 ) /*0x85d07e*/
      InterlockedIncrement((volatile LONG *)(v10 + 4)); /*0x85d084*/
  }
  sub_848FA0((_DWORD **)v18, (int)a5); /*0x85d092*/
  Texture = v7->Stages.data->Texture; /*0x85d09a*/
  v19 = Texture; /*0x85d0a2*/
  v13 = sub_848FD0(a5, 0); /*0x85d0a6*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x85d0ab*/
  v17 = v13; /*0x85d0b0*/
  if ( m_uiRefCount != v13 ) /*0x85d0b4*/
  {
    if ( m_uiRefCount ) /*0x85d0b8*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x85d0be*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x85d0d4*/
      v13 = v17; /*0x85d0d6*/
    }
    v19->members.super.super.m_uiRefCount = v13; /*0x85d0e0*/
    if ( v13 ) /*0x85d0e3*/
      InterlockedIncrement((volatile LONG *)(v13 + 4)); /*0x85d0e9*/
  }
  sub_848FA0(v19, (int)a5); /*0x85d0f7*/
  if ( !(_BYTE)value ) /*0x85d101*/
  {
    ++v7->RefCount; /*0x85d108*/
    value = v7; /*0x85d10b*/
    NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x85d123*/
    if ( v7->RefCount-- == 1 ) /*0x85d12b*/
      NiD3DPass_ReleaseToPool(v7); /*0x85d136*/
    ++*((_DWORD *)this + 0xE); /*0x85d13b*/
  }
}
