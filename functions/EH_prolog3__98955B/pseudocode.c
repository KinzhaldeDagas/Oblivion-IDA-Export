_DWORD *__usercall _EH_prolog3@<eax>(int a1@<eax>)
{
  _DWORD v3[2]; // [esp-8h] [ebp-8h] BYREF
  unsigned int retaddr; // [esp+0h] [ebp+0h]

  v3[1] = a1; /*0x98955b*/
  v3[0] = NtCurrentTeb()->Tib.ExceptionList; /*0x98955c*/
  retaddr = 0xFFFFFFFF; /*0x98957d*/
  return v3; /*0x989587*/
}
