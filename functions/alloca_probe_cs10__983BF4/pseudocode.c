// positive sp value has been detected, the output may be wrong!
void *__usercall _alloca_probe_::cs10@<eax>(unsigned int a1@<eax>, unsigned int a2@<ecx>)
{
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h]

  if ( a2 < a1 )
    return (void *)_alloca_probe_::cs20();
  else
    return retaddr;
}
