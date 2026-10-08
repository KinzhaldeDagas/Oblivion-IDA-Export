// Append pooled ShadowLight pass for selector 0x161 (Refract plus passInfo bit 2 variant), bind its data, queue it, and increment PassCount.
void __thiscall ShadowLightShader_AppendSelector161RefractionPass(
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

  v6 = (NiD3DPass *)unk_B45B24; /*0x8484e7*/
  v7 = **(_DWORD **)(unk_B45B24 + 0x24); /*0x8484f4*/
  v8 = sub_848FD0(value, 0); /*0x8484fb*/
  v9 = *(_DWORD *)(v7 + 4); /*0x848500*/
  v11 = v8; /*0x848505*/
  if ( v9 != v8 ) /*0x848509*/
  {
    if ( v9 ) /*0x84850d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) ) /*0x848513*/
        (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x848529*/
      v8 = v11; /*0x84852b*/
    }
    *(_DWORD *)(v7 + 4) = v8; /*0x848531*/
    if ( v8 ) /*0x848534*/
      InterlockedIncrement((volatile LONG *)(v8 + 4)); /*0x84853a*/
  }
  sub_848FA0((_DWORD **)v7, (int)value); /*0x848548*/
  ++v6->RefCount; /*0x848552*/
  value = v6; /*0x848555*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x84856d*/
  if ( v6->RefCount-- == 1 ) /*0x848575*/
    NiD3DPass_ReleaseToPool(v6); /*0x848580*/
  ++*((_DWORD *)this + 0xE); /*0x848585*/
}
