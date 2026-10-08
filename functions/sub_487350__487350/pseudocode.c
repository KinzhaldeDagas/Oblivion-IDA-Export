// Walks ExtraContainerChanges_Data.objList (+0x00), finds the EntryData whose type/form is at +0x08, and adds countDelta to EntryData.countDelta (+0x04). Return-register contents are incidental; both native callers ignore them.
void __thiscall ExtraContainerChanges_AdjustCountForForm(
        ExtraContainerChanges_Data *this,
        TESForm *form,
        int countDelta)
{
  tListEntryData *objList; // eax
  char v4; // dl
  EntryData *data; // eax

  objList = this->objList; /*0x487350*/
  v4 = 1; /*0x487354*/
  if ( this->objList ) /*0x487350*/
  {
    while ( v4 ) /*0x487362*/
    {
      if ( objList->node.data && objList->node.data->type == form ) /*0x48736d*/
        v4 = 0; /*0x48736f*/
      else
        objList = (tListEntryData *)objList->node.next; /*0x487373*/
      if ( !objList ) /*0x487378*/
        return; /*0x487378*/
    }
    if ( objList ) /*0x487380*/
    {
      data = objList->node.data; /*0x487382*/
      if ( data ) /*0x487386*/
        data->countDelta += countDelta; /*0x48738c*/
    }
  }
}
