char __thiscall sub_43E430(_DWORD *this, LONG Comperand, int a3, char a4)
{
  ThreadSpecificInterfaceManager *v5; // ebx
  _DWORD *Value; // eax
  _DWORD *v7; // esi
  LONG v8; // eax
  char v9; // al
  void (__thiscall ***v10)(_DWORD, int); // esi
  char v11; // bl
  char v13; // [esp-4h] [ebp-20h]

  v5 = (ThreadSpecificInterfaceManager *)*(this + 5); /*0x43e455*/
  Value = TlsGetValue(v5->tlsStorage); /*0x43e464*/
  if ( !Value ) /*0x43e46c*/
    Value = (_DWORD *)ThreadSpecificInterfaceManager_AddInterface(v5, (int (__thiscall ***)(_DWORD, unsigned int))this); /*0x43e471*/
  v7 = Value; /*0x43e47a*/
  v13 = a4; /*0x43e47e*/
  v8 = (*(int (__thiscall **)(_DWORD, LONG))(*(_DWORD *)*Value + 0x1C))(*Value, Comperand); /*0x43e48f*/
  v9 = sub_643000(v7, v8, Comperand, &a3, v13); /*0x43e494*/
  v10 = (void (__thiscall ***)(_DWORD, int))a3; /*0x43e499*/
  v11 = v9; /*0x43e49f*/
  if ( a3 ) /*0x43e4a9*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(a3 + 8)) ) /*0x43e4af*/
      (**v10)(v10, 1); /*0x43e4c1*/
  }
  return v11; /*0x43e4c5*/
}
