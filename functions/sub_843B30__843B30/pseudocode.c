void __thiscall sub_843B30(NiTArray_NiD3DPass *this, int a2, int a3, int a4, NiD3DPass *value)
{
  NiD3DPass *v6; // esi
  int v7; // ebp
  int v8; // eax
  int v9; // ebx
  int v11; // [esp+14h] [ebp-10h]

  v6 = (NiD3DPass *)unk_B4594C; /*0x843b57*/
  v7 = **(_DWORD **)(unk_B4594C + 0x24); /*0x843b64*/
  v8 = sub_848FD0(value, 0); /*0x843b6b*/
  v9 = *(_DWORD *)(v7 + 4); /*0x843b70*/
  v11 = v8; /*0x843b75*/
  if ( v9 != v8 ) /*0x843b79*/
  {
    if ( v9 ) /*0x843b7d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) ) /*0x843b83*/
        (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x843b99*/
      v8 = v11; /*0x843b9b*/
    }
    *(_DWORD *)(v7 + 4) = v8; /*0x843ba1*/
    if ( v8 ) /*0x843ba4*/
      InterlockedIncrement((volatile LONG *)(v8 + 4)); /*0x843baa*/
  }
  sub_848FA0((_DWORD **)v7, (int)value); /*0x843bb8*/
  ++v6->RefCount; /*0x843bc2*/
  value = v6; /*0x843bc5*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x843bdd*/
  if ( v6->RefCount-- == 1 ) /*0x843be5*/
    NiD3DPass_ReleaseToPool(v6); /*0x843bf0*/
  ++*((_DWORD *)this + 0xE); /*0x843bf5*/
}
