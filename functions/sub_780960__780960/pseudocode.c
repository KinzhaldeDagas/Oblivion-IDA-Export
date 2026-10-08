void __thiscall sub_780960(_DWORD *this, int a2)
{
  unsigned int v2; // eax

  if ( a2 ) /*0x780966*/
  {
    v2 = *(_DWORD *)(a2 + 0x58); /*0x780968*/
    if ( v2 ) /*0x78096d*/
    {
      *(_DWORD *)(a2 + 0x58) = 0; /*0x78096f*/
      if ( v2 == *this ) /*0x780978*/
        *this = 0; /*0x78097a*/
      FormHeapFree(v2); /*0x780981*/
    }
  }
}
