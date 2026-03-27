int __thiscall sub_433FD0(_DWORD *this, int a2, int a3)
{
  ThreadSpecificInterfaceManager *v4; // ebx
  int *Value; // eax
  int *v6; // esi
  LONG v7; // eax

  v4 = (ThreadSpecificInterfaceManager *)*(this + 5);
  Value = (int *)TlsGetValue(v4->tlsStorage);
  if ( !Value )
    Value = (int *)ThreadSpecificInterfaceManager_AddInterface(v4, (int (__thiscall ***)(_DWORD, unsigned int))this);
  v6 = Value;
  v7 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)*v6 + 0x1C))(*v6, a2, a3);
  return sub_433380(v6, v7, a2, a3);
}
