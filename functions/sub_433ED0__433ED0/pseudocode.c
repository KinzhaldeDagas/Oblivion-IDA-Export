char __thiscall sub_433ED0(_DWORD *this, int a2, int a3, int *a4)
{
  ThreadSpecificInterfaceManager *v5; // ebx
  _DWORD *Value; // eax
  _DWORD *v7; // esi
  LONG v8; // eax

  v5 = (ThreadSpecificInterfaceManager *)*(this + 5); /*0x433ed5*/
  Value = TlsGetValue(v5->tlsStorage); /*0x433edc*/
  if ( !Value ) /*0x433ee4*/
    Value = (_DWORD *)ThreadSpecificInterfaceManager_AddInterface(v5, (int (__thiscall ***)(_DWORD, unsigned int))this); /*0x433ee9*/
  v7 = Value; /*0x433ef7*/
  v8 = (*(int (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*Value + 0x1C))(*Value, a2, a3); /*0x433f08*/
  return sub_433180(v7, v8, a2, a3, a4); /*0x433f12*/
}
