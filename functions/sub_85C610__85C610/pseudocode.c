void __thiscall sub_85C610(NiTArray_NiD3DPass *this, int a2, int a3, int a4, _DWORD *a5, NiD3DPass *value)
{
  NiD3DPass *v7; // esi
  int v8; // edi
  int v9; // eax
  int v10; // edi
  int v11; // ebp
  int v13; // [esp+14h] [ebp-10h]

  v7 = (NiD3DPass *)unk_B477AC; /*0x85c637*/
  v8 = **(_DWORD **)(unk_B477AC + 0x24); /*0x85c644*/
  v13 = v8; /*0x85c64b*/
  v9 = sub_848FD0(a5, 0); /*0x85c64f*/
  v10 = *(_DWORD *)(v8 + 4); /*0x85c654*/
  v11 = v9; /*0x85c657*/
  if ( v10 != v9 ) /*0x85c65b*/
  {
    if ( v10 ) /*0x85c65f*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x85c665*/
        (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x85c67b*/
    }
    *(_DWORD *)(v13 + 4) = v11; /*0x85c683*/
    if ( v11 ) /*0x85c686*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x85c68c*/
  }
  if ( !(_BYTE)value ) /*0x85c697*/
  {
    ++v7->RefCount; /*0x85c69e*/
    value = v7; /*0x85c6a1*/
    NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x85c6b9*/
    if ( v7->RefCount-- == 1 ) /*0x85c6c1*/
      NiD3DPass_ReleaseToPool(v7); /*0x85c6cc*/
    ++*((_DWORD *)this + 0xE); /*0x85c6d1*/
  }
}
