void __thiscall ExtraDataList_CopyBSExtraData(ExtraDataList *this, BSExtraData *a2)
{
  ExtraCell3D *v3; // esi
  TeleportData *v4; // ebx
  UInt8 type; // cl
  ExtraCell3D *ExtraData; // ebp
  BSExtraData *v7; // eax
  BSExtraData *v8; // eax
  int v9; // eax
  _DWORD *unk001; // esi
  BSExtraData *v11; // eax
  BSExtraData *v12; // eax
  BSExtraDataVtbl *v13; // ebp
  BSExtraDataVtbl *v14; // eax
  int *j; // esi
  _DWORD *k; // esi
  UInt32 i; // esi

  v3 = (ExtraCell3D *)a2;
  v4 = 0;
  if ( a2 )
  {
    if ( sub_41E340((int)a2) )
    {
      type = v3->super.type;
      switch ( type )
      {
        case kExtraData_Cell3D:
          ExtraDataList_SetCell3D(this, v3->unk001);
          break;
        case kExtraData_WaterHeight:
          sub_423FF0(this, *(float *)&v3->unk001);
          break;
        case kExtraData_CellWaterType:
          sub_4204E0(this, (BSExtraDataVtbl *)v3->unk001);
          break;
        case kExtraData_CellMusicType:
          sub_4242C0(this, SLOBYTE(v3->unk001));
          break;
        case kExtraData_CellClimate:
          TESObjectCELL_SetInteriorClimate(this, (BSExtraDataVtbl *)v3->unk001);
          break;
        case kExtraData_CellCanopyShadowMask:
          sub_424440(this, (BSExtraDataVtbl *)v3->unk001, (Ni2DBuffer *)v3[1].vtbl, &a2);
          *(BSExtraDataMembr *)&a2->vtbl = v3[1].super;
          break;
        case kExtraData_Script:
          ExtraDataList_AddScript(this, v3->unk001);
          ExtraDataList_SetScriptEventList(this, (int)v3[1].vtbl);
          break;
        case kExtraData_Action:
          sub_423DA0(this, LOBYTE(v3->unk001));
          break;
        case kExtraData_DistantData:
          sub_420100(this, (BSExtraDataVtbl **)&v3->unk001);
          break;
        case kExtraData_RagDollData:
          sub_424970(this, (const void **)v3->unk001);
          break;
        case kExtraData_Worn:
          SetWorn(this, 1, 0);
          break;
        case kExtraData_WornLeft:
          SetWorn(this, 1, 1);
          break;
        case kExtraData_StartLocation:
          v13 = (BSExtraDataVtbl *)OblivionDynamicCast(
                                     (void *)v3->unk001,
                                     0,
                                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                     &TESWorldSpace `RTTI Type Descriptor',
                                     0);
          v14 = (BSExtraDataVtbl *)OblivionDynamicCast(
                                     (void *)v3->unk001,
                                     0,
                                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                     &TESObjectCELL `RTTI Type Descriptor',
                                     0);
          sub_41F4C0(this, v13, v14, &v3[1].vtbl, *(float *)&v3[1].unk001);
          break;
        case kExtraData_Package:
          sub_4268B0(
            this,
            (TESPackage *)v3->unk001,
            (int)v3[1].vtbl,
            *(BSExtraData **)&v3[1].super.type,
            (char)v3[1].super.next,
            BYTE1(v3[1].super.next));
          break;
        case kExtraData_TresPassPackage:
          sub_41FBC0(this, (BSExtraDataVtbl *)v3->unk001);
          break;
        case kExtraData_RunOncePacks:
          for ( i = v3->unk001; i; i = *(_DWORD *)(i + 4) )
          {
            if ( *(_DWORD *)i )
              sub_41FFC0(this, **(_DWORD **)i, *(_BYTE *)(*(_DWORD *)i + 4));
          }
          break;
        case kExtraData_ReferencePointer:
          ExtraDataList_SetReferencePointer(this, (TESObjectREFR *)v3->unk001);
          break;
        case kExtraData_Follower:
          for ( j = (int *)v3->unk001; j; j = (int *)j[1] )
          {
            if ( !*j )
              break;
            sub_424C50(this, *j);
          }
          break;
        case kExtraData_LevCreaModifier:
          sub_420780(this, (BSExtraDataVtbl *)v3->unk001);
          break;
        case kExtraData_OriginalReference:
        case kExtraData_BoundArmor|kExtraData_WaterHeight:
          sub_41E710(this, (BSExtraDataVtbl *)v3->unk001);
          break;
        case kExtraData_Ownership:
          ExtraDataList::SetOrRemoveExtraOwnership(this, (TESForm *)v3->unk001);
          break;
        case kExtraData_Global:
          sub_423720(this, (BSExtraDataVtbl *)v3->unk001);
          break;
        case kExtraData_Rank:
          sub_4237E0(this, (BSExtraDataVtbl *)v3->unk001);
          break;
        case kExtraData_Count:
          ExtraDataList_SetExtraCount(this, LOWORD(v3->unk001));
          break;
        case kExtraData_Health:
          ExtraDataList_SetHealthValue(this, COERCE_BSEXTRADATAVTBL_(*(float *)&v3->unk001));
          break;
        case kExtraData_Uses:
          ExtraDataList_SetUses(this, v3->unk001);
          break;
        case kExtraData_TimeLeft:
          sub_41EDF0(this, COERCE_BSEXTRADATAVTBL_(*(float *)&v3->unk001));
          break;
        case kExtraData_Charge:
          sub_41EE90(this, COERCE_BSEXTRADATAVTBL_(*(float *)&v3->unk001));
          break;
        case kExtraData_Soul:
          BaseExtraList_SetSoulLevel(this, v3->unk001);
          break;
        case kExtraData_Lock:
          v9 = FormHeapAlloc(0xCu);
          if ( v9 )
          {
            *(_BYTE *)v9 = 0;
            *(_DWORD *)(v9 + 4) = 0;
            *(_BYTE *)(v9 + 8) = 0;
          }
          else
          {
            v9 = 0;
          }
          unk001 = (_DWORD *)v3->unk001;
          *(_DWORD *)v9 = *unk001;
          *(_DWORD *)(v9 + 4) = unk001[1];
          *(_DWORD *)(v9 + 8) = unk001[2];
          sub_41EAF0(this, v9);
          break;
        case kExtraData_Teleport:
          v11 = (BSExtraData *)FormHeapAlloc(0x1Cu);
          a2 = v11;
          if ( v11 )
            v4 = sub_42B590((TeleportData *)v11);
          sub_42B4B0(v4, (_DWORD *)v3->unk001);
          ExtraDataList::SetTeleportData(this, v4);
          break;
        case kExtraData_MapMarker:
          v12 = (BSExtraData *)FormHeapAlloc(0x10u);
          a2 = v12;
          if ( v12 )
            v4 = (TeleportData *)sub_42B3F0(v12);
          sub_42B2A0(v4, v3->unk001);
          sub_423590(this, (BSExtraDataVtbl *)v4);
          break;
        case kExtraData_LeveledItem:
          ExtraDataList_AddExtraLeveledItem(this, (BSExtraDataVtbl *)v3->unk001);
          sub_41FF40(this, (UInt8)v3[1].vtbl);
          break;
        case kExtraData_Scale:
          sub_423A30(this, *(float *)&v3->unk001);
          break;
        case kExtraData_Seed:
          sub_423BD0(this, v3->unk001);
          break;
        case kExtraData_EnableStateParent:
          sub_420280(this, (BSExtraDataVtbl *)v3->unk001);
          sub_420380(this, (UInt8)v3[1].vtbl);
          break;
        case kExtraData_RandomTeleportMarker:
          sub_4205C0(this, (BSExtraDataVtbl *)v3->unk001);
          break;
        case kExtraData_MerchantContainer:
          sub_4206A0(this, (BSExtraDataVtbl *)v3->unk001);
          break;
        case kExtraData_CannotWear:
          sub_41F370(this, 1);
          break;
        case kExtraData_Poison:
          sub_41EFD0(this, (BSExtraDataVtbl *)v3->unk001);
          break;
        case kExtraData_XTarget:
          sub_420D40(this, (BSExtraDataVtbl *)v3->unk001);
          break;
        case kExtraData_FriendHitList:
          for ( k = (_DWORD *)v3->unk001; k; k = (_DWORD *)k[1] )
          {
            if ( !*k )
              break;
          }
          break;
        case kExtraData_HeadingTarget:
          sub_423970(this, (BSExtraDataVtbl *)v3->unk001);
          break;
        case kExtraData_BoundArmor:
          sub_41F2F0(this);
          break;
        case kExtraData_RefractionProperty:
          ExtraDataList_ToggleRefractionProperty(this, 1, *(float *)&v3->unk001);
          break;
        case kExtraData_QuickKey:
          sub_422BA0(this, v3->unk001);
          break;
        case kExtraData_EditorRefMoveData:
          ExtraData = (ExtraCell3D *)BaseExtraList_GetExtraData(this, kExtraData_EditorRefMoveData);
          if ( !ExtraData )
          {
            v7 = (BSExtraData *)FormHeapAlloc(0x30u);
            a2 = v7;
            if ( v7 )
              v8 = (BSExtraData *)sub_42B090(v7, 0);
            else
              v8 = 0;
            ExtraData = (ExtraCell3D *)v8;
            BaseExtraList_AddExtra(this, v8);
          }
          ExtraData[2].super = v3[2].super;
          ExtraData[2].unk001 = v3[2].unk001;
          ExtraData->unk001 = v3->unk001;
          ExtraData[1] = v3[1];
          ExtraData[2].vtbl = v3[2].vtbl;
          break;
        case kExtraData_TravelHorse:
          sub_420860(this, (BSExtraDataVtbl *)v3->unk001);
          break;
        default:
          PrintError("No Copy function available for Extra Data type %i.", type);
          break;
      }
    }
  }
}
