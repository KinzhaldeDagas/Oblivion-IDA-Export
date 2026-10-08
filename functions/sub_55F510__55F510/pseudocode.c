// LockFreeMap vtable slot +0x10: computes bucket/hash then removes key through 0x55F270.
int __thiscall sub_55F510(_DWORD *this, LONG Comperand)
{
  ThreadSpecificInterfaceManager *v3; // ebx
  _DWORD *Value; // eax
  _DWORD *v5; // esi
  LONG v6; // eax

  v3 = (ThreadSpecificInterfaceManager *)*(this + 5); /*0x55f515*/
  Value = (_DWORD *)TlsGetValue(v3->tlsStorage); /*0x55f51c*/
  if ( !Value ) /*0x55f524*/
    Value = (_DWORD *)ThreadSpecificInterfaceManager_AddInterface(v3, (int (__thiscall ***)(_DWORD, unsigned int))this); /*0x55f529*/
  v5 = Value; /*0x55f52e*/
  v6 = (*(int (__thiscall **)(_DWORD, LONG))(*(_DWORD *)*Value + 0x1C))(*Value, Comperand); /*0x55f53d*/
  return sub_55F270(v5, v6, Comperand); /*0x55f547*/
}
