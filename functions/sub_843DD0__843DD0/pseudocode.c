void __thiscall sub_843DD0(NiTArray_NiD3DPass *this, int a2, int a3, int a4, NiD3DPass *value)
{
  NiD3DPass *v6; // edi
  UInt32 Stage; // ebp
  int v8; // eax
  int v9; // ebx
  int v11; // [esp+2Ch] [ebp+Ch]

  v6 = (NiD3DPass *)unk_B459F4; /*0x843e05*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, _DWORD, _DWORD))this->_vtbl + 0x2F))( /*0x843e13*/
    this,
    a2,
    0,
    *(_DWORD *)(a4 + 0x10));
  Stage = v6->Stages.data->Stage; /*0x843e1c*/
  v8 = sub_848FD0(value, 0); /*0x843e23*/
  v9 = *(_DWORD *)(Stage + 4); /*0x843e28*/
  v11 = v8; /*0x843e2d*/
  if ( v9 != v8 ) /*0x843e31*/
  {
    if ( v9 ) /*0x843e35*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) ) /*0x843e3b*/
        (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x843e51*/
      v8 = v11; /*0x843e53*/
    }
    *(_DWORD *)(Stage + 4) = v8; /*0x843e59*/
    if ( v8 ) /*0x843e5c*/
      InterlockedIncrement((volatile LONG *)(v8 + 4)); /*0x843e62*/
  }
  sub_848FA0((_DWORD **)Stage, (int)value); /*0x843e70*/
  ++v6->RefCount; /*0x843e7a*/
  value = v6; /*0x843e7d*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x843e95*/
  if ( v6->RefCount-- == 1 ) /*0x843e9d*/
    NiD3DPass_ReleaseToPool(v6); /*0x843ea8*/
  ++*((_DWORD *)this + 0xE); /*0x843ead*/
}
