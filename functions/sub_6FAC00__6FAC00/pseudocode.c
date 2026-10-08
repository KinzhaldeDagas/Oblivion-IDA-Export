int sub_6FAC00()
{
  int v0; // esi
  int result; // eax

  v0 = FormHeapAlloc(0x1Cu); /*0x6fac29*/
  result = 0; /*0x6fac32*/
  if ( v0 ) /*0x6fac3a*/
  {
    sub_752BF0((NiObject *)v0); /*0x6fac3e*/
    *(float *)(v0 + 0x18) = 1.0; /*0x6fac45*/
    *(_DWORD *)v0 = &BSWindModifier::`vftable'; /*0x6fac48*/
    *(_DWORD *)(v0 + 0xC) = 0xFA0; /*0x6fac4e*/
    return v0; /*0x6fac55*/
  }
  return result; /*0x6fac57*/
}
