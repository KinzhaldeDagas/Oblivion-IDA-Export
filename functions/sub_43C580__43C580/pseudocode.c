int __thiscall sub_43C580(_DWORD *this, int a2, _DWORD *a3)
{
  ThreadSpecificInterfaceManager *v4; // ebx
  _DWORD *Value; // eax
  _DWORD *v6; // esi
  LONG v7; // eax

  v4 = (ThreadSpecificInterfaceManager *)*(this + 5); /*0x43c585*/
  Value = TlsGetValue(v4->tlsStorage); /*0x43c58c*/
  if ( !Value ) /*0x43c594*/
    Value = (_DWORD *)ThreadSpecificInterfaceManager_AddInterface(v4, (int (__thiscall ***)(_DWORD, unsigned int))this); /*0x43c599*/
  v6 = Value; /*0x43c5a2*/
  v7 = (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)*Value + 0x1C))(*Value, a2); /*0x43c5b2*/
  return sub_43A780(v6, v7, a2, a3); /*0x43c5bc*/
}
