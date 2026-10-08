void __thiscall sub_844950(NiTArray_NiD3DPass *this, int a2, int a3, int a4, NiD3DPass *value)
{
  NiD3DPass *v6; // edi
  UInt32 Stage; // ebp
  int v8; // eax
  int v9; // ebx
  int v11; // [esp+2Ch] [ebp+Ch]

  v6 = (NiD3DPass *)unk_B45A30; /*0x844985*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, _DWORD, _DWORD))this->_vtbl + 0x2F))( /*0x844993*/
    this,
    a2,
    0,
    *(_DWORD *)(a4 + 0x10));
  Stage = v6->Stages.data->Stage; /*0x84499c*/
  v8 = sub_848FD0(value, 0); /*0x8449a3*/
  v9 = *(_DWORD *)(Stage + 4); /*0x8449a8*/
  v11 = v8; /*0x8449ad*/
  if ( v9 != v8 ) /*0x8449b1*/
  {
    if ( v9 ) /*0x8449b5*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) ) /*0x8449bb*/
        (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x8449d1*/
      v8 = v11; /*0x8449d3*/
    }
    *(_DWORD *)(Stage + 4) = v8; /*0x8449d9*/
    if ( v8 ) /*0x8449dc*/
      InterlockedIncrement((volatile LONG *)(v8 + 4)); /*0x8449e2*/
  }
  sub_848FA0((_DWORD **)Stage, (int)value); /*0x8449f0*/
  ++v6->RefCount; /*0x8449fa*/
  value = v6; /*0x8449fd*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x844a15*/
  if ( v6->RefCount-- == 1 ) /*0x844a1d*/
    NiD3DPass_ReleaseToPool(v6); /*0x844a28*/
  ++*((_DWORD *)this + 0xE); /*0x844a2d*/
}
