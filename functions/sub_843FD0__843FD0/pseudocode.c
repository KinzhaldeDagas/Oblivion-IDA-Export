void __thiscall sub_843FD0(NiTArray_NiD3DPass *this, int a2, int a3, int a4, NiD3DPass *value)
{
  NiD3DPass *v6; // edi
  UInt32 Stage; // ebp
  int v8; // eax
  int v9; // ebx
  int v11; // [esp+2Ch] [ebp+Ch]

  v6 = (NiD3DPass *)unk_B45A00; /*0x844005*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, _DWORD, _DWORD))this->_vtbl + 0x2F))( /*0x844013*/
    this,
    a2,
    0,
    *(_DWORD *)(a4 + 0x10));
  Stage = v6->Stages.data->Stage; /*0x84401c*/
  v8 = sub_848FD0(value, 0); /*0x844023*/
  v9 = *(_DWORD *)(Stage + 4); /*0x844028*/
  v11 = v8; /*0x84402d*/
  if ( v9 != v8 ) /*0x844031*/
  {
    if ( v9 ) /*0x844035*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) ) /*0x84403b*/
        (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x844051*/
      v8 = v11; /*0x844053*/
    }
    *(_DWORD *)(Stage + 4) = v8; /*0x844059*/
    if ( v8 ) /*0x84405c*/
      InterlockedIncrement((volatile LONG *)(v8 + 4)); /*0x844062*/
  }
  sub_848FA0((_DWORD **)Stage, (int)value); /*0x844070*/
  ++v6->RefCount; /*0x84407a*/
  value = v6; /*0x84407d*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x844095*/
  if ( v6->RefCount-- == 1 ) /*0x84409d*/
    NiD3DPass_ReleaseToPool(v6); /*0x8440a8*/
  ++*((_DWORD *)this + 0xE); /*0x8440ad*/
}
