void __stdcall sub_585FB0(unsigned int a1)
{
  FormHeapFree(*(_DWORD *)(a1 + 8));
  *(_DWORD *)(a1 + 8) = 0;
  *(_WORD *)(a1 + 0xE) = 0;
  *(_WORD *)(a1 + 0xC) = 0;
  if ( a1 )
  {
    FormHeapFree(0);
    *(_DWORD *)(a1 + 8) = 0;
    *(_WORD *)(a1 + 0xE) = 0;
    *(_WORD *)(a1 + 0xC) = 0;
    FormHeapFree(a1);
  }
}
