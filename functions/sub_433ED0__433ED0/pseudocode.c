char __thiscall sub_433ED0(_DWORD *this, int a2, int a3, int *a4)
{
  ThreadSpecificInterfaceManager *v5; // ebx
  _DWORD *Value; // eax
  _DWORD *v7; // esi
  LONG v8; // eax

  v5 = (ThreadSpecificInterfaceManager *)*(this + 5);
  Value = TlsGetValue(v5->tlsStorage);
  if ( !Value )
    Value = (_DWORD *)ThreadSpecificInterfaceManager_AddInterface(v5, (int (__thiscall ***)(_DWORD, unsigned int))this);
  v7 = Value;
  v8 = (*(int (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*Value + 0x1C))(*Value, a2, a3);
  return sub_433180(v7, v8, a2, a3, a4);
}
