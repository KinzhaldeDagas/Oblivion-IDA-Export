void __thiscall sub_8520C0(NiTArray_NiD3DPass *this, int a2, int a3, int a4, int a5)
{
  NiD3DPass *v6; // edi
  unsigned int v8; // [esp-8h] [ebp-28h]
  NiD3DPass *value; // [esp+10h] [ebp-10h] BYREF
  unsigned int v10; // [esp+1Ch] [ebp-4h]

  v6 = dword_B455A8; /*0x8520e6*/
  value = dword_B455A8; /*0x8520ee*/
  if ( value ) /*0x8520f7*/
    ++v6->RefCount; /*0x8520f9*/
  v8 = *((_DWORD *)this + 0xE); /*0x852104*/
  v10 = 0; /*0x852108*/
  NiTArray_NiD3DPass_SetAt(this + 4, v8, &value); /*0x852110*/
  v10 = 0xFFFFFFFF; /*0x85211a*/
  if ( v6 ) /*0x85211e*/
  {
    if ( v6->RefCount-- == 1 ) /*0x852120*/
      NiD3DPass_ReleaseToPool(v6); /*0x852127*/
  }
  ++*((_DWORD *)this + 0xE); /*0x85212c*/
}
