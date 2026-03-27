int __thiscall sub_43E820(_DWORD *this, char *a2)
{
  char *v2; // esi
  char v3; // al
  LONG *i; // edi
  ThreadSpecificInterfaceManager *v6; // esi
  _DWORD *Value; // eax
  _DWORD *v8; // esi
  LONG v9; // eax
  LONG Comperand[250]; // [esp+Ch] [ebp-3ECh] BYREF

  v2 = a2;
  v3 = *a2;
  for ( i = Comperand; *v2; i = (LONG *)((char *)i + 1) )
  {
    ++v2;
    *(_BYTE *)i = tolower(v3);
    v3 = *v2;
  }
  v6 = (ThreadSpecificInterfaceManager *)*(this + 5);
  *(_BYTE *)i = 0;
  Value = TlsGetValue(v6->tlsStorage);
  if ( !Value )
    Value = (_DWORD *)ThreadSpecificInterfaceManager_AddInterface(v6, (int (__thiscall ***)(_DWORD, unsigned int))this);
  v8 = Value;
  v9 = (*(int (__thiscall **)(_DWORD, LONG *))(*(_DWORD *)*Value + 0x1C))(*Value, Comperand);
  return sub_55F270(v8, v9, (LONG)Comperand);
}
