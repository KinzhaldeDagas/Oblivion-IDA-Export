char __thiscall sub_433F20(_DWORD *this, int a2, int a3, int a4, char a5)
{
  ThreadSpecificInterfaceManager *v6; // ebx
  _DWORD *Value; // eax
  _DWORD *v8; // esi
  LONG v9; // eax
  char v10; // al
  void (__thiscall ***v11)(_DWORD, int); // esi
  char v12; // bl
  char v14; // [esp-4h] [ebp-20h]

  v6 = (ThreadSpecificInterfaceManager *)*(this + 5); /*0x433f45*/
  Value = TlsGetValue(v6->tlsStorage); /*0x433f54*/
  if ( !Value ) /*0x433f5c*/
    Value = (_DWORD *)ThreadSpecificInterfaceManager_AddInterface(v6, (int (__thiscall ***)(_DWORD, unsigned int))this); /*0x433f61*/
  v14 = a5; /*0x433f6a*/
  v8 = Value; /*0x433f6f*/
  v9 = (*(int (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*Value + 0x1C))(*Value, a2, a3); /*0x433f85*/
  v10 = sub_4331F0(v8, v9, a2, a3, &a4, v14); /*0x433f8a*/
  v11 = (void (__thiscall ***)(_DWORD, int))a4; /*0x433f8f*/
  v12 = v10; /*0x433f95*/
  if ( a4 ) /*0x433f9f*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(a4 + 8)) ) /*0x433fa5*/
      (**v11)(v11, 1); /*0x433fb7*/
  }
  return v12; /*0x433fbb*/
}
