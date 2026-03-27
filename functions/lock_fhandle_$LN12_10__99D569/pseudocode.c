int __usercall __lock_fhandle_::_LN12_10@<eax>(int a1@<ebx>, int a2@<ebp>, int a3@<edi>)
{
  if ( *(_DWORD *)(a2 - 0x1C) != a1 )
    EnterCriticalSection((LPCRITICAL_SECTION)(dword_BAAAC0[a3 >> 5] + 0x28 * (a3 & 0x1F) + 0xC));
  return *(_DWORD *)(a2 - 0x1C);
}
