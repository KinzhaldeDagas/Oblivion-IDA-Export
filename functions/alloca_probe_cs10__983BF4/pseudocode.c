// positive sp value has been detected, the output may be wrong!
void *__usercall _alloca_probe_::cs10@<eax>(unsigned int a1@<eax>, unsigned int a2@<ecx>)
{
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h]

  if ( a2 < a1 ) /*0x983bf6*/
    return _alloca_probe_::cs20(a1, a2); /*0x983bf6*/
  else
    return retaddr; /*0x983bfc*/
}
