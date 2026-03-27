int __thiscall sub_55F510(_DWORD *this, LONG Comperand)
{
  ThreadSpecificInterfaceManager *v3; // ebx
  _DWORD *Value; // eax
  _DWORD *v5; // esi
  LONG v6; // eax

  v3 = (ThreadSpecificInterfaceManager *)*(this + 5);
  Value = (_DWORD *)TlsGetValue(v3->tlsStorage);
  if ( !Value )
    Value = (_DWORD *)ThreadSpecificInterfaceManager_AddInterface(v3, (int (__thiscall ***)(_DWORD, unsigned int))this);
  v5 = Value;
  v6 = (*(int (__thiscall **)(_DWORD, LONG))(*(_DWORD *)*Value + 0x1C))(*Value, Comperand);
  return sub_55F270(v5, v6, Comperand);
}
