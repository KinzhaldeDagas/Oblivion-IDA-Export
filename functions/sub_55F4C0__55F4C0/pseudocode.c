char __thiscall sub_55F4C0(_DWORD *this, LONG Comperand, int a3, char a4)
{
  ThreadSpecificInterfaceManager *v5; // ebx
  _DWORD *Value; // eax
  _DWORD *v7; // esi
  LONG v8; // eax
  char v10; // [esp-4h] [ebp-10h]

  v5 = (ThreadSpecificInterfaceManager *)*(this + 5);
  Value = (_DWORD *)TlsGetValue(v5->tlsStorage);
  if ( !Value )
    Value = (_DWORD *)ThreadSpecificInterfaceManager_AddInterface(v5, (int (__thiscall ***)(_DWORD, unsigned int))this);
  v7 = Value;
  v10 = a4;
  v8 = (*(int (__thiscall **)(_DWORD, LONG))(*(_DWORD *)*Value + 0x1C))(*Value, Comperand);
  return sub_55F120(v7, v8, Comperand, &a3, v10);
}
