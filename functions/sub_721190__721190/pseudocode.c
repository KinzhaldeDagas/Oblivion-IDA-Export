int sub_721190()
{
  int v0; // esi
  int result; // eax

  v0 = FormHeapAlloc(0x10u); /*0x7211b9*/
  result = 0; /*0x7211c2*/
  if ( v0 ) /*0x7211ca*/
  {
    sub_721350((NiObject *)v0); /*0x7211ce*/
    *(float *)(v0 + 0xC) = 0.0; /*0x7211d5*/
    *(_DWORD *)v0 = &NiFloatExtraData::`vftable'; /*0x7211d8*/
    return v0; /*0x7211de*/
  }
  return result; /*0x7211e0*/
}
