void __thiscall sub_850BE0(NiTArray_NiD3DPass *this, int a2, int a3, int a4, int a5)
{
  NiD3DPass *v6; // edi
  unsigned int v8; // [esp-8h] [ebp-28h]
  NiD3DPass *value; // [esp+10h] [ebp-10h] BYREF
  unsigned int v10; // [esp+1Ch] [ebp-4h]

  v6 = (NiD3DPass *)unk_B455CC; /*0x850c06*/
  value = (NiD3DPass *)unk_B455CC; /*0x850c0e*/
  if ( value ) /*0x850c17*/
    ++v6->RefCount; /*0x850c19*/
  v8 = *((_DWORD *)this + 0xE); /*0x850c24*/
  v10 = 0; /*0x850c28*/
  NiTArray_NiD3DPass_SetAt(this + 4, v8, &value); /*0x850c30*/
  v10 = 0xFFFFFFFF; /*0x850c3a*/
  if ( v6 ) /*0x850c3e*/
  {
    if ( v6->RefCount-- == 1 ) /*0x850c40*/
      NiD3DPass_ReleaseToPool(v6); /*0x850c47*/
  }
  ++*((_DWORD *)this + 0xE); /*0x850c4c*/
}
