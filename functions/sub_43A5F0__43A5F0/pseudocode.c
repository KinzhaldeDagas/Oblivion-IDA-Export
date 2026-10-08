LONG __thiscall sub_43A5F0(_DWORD *this, int a2)
{
  ThreadSpecificInterfaceManager *v3; // edi
  void *Value; // eax
  LONG result; // eax
  LONG (__thiscall ***v6)(_DWORD, int); // esi

  v3 = (ThreadSpecificInterfaceManager *)*(this + 5); /*0x43a614*/
  Value = TlsGetValue(v3->tlsStorage); /*0x43a623*/
  if ( !Value ) /*0x43a62b*/
    Value = (void *)ThreadSpecificInterfaceManager_AddInterface(v3, (int (__thiscall ***)(_DWORD, unsigned int))this); /*0x43a630*/
  result = sub_436710(Value, &a2); /*0x43a63c*/
  v6 = (LONG (__thiscall ***)(_DWORD, int))a2; /*0x43a641*/
  if ( a2 ) /*0x43a64f*/
  {
    result = InterlockedDecrement((volatile LONG *)(a2 + 8)); /*0x43a655*/
    if ( !result ) /*0x43a65d*/
      return (**v6)(v6, 1); /*0x43a667*/
  }
  return result; /*0x43a669*/
}
