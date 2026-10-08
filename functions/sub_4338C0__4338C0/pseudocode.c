char __thiscall sub_4338C0(_DWORD *this, LONG a2, int a3, int a4, int a5, char a6)
{
  ThreadSpecificInterfaceManager *v7; // edi
  _DWORD *Value; // eax
  char v9; // al
  void (__thiscall ***v10)(_DWORD, int); // esi
  char v11; // bl

  v7 = (ThreadSpecificInterfaceManager *)*(this + 5); /*0x4338e5*/
  Value = TlsGetValue(v7->tlsStorage); /*0x4338f4*/
  if ( !Value ) /*0x4338fc*/
    Value = (_DWORD *)ThreadSpecificInterfaceManager_AddInterface(v7, (int (__thiscall ***)(_DWORD, unsigned int))this); /*0x433901*/
  v9 = sub_4331F0(Value, a2, a3, a4, &a5, a6); /*0x433921*/
  v10 = (void (__thiscall ***)(_DWORD, int))a5; /*0x433926*/
  v11 = v9; /*0x43392c*/
  if ( a5 ) /*0x433936*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(a5 + 8)) ) /*0x43393c*/
      (**v10)(v10, 1); /*0x43394e*/
  }
  return v11; /*0x433952*/
}
