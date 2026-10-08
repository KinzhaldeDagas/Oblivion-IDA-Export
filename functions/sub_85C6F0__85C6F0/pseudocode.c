void __thiscall sub_85C6F0(NiTArray_NiD3DPass *this, int a2, int a3, int a4, _DWORD *a5, NiD3DPass *value)
{
  NiD3DPass *v7; // esi
  UInt32 Stage; // edi
  int v9; // eax
  int v10; // edi
  int v11; // ebp
  UInt32 v13; // [esp+14h] [ebp-10h]

  v7 = dword_B477F8; /*0x85c717*/
  Stage = dword_B477F8->Stages.data->Stage; /*0x85c724*/
  v13 = Stage; /*0x85c72b*/
  v9 = sub_848FD0(a5, 0); /*0x85c72f*/
  v10 = *(_DWORD *)(Stage + 4); /*0x85c734*/
  v11 = v9; /*0x85c737*/
  if ( v10 != v9 ) /*0x85c73b*/
  {
    if ( v10 ) /*0x85c73f*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x85c745*/
        (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x85c75b*/
    }
    *(_DWORD *)(v13 + 4) = v11; /*0x85c763*/
    if ( v11 ) /*0x85c766*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x85c76c*/
  }
  if ( !(_BYTE)value ) /*0x85c777*/
  {
    ++v7->RefCount; /*0x85c77e*/
    value = v7; /*0x85c781*/
    NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x85c799*/
    if ( v7->RefCount-- == 1 ) /*0x85c7a1*/
      NiD3DPass_ReleaseToPool(v7); /*0x85c7ac*/
    ++*((_DWORD *)this + 0xE); /*0x85c7b1*/
  }
}
