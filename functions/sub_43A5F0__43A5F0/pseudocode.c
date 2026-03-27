LONG __thiscall sub_43A5F0(_DWORD *this, int a2)
{
  ThreadSpecificInterfaceManager *v3; // edi
  void *Value; // eax
  LONG result; // eax
  LONG (__thiscall ***v6)(_DWORD, int); // esi

  v3 = (ThreadSpecificInterfaceManager *)*(this + 5);
  Value = TlsGetValue(v3->tlsStorage);
  if ( !Value )
    Value = (void *)ThreadSpecificInterfaceManager_AddInterface(v3, (int (__thiscall ***)(_DWORD, unsigned int))this);
  result = sub_436710(Value, &a2);
  v6 = (LONG (__thiscall ***)(_DWORD, int))a2;
  if ( a2 )
  {
    result = InterlockedDecrement((volatile LONG *)(a2 + 8));
    if ( !result )
      return (**v6)(v6, 1);
  }
  return result;
}
