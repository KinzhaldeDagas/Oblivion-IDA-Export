// positive sp value has been detected, the output may be wrong!
int __usercall unknown_libname_10_::unknown_libname_11@<eax>(int a1@<ebp>)
{
  if ( *(_DWORD *)(a1 - 4) )
    **(_DWORD **)(a1 - 0x28) = NtCurrentTeb()->Tib.ExceptionList->Prev;
  return *(_DWORD *)(a1 - 0x38);
}
