void __thiscall sub_4CCA60(TESObjectCELL *this, char a2)
{
  ExtraDataList *p_extraData; // esi
  BSExtraData *ExtraData; // ebp
  _BYTE *v5; // eax
  BSExtraData *v6; // eax
  ObjectListEntry *p_objectList; // esi
  Actor *v8; // eax
  Actor *v9; // edi
  BSExtraData *v10; // [esp+14h] [ebp-14h]
  ExtraDataList *v11; // [esp+18h] [ebp-10h]

  p_extraData = &this->members.extraData; /*0x4cca89*/
  v11 = &this->members.extraData; /*0x4cca90*/
  ExtraData = BaseExtraList_GetExtraData(&this->members.extraData, kExtraData_ProcessMiddleLow); /*0x4cca99*/
  if ( ExtraData ) /*0x4cca9d*/
    goto LABEL_16; /*0x4cca9d*/
  if ( a2 )
  {
    v5 = (_BYTE *)FormHeapAlloc(0x10u); /*0x4ccaaf*/
    v6 = v5 ? (BSExtraData *)ExtraProcessMiddleLow_Constructor(v5) : 0;
    v10 = v6; /*0x4ccad1*/
    ExtraData = v6; /*0x4ccadd*/
    BaseExtraList_AddExtra(p_extraData, v6); /*0x4ccadf*/
    sub_496EA0((char *)&unk_B35C80, this); /*0x4ccaea*/
    p_objectList = &this->members.objectList; /*0x4ccaef*/
    if ( this != (TESObjectCELL *)0xFFFFFFB8 ) /*0x4ccaf4*/
    {
      do /*0x4ccb46*/
      {
        if ( !p_objectList->refr ) /*0x4ccaf6*/
          break; /*0x4ccafa*/
        v8 = (Actor *)OblivionDynamicCast( /*0x4ccb0b*/
                        p_objectList->refr,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                        &MobileObject `RTTI Type Descriptor',
                        0);
        p_objectList = p_objectList->next; /*0x4ccb10*/
        v9 = v8; /*0x4ccb13*/
        if ( v8 ) /*0x4ccb1a*/
        {
          if ( (v8->members.super.super.super.flags & 0x800) == 0 ) /*0x4ccb24*/
          {
            if ( v8->members.super.process ) /*0x4ccb26*/
            {
              if ( Actor::GetProcessLevel(v8) == 3 ) /*0x4ccb36*/
                v9->vtbl->super.MoveToMiddleLow((MobileObject *)v9); /*0x4ccb42*/
            }
          }
        }
      }
      while ( p_objectList ); /*0x4ccb46*/
    }
    sub_496F50(&unk_B35C80, this); /*0x4ccb4e*/
    if ( v10 ) /*0x4ccb58*/
    {
      p_extraData = v11; /*0x4ccb5a*/
LABEL_16:
      if ( a2 ) /*0x4ccb63*/
        ++ExtraData[1].vtbl; /*0x4ccb65*/
      else
        --ExtraData[1].vtbl; /*0x4ccb6b*/
      if ( !ExtraData[1].vtbl ) /*0x4ccb6f*/
        BaseExtraList_RemoveExtraByPtr(p_extraData, (int)ExtraData, 1); /*0x4ccb7a*/
    }
  }
}
