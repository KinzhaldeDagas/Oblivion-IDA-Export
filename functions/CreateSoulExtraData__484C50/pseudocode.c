void __thiscall CreateSoulExtraData(EntryData *this, char soulLevel)
{
  TESSoulGem *v3; // eax
  tListVoid *v4; // eax
  tListVoid *i; // esi
  ExtraDataList *data; // edi
  _DWORD *v7; // eax
  ExtraDataList *v8; // esi

  v3 = (TESSoulGem *)OblivionDynamicCast( /*0x484c88*/
                       this->type,
                       0,
                       (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                       &TESSoulGem `RTTI Type Descriptor',
                       0);
  if ( !v3 || !v3->members.soul ) /*0x484c94*/
  {
    if ( !this->extendData ) /*0x484c9e*/
    {
      v4 = (tListVoid *)FormHeapAlloc(8u); /*0x484ca6*/
      if ( v4 ) /*0x484cb0*/
      {
        v4->node.data = 0; /*0x484cb2*/
        v4->node.next = 0; /*0x484cb8*/
      }
      else
      {
        v4 = 0; /*0x484cc1*/
      }
      this->extendData = v4; /*0x484cc3*/
    }
    for ( i = this->extendData; i; i = (tListVoid *)i->node.next ) /*0x484cc6*/
    {
      data = (ExtraDataList *)i->node.data; /*0x484cd0*/
      if ( !i->node.data ) /*0x484cd0*/
        break; /*0x484cd0*/
      if ( !ExtraDataList_GetExtraSoul((ExtraDataList *)i->node.data) ) /*0x484cdf*/
      {
        BaseExtraList_SetSoulLevel(data, soulLevel); /*0x484d14*/
        return; /*0x484d2b*/
      }
    }
    v7 = (_DWORD *)FormHeapAlloc(0x14u); /*0x484ce8*/
    if ( v7 ) /*0x484d00*/
      v8 = (ExtraDataList *)ExtraDataList_constr(v7); /*0x484d09*/
    else
      v8 = 0; /*0x484d2e*/
    BaseExtraList_SetSoulLevel(v8, soulLevel); /*0x484d3f*/
    BSSimpleList_PushFront(&this->extendData->node.data, (int)v8); /*0x484d48*/
  }
}
