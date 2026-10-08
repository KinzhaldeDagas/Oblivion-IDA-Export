// LockFreeMap vtable slot +0x0C: computes bucket/hash then inserts or updates key/value through 0x55F120.
char __thiscall sub_55F4C0(_DWORD *this, LONG Comperand, int a3, char a4)
{
  ThreadSpecificInterfaceManager *v5; // ebx
  _DWORD *Value; // eax
  _DWORD *v7; // esi
  LONG v8; // eax
  char v10; // [esp-4h] [ebp-10h]

  v5 = (ThreadSpecificInterfaceManager *)*(this + 5); /*0x55f4c5*/
  Value = (_DWORD *)TlsGetValue(v5->tlsStorage); /*0x55f4cc*/
  if ( !Value ) /*0x55f4d4*/
    Value = (_DWORD *)ThreadSpecificInterfaceManager_AddInterface(v5, (int (__thiscall ***)(_DWORD, unsigned int))this); /*0x55f4d9*/
  v7 = Value; /*0x55f4e2*/
  v10 = a4; /*0x55f4e6*/
  v8 = (*(int (__thiscall **)(_DWORD, LONG))(*(_DWORD *)*Value + 0x1C))(*Value, Comperand); /*0x55f4f7*/
  return sub_55F120(v7, v8, Comperand, &a3, v10); /*0x55f501*/
}
