int __thiscall sub_43ACA0(_DWORD *this, LONG a2, LONG Comperand)
{
  ThreadSpecificInterfaceManager *v4; // edi
  int *Value; // eax

  v4 = (ThreadSpecificInterfaceManager *)*(this + 5); /*0x43aca4*/
  Value = (int *)TlsGetValue(v4->tlsStorage); /*0x43acab*/
  if ( !Value ) /*0x43acb3*/
    Value = (int *)ThreadSpecificInterfaceManager_AddInterface(v4, (int (__thiscall ***)(_DWORD, unsigned int))this); /*0x43acb8*/
  return sub_43A680(Value, a2, &Comperand); /*0x43acce*/
}
