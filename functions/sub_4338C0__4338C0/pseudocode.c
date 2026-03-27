char __thiscall sub_4338C0(_DWORD *this, LONG a2, int a3, int a4, int a5, char a6)
{
  ThreadSpecificInterfaceManager *v7; // edi
  _DWORD *Value; // eax
  char v9; // al
  void (__thiscall ***v10)(_DWORD, int); // esi
  char v11; // bl

  v7 = (ThreadSpecificInterfaceManager *)*(this + 5);
  Value = TlsGetValue(v7->tlsStorage);
  if ( !Value )
    Value = (_DWORD *)ThreadSpecificInterfaceManager_AddInterface(v7, (int (__thiscall ***)(_DWORD, unsigned int))this);
  v9 = sub_4331F0(Value, a2, a3, a4, &a5, a6);
  v10 = (void (__thiscall ***)(_DWORD, int))a5;
  v11 = v9;
  if ( a5 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(a5 + 8)) )
      (**v10)(v10, 1);
  }
  return v11;
}
