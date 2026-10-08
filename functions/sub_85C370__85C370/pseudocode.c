void __thiscall sub_85C370(NiTArray_NiD3DPass *this, int a2, int a3, int a4, _DWORD *a5, NiD3DPass *value)
{
  NiD3DPass *v7; // esi
  int v8; // edi
  int v9; // eax
  int v10; // edi
  int v11; // ebp
  int v13; // [esp+14h] [ebp-10h]

  v7 = (NiD3DPass *)unk_B477A0; /*0x85c397*/
  v8 = **(_DWORD **)(unk_B477A0 + 0x24); /*0x85c3a4*/
  v13 = v8; /*0x85c3ab*/
  v9 = sub_848FD0(a5, 0); /*0x85c3af*/
  v10 = *(_DWORD *)(v8 + 4); /*0x85c3b4*/
  v11 = v9; /*0x85c3b7*/
  if ( v10 != v9 ) /*0x85c3bb*/
  {
    if ( v10 ) /*0x85c3bf*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x85c3c5*/
        (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x85c3db*/
    }
    *(_DWORD *)(v13 + 4) = v11; /*0x85c3e3*/
    if ( v11 ) /*0x85c3e6*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x85c3ec*/
  }
  if ( !(_BYTE)value ) /*0x85c3f7*/
  {
    ++v7->RefCount; /*0x85c3fe*/
    value = v7; /*0x85c401*/
    NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x85c419*/
    if ( v7->RefCount-- == 1 ) /*0x85c421*/
      NiD3DPass_ReleaseToPool(v7); /*0x85c42c*/
    ++*((_DWORD *)this + 0xE); /*0x85c431*/
  }
}
