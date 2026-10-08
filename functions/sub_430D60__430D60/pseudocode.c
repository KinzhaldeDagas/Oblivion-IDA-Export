_DWORD *sub_430D60()
{
  _DWORD *v0; // esi
  _DWORD *result; // eax

  v0 = (_DWORD *)FormHeapAlloc(0x210u); /*0x430d8c*/
  result = 0; /*0x430d95*/
  if ( v0 ) /*0x430d9d*/
  {
    sub_7478C0(v0); /*0x430da1*/
    *v0 = &BSSearchPath::`vftable'; /*0x430da6*/
    return v0; /*0x430dac*/
  }
  return result; /*0x430dae*/
}
