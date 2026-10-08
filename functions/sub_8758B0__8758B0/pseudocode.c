void __thiscall sub_8758B0(NiTArray_NiD3DPass *this, int a2, int a3, int a4, NiD3DPass *value)
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

  v6 = (NiD3DPass *)unk_B47660; /*0x8758dd*/
  sub_848C40(*(float **)(a4 + 0x10)); /*0x8758e4*/
  v7 = *(float **)(a4 + 0xC); /*0x8758e9*/
  sub_848E50(v7); /*0x8758ef*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v7, 0); /*0x875906*/
  Stage = v6->Stages.data->Stage; /*0x87590f*/
  v17 = Stage; /*0x87591b*/
  v9 = ((int (__thiscall *)(NiD3DPass *, _DWORD))value->__vftable[8].sub_75FD90)(value, 0); /*0x87591f*/
  v10 = *(_DWORD *)(Stage + 4); /*0x875921*/
  v11 = v9; /*0x875924*/
  if ( v10 != v9 ) /*0x875928*/
  {
    if ( v10 ) /*0x87592c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x875932*/
        (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x875948*/
    }
    *(_DWORD *)(v17 + 4) = v11; /*0x875950*/
    if ( v11 ) /*0x875953*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x875959*/
  }
  Texture = v6->Stages.data->Texture; /*0x875966*/
  v18 = Texture; /*0x87596e*/
  v13 = sub_848FD0(value, 0); /*0x875972*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x875977*/
  v15 = v13; /*0x87597a*/
  if ( m_uiRefCount != v13 ) /*0x87597e*/
  {
    if ( m_uiRefCount ) /*0x875982*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x875988*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x87599e*/
    }
    v18->members.super.super.m_uiRefCount = v15; /*0x8759a6*/
    if ( v15 ) /*0x8759a9*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x8759af*/
  }
  ++v6->RefCount; /*0x8759ba*/
  value = v6; /*0x8759bd*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x8759d5*/
  if ( v6->RefCount-- == 1 ) /*0x8759dd*/
    NiD3DPass_ReleaseToPool(v6); /*0x8759e8*/
  ++*((_DWORD *)this + 0xE); /*0x8759ed*/
}
