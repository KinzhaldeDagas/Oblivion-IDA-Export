// Append pooled ShadowLight pass for selector 0x162 (RefractF), bind its data, queue it, and increment PassCount.
void __thiscall ShadowLightShader_AppendSelector162RefractFPass(
        NiTArray_NiD3DPass *this,
        int a2,
        int a3,
        int a4,
        NiD3DPass *value)
{
  NiD3DPass *v6; // esi
  int v7; // ebp
  int v8; // eax
  int v9; // ebx
  int v11; // [esp+14h] [ebp-10h]

  v6 = (NiD3DPass *)unk_B45B28; /*0x8485c7*/
  v7 = **(_DWORD **)(unk_B45B28 + 0x24); /*0x8485d4*/
  v8 = sub_848FD0(value, 0); /*0x8485db*/
  v9 = *(_DWORD *)(v7 + 4); /*0x8485e0*/
  v11 = v8; /*0x8485e5*/
  if ( v9 != v8 ) /*0x8485e9*/
  {
    if ( v9 ) /*0x8485ed*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) ) /*0x8485f3*/
        (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x848609*/
      v8 = v11; /*0x84860b*/
    }
    *(_DWORD *)(v7 + 4) = v8; /*0x848611*/
    if ( v8 ) /*0x848614*/
      InterlockedIncrement((volatile LONG *)(v8 + 4)); /*0x84861a*/
  }
  sub_848FA0((_DWORD **)v7, (int)value); /*0x848628*/
  ++v6->RefCount; /*0x848632*/
  value = v6; /*0x848635*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x84864d*/
  if ( v6->RefCount-- == 1 ) /*0x848655*/
    NiD3DPass_ReleaseToPool(v6); /*0x848660*/
  ++*((_DWORD *)this + 0xE); /*0x848665*/
}
