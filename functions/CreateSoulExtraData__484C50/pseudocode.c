void __thiscall CreateSoulExtraData(EntryData *this, char soulLevel)
{
  TESSoulGem *v3; // eax
  tListVoid *v4; // eax
  tListVoid *i; // esi
  ExtraDataList *data; // edi
  _DWORD *v7; // eax
  ExtraDataList *v8; // esi

  v3 = (TESSoulGem *)OblivionDynamicCast(
                       this->type,
                       0,
                       (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                       &TESSoulGem `RTTI Type Descriptor',
                       0);
  if ( !v3 || !v3->members.soul )
  {
    if ( !this->extendData )
    {
      v4 = (tListVoid *)FormHeapAlloc(8u);
      if ( v4 )
      {
        v4->node.data = 0;
        v4->node.next = 0;
      }
      else
      {
        v4 = 0;
      }
      this->extendData = v4;
    }
    for ( i = this->extendData; i; i = (tListVoid *)i->node.next )
    {
      data = (ExtraDataList *)i->node.data;
      if ( !i->node.data )
        break;
      if ( !ExtraDataList_GetExtraSoul((ExtraDataList *)i->node.data) )
      {
        BaseExtraList_SetSoulLevel(data, soulLevel);
        return;
      }
    }
    v7 = (_DWORD *)FormHeapAlloc(0x14u);
    if ( v7 )
      v8 = (ExtraDataList *)ExtraDataList_constr(v7);
    else
      v8 = 0;
    BaseExtraList_SetSoulLevel(v8, soulLevel);
    BSSimpleList_PushFront(&this->extendData->node.data, (int)v8);
  }
}
