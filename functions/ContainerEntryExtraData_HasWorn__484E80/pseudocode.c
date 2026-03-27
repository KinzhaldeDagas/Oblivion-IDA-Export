int __thiscall ContainerEntryExtraData_HasWorn(EntryData *this, int a2)
{
  if ( this->extendData )
    return ContainerEntryExtraData_HasWorn_::ExtraDataLoop(a2, &this->extendData->node.data, a2);
  else
    return ContainerEntryExtraData_HasWorn_::Return_0(a2);
}
