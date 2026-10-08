BSExtraData *__thiscall sub_4847F0(ExtraDataList ***this)
{
  int *v2; // edi
  BSExtraData *LeveledItem; // ebx
  ExtraDataList *v4; // esi

  v2 = (int *)*this; /*0x4847f5*/
  LeveledItem = 0; /*0x4847f8*/
  if ( *this ) /*0x4847f5*/
  {
    do /*0x48483b*/
    {
      v4 = (ExtraDataList *)*v2; /*0x484800*/
      if ( !*v2 ) /*0x484800*/
        break; /*0x484804*/
      if ( ExtraDataList_GetLeveledItem((ExtraDataList *)*v2) ) /*0x484808*/
      {
        LeveledItem = ExtraDataList_GetLeveledItem(v4); /*0x484818*/
        BaseExtraList_RemoveExtraByPtr(v4, (int)LeveledItem, 0); /*0x48481f*/
        if ( !v4->members.m_data ) /*0x484824*/
          BSSimpleList_Remove((int *)*this, (int)v4); /*0x48482e*/
        v2 = (int *)*this; /*0x484833*/
      }
      v2 = (int *)v2[1]; /*0x484836*/
    }
    while ( v2 ); /*0x48483b*/
  }
  return LeveledItem; /*0x48483e*/
}
