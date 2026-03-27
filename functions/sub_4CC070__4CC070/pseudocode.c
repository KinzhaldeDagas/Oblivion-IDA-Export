char __thiscall sub_4CC070(TESObjectCELL *this, _DWORD *a2)
{
  char result; // al
  ObjectListEntry *v4; // ebp
  ObjectListEntry *p_objectList; // esi
  TESObjectREFR *refr; // edi
  TESObjectREFR **TeleportExtraData; // eax
  TESObjectCELL *v8; // eax
  int *v9; // esi
  void *v10; // edi
  int v11; // [esp-10h] [ebp-24h]
  char v12; // [esp+Ah] [ebp-Ah]
  char v13; // [esp+Bh] [ebp-9h] BYREF
  _DWORD v14[2]; // [esp+Ch] [ebp-8h] BYREF

  result = 0;
  v4 = 0;
  v12 = 0;
  if ( a2 )
  {
    NiTMap_SetAt(a2, (int)this, 1);
    sub_496EA0((char *)&stru_B35C80, this);
    p_objectList = &this->members.objectList;
    v14[0] = 0;
    v14[1] = 0;
    if ( this != (TESObjectCELL *)0xFFFFFFB8 )
    {
      do
      {
        if ( !p_objectList->next && !p_objectList->refr )
          break;
        refr = p_objectList->refr;
        if ( (PlayerCharacter *)p_objectList->refr == TESDataHandler_g_PlayerRef )
        {
          v12 = 1;
        }
        else
        {
          if ( refr->vtbl->GetBaseForm(p_objectList->refr)->member.type == kFormType_Door )
          {
            TeleportExtraData = (TESObjectREFR **)GetTeleportExtraData(refr);
            if ( TeleportExtraData )
            {
              v8 = sub_42B460(TeleportExtraData);
              if ( v8 )
              {
                if ( (v8->members.flags0 & 1) != 0 )
                  BSSimpleList_PushFront(v14, (int)v8);
              }
            }
          }
          if ( sub_4D8E40(refr) )
          {
            refr->vtbl->Unk_46(refr);
            if ( v4 )
              p_objectList = v4->next;
            else
              p_objectList = &this->members.objectList;
            continue;
          }
        }
        v4 = p_objectList;
        p_objectList = p_objectList->next;
      }
      while ( p_objectList );
    }
    sub_496F50(&stru_B35C80, this);
    v9 = v14;
    do
    {
      if ( !v9[1] && !*v9 )
        break;
      v10 = (void *)*v9;
      v11 = *v9;
      v13 = 0;
      if ( !sub_4D6760(a2, v11, &v13) || !v13 )
      {
        if ( sub_4CC070(v10, a2) )
          v12 = 1;
      }
      v9 = (int *)v9[1];
    }
    while ( v9 );
    BSSimpleList_Clear(v14);
    return v12;
  }
  return result;
}
