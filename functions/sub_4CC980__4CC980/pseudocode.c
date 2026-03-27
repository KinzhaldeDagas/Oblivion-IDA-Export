char __thiscall sub_4CC980(TESObjectCELL *this, TESObjectREFR *a2)
{
  TESObjectCELL *v3; // esi
  char v4; // bl
  ObjectListEntry *p_objectList; // edi
  TESObjectREFR *refr; // esi
  TESForm::FormFlags flags; // eax
  bool v8; // zf
  signed __int16 ExtraCount; // ax
  char type; // [esp+14h] [ebp+4h]

  v3 = this;
  v4 = 0;
  if ( a2 )
  {
    if ( a2->vtbl->GetBaseForm(a2) == TESDataHandler_g_LootBag )
    {
      sub_496EA0((char *)&stru_B35C80, v3);
      p_objectList = &v3->members.objectList;
      if ( v3 != (TESObjectCELL *)0xFFFFFFB8 )
      {
        do
        {
          refr = p_objectList->refr;
          if ( p_objectList->refr )
          {
            flags = refr->member.super.flags;
            if ( (flags & 0x20) == 0 && (flags & 0x800) == 0 )
            {
              type = refr->vtbl->GetBaseForm(p_objectList->refr)->member.type;
              if ( type == 0x1A )
                v8 = (*(_DWORD *)&refr->vtbl->GetBaseForm(refr)[5].member.type & 2) == 0;
              else
                v8 = TESContainer_IsInventoryItemType(type) == 0;
              if ( !v8 )
              {
                ExtraCount = ExtraDataList_GetExtraCount(&refr->member.baseExtraList);
                sub_4DDC40(a2, (int)refr, ExtraCount, 0, 0);
                sub_4D7D80(refr);
                v4 = 1;
              }
            }
          }
          p_objectList = p_objectList->next;
        }
        while ( p_objectList );
        v3 = this;
      }
      sub_496F50(&stru_B35C80, v3);
    }
  }
  return v4;
}
