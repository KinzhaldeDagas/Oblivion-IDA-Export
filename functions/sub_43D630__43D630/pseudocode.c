char __thiscall sub_43D630(_DWORD *this, LONG a2, LONG Comperand)
{
  ThreadSpecificInterfaceManager *v4; // edi
  void *Value; // eax
  char v6; // al
  void (__thiscall ***v7)(_DWORD, int); // esi
  char v8; // bl

  v4 = (ThreadSpecificInterfaceManager *)*(this + 5);
  Value = TlsGetValue(v4->tlsStorage);
  if ( !Value )
    Value = (void *)ThreadSpecificInterfaceManager_AddInterface(v4, (int (__thiscall ***)(_DWORD, unsigned int))this);
  v6 = sub_43C630(Value, a2, &Comperand);
  v7 = (void (__thiscall ***)(_DWORD, int))Comperand;
  v8 = v6;
  if ( Comperand )
  {
    if ( !InterlockedDecrement((volatile LONG *)(Comperand + 8)) )
      (**v7)(v7, 1);
  }
  return v8;
}
