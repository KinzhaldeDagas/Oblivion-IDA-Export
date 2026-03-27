char __thiscall sub_55F380(_DWORD *this, LONG a2, LONG Comperand, int a4, char a5)
{
  ThreadSpecificInterfaceManager *v6; // edi
  _DWORD *Value; // eax

  v6 = (ThreadSpecificInterfaceManager *)*(this + 5);
  Value = (_DWORD *)TlsGetValue(v6->tlsStorage);
  if ( !Value )
    Value = (_DWORD *)ThreadSpecificInterfaceManager_AddInterface(v6, (int (__thiscall ***)(_DWORD, unsigned int))this);
  return sub_55F120(Value, a2, Comperand, &a4, a5);
}
