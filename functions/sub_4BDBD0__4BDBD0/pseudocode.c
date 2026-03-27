int __thiscall sub_4BDBD0(_DWORD *this, int a2)
{
  ThreadSpecificInterfaceManager *v3; // ebx
  int *Value; // eax
  int *v5; // esi
  LONG v6; // eax

  v3 = (ThreadSpecificInterfaceManager *)*(this + 5);
  Value = (int *)TlsGetValue(v3->tlsStorage);
  if ( !Value )
    Value = (int *)ThreadSpecificInterfaceManager_AddInterface(v3, (int (__thiscall ***)(_DWORD, unsigned int))this);
  v5 = Value;
  v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)*Value + 0x1C))(*Value, a2);
  return sub_4BD780(v5, v6, a2);
}
