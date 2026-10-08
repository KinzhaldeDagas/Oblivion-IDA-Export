void __thiscall sub_85C110(NiTArray_NiD3DPass *this, int a2, int a3, int a4, _DWORD *a5, NiD3DPass *value)
{
  NiD3DPass *v7; // esi
  UInt32 Stage; // edi
  int v9; // eax
  int v10; // edi
  int v11; // ebp
  NiTexture *Texture; // edi
  int v13; // eax
  UInt32 m_uiRefCount; // edi
  int v15; // ebp
  UInt32 v17; // [esp+2Ch] [ebp+Ch]
  NiTexture *v18; // [esp+2Ch] [ebp+Ch]

  v7 = (NiD3DPass *)unk_B47798; /*0x85c13d*/
  sub_848E50(*(float **)(a4 + 0xC)); /*0x85c144*/
  Stage = v7->Stages.data->Stage; /*0x85c14c*/
  v17 = Stage; /*0x85c15c*/
  v9 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88))(a5, 0); /*0x85c160*/
  v10 = *(_DWORD *)(Stage + 4); /*0x85c162*/
  v11 = v9; /*0x85c165*/
  if ( v10 != v9 ) /*0x85c169*/
  {
    if ( v10 ) /*0x85c16d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x85c173*/
        (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x85c189*/
    }
    *(_DWORD *)(v17 + 4) = v11; /*0x85c191*/
    if ( v11 ) /*0x85c194*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x85c19a*/
  }
  Texture = v7->Stages.data->Texture; /*0x85c1a7*/
  v18 = Texture; /*0x85c1af*/
  v13 = sub_848FD0(a5, 0); /*0x85c1b3*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x85c1b8*/
  v15 = v13; /*0x85c1bb*/
  if ( m_uiRefCount != v13 ) /*0x85c1bf*/
  {
    if ( m_uiRefCount ) /*0x85c1c3*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x85c1c9*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x85c1df*/
    }
    v18->members.super.super.m_uiRefCount = v15; /*0x85c1e7*/
    if ( v15 ) /*0x85c1ea*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x85c1f0*/
  }
  if ( !(_BYTE)value ) /*0x85c1fb*/
  {
    ++v7->RefCount; /*0x85c202*/
    value = v7; /*0x85c205*/
    NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x85c21d*/
    if ( v7->RefCount-- == 1 ) /*0x85c225*/
      NiD3DPass_ReleaseToPool(v7); /*0x85c230*/
    ++*((_DWORD *)this + 0xE); /*0x85c235*/
  }
}
