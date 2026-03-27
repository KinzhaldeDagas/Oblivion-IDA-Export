char __thiscall sub_43E3E0(_DWORD *this, int a2, int *a3)
{
  ThreadSpecificInterfaceManager *v4; // ebx
  _DWORD *Value; // eax
  _DWORD *v6; // esi
  LONG v7; // eax

  v4 = (ThreadSpecificInterfaceManager *)*(this + 5);
  Value = TlsGetValue(v4->tlsStorage);
  if ( !Value )
    Value = (_DWORD *)ThreadSpecificInterfaceManager_AddInterface(v4, (int (__thiscall ***)(_DWORD, unsigned int))this);
  v6 = Value;
  v7 = (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)*Value + 0x1C))(*Value, a2);
  return sub_43C5D0(v6, v7, a2, a3);
}
