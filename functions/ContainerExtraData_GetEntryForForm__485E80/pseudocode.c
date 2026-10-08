// Find EntryData for an exact TESForm in ExtraContainerChanges. Native ABI is three stack arguments and retn 0x0C. The middle Boolean is not read; callers conventionally pass true. If referenceFormIDOrZero is nonzero, require an extend-data list whose ExtraReferencePointer target has that form ID; otherwise return the form entry directly.
EntryData *__thiscall ContainerExtraData_GetEntryForForm(
        ExtraContainerChanges_Data *this,
        TESForm *form,
        bool unusedAlwaysOne,
        unsigned int referenceFormIDOrZero)
{
  tListEntryData *objList; // eax
  char v5; // dl
  EntryData *data; // ebx
  tListVoid *extendData; // esi
  ExtraDataList *v9; // edi

  objList = this->objList; /*0x485e80*/
  v5 = 1; /*0x485e85*/
  if ( !this->objList ) /*0x485e80*/
    return 0; /*0x485e80*/
  while ( v5 ) /*0x485e92*/
  {                                             // Exact TESForm comparison occurs before the optional ExtraReferencePointer FormID filter. Reference provenance cannot redirect an entry from proxy AMMO to source WEAP.
    if ( objList->node.data && objList->node.data->type == form ) /*0x485e9d*/
      v5 = 0; /*0x485e9f*/
    else
      objList = (tListEntryData *)objList->node.next; /*0x485ea3*/
    if ( !objList ) /*0x485ea8*/
      return 0; /*0x485ea8*/
  }
  if ( !objList ) /*0x485eb2*/
    return 0; /*0x485eaa*/
  data = objList->node.data; /*0x485eb5*/
  if ( !objList->node.data || !referenceFormIDOrZero ) /*0x485ec2*/
    return objList->node.data; /*0x485f07*/
  extendData = data->extendData; /*0x485ec4*/
  if ( !data->extendData ) /*0x485ec4*/
    return 0; /*0x485ef4*/
  while ( 1 ) /*0x485ed0*/
  {
    v9 = (ExtraDataList *)extendData->node.data; /*0x485ed0*/
    if ( extendData->node.data ) /*0x485ed0*/
    {
      if ( ExtraDataList_GetReferencePointer((ExtraDataList *)extendData->node.data) /*0x485eeb*/
        && ExtraDataList_GetReferencePointer(v9)->member.super.refID == referenceFormIDOrZero )
      {
        break; /*0x485eeb*/
      }
    }
    extendData = (tListVoid *)extendData->node.next; /*0x485eed*/
    if ( !extendData ) /*0x485ef2*/
      return 0; /*0x485ef2*/
  }
  return data; /*0x485eac*/
}
