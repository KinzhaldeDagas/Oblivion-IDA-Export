void __stdcall sub_585FB0(unsigned int a1)
{
  FormHeapFree(*(_DWORD *)(a1 + 8)); /*0x585fba*/
  *(_DWORD *)(a1 + 8) = 0; /*0x585fc6*/
  *(_WORD *)(a1 + 0xE) = 0; /*0x585fc9*/
  *(_WORD *)(a1 + 0xC) = 0; /*0x585fcd*/
  if ( a1 ) /*0x585fd1*/
  {
    FormHeapFree(0); /*0x585fd6*/
    *(_DWORD *)(a1 + 8) = 0; /*0x585fdc*/
    *(_WORD *)(a1 + 0xE) = 0; /*0x585fdf*/
    *(_WORD *)(a1 + 0xC) = 0; /*0x585fe3*/
    FormHeapFree(a1); /*0x585fe7*/
  }
}
