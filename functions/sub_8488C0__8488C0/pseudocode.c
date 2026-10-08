void __thiscall sub_8488C0(NiTArray_NiD3DPass *this, int a2, int a3, int a4, int a5)
{
  NiD3DPass *v6; // edi
  unsigned int v8; // [esp-8h] [ebp-28h]
  NiD3DPass *value; // [esp+10h] [ebp-10h] BYREF
  unsigned int v10; // [esp+1Ch] [ebp-4h]

  v6 = (NiD3DPass *)unk_B45B3C; /*0x8488e6*/
  value = (NiD3DPass *)unk_B45B3C; /*0x8488ee*/
  if ( value ) /*0x8488f7*/
    ++v6->RefCount; /*0x8488f9*/
  v8 = *((_DWORD *)this + 0xE); /*0x848904*/
  v10 = 0; /*0x848908*/
  NiTArray_NiD3DPass_SetAt(this + 4, v8, &value); /*0x848910*/
  v10 = 0xFFFFFFFF; /*0x84891a*/
  if ( v6 ) /*0x84891e*/
  {
    if ( v6->RefCount-- == 1 ) /*0x848920*/
      NiD3DPass_ReleaseToPool(v6); /*0x848927*/
  }
  ++*((_DWORD *)this + 0xE); /*0x84892c*/
}
