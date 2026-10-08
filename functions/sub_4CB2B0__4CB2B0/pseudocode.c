// Verified barter-container sweep: iterates this cell's objectList, skips deleted/disabled refs, and calls TESObjectREFR_IsOwnedBy(reference, ownerActor, useFactionOwnership=false). It excludes the merchant container, copies supported owned item extra lists into new container entries, records the original reference, removes ownership from the copied inventory instance, and delegates owned container refs to ContainerExtraData handling. Fallout's TESObjectCELL::FillBarterContainer performs the analogous cell scan and also calls IsAnOwner(..., false); Fallout wraps the scan in its cell-reference lock, while Oblivion's caller manages its own container-change flow.
void __thiscall TESObjectCELL_AddOwnedReferencesToBarterContainer(
        TESObjectCELL *cell,
        TESObjectREFR *ownerActor,
        ExtraContainerChanges_Data *containerChanges)
{
  TESObjectCELL *v3; // edi
  TESObjectREFR *v4; // ebp
  ObjectListEntry *p_objectList; // ebx
  TESObjectREFR *refr; // esi
  _DWORD *v7; // ebx
  ExtraDataList *v8; // edi
  int v9; // eax
  EntryData *v10; // ebp
  tListVoid *v11; // eax
  _DWORD *v12; // eax
  signed __int16 ExtraCount; // ax
  int ***v14; // eax
  ObjectListEntry *next; // [esp+14h] [ebp-1Ch]
  BSExtraDataVtbl *MerchantContainer; // [esp+18h] [ebp-18h]

  v3 = cell; /*0x4cb2d7*/
  if ( containerChanges ) /*0x4cb2e2*/
  {
    v4 = ownerActor; /*0x4cb2e8*/
    if ( ownerActor ) /*0x4cb2ee*/
    {
      MerchantContainer = ExtraDataList_GetMerchantContainer(&ownerActor->member.baseExtraList); /*0x4cb302*/
      sub_496EA0((char *)&unk_B35C80, v3); /*0x4cb306*/
      p_objectList = &v3->members.objectList; /*0x4cb30b*/
      next = &v3->members.objectList; /*0x4cb310*/
      if ( v3 != (TESObjectCELL *)0xFFFFFFB8 ) /*0x4cb314*/
      {
        while ( 1 ) /*0x4cb324*/
        {
          refr = p_objectList->refr; /*0x4cb324*/
          if ( !p_objectList->refr ) /*0x4cb324*/
            break; /*0x4cb324*/
          if ( (refr->member.super.flags & 0x800) == 0 /*0x4cb360*/
            && (refr->member.super.flags & 0x20) == 0
            && TESObjectREFR_IsOwnedBy(refr, v4, 0)
            && refr != (TESObjectREFR *)MerchantContainer )
          {
            switch ( refr->vtbl->GetBaseForm(refr)->member.type ) /*0x4cb389*/
            {
              case kFormType_Apparatus: /*0x4cb389*/
              case kFormType_Armor: /*0x4cb389*/
              case kFormType_Book: /*0x4cb389*/
              case kFormType_Clothing: /*0x4cb389*/
              case kFormType_Ingredient: /*0x4cb389*/
              case kFormType_Light: /*0x4cb389*/
              case kFormType_Misc: /*0x4cb389*/
              case kFormType_Weapon: /*0x4cb389*/
              case kFormType_Ammo: /*0x4cb389*/
              case kFormType_SoulGem: /*0x4cb389*/
              case kFormType_Key: /*0x4cb389*/
              case kFormType_AlchemyItem: /*0x4cb389*/
                v7 = (_DWORD *)FormHeapAlloc(0xCu); /*0x4cb397*/
                v8 = 0; /*0x4cb3a0*/
                if ( v7 ) /*0x4cb3a8*/
                {
                  v9 = (int)refr->vtbl->GetBaseForm(refr); /*0x4cb3b5*/
                  v10 = (EntryData *)ContainerEntryExtraData_constr(v7, v9, 0); /*0x4cb3bf*/
                }
                else
                {
                  v10 = 0; /*0x4cb3c3*/
                }
                if ( !v10->extendData ) /*0x4cb3c8*/
                {
                  v11 = (tListVoid *)FormHeapAlloc(8u); /*0x4cb3d3*/
                  if ( v11 ) /*0x4cb3dd*/
                  {
                    v11->node.data = 0; /*0x4cb3df*/
                    v11->node.next = 0; /*0x4cb3e1*/
                  }
                  else
                  {
                    v11 = 0; /*0x4cb3e6*/
                  }
                  v10->extendData = v11; /*0x4cb3e8*/
                }
                v12 = (_DWORD *)FormHeapAlloc(0x14u); /*0x4cb3ed*/
                if ( v12 ) /*0x4cb403*/
                  v8 = (ExtraDataList *)ExtraDataList_constr(v12); /*0x4cb40c*/
                ExtraDataList_DuplicateListForContainer(v8, (int)&refr->member.baseExtraList); /*0x4cb418*/
                ExtraDataList_SetOriginalReferenceExtra(v8, refr); /*0x4cb420*/
                ExtraDataList_RemoveOwner(v8); /*0x4cb427*/
                BSSimpleList_PushFront(&v10->extendData->node.data, (int)v8); /*0x4cb430*/
                ExtraCount = ExtraDataList_GetExtraCount(&refr->member.baseExtraList); /*0x4cb437*/
                Shared_SetDwordAtOffset04(v10, ExtraCount); /*0x4cb442*/
                ContainerExtraData_AddEntry(containerChanges, v10, 1); /*0x4cb44e*/
                v3 = cell; /*0x4cb453*/
                v4 = ownerActor; /*0x4cb457*/
                p_objectList = next; /*0x4cb45b*/
                break; /*0x4cb45f*/
              case kFormType_Container: /*0x4cb389*/
                v14 = (int ***)ExtraDataList_GetContainerChanges(&refr->member.baseExtraList); /*0x4cb464*/
                sub_48E9A0(v14, containerChanges, (BSExtraDataVtbl *)refr, 0); /*0x4cb473*/
                break; /*0x4cb473*/
              default:
                break;
            }
          }
          next = p_objectList->next; /*0x4cb47d*/
          if ( !next ) /*0x4cb481*/
            break; /*0x4cb481*/
          p_objectList = p_objectList->next; /*0x4cb320*/
        }
      }
      sub_496F50(&unk_B35C80, v3); /*0x4cb48d*/
    }
  }
}
