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

  v4 = a2; /*0x43e776*/
  v5 = *a2; /*0x43e77d*/
  for ( i = Comperand; *v4; i = (LONG *)((char *)i + 1) ) /*0x43e77d*/
  {
    ++v4; /*0x43e799*/
    *(_BYTE *)i = tolower(v5); /*0x43e79c*/
    v5 = *v4; /*0x43e79e*/
  }
  v8 = (ThreadSpecificInterfaceManager *)*(this + 5); /*0x43e7aa*/
  *(_BYTE *)i = 0; /*0x43e7b4*/
  tlsStorage = v8->tlsStorage; /*0x43e7ba*/
  v14 = a3; /*0x43e7bb*/
  Value = TlsGetValue(tlsStorage); /*0x43e7bf*/
  if ( !Value ) /*0x43e7c7*/
    Value = (_DWORD *)ThreadSpecificInterfaceManager_AddInterface(v8, (int (__thiscall ***)(_DWORD, unsigned int))this); /*0x43e7cc*/
  v10 = Value; /*0x43e7d8*/
  v11 = (*(int (__thiscall **)(_DWORD, LONG *))(*(_DWORD *)*Value + 0x1C))(*Value, Comperand); /*0x43e7ed*/
  return sub_55F120(v10, v11, (LONG)Comperand, &v14, a4); /*0x43e7f7*/
}
