void __thiscall sub_844850(NiTArray_NiD3DPass *this, int a2, int a3, int a4, NiD3DPass *value)
{
  NiD3DPass *v6; // edi
  UInt32 Stage; // ebp
  int v8; // eax
  int v9; // ebx
  int v11; // [esp+2Ch] [ebp+Ch]

  v6 = (NiD3DPass *)unk_B45A2C; /*0x844885*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, _DWORD, _DWORD))this->_vtbl + 0x2F))( /*0x844893*/
    this,
    a2,
    0,
    *(_DWORD *)(a4 + 0x10));
  Stage = v6->Stages.data->Stage; /*0x84489c*/
  v8 = sub_848FD0(value, 0); /*0x8448a3*/
  v9 = *(_DWORD *)(Stage + 4); /*0x8448a8*/
  v11 = v8; /*0x8448ad*/
  if ( v9 != v8 ) /*0x8448b1*/
  {
    if ( v9 ) /*0x8448b5*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) ) /*0x8448bb*/
        (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x8448d1*/
      v8 = v11; /*0x8448d3*/
    }
    *(_DWORD *)(Stage + 4) = v8; /*0x8448d9*/
    if ( v8 ) /*0x8448dc*/
      InterlockedIncrement((volatile LONG *)(v8 + 4)); /*0x8448e2*/
  }
  sub_848FA0((_DWORD **)Stage, (int)value); /*0x8448f0*/
  ++v6->RefCount; /*0x8448fa*/
  value = v6; /*0x8448fd*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x844915*/
  if ( v6->RefCount-- == 1 ) /*0x84491d*/
    NiD3DPass_ReleaseToPool(v6); /*0x844928*/
  ++*((_DWORD *)this + 0xE); /*0x84492d*/
}
