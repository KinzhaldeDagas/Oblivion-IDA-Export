char __thiscall sub_43E760(_DWORD *this, char *a2, int a3, char a4)
{
  char *v4; // esi
  char v5; // al
  LONG *i; // edi
  ThreadSpecificInterfaceManager *v8; // esi
  _DWORD *Value; // eax
  _DWORD *v10; // esi
  LONG v11; // eax
  DWORD tlsStorage; // [esp-4h] [ebp-400h]
  int v14; // [esp+Ch] [ebp-3F0h] BYREF
  LONG Comperand[250]; // [esp+10h] [ebp-3ECh] BYREF

  v4 = a2;
  v5 = *a2;
  for ( i = Comperand; *v4; i = (LONG *)((char *)i + 1) )
  {
    ++v4;
    *(_BYTE *)i = tolower(v5);
    v5 = *v4;
  }
  v8 = (ThreadSpecificInterfaceManager *)*(this + 5);
  *(_BYTE *)i = 0;
  tlsStorage = v8->tlsStorage;
  v14 = a3;
  Value = TlsGetValue(tlsStorage);
  if ( !Value )
    Value = (_DWORD *)ThreadSpecificInterfaceManager_AddInterface(v8, (int (__thiscall ***)(_DWORD, unsigned int))this);
  v10 = Value;
  v11 = (*(int (__thiscall **)(_DWORD, LONG *))(*(_DWORD *)*Value + 0x1C))(*Value, Comperand);
  return sub_55F120(v10, v11, (LONG)Comperand, (int)&v14, a4);
}
