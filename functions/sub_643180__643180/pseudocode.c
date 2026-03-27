char __thiscall sub_643180(_DWORD *this, LONG a2, LONG Comperand, int a4, char a5)
{
  ThreadSpecificInterfaceManager *v6; // edi
  _DWORD *Value; // eax
  char v8; // al
  void (__thiscall ***v9)(_DWORD, int); // esi
  char v10; // bl

  v6 = (ThreadSpecificInterfaceManager *)*(this + 5);
  Value = (_DWORD *)TlsGetValue(v6->tlsStorage);
  if ( !Value )
    Value = (_DWORD *)ThreadSpecificInterfaceManager_AddInterface(v6, (int (__thiscall ***)(_DWORD, unsigned int))this);
  v8 = sub_643000(Value, a2, Comperand, &a4, a5);
  v9 = (void (__thiscall ***)(_DWORD, int))a4;
  v10 = v8;
  if ( a4 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(a4 + 8)) )
      (**v9)(v9, 1);
  }
  return v10;
}
