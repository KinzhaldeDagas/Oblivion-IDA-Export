int __usercall __lock_fhandle_::_LN12_10@<eax>(int a1@<ebx>, int a2@<ebp>, int a3@<edi>)
{
  if ( *(_DWORD *)(a2 - 0x1C) != a1 ) /*0x99d56c*/
    EnterCriticalSection((LPCRITICAL_SECTION)(unk_BAAAC0[a3 >> 5] + 0x28 * (a3 & 0x1F) + 0xC)); /*0x99d585*/
  return *(_DWORD *)(a2 - 0x1C); /*0x99d58e*/
}
