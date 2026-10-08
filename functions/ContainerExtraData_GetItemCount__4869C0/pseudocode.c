// ContainerChanges item-count logic: start with the base TESContainer count (made absolute), find matching EntryData, then combine countDelta. If the base count and delta are both 0 but an EntryData exists, return 1; the GetItemCount evaluator takes the final absolute value.
UInt32 __thiscall ContainerExtraData_GetItemCount(ExtraContainerChanges_Data *this, TESForm *a2)
{
  TESObjectREFR *owner; // ecx
  TESContainer *Container; // eax
  UInt32 result; // eax
  tListEntryData *objList; // ecx
  char v7; // bl
  EntryData *data; // ecx

  owner = this->owner; /*0x4869c4*/
  if ( owner ) /*0x4869ca*/
    Container = TESObjectREFR_GetContainer(owner); /*0x4869cc*/
  else
    Container = 0; /*0x4869d3*/
  result = TESContainer_GetFormCount(Container, a2); /*0x4869dc*/
  if ( (int)result < 0 ) /*0x4869e3*/
    result = -result; /*0x4869e5*/
  objList = this->objList; /*0x4869e7*/
  v7 = 1; /*0x4869eb*/
  if ( this->objList ) /*0x4869e7*/
  {
    while ( v7 ) /*0x4869f2*/
    {
      if ( objList->node.data && objList->node.data->type == a2 ) /*0x4869fd*/
        v7 = 0; /*0x4869ff*/
      else
        objList = (tListEntryData *)objList->node.next; /*0x486a03*/
      if ( !objList ) /*0x486a08*/
        return result; /*0x486a08*/
    }
    if ( objList ) /*0x486a12*/
    {
      data = objList->node.data; /*0x486a14*/
      if ( data ) /*0x486a18*/
      {
        if ( result || data->countDelta ) /*0x486a1e*/
          result += data->countDelta; /*0x486a2e*/
        else
          return 1; /*0x486a25*/
      }
    }
  }
  return result; /*0x486a0a*/
}
