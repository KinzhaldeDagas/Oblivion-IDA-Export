int sub_6EB4C0()
{
  int v0; // esi
  int result; // eax

  v0 = FormHeapAlloc(0x34u); /*0x6eb4e9*/
  result = 0; /*0x6eb4f2*/
  if ( v0 ) /*0x6eb4fa*/
  {
    sub_6CC4E0((NiObject *)v0); /*0x6eb4fe*/
    *(_DWORD *)v0 = &NiBlendBoolInterpolator::`vftable'; /*0x6eb503*/
    *(_BYTE *)(v0 + 0x30) = byte_A7C6AC; /*0x6eb50e*/
    return v0; /*0x6eb511*/
  }
  return result; /*0x6eb513*/
}
