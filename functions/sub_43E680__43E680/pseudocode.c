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

  v3 = a2;
  v4 = *a2;
  for ( i = v12; *v3; i = (int *)((char *)i + 1) )
  {
    ++v3;
    *(_BYTE *)i = tolower(v4);
    v4 = *v3;
  }
  unk14 = this->unk14;
  *(_BYTE *)i = 0;
  Value = TlsGetValue(unk14->tlsStorage);
  if ( !Value )
    Value = (_DWORD *)ThreadSpecificInterfaceManager_AddInterface(unk14, this);
  v9 = Value;
  v10 = (*(int (__thiscall **)(_DWORD, int *))(*(_DWORD *)*Value + 0x1C))(*Value, v12);
  return sub_43A780(v9, v10, (int)v12, a3);
}
