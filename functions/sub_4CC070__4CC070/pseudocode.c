char __thiscall sub_4CC070(TESObjectCELL *this, _DWORD *a2)
{
  char result; // al
  ObjectListEntry *v4; // ebp
  ObjectListEntry *p_objectList; // esi
  TESObjectREFR *refr; // edi
  TESObjectREFR **TeleportExtraData; // eax
  TESObjectCELL *v8; // eax
  TESObjectCELL **v9; // esi
  TESObjectCELL *v10; // edi
  int v11; // [esp-10h] [ebp-24h]
  char v12; // [esp+Ah] [ebp-Ah]
  char v13; // [esp+Bh] [ebp-9h] BYREF
  _DWORD v14[2]; // [esp+Ch] [ebp-8h] BYREF

  result = 0; /*0x4cc07b*/
  v4 = 0; /*0x4cc07d*/
  v12 = 0; /*0x4cc081*/
  if ( a2 ) /*0x4cc085*/
  {
    NiTMap_SetAt(a2, (int)this, 1); /*0x4cc090*/
    sub_496EA0((char *)&unk_B35C80, this); /*0x4cc09b*/
    p_objectList = &this->members.objectList; /*0x4cc0a0*/
    v14[0] = 0; /*0x4cc0a5*/
    v14[1] = 0; /*0x4cc0a9*/
    if ( this != (TESObjectCELL *)0xFFFFFFB8 ) /*0x4cc0ad*/
    {
      do /*0x4cc0b3*/
      {
        if ( !p_objectList->next && !p_objectList->refr ) /*0x4cc0bc*/
          break; /*0x4cc0bc*/
        refr = p_objectList->refr; /*0x4cc0be*/
        if ( (PlayerCharacter *)p_objectList->refr == reference ) /*0x4cc0c6*/
        {
          v12 = 1; /*0x4cc125*/
        }
        else
        {
          if ( refr->vtbl->GetBaseForm(p_objectList->refr)->member.type == kFormType_Door ) /*0x4cc0d8*/
          {
            TeleportExtraData = (TESObjectREFR **)GetTeleportExtraData(refr); /*0x4cc0dc*/
            if ( TeleportExtraData ) /*0x4cc0e3*/
            {
              v8 = sub_42B460(TeleportExtraData); /*0x4cc0e7*/
              if ( v8 ) /*0x4cc0ee*/
              {
                if ( (v8->members.flags0 & 1) != 0 ) /*0x4cc0f4*/
                  BSSimpleList_PushFront(v14, (int)v8); /*0x4cc0fb*/
              }
            }
          }
          if ( sub_4D8E40(refr) ) /*0x4cc102*/
          {
            refr->vtbl->Unk_46(refr); /*0x4cc115*/
            if ( v4 ) /*0x4cc119*/
              p_objectList = v4->next; /*0x4cc11b*/
            else
              p_objectList = &this->members.objectList; /*0x4cc120*/
            continue; /*0x4cc11e*/
          }
        }
        v4 = p_objectList; /*0x4cc12a*/
        p_objectList = p_objectList->next; /*0x4cc12c*/
      }
      while ( p_objectList ); /*0x4cc0b3*/
    }
    sub_496F50(&unk_B35C80, this); /*0x4cc133*/
    v9 = (TESObjectCELL **)v14; /*0x4cc13e*/
    do /*0x4cc186*/
    {
      if ( !v9[1] && !*v9 ) /*0x4cc148*/
        break; /*0x4cc14b*/
      v10 = *v9; /*0x4cc14d*/
      v11 = (int)*v9; /*0x4cc158*/
      v13 = 0; /*0x4cc15b*/
      if ( !sub_4D6760(a2, v11, &v13) || !v13 ) /*0x4cc16e*/
      {
        if ( sub_4CC070(v10, a2) ) /*0x4cc173*/
          v12 = 1; /*0x4cc17c*/
      }
      v9 = (TESObjectCELL **)v9[1]; /*0x4cc181*/
    }
    while ( v9 ); /*0x4cc186*/
    BSSimpleList_Clear(v14); /*0x4cc18c*/
    return v12; /*0x4cc191*/
  }
  return result; /*0x4cc197*/
}
