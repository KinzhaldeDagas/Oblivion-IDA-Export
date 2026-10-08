char __thiscall sub_643180(_DWORD *this, LONG a2, LONG Comperand, int a4, char a5)
{
  ThreadSpecificInterfaceManager *v6; // edi
  _DWORD *Value; // eax
  char v8; // al
  void (__thiscall ***v9)(_DWORD, int); // esi
  char v10; // bl

  v6 = (ThreadSpecificInterfaceManager *)*(this + 5); /*0x6431a5*/
  Value = (_DWORD *)TlsGetValue(v6->tlsStorage); /*0x6431b4*/
  if ( !Value ) /*0x6431bc*/
    Value = (_DWORD *)ThreadSpecificInterfaceManager_AddInterface(v6, (int (__thiscall ***)(_DWORD, unsigned int))this); /*0x6431c1*/
  v8 = sub_643000(Value, a2, Comperand, &a4, a5); /*0x6431dc*/
  v9 = (void (__thiscall ***)(_DWORD, int))a4; /*0x6431e1*/
  v10 = v8; /*0x6431e7*/
  if ( a4 ) /*0x6431f1*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(a4 + 8)) ) /*0x6431f7*/
      (**v9)(v9, 1); /*0x643209*/
  }
  return v10; /*0x64320d*/
}
