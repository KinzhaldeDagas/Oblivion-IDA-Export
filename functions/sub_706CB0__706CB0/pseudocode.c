NiObjectNET *sub_706CB0()
{
  int v0; // esi
  NiObjectNET *result; // eax

  v0 = FormHeapAlloc(0x1Cu); /*0x706cd9*/
  result = 0; /*0x706ce2*/
  if ( v0 ) /*0x706cea*/
  {
    NiObjectNET::NiObjectNET((NiObjectNET *)v0); /*0x706cee*/
    *(_DWORD *)v0 = &NiZBufferProperty::`vftable'; /*0x706cf3*/
    *(_WORD *)(v0 + 0x18) = 0xF; /*0x706cf9*/
    return (NiObjectNET *)v0; /*0x706cff*/
  }
  return result; /*0x706d01*/
}
