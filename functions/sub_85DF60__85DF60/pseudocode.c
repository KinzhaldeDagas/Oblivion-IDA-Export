void __thiscall sub_85DF60(NiTArray_NiD3DPass *this, int a2, int a3, int a4, _DWORD *a5, NiD3DPass *value)
{
  NiD3DPass *v7; // esi
  int v8; // ebx
  int v9; // eax
  int v10; // ebx
  int v11; // ebp
  int v13; // [esp+14h] [ebp-10h]

  v7 = (NiD3DPass *)unk_B477EC; /*0x85df87*/
  v8 = **(_DWORD **)(unk_B477EC + 0x24); /*0x85df94*/
  v13 = v8; /*0x85df9b*/
  v9 = sub_848FD0(a5, 0); /*0x85df9f*/
  v10 = *(_DWORD *)(v8 + 4); /*0x85dfa4*/
  v11 = v9; /*0x85dfa7*/
  if ( v10 != v9 ) /*0x85dfab*/
  {
    if ( v10 ) /*0x85dfaf*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x85dfb5*/
        (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x85dfcb*/
    }
    *(_DWORD *)(v13 + 4) = v11; /*0x85dfd3*/
    if ( v11 ) /*0x85dfd6*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x85dfdc*/
  }
  sub_848FA0((_DWORD **)v13, (int)a5); /*0x85dfee*/
  if ( !(_BYTE)value ) /*0x85dff8*/
  {
    ++v7->RefCount; /*0x85dfff*/
    value = v7; /*0x85e002*/
    NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x85e01a*/
    if ( v7->RefCount-- == 1 ) /*0x85e022*/
      NiD3DPass_ReleaseToPool(v7); /*0x85e02d*/
    ++*((_DWORD *)this + 0xE); /*0x85e032*/
  }
}
