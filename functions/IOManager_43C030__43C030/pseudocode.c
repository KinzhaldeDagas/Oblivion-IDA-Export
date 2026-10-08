int __thiscall IOManager_43C030(IOManager *this, int a2)
{
  ThreadSpecificInterfaceManager *unk14; // edi
  unsigned int *Value; // eax

  unk14 = this->members.super.super.unk14; /*0x43c035*/
  Value = (unsigned int *)TlsGetValue(unk14->tlsStorage); /*0x43c044*/
  if ( !Value ) /*0x43c04c*/
    Value = (unsigned int *)ThreadSpecificInterfaceManager_AddInterface(unk14, this); /*0x43c051*/
  IOManager_43A940(Value, (_DWORD *)a2); /*0x43c05d*/
  return a2; /*0x43c062*/
}
