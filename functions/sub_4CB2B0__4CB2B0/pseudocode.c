void __thiscall sub_4CB2B0(TESObjectCELL *this, PlayerCharacter *a2, float *a3)
{
  TESObjectCELL *v3; // edi
  PlayerCharacter *v4; // ebp
  ObjectListEntry *p_objectList; // ebx
  TESObjectREFR *refr; // esi
  _DWORD *v7; // ebx
  ExtraDataList *v8; // edi
  int v9; // eax
  int *v10; // ebp
  _DWORD *v11; // eax
  _DWORD *v12; // eax
  signed __int16 ExtraCount; // ax
  int ***ContainerChanges; // eax
  int v15; // [esp+0h] [ebp-30h]
  int v16; // [esp+4h] [ebp-2Ch]
  int v17; // [esp+8h] [ebp-28h]
  int v18; // [esp+Ch] [ebp-24h]
  int v19; // [esp+10h] [ebp-20h]
  ObjectListEntry *next; // [esp+14h] [ebp-1Ch]
  BSExtraDataVtbl *v21; // [esp+18h] [ebp-18h]

  v3 = this;
  if ( a3 )
  {
    v4 = a2;
    if ( a2 )
    {
      v21 = sub_420680(&a2->super.super.super.super.baseExtraList);
      sub_496EA0((char *)&stru_B35C80, v3);
      p_objectList = &v3->members.objectList;
      next = &v3->members.objectList;
      if ( v3 != (TESObjectCELL *)0xFFFFFFB8 )
      {
        while ( 1 )
        {
          refr = p_objectList->refr;
          if ( !p_objectList->refr )
            break;
          if ( (refr->member.super.flags & 0x800) == 0 && (refr->member.super.flags & 0x20) == 0 )
          {
            if ( TESOBjectREFR_IsOwnedBy(refr, v4, 0) )
            {
              if ( refr != (TESObjectREFR *)v21 )
              {
                switch ( refr->vtbl->GetBaseForm(refr)->member.type )
                {
                  case kFormType_Apparatus:
                  case kFormType_Armor:
                  case kFormType_Book:
                  case kFormType_Clothing:
                  case kFormType_Ingredient:
                  case kFormType_Light:
                  case kFormType_Misc:
                  case kFormType_Weapon:
                  case kFormType_Ammo:
                  case kFormType_SoulGem:
                  case kFormType_Key:
                  case kFormType_AlchemyItem:
                    v7 = (_DWORD *)FormHeapAlloc(0xCu);
                    v8 = 0;
                    if ( v7 )
                    {
                      v9 = (int)refr->vtbl->GetBaseForm(refr);
                      v10 = ContainerEntryExtraData_constr(v7, v9, 0);
                    }
                    else
                    {
                      v10 = 0;
                    }
                    if ( !*v10 )
                    {
                      v11 = (_DWORD *)FormHeapAlloc(8u);
                      if ( v11 )
                      {
                        *v11 = 0;
                        v11[1] = 0;
                      }
                      else
                      {
                        v11 = 0;
                      }
                      *v10 = (int)v11;
                    }
                    v12 = (_DWORD *)FormHeapAlloc(0x14u);
                    if ( v12 )
                      v8 = (ExtraDataList *)ExtraDataList_constr(v12);
                    ExtraDataList_DuplicateListForContainer(v8, (int)&refr->member.baseExtraList);
                    sub_41E710(v8, (BSExtraDataVtbl *)refr);
                    ExtraDataList_RemoveOwner(v8);
                    BSSimpleList_PushFront((_DWORD *)*v10, (int)v8);
                    ExtraCount = ExtraDataList_GetExtraCount(&refr->member.baseExtraList);
                    sub_60D020(v10, ExtraCount);
                    ContainerExtraData_AddEntry(a3, v10, 1, v15, v16, v17, v18, v19);
                    v3 = this;
                    v4 = a2;
                    p_objectList = next;
                    break;
                  case kFormType_Container:
                    ContainerChanges = (int ***)ExtraDataList_GetContainerChanges(&refr->member.baseExtraList);
                    sub_48E9A0(ContainerChanges, a3, (BSExtraDataVtbl *)refr, 0);
                    break;
                  default:
                    break;
                }
              }
            }
          }
          next = p_objectList->next;
          if ( !next )
            break;
          p_objectList = p_objectList->next;
        }
      }
      sub_496F50(&stru_B35C80, v3);
    }
  }
}
