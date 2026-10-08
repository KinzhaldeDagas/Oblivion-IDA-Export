void __thiscall sub_848710(NiTArray_NiD3DPass *this, int a2, int a3, int a4, int a5)
{
  NiD3DPass *v6; // edi
  unsigned int v8; // [esp-8h] [ebp-28h]
  NiD3DPass *value; // [esp+10h] [ebp-10h] BYREF
  unsigned int v10; // [esp+1Ch] [ebp-4h]

  v6 = (NiD3DPass *)unk_B45B30; /*0x848736*/
  value = (NiD3DPass *)unk_B45B30; /*0x84873e*/
  if ( value ) /*0x848747*/
    ++v6->RefCount; /*0x848749*/
  v8 = *((_DWORD *)this + 0xE); /*0x848754*/
  v10 = 0; /*0x848758*/
  NiTArray_NiD3DPass_SetAt(this + 4, v8, &value); /*0x848760*/
  v10 = 0xFFFFFFFF; /*0x84876a*/
  if ( v6 ) /*0x84876e*/
  {
    if ( v6->RefCount-- == 1 ) /*0x848770*/
      NiD3DPass_ReleaseToPool(v6); /*0x848777*/
  }
  ++*((_DWORD *)this + 0xE); /*0x84877c*/
}
