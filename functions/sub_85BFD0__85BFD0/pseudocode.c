void __thiscall sub_85BFD0(NiTArray_NiD3DPass *this, int a2, int a3, int a4, _DWORD *a5, NiD3DPass *value)
{
  NiD3DPass *v6; // esi
  int v7; // edi
  int v8; // eax
  int v9; // edi
  int v10; // ebx
  NiTexture *Texture; // ebx
  int v12; // eax
  UInt32 m_uiRefCount; // edi
  int v14; // ebp
  int v17; // [esp+18h] [ebp-10h]

  v6 = (NiD3DPass *)unk_B47794; /*0x85bffb*/
  v7 = **(_DWORD **)(unk_B47794 + 0x24); /*0x85c008*/
  v17 = v7; /*0x85c017*/
  v8 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88))(a5, 0); /*0x85c01b*/
  v9 = *(_DWORD *)(v7 + 4); /*0x85c01d*/
  v10 = v8; /*0x85c020*/
  if ( v9 != v8 ) /*0x85c024*/
  {
    if ( v9 ) /*0x85c028*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) ) /*0x85c02e*/
        (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x85c044*/
    }
    *(_DWORD *)(v17 + 4) = v10; /*0x85c04c*/
    if ( v10 ) /*0x85c04f*/
      InterlockedIncrement((volatile LONG *)(v10 + 4)); /*0x85c055*/
  }
  Texture = v6->Stages.data->Texture; /*0x85c062*/
  v12 = sub_848FD0(a5, 0); /*0x85c068*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x85c06d*/
  v14 = v12; /*0x85c070*/
  if ( m_uiRefCount != v12 ) /*0x85c074*/
  {
    if ( m_uiRefCount ) /*0x85c078*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x85c07e*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x85c094*/
    }
    Texture->members.super.super.m_uiRefCount = v14; /*0x85c098*/
    if ( v14 ) /*0x85c09b*/
      InterlockedIncrement((volatile LONG *)(v14 + 4)); /*0x85c0a1*/
  }
  if ( !(_BYTE)value ) /*0x85c0ac*/
  {
    ++v6->RefCount; /*0x85c0b3*/
    value = v6; /*0x85c0b6*/
    NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x85c0d2*/
    if ( v6->RefCount-- == 1 ) /*0x85c0da*/
      NiD3DPass_ReleaseToPool(v6); /*0x85c0e5*/
    ++*((_DWORD *)this + 0xE); /*0x85c0ea*/
  }
}
