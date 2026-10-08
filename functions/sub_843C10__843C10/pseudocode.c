void __thiscall sub_843C10(NiTArray_NiD3DPass *this, int a2, int a3, int a4, NiD3DPass *value)
{
  NiD3DPass *v6; // esi
  int v7; // ebp
  int v8; // eax
  int v9; // ebx
  int v11; // [esp+14h] [ebp-10h]

  v6 = (NiD3DPass *)unk_B45978; /*0x843c37*/
  v7 = **(_DWORD **)(unk_B45978 + 0x24); /*0x843c44*/
  v8 = sub_848FD0(value, 0); /*0x843c4b*/
  v9 = *(_DWORD *)(v7 + 4); /*0x843c50*/
  v11 = v8; /*0x843c55*/
  if ( v9 != v8 ) /*0x843c59*/
  {
    if ( v9 ) /*0x843c5d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) ) /*0x843c63*/
        (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x843c79*/
      v8 = v11; /*0x843c7b*/
    }
    *(_DWORD *)(v7 + 4) = v8; /*0x843c81*/
    if ( v8 ) /*0x843c84*/
      InterlockedIncrement((volatile LONG *)(v8 + 4)); /*0x843c8a*/
  }
  sub_848FA0((_DWORD **)v7, (int)value); /*0x843c98*/
  ++v6->RefCount; /*0x843ca2*/
  value = v6; /*0x843ca5*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x843cbd*/
  if ( v6->RefCount-- == 1 ) /*0x843cc5*/
    NiD3DPass_ReleaseToPool(v6); /*0x843cd0*/
  ++*((_DWORD *)this + 0xE); /*0x843cd5*/
}
