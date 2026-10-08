_DWORD *__usercall _EH_prolog3_catch@<eax>(int a1@<eax>)
{
  _DWORD v3[2]; // [esp-8h] [ebp-8h] BYREF
  unsigned int retaddr; // [esp+0h] [ebp+0h]

  v3[1] = a1; /*0x98958e*/
  v3[0] = NtCurrentTeb()->Tib.ExceptionList; /*0x98958f*/
  retaddr = 0xFFFFFFFF; /*0x9895b3*/
  return v3; /*0x9895bd*/
}
