void __thiscall sub_85C450(NiTArray_NiD3DPass *this, int a2, int a3, int a4, _DWORD *a5, NiD3DPass *value)
{
  NiD3DPass *v7; // esi
  int v8; // edi
  int v9; // eax
  int v10; // edi
  int v11; // ebp
  int v13; // [esp+14h] [ebp-10h]

  v7 = (NiD3DPass *)unk_B477A4; /*0x85c477*/
  v8 = **(_DWORD **)(unk_B477A4 + 0x24); /*0x85c484*/
  v13 = v8; /*0x85c48b*/
  v9 = sub_848FD0(a5, 0); /*0x85c48f*/
  v10 = *(_DWORD *)(v8 + 4); /*0x85c494*/
  v11 = v9; /*0x85c497*/
  if ( v10 != v9 ) /*0x85c49b*/
  {
    if ( v10 ) /*0x85c49f*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x85c4a5*/
        (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x85c4bb*/
    }
    *(_DWORD *)(v13 + 4) = v11; /*0x85c4c3*/
    if ( v11 ) /*0x85c4c6*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x85c4cc*/
  }
  if ( !(_BYTE)value ) /*0x85c4d7*/
  {
    ++v7->RefCount; /*0x85c4de*/
    value = v7; /*0x85c4e1*/
    NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x85c4f9*/
    if ( v7->RefCount-- == 1 ) /*0x85c501*/
      NiD3DPass_ReleaseToPool(v7); /*0x85c50c*/
    ++*((_DWORD *)this + 0xE); /*0x85c511*/
  }
}
