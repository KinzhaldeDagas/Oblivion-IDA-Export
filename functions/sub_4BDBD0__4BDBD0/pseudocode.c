int __thiscall sub_4BDBD0(_DWORD *this, int a2)
{
  ThreadSpecificInterfaceManager *v3; // ebx
  int *Value; // eax
  int *v5; // esi
  LONG v6; // eax

  v3 = (ThreadSpecificInterfaceManager *)*(this + 5); /*0x4bdbd5*/
  Value = (int *)TlsGetValue(v3->tlsStorage); /*0x4bdbdc*/
  if ( !Value ) /*0x4bdbe4*/
    Value = (int *)ThreadSpecificInterfaceManager_AddInterface(v3, (int (__thiscall ***)(_DWORD, unsigned int))this); /*0x4bdbe9*/
  v5 = Value; /*0x4bdbee*/
  v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)*Value + 0x1C))(*Value, a2); /*0x4bdbfd*/
  return sub_4BD780(v5, v6, a2); /*0x4bdc07*/
}
