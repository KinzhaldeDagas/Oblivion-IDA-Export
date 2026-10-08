void __thiscall sub_843CF0(NiTArray_NiD3DPass *this, int a2, int a3, int a4, NiD3DPass *value)
{
  NiD3DPass *v6; // esi
  int v7; // ebp
  int v8; // eax
  int v9; // ebx
  int v11; // [esp+14h] [ebp-10h]

  v6 = (NiD3DPass *)unk_B45984; /*0x843d17*/
  v7 = **(_DWORD **)(unk_B45984 + 0x24); /*0x843d24*/
  v8 = sub_848FD0(value, 0); /*0x843d2b*/
  v9 = *(_DWORD *)(v7 + 4); /*0x843d30*/
  v11 = v8; /*0x843d35*/
  if ( v9 != v8 ) /*0x843d39*/
  {
    if ( v9 ) /*0x843d3d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) ) /*0x843d43*/
        (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x843d59*/
      v8 = v11; /*0x843d5b*/
    }
    *(_DWORD *)(v7 + 4) = v8; /*0x843d61*/
    if ( v8 ) /*0x843d64*/
      InterlockedIncrement((volatile LONG *)(v8 + 4)); /*0x843d6a*/
  }
  sub_848FA0((_DWORD **)v7, (int)value); /*0x843d78*/
  ++v6->RefCount; /*0x843d82*/
  value = v6; /*0x843d85*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x843d9d*/
  if ( v6->RefCount-- == 1 ) /*0x843da5*/
    NiD3DPass_ReleaseToPool(v6); /*0x843db0*/
  ++*((_DWORD *)this + 0xE); /*0x843db5*/
}
