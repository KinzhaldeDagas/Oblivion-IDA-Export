char __thiscall sub_43E430(_DWORD *this, LONG Comperand, int a3, char a4)
{
  ThreadSpecificInterfaceManager *v5; // ebx
  _DWORD *Value; // eax
  _DWORD *v7; // esi
  LONG v8; // eax
  char v9; // al
  void (__thiscall ***v10)(_DWORD, int); // esi
  char v11; // bl
  char v13; // [esp-4h] [ebp-20h]

  v5 = (ThreadSpecificInterfaceManager *)*(this + 5);
  Value = TlsGetValue(v5->tlsStorage);
  if ( !Value )
    Value = (_DWORD *)ThreadSpecificInterfaceManager_AddInterface(v5, (int (__thiscall ***)(_DWORD, unsigned int))this);
  v7 = Value;
  v13 = a4;
  v8 = (*(int (__thiscall **)(_DWORD, LONG))(*(_DWORD *)*Value + 0x1C))(*Value, Comperand);
  v9 = sub_643000(v7, v8, Comperand, (int)&a3, v13);
  v10 = (void (__thiscall ***)(_DWORD, int))a3;
  v11 = v9;
  if ( a3 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(a3 + 8)) )
      (**v10)(v10, 1);
  }
  return v11;
}
