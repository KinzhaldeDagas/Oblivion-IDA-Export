char __thiscall sub_433F20(_DWORD *this, int a2, int a3, int a4, char a5)
{
  ThreadSpecificInterfaceManager *v6; // ebx
  _DWORD *Value; // eax
  _DWORD *v8; // esi
  LONG v9; // eax
  char v10; // al
  void (__thiscall ***v11)(_DWORD, int); // esi
  char v12; // bl
  char v14; // [esp-4h] [ebp-20h]

  v6 = (ThreadSpecificInterfaceManager *)*(this + 5);
  Value = TlsGetValue(v6->tlsStorage);
  if ( !Value )
    Value = (_DWORD *)ThreadSpecificInterfaceManager_AddInterface(v6, (int (__thiscall ***)(_DWORD, unsigned int))this);
  v14 = a5;
  v8 = Value;
  v9 = (*(int (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*Value + 0x1C))(*Value, a2, a3);
  v10 = sub_4331F0(v8, v9, a2, a3, &a4, v14);
  v11 = (void (__thiscall ***)(_DWORD, int))a4;
  v12 = v10;
  if ( a4 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(a4 + 8)) )
      (**v11)(v11, 1);
  }
  return v12;
}
