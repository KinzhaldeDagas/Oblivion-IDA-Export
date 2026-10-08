// Return the AlchemyItem poison attached to this EntryData's first ExtraDataList stack, or NULL. EntryData layout is extendData@+0, countDelta@+4, type@+8.
AlchemyItem *__thiscall EquippedEntryData_GetPoison(EntryData *this)
{
  ExtraDataList **extendData; // eax
  ExtraDataList *v2; // esi

  extendData = (ExtraDataList **)this->extendData; /*0x484df0*/
  if ( this->extendData && (v2 = *extendData) != 0 && ExtraDataList_GetPoison(*extendData) ) /*0x484e02*/
    return (AlchemyItem *)ExtraDataList_GetPoison(v2); /*0x484e0f*/
  else
    return 0; /*0x484e15*/
}
