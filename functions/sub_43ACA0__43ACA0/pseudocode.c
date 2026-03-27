int __thiscall sub_43ACA0(_DWORD *this, LONG a2, LONG Comperand)
{
  ThreadSpecificInterfaceManager *v4; // edi
  int *Value; // eax

  v4 = (ThreadSpecificInterfaceManager *)*(this + 5);
  Value = (int *)TlsGetValue(v4->tlsStorage);
  if ( !Value )
    Value = (int *)ThreadSpecificInterfaceManager_AddInterface(v4, (int (__thiscall ***)(_DWORD, unsigned int))this);
  return sub_43A680(Value, a2, (LONG)&Comperand);
}
