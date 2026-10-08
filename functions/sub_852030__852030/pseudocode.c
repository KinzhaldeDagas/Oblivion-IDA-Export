void __thiscall sub_852030(NiTArray_NiD3DPass *this, int a2, int a3, int a4, int a5)
{
  NiD3DPass *v6; // edi
  unsigned int v8; // [esp-8h] [ebp-28h]
  NiD3DPass *value; // [esp+10h] [ebp-10h] BYREF
  unsigned int v10; // [esp+1Ch] [ebp-4h]

  v6 = g_ShadowLightPassBySelector; /*0x852056*/
  value = g_ShadowLightPassBySelector; /*0x85205e*/
  if ( value ) /*0x852067*/
    ++v6->RefCount; /*0x852069*/
  v8 = *((_DWORD *)this + 0xE); /*0x852074*/
  v10 = 0; /*0x852078*/
  NiTArray_NiD3DPass_SetAt(this + 4, v8, &value); /*0x852080*/
  v10 = 0xFFFFFFFF; /*0x85208a*/
  if ( v6 ) /*0x85208e*/
  {
    if ( v6->RefCount-- == 1 ) /*0x852090*/
      NiD3DPass_ReleaseToPool(v6); /*0x852097*/
  }
  ++*((_DWORD *)this + 0xE); /*0x85209c*/
}
