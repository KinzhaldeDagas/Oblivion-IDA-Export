char __thiscall sub_43E3E0(_DWORD *this, int a2, int *a3)
{
  ThreadSpecificInterfaceManager *v4; // ebx
  _DWORD *Value; // eax
  _DWORD *v6; // esi
  LONG v7; // eax

  v4 = (ThreadSpecificInterfaceManager *)*(this + 5); /*0x43e3e5*/
  Value = TlsGetValue(v4->tlsStorage); /*0x43e3ec*/
  if ( !Value ) /*0x43e3f4*/
    Value = (_DWORD *)ThreadSpecificInterfaceManager_AddInterface(v4, (int (__thiscall ***)(_DWORD, unsigned int))this); /*0x43e3f9*/
  v6 = Value; /*0x43e402*/
  v7 = (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)*Value + 0x1C))(*Value, a2); /*0x43e412*/
  return sub_43C5D0(v6, v7, a2, a3); /*0x43e41c*/
}
