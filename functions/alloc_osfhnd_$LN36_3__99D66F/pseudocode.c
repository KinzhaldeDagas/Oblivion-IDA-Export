void __usercall _alloc_osfhnd_::_LN36_3(int a1@<ebp>, int a2@<edi>, int a3@<esi>)
{
  if ( !*(_DWORD *)(a1 - 0x24) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(a3 + 0xC));
    if ( (*(_BYTE *)(a3 + 4) & 1) != 0 )
    {
      LeaveCriticalSection((LPCRITICAL_SECTION)(a3 + 0xC));
    }
    else if ( !*(_DWORD *)(a1 - 0x24) )
    {
      *(_BYTE *)(a3 + 4) = 1;
      *(_DWORD *)a3 = 0xFFFFFFFF;
      *(_DWORD *)(a1 - 0x1C) = 0x20 * a2 + (a3 - dword_BAAAC0[a2]) / 0x28;
      JUMPOUT(0x99D6C6);
    }
  }
  JUMPOUT(0x99D613);
}
