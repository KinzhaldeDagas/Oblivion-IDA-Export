// Remove the poison extra from this equipped EntryData and notify/update inventory state. Bow-shot construction calls this at release, after retaining the AlchemyItem on ArrowProjectile.
void __thiscall EquippedEntryData_ConsumePoison(EntryData *this)
{
  ExtraDataList **extendData; // eax
  ExtraDataList *v2; // esi

  extendData = (ExtraDataList **)this->extendData; /*0x484e50*/
  if ( this->extendData ) /*0x484e50*/
  {
    v2 = *extendData; /*0x484e57*/
    if ( *extendData ) /*0x484e57*/
    {
      if ( ExtraDataList_GetPoison(*extendData) ) /*0x484e5f*/
      {
        sub_41F660(v2); /*0x484e6a*/
        sub_57B230(); /*0x484e70*/
      }
    }
  }
}
