int __thiscall sub_43E680(LockFreeQueue_NiIOTask *this, char *a2, _DWORD *a3)
{
  char *v3; // esi
  char v4; // al
  int *i; // edi
  ThreadSpecificInterfaceManager *unk14; // esi
  _DWORD *Value; // eax
  _DWORD *v9; // esi
  LONG v10; // eax
  int v12[250]; // [esp+10h] [ebp-3ECh] BYREF

  v3 = a2; /*0x43e69e*/
  v4 = *a2; /*0x43e6a5*/
  for ( i = v12; *v3; i = (int *)((char *)i + 1) ) /*0x43e6a5*/
  {
    ++v3; /*0x43e6bb*/
    *(_BYTE *)i = tolower(v4); /*0x43e6be*/
    v4 = *v3; /*0x43e6c0*/
  }
  unk14 = this->unk14; /*0x43e6cc*/
  *(_BYTE *)i = 0; /*0x43e6cf*/
  Value = TlsGetValue(unk14->tlsStorage); /*0x43e6d6*/
  if ( !Value ) /*0x43e6de*/
    Value = (_DWORD *)ThreadSpecificInterfaceManager_AddInterface(unk14, this); /*0x43e6e3*/
  v9 = Value; /*0x43e6e8*/
  v10 = (*(int (__thiscall **)(_DWORD, int *))(*(_DWORD *)*Value + 0x1C))(*Value, v12); /*0x43e6f8*/
  return sub_43A780(v9, v10, (int)v12, a3); /*0x43e702*/
}
