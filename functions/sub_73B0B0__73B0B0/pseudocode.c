int sub_73B0B0()
{
  int v0; // esi
  int result; // eax

  v0 = FormHeapAlloc(0x1Cu); /*0x73b0d9*/
  result = 0; /*0x73b0e2*/
  if ( v0 ) /*0x73b0ea*/
  {
    sub_721350((NiObject *)v0); /*0x73b0ee*/
    *(float *)(v0 + 0x18) = 0.0; /*0x73b0f5*/
    *(_DWORD *)v0 = &NiVectorExtraData::`vftable'; /*0x73b0f8*/
    *(float *)(v0 + 0x14) = 0.0; /*0x73b0fe*/
    *(float *)(v0 + 0x10) = 0.0; /*0x73b103*/
    *(float *)(v0 + 0xC) = 0.0; /*0x73b106*/
    return v0; /*0x73b101*/
  }
  return result; /*0x73b109*/
}
