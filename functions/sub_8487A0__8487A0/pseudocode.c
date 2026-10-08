void __thiscall sub_8487A0(NiTArray_NiD3DPass *this, int a2, int a3, int a4, int a5)
{
  NiD3DPass *v6; // edi
  unsigned int v8; // [esp-8h] [ebp-28h]
  NiD3DPass *value; // [esp+10h] [ebp-10h] BYREF
  unsigned int v10; // [esp+1Ch] [ebp-4h]

  v6 = (NiD3DPass *)unk_B45B34; /*0x8487c6*/
  value = (NiD3DPass *)unk_B45B34; /*0x8487ce*/
  if ( value ) /*0x8487d7*/
    ++v6->RefCount; /*0x8487d9*/
  v8 = *((_DWORD *)this + 0xE); /*0x8487e4*/
  v10 = 0; /*0x8487e8*/
  NiTArray_NiD3DPass_SetAt(this + 4, v8, &value); /*0x8487f0*/
  v10 = 0xFFFFFFFF; /*0x8487fa*/
  if ( v6 ) /*0x8487fe*/
  {
    if ( v6->RefCount-- == 1 ) /*0x848800*/
      NiD3DPass_ReleaseToPool(v6); /*0x848807*/
  }
  ++*((_DWORD *)this + 0xE); /*0x84880c*/
}
