// Append pooled ShadowLight pass for selector 0x160 (base Refract variant), bind its data, queue it, and increment PassCount.
void __thiscall ShadowLightShader_AppendSelector160RefractionPass(
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

  v6 = (NiD3DPass *)unk_B45B20; /*0x848407*/
  v7 = **(_DWORD **)(unk_B45B20 + 0x24); /*0x848414*/
  v8 = sub_848FD0(value, 0); /*0x84841b*/
  v9 = *(_DWORD *)(v7 + 4); /*0x848420*/
  v11 = v8; /*0x848425*/
  if ( v9 != v8 ) /*0x848429*/
  {
    if ( v9 ) /*0x84842d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) ) /*0x848433*/
        (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x848449*/
      v8 = v11; /*0x84844b*/
    }
    *(_DWORD *)(v7 + 4) = v8; /*0x848451*/
    if ( v8 ) /*0x848454*/
      InterlockedIncrement((volatile LONG *)(v8 + 4)); /*0x84845a*/
  }
  sub_848FA0((_DWORD **)v7, (int)value); /*0x848468*/
  ++v6->RefCount; /*0x848472*/
  value = v6; /*0x848475*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x84848d*/
  if ( v6->RefCount-- == 1 ) /*0x848495*/
    NiD3DPass_ReleaseToPool(v6); /*0x8484a0*/
  ++*((_DWORD *)this + 0xE); /*0x8484a5*/
}
