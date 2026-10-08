void __thiscall sub_85E050(NiTArray_NiD3DPass *this, int a2, int a3, int a4, _DWORD *a5, NiD3DPass *value)
{
  NiD3DPass *v7; // edi
  UInt32 Stage; // ebx
  int v9; // eax
  int v10; // ebx
  int v11; // ebp
  UInt32 v13; // [esp+2Ch] [ebp+Ch]

  v7 = dword_B477F0; /*0x85e085*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, _DWORD, _DWORD))this->_vtbl + 0x2F))( /*0x85e093*/
    this,
    a2,
    0,
    *(_DWORD *)(a4 + 0x10));
  Stage = v7->Stages.data->Stage; /*0x85e09c*/
  v13 = Stage; /*0x85e0a3*/
  v9 = sub_848FD0(a5, 0); /*0x85e0a7*/
  v10 = *(_DWORD *)(Stage + 4); /*0x85e0ac*/
  v11 = v9; /*0x85e0af*/
  if ( v10 != v9 ) /*0x85e0b3*/
  {
    if ( v10 ) /*0x85e0b7*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x85e0bd*/
        (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x85e0d3*/
    }
    *(_DWORD *)(v13 + 4) = v11; /*0x85e0db*/
    if ( v11 ) /*0x85e0de*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x85e0e4*/
  }
  sub_848FA0((_DWORD **)v13, (int)a5); /*0x85e0f6*/
  if ( !(_BYTE)value ) /*0x85e100*/
  {
    ++v7->RefCount; /*0x85e107*/
    value = v7; /*0x85e10a*/
    NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x85e122*/
    if ( v7->RefCount-- == 1 ) /*0x85e12a*/
      NiD3DPass_ReleaseToPool(v7); /*0x85e135*/
    ++*((_DWORD *)this + 0xE); /*0x85e13a*/
  }
}
