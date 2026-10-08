char __thiscall sub_433820(_DWORD *this, LONG a2, LONG Comperand)
{
  ThreadSpecificInterfaceManager *v4; // edi
  void *Value; // eax
  char v6; // al
  void (__thiscall ***v7)(_DWORD, int); // esi
  char v8; // bl

  v4 = (ThreadSpecificInterfaceManager *)*(this + 5); /*0x433845*/
  Value = TlsGetValue(v4->tlsStorage); /*0x433854*/
  if ( !Value ) /*0x43385c*/
    Value = (void *)ThreadSpecificInterfaceManager_AddInterface(v4, (int (__thiscall ***)(_DWORD, unsigned int))this); /*0x433861*/
  v6 = sub_4334B0(Value, a2, &Comperand); /*0x433872*/
  v7 = (void (__thiscall ***)(_DWORD, int))Comperand; /*0x433877*/
  v8 = v6; /*0x43387d*/
  if ( Comperand ) /*0x433887*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(Comperand + 8)) ) /*0x43388d*/
      (**v7)(v7, 1); /*0x43389f*/
  }
  return v8; /*0x4338a3*/
}
