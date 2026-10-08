// positive sp value has been detected, the output may be wrong!
unsigned int __userpurge unknown_libname_8_::unknown_libname_9@<eax>(int a1@<ebp>, int a2, int a3)
{
  unsigned int result; // eax

  result = *(_DWORD *)(*(_DWORD *)(a1 + 0xC) + 4) & 0xFFFFFFFD; /*0x980e81*/
  *(_DWORD *)(*(_DWORD *)(a1 + 0xC) + 4) = result; /*0x980e87*/
  **(_DWORD **)(a1 - 4) = NtCurrentTeb()->Tib.ExceptionList; /*0x980e94*/
  return result; /*0x980ea1*/
}
