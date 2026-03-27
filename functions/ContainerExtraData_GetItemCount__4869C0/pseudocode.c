UInt32 __thiscall ContainerExtraData_GetItemCount(ExtraContainerChanges_Data *this, TESForm *a2)
{
  TESObjectREFR *owner; // ecx
  TESContainer *Container; // eax
  UInt32 result; // eax
  tListEntryData *objList; // ecx
  char v7; // bl
  EntryData *data; // ecx

  owner = this->owner;
  if ( owner )
    Container = TESObjectREFR_GetContainer(owner);
  else
    Container = 0;
  result = TESContainer_GetFormCount(Container, a2);
  if ( (int)result < 0 )
    result = -result;
  objList = this->objList;
  v7 = 1;
  if ( this->objList )
  {
    while ( v7 )
    {
      if ( objList->node.data && objList->node.data->type == a2 )
        v7 = 0;
      else
        objList = (tListEntryData *)objList->node.next;
      if ( !objList )
        return result;
    }
    if ( objList )
    {
      data = objList->node.data;
      if ( data )
      {
        if ( result || data->countDelta )
          result += data->countDelta;
        else
          return 1;
      }
    }
  }
  return result;
}
