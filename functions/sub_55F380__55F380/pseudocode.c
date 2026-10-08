// LockFreeMap vtable slot: thread-local operation wrapper forwarding to 0x55F120 with explicit hash/key/value.
char __thiscall sub_55F380(_DWORD *this, LONG a2, LONG Comperand, int a4, char a5)
{
  ThreadSpecificInterfaceManager *v6; // edi
  _DWORD *Value; // eax

  v6 = (ThreadSpecificInterfaceManager *)*(this + 5); /*0x55f384*/
  Value = (_DWORD *)TlsGetValue(v6->tlsStorage); /*0x55f38b*/
  if ( !Value ) /*0x55f393*/
    Value = (_DWORD *)ThreadSpecificInterfaceManager_AddInterface(v6, (int (__thiscall ***)(_DWORD, unsigned int))this); /*0x55f398*/
  return sub_55F120(Value, a2, Comperand, &a4, a5); /*0x55f3b8*/
}
