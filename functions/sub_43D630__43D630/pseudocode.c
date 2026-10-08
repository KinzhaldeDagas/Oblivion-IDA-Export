char __thiscall sub_43D630(_DWORD *this, LONG a2, LONG Comperand)
{
  ThreadSpecificInterfaceManager *v4; // edi
  void *Value; // eax
  char v6; // al
  void (__thiscall ***v7)(_DWORD, int); // esi
  char v8; // bl

  v4 = (ThreadSpecificInterfaceManager *)*(this + 5); /*0x43d655*/
  Value = TlsGetValue(v4->tlsStorage); /*0x43d664*/
  if ( !Value ) /*0x43d66c*/
    Value = (void *)ThreadSpecificInterfaceManager_AddInterface(v4, (int (__thiscall ***)(_DWORD, unsigned int))this); /*0x43d671*/
  v6 = sub_43C630(Value, a2, &Comperand); /*0x43d682*/
  v7 = (void (__thiscall ***)(_DWORD, int))Comperand; /*0x43d687*/
  v8 = v6; /*0x43d68d*/
  if ( Comperand ) /*0x43d697*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(Comperand + 8)) ) /*0x43d69d*/
      (**v7)(v7, 1); /*0x43d6af*/
  }
  return v8; /*0x43d6b3*/
}
