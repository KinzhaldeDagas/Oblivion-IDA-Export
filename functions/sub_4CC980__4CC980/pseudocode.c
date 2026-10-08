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

  v3 = this; /*0x4cc988*/
  v4 = 0; /*0x4cc98a*/
  if ( a2 ) /*0x4cc992*/
  {
    if ( a2->vtbl->GetBaseForm(a2) == MEMORY[0xB33AA8] ) /*0x4cc9ab*/
    {
      sub_496EA0((char *)&unk_B35C80, v3); /*0x4cc9b8*/
      p_objectList = &v3->members.objectList; /*0x4cc9bd*/
      if ( v3 != (TESObjectCELL *)0xFFFFFFB8 ) /*0x4cc9c2*/
      {
        do /*0x4cca2c*/
        {
          refr = p_objectList->refr; /*0x4cc9c4*/
          if ( p_objectList->refr ) /*0x4cc9c4*/
          {
            flags = refr->member.super.flags; /*0x4cc9ca*/
            if ( (flags & 0x20) == 0 && (flags & 0x800) == 0 ) /*0x4cc9dc*/
            {
              type = refr->vtbl->GetBaseForm(p_objectList->refr)->member.type; /*0x4cc9ef*/
              if ( type == 0x1A ) /*0x4cc9f3*/
                v8 = (*(_DWORD *)&refr->vtbl->GetBaseForm(refr)[5].member.type & 2) == 0; /*0x4cca58*/
              else
                v8 = TESContainer_IsInventoryItemType(type) == 0; /*0x4cca02*/
              if ( !v8 ) /*0x4cca04*/
              {
                ExtraCount = ExtraDataList_GetExtraCount(&refr->member.baseExtraList); /*0x4cca0d*/
                TESObjectREFR_AddItemFromWorldReference(a2, refr, ExtraCount, 0, 0); /*0x4cca19*/
                sub_4D7D80(refr); /*0x4cca20*/
                v4 = 1; /*0x4cca25*/
              }
            }
          }
          p_objectList = p_objectList->next; /*0x4cca27*/
        }
        while ( p_objectList ); /*0x4cca2c*/
        v3 = this; /*0x4cca2e*/
      }
      sub_496F50(&unk_B35C80, v3); /*0x4cca38*/
    }
  }
  return v4; /*0x4cca3e*/
}
