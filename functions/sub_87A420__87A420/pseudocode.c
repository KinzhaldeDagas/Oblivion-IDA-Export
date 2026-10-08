void __thiscall sub_87A420(NiTArray_NiD3DPass *this, int a2, int a3, int a4, NiD3DPass *value)
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

  v6 = (NiD3DPass *)unk_B476FC; /*0x87a455*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, _DWORD, _DWORD))this->_vtbl + 0x2F))( /*0x87a463*/
    this,
    a2,
    0,
    *(_DWORD *)(a4 + 0x10));
  Stage = v6->Stages.data->Stage; /*0x87a46c*/
  v16 = Stage; /*0x87a473*/
  v8 = sub_848FD0(value, 0); /*0x87a477*/
  v9 = *(_DWORD *)(Stage + 4); /*0x87a47c*/
  v10 = v8; /*0x87a47f*/
  if ( v9 != v8 ) /*0x87a483*/
  {
    if ( v9 ) /*0x87a487*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) ) /*0x87a48d*/
        (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x87a4a3*/
    }
    *(_DWORD *)(v16 + 4) = v10; /*0x87a4ab*/
    if ( v10 ) /*0x87a4ae*/
      InterlockedIncrement((volatile LONG *)(v10 + 4)); /*0x87a4b4*/
  }
  Texture = v6->Stages.data->Texture; /*0x87a4bd*/
  v17 = Texture; /*0x87a4ce*/
  v12 = ((int (__thiscall *)(NiD3DPass *, _DWORD))value->__vftable[8].sub_75FD90)(value, 0); /*0x87a4d2*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x87a4d4*/
  v14 = v12; /*0x87a4d7*/
  if ( m_uiRefCount != v12 ) /*0x87a4db*/
  {
    if ( m_uiRefCount ) /*0x87a4df*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x87a4e5*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x87a4fb*/
    }
    v17->members.super.super.m_uiRefCount = v14; /*0x87a503*/
    if ( v14 ) /*0x87a506*/
      InterlockedIncrement((volatile LONG *)(v14 + 4)); /*0x87a50c*/
  }
  ++v6->RefCount; /*0x87a517*/
  value = v6; /*0x87a51a*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x87a532*/
  if ( v6->RefCount-- == 1 ) /*0x87a53a*/
    NiD3DPass_ReleaseToPool(v6); /*0x87a545*/
  ++*((_DWORD *)this + 0xE); /*0x87a54a*/
}
