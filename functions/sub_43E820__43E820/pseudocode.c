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

  v2 = a2; /*0x43e836*/
  v3 = *a2; /*0x43e83d*/
  for ( i = Comperand; *v2; i = (LONG *)((char *)i + 1) ) /*0x43e83d*/
  {
    ++v2; /*0x43e859*/
    *(_BYTE *)i = tolower(v3); /*0x43e85c*/
    v3 = *v2; /*0x43e85e*/
  }
  v6 = (ThreadSpecificInterfaceManager *)*(this + 5); /*0x43e86a*/
  *(_BYTE *)i = 0; /*0x43e86d*/
  Value = TlsGetValue(v6->tlsStorage); /*0x43e874*/
  if ( !Value ) /*0x43e87c*/
    Value = (_DWORD *)ThreadSpecificInterfaceManager_AddInterface(v6, (int (__thiscall ***)(_DWORD, unsigned int))this); /*0x43e881*/
  v8 = Value; /*0x43e886*/
  v9 = (*(int (__thiscall **)(_DWORD, LONG *))(*(_DWORD *)*Value + 0x1C))(*Value, Comperand); /*0x43e895*/
  return sub_55F270(v8, v9, (LONG)Comperand); /*0x43e89f*/
}
