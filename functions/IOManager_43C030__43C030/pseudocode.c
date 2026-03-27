int __thiscall IOManager_43C030(IOManager *this, int a2)
{
  ThreadSpecificInterfaceManager *unk14; // edi
  unsigned int *Value; // eax

  unk14 = this->members.super.super.unk14;
  Value = (unsigned int *)TlsGetValue(unk14->tlsStorage);
  if ( !Value )
    Value = (unsigned int *)ThreadSpecificInterfaceManager_AddInterface(unk14, this);
  IOManager_43A940(Value, (_DWORD *)a2);
  return a2;
}
