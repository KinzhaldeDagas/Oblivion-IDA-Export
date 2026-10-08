void __thiscall sub_780990(_DWORD *this)
{
  int v1; // edx
  unsigned int v2; // eax

  v1 = unk_B3FAA4; /*0x780990*/
  if ( unk_B3FAA4 ) /*0x780990*/
  {
    v2 = *(_DWORD *)(v1 + 0x58); /*0x78099a*/
    if ( v2 ) /*0x78099f*/
    {
      *(_DWORD *)(v1 + 0x58) = 0; /*0x7809a1*/
      if ( v2 == *this ) /*0x7809aa*/
        *this = 0; /*0x7809ac*/
      FormHeapFree(v2); /*0x7809b3*/
    }
  }
}
