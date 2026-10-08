char __thiscall ContainerEntryExtraData_HasWorn(EntryData *this, int a2)
{
  if ( this->extendData ) /*0x484e81*/
    return ContainerEntryExtraData_HasWorn_::ExtraDataLoop(a2, &this->extendData->node.data, a2); /*0x484e8d*/
  else
    return ContainerEntryExtraData_HasWorn_::Return_0(a2); /*0x484e86*/
}
