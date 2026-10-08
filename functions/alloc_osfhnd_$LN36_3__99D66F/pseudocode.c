void __usercall _alloc_osfhnd_::_LN36_3(int a1@<ebp>, int a2@<edi>, int a3@<esi>)
{
  if ( !*(_DWORD *)(a1 - 0x24) ) /*0x99d66f*/
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(a3 + 0xC)); /*0x99d679*/
    if ( (*(_BYTE *)(a3 + 4) & 1) != 0 ) /*0x99d683*/
    {
      LeaveCriticalSection((LPCRITICAL_SECTION)(a3 + 0xC)); /*0x99d686*/
    }
    else if ( !*(_DWORD *)(a1 - 0x24) ) /*0x99d6a0*/
    {
      *(_BYTE *)(a3 + 4) = 1; /*0x99d6a6*/
      *(_DWORD *)a3 = 0xFFFFFFFF; /*0x99d6aa*/
      *(_DWORD *)(a1 - 0x1C) = 0x20 * a2 + (a3 - unk_BAAAC0[a2]) / 0x28; /*0x99d6c3*/
      JUMPOUT(0x99D6C6); /*0x99d6c6*/
    }
  }
  JUMPOUT(0x99D613); /*0x99d613*/
}
