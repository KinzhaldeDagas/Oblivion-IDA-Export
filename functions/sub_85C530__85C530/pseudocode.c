void __thiscall sub_85C530(NiTArray_NiD3DPass *this, int a2, int a3, int a4, int a5, NiD3DPass *value)
{
  NiD3DPass *v7; // esi
  int v8; // edi
  int v9; // eax
  int v10; // edi
  int v11; // ebx
  int v13; // [esp+14h] [ebp-10h]

  v7 = (NiD3DPass *)unk_B477A8; /*0x85c557*/
  v8 = **(_DWORD **)(unk_B477A8 + 0x24); /*0x85c564*/
  v13 = v8; /*0x85c570*/
  v9 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a5 + 0x88))(a5, 0); /*0x85c574*/
  v10 = *(_DWORD *)(v8 + 4); /*0x85c576*/
  v11 = v9; /*0x85c579*/
  if ( v10 != v9 ) /*0x85c57d*/
  {
    if ( v10 ) /*0x85c581*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x85c587*/
        (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x85c59d*/
    }
    *(_DWORD *)(v13 + 4) = v11; /*0x85c5a5*/
    if ( v11 ) /*0x85c5a8*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x85c5ae*/
  }
  if ( !(_BYTE)value ) /*0x85c5b9*/
  {
    ++v7->RefCount; /*0x85c5c0*/
    value = v7; /*0x85c5c3*/
    NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x85c5db*/
    if ( v7->RefCount-- == 1 ) /*0x85c5e3*/
      NiD3DPass_ReleaseToPool(v7); /*0x85c5ee*/
    ++*((_DWORD *)this + 0xE); /*0x85c5f3*/
  }
}
