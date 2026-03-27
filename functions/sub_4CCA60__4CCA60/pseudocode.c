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

  p_extraData = &this->members.extraData;
  v11 = &this->members.extraData;
  ExtraData = BaseExtraList_GetExtraData(&this->members.extraData, kExtraData_ProcessMiddleLow);
  if ( ExtraData )
    goto LABEL_16;
  if ( a2 )
  {
    v5 = (_BYTE *)FormHeapAlloc(0x10u);
    v6 = v5 ? (BSExtraData *)ExtraProcessMiddleLow_Constructor(v5) : 0;
    v10 = v6;
    ExtraData = v6;
    BaseExtraList_AddExtra(p_extraData, v6);
    sub_496EA0((char *)&stru_B35C80, this);
    p_objectList = &this->members.objectList;
    if ( this != (TESObjectCELL *)0xFFFFFFB8 )
    {
      do
      {
        if ( !p_objectList->refr )
          break;
        v8 = (Actor *)OblivionDynamicCast(
                        p_objectList->refr,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                        &MobileObject `RTTI Type Descriptor',
                        0);
        p_objectList = p_objectList->next;
        v9 = v8;
        if ( v8 )
        {
          if ( (v8->members.super.super.super.flags & 0x800) == 0 )
          {
            if ( v8->members.super.process )
            {
              if ( Actor::GetProcessLevel(v8) == 3 )
                v9->vtbl->super.Unk_6B((MobileObject *)v9);
            }
          }
        }
      }
      while ( p_objectList );
    }
    sub_496F50(&stru_B35C80, this);
    if ( v10 )
    {
      p_extraData = v11;
LABEL_16:
      if ( a2 )
        ++ExtraData[1].vtbl;
      else
        --ExtraData[1].vtbl;
      if ( !ExtraData[1].vtbl )
        BaseExtraList_RemoveExtraByPtr(p_extraData, (int)ExtraData, 1);
    }
  }
}
