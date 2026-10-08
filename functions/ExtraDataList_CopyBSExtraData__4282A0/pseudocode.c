// Verified extra-data copy lifecycle for ownership state: the copy dispatcher handles kExtraData_Ownership, kExtraData_Global, and kExtraData_Rank through their typed setters, creating/updating separate ExtraOwnership, ExtraGlobal, and ExtraRank payloads rather than sharing the source node.
void __thiscall ExtraDataList_CopyBSExtraData(ExtraDataList *this, BSExtraData *a2)
{
  ExtraCell3D *v3; // esi
  TeleportData *inited; // ebx
  UInt8 type; // cl
  ExtraCell3D *ExtraData; // ebp
  BSExtraData *v7; // eax
  BSExtraData *v8; // eax
  ExtraLockData *v9; // eax
  _DWORD *unk001; // esi
  BSExtraData *v11; // eax
  BSExtraData *v12; // eax
  BSExtraDataVtbl *v13; // ebp
  BSExtraDataVtbl *v14; // eax
  int *j; // esi
  _DWORD *k; // esi
  UInt32 i; // esi

  v3 = (ExtraCell3D *)a2; /*0x4282c6*/
  inited = 0; /*0x4282ca*/
  if ( a2 ) /*0x4282ce*/
  {
    if ( sub_41E340((int)a2) ) /*0x4282d5*/
    {
      type = v3->super.type; /*0x4282e2*/
      switch ( type ) /*0x4282fb*/
      {
        case kExtraData_Cell3D: /*0x4282fb*/
          ExtraDataList_SetCell3D(this, v3->unk001); /*0x42866a*/
          break; /*0x42866f*/
        case kExtraData_WaterHeight: /*0x4282fb*/
          ExtraDataList_SetWaterHeight(this, *(float *)&v3->unk001); /*0x42867d*/
          break; /*0x428682*/
        case kExtraData_CellWaterType: /*0x4282fb*/
          ExtraDataList_SetWaterType(this, (BSExtraDataVtbl *)v3->unk001); /*0x42868d*/
          break; /*0x428692*/
        case kExtraData_CellMusicType: /*0x4282fb*/
          ExtraDataList_SetCellMusicType(this, SLOBYTE(v3->unk001)); /*0x42869e*/
          break; /*0x4286a3*/
        case kExtraData_CellClimate: /*0x4282fb*/
          TESObjectCELL_SetInteriorClimate(this, (TESClimate *)v3->unk001);// Verified: ExtraDataList copy dispatcher handles kExtraData_CellClimate by reading the climate pointer from ExtraCellClimate payload and invoking TESObjectCELL_SetInteriorClimate to recreate/update the destination extra. /*0x4286d6*/
          break; /*0x4286db*/
        case kExtraData_CellCanopyShadowMask: /*0x4282fb*/
          sub_424440(this, (BSExtraDataVtbl *)v3->unk001, (Ni2DBuffer *)v3[1].vtbl, &a2); /*0x4286b7*/
          *(BSExtraDataMembr *)&a2->vtbl = v3[1].super; /*0x4286c3*/
          break; /*0x4286cb*/
        case kExtraData_Script: /*0x4282fb*/
          ExtraDataList_AddScript(this, v3->unk001); /*0x4284a1*/
          ExtraDataList_SetScriptEventList(this, (int)v3[1].vtbl); /*0x4284ac*/
          break; /*0x4284b1*/
        case kExtraData_Action: /*0x4282fb*/
          ExtraDataList_SetActionFlags(this, LOBYTE(v3->unk001)); /*0x42838c*/
          break; /*0x428391*/
        case kExtraData_DistantData: /*0x4282fb*/
          ExtraDataList_SetDistantDataNormal(this, (NiPoint3 *)&v3->unk001); /*0x4285e6*/
          break; /*0x4285eb*/
        case kExtraData_RagDollData: /*0x4282fb*/
          sub_424970(this, (const void **)v3->unk001); /*0x4285d6*/
          break; /*0x4285db*/
        case kExtraData_Worn: /*0x4282fb*/
          SetWorn(this, 1, 0); /*0x4283dc*/
          break; /*0x4283e1*/
        case kExtraData_WornLeft: /*0x4282fb*/
          SetWorn(this, 1, 1); /*0x4283fd*/
          break; /*0x428402*/
        case kExtraData_StartLocation: /*0x4282fb*/
          v13 = (BSExtraDataVtbl *)OblivionDynamicCast( /*0x4285a9*/
                                     (void *)v3->unk001,
                                     0,
                                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                     &TESWorldSpace `RTTI Type Descriptor',
                                     0);
          v14 = (BSExtraDataVtbl *)OblivionDynamicCast( /*0x4285b0*/
                                     (void *)v3->unk001,
                                     0,
                                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                     &TESObjectCELL `RTTI Type Descriptor',
                                     0);
          ExtraDataList_SetStartLocation(this, v13, v14, &v3[1].vtbl, *(float *)&v3[1].unk001); /*0x4285c6*/
          break; /*0x4285cb*/
        case kExtraData_Package: /*0x4282fb*/
          sub_4268B0( /*0x428708*/
            this,
            (TESPackage *)v3->unk001,
            (int)v3[1].vtbl,
            *(BSExtraData **)&v3[1].super.type,
            (char)v3[1].super.next,
            BYTE1(v3[1].super.next));
          break; /*0x42870d*/
        case kExtraData_TresPassPackage: /*0x4282fb*/
          ExtraDataList_SetTrespassPackageExtra(this, (BSExtraDataVtbl *)v3->unk001); /*0x428718*/
          break; /*0x42871d*/
        case kExtraData_RunOncePacks: /*0x4282fb*/
          for ( i = v3->unk001; i; i = *(_DWORD *)(i + 4) ) /*0x428727*/
          {
            if ( *(_DWORD *)i ) /*0x428730*/
              ExtraDataList_SetRunOnceExtraPackage(this, **(_DWORD **)i, *(_BYTE *)(*(_DWORD *)i + 4)); /*0x428740*/
          }
          break; /*0x42874a*/
        case kExtraData_ReferencePointer: /*0x4282fb*/
          ExtraDataList_SetReferencePointer(this, (TESObjectREFR *)v3->unk001); /*0x4286e6*/
          break; /*0x4286eb*/
        case kExtraData_Follower: /*0x4282fb*/
          for ( j = (int *)v3->unk001; j; j = (int *)j[1] ) /*0x4285f5*/
          {
            if ( !*j ) /*0x428600*/
              break; /*0x428604*/
            sub_424C50(this, *j); /*0x42860d*/
          }
          break; /*0x428617*/
        case kExtraData_LevCreaModifier: /*0x4282fb*/
          ExtraDataList_SetLevCreaModifier(this, (BSExtraDataVtbl *)v3->unk001); /*0x4287b4*/
          break; /*0x4287b9*/
        case kExtraData_OriginalReference: /*0x4282fb*/
        case kExtraData_BoundArmor|kExtraData_WaterHeight: /*0x4282fb*/
          ExtraDataList_SetOriginalReferenceExtra(this, (TESObjectREFR *)v3->unk001); /*0x428757*/
          break; /*0x42875c*/
        case kExtraData_Ownership: /*0x4282fb*/
          ExtraDataList::SetOrRemoveExtraOwnership(this, (TESForm *)v3->unk001); /*0x42839c*/
          break; /*0x4283a1*/
        case kExtraData_Global: /*0x4282fb*/
          ExtraDataList_SetGlobal(this, (TESGlobal *)v3->unk001); /*0x4283ac*/
          break; /*0x4283b1*/
        case kExtraData_Rank: /*0x4282fb*/
          ExtraDataList_SetRank(this, v3->unk001); /*0x4283bc*/
          break; /*0x4283c1*/
        case kExtraData_Count: /*0x4282fb*/
          ExtraDataList_SetExtraCount(this, LOWORD(v3->unk001)); /*0x4283cd*/
          break; /*0x4283d2*/
        case kExtraData_Health: /*0x4282fb*/
          ExtraDataList_SetHealthValue(this, COERCE_BSEXTRADATAVTBL_(*(float *)&v3->unk001)); /*0x428449*/
          break; /*0x42844e*/
        case kExtraData_Uses: /*0x4282fb*/
          ExtraDataList_SetUses(this, v3->unk001); /*0x42845a*/
          break; /*0x42845f*/
        case kExtraData_TimeLeft: /*0x4282fb*/
          ExtraDataList_SetTimeLeft(this, COERCE_BSEXTRADATAVTBL_(*(float *)&v3->unk001)); /*0x42846d*/
          break; /*0x428472*/
        case kExtraData_Charge: /*0x4282fb*/
          ExtraDataList_SetCharge(this, COERCE_BSEXTRADATAVTBL_(*(float *)&v3->unk001)); /*0x428480*/
          break; /*0x428485*/
        case kExtraData_Soul: /*0x4282fb*/
          BaseExtraList_SetSoulLevel(this, v3->unk001); /*0x428491*/
          break; /*0x428496*/
        case kExtraData_Lock: /*0x4282fb*/
          v9 = (ExtraLockData *)FormHeapAlloc(0xCu); /*0x4284cb*/
          if ( v9 ) /*0x4284d5*/
          {
            v9->level = 0; /*0x4284d7*/
            v9->key = 0; /*0x4284d9*/
            v9->flags = 0; /*0x4284dc*/
          }
          else
          {
            v9 = 0; /*0x4284e1*/
          }
          unk001 = (_DWORD *)v3->unk001; /*0x4284e3*/
          *(_DWORD *)&v9->level = *unk001; /*0x4284e8*/
          v9->key = (TESKey *)unk001[1]; /*0x4284ed*/
          *(_DWORD *)&v9->flags = unk001[2]; /*0x4284f6*/
          ExtraDataList_SetLock(this, v9);      // Verified ExtraLock copy case in ExtraDataList_CopyBSExtraData: allocates a fresh 12-byte ExtraLockData, copies the level byte, TESKey* pointer, and flags byte from the source payload, then installs the copy via ExtraDataList_SetLock. The key form pointer is shared; payload storage and ExtraLock wrapper are independent. /*0x4284f9*/
          break; /*0x4284fe*/
        case kExtraData_Teleport: /*0x4282fb*/
          v11 = (BSExtraData *)FormHeapAlloc(0x1Cu); /*0x428505*/
          a2 = v11; /*0x42850d*/
          if ( v11 ) /*0x42851b*/
            inited = TeleportData_InitSentinels((TeleportData *)v11); /*0x428524*/
          sub_42B4B0(inited, (_DWORD *)v3->unk001); /*0x428534*/
          ExtraDataList::SetTeleportData(this, inited); /*0x42853c*/
          break; /*0x428541*/
        case kExtraData_MapMarker: /*0x4282fb*/
          v12 = (BSExtraData *)FormHeapAlloc(0x10u); /*0x428548*/
          a2 = v12; /*0x428550*/
          if ( v12 ) /*0x42855e*/
            inited = (TeleportData *)MapMarkerData_ctor((MapMarkerData *)v12); /*0x428567*/
          sub_42B2A0(inited, v3->unk001); /*0x428577*/
          ExtraDataList_SetMapMarkerData(this, (MapMarkerData *)inited); /*0x42857f*/
          break; /*0x428584*/
        case kExtraData_LeveledItem: /*0x4282fb*/
          ExtraDataList_AddExtraLeveledItem(this, (BSExtraDataVtbl *)v3->unk001); /*0x42842a*/
          sub_41FF40(this, (UInt8)v3[1].vtbl); /*0x428436*/
          break; /*0x42843b*/
        case kExtraData_Scale: /*0x4282fb*/
          sub_423A30(this, *(float *)&v3->unk001); /*0x4284bf*/
          break; /*0x4284c4*/
        case kExtraData_Seed: /*0x4282fb*/
          ExtraDataList_SetOrRemoveTreeSeed(this, v3->unk001); /*0x42841a*/
          break; /*0x42841f*/
        case kExtraData_EnableStateParent: /*0x4282fb*/
          ExtraDataList_SetEnableStateParent(this, (BSExtraDataVtbl *)v3->unk001); /*0x428767*/
          ExtraDataList_SetEnableStateFlags(this, (UInt8)v3[1].vtbl); /*0x428773*/
          break; /*0x428778*/
        case kExtraData_RandomTeleportMarker: /*0x4282fb*/
          ExtraDataList_SetRandomTeleportMarker(this, (TESObjectREFR *)v3->unk001); /*0x428780*/
          break; /*0x428785*/
        case kExtraData_MerchantContainer: /*0x4282fb*/
          ExtraDataList_SetMerchantContainer(this, (BSExtraDataVtbl *)v3->unk001); /*0x42878d*/
          break; /*0x428792*/
        case kExtraData_CannotWear: /*0x4282fb*/
          ExtraDataList_SetCannotWear(this, 1); /*0x4287d1*/
          break; /*0x4287d6*/
        case kExtraData_Poison: /*0x4282fb*/
          ExtraDataList_SetPoison(this, (BSExtraDataVtbl *)v3->unk001); /*0x42865a*/
          break; /*0x42865f*/
        case kExtraData_XTarget: /*0x4282fb*/
          ExtraDataList_SetXTarget(this, (BSExtraDataVtbl *)v3->unk001); /*0x4287a7*/
          break; /*0x4287ac*/
        case kExtraData_FriendHitList: /*0x4282fb*/
          for ( k = (_DWORD *)v3->unk001; k; k = (_DWORD *)k[1] ) /*0x428623*/
          {
            if ( !*k ) /*0x428630*/
              break; /*0x428632*/
          }
          break; /*0x42863d*/
        case kExtraData_HeadingTarget: /*0x4282fb*/
          sub_423970(this, (BSExtraDataVtbl *)v3->unk001); /*0x42864a*/
          break; /*0x42864f*/
        case kExtraData_BoundArmor: /*0x4282fb*/
          ExtraDataList_AddBoundArmor(this); /*0x428409*/
          break; /*0x42840e*/
        case kExtraData_RefractionProperty: /*0x4282fb*/
          ExtraDataList_ToggleRefractionProperty(this, 1, *(float *)&v3->unk001); /*0x4287c6*/
          break; /*0x4287cb*/
        case kExtraData_QuickKey: /*0x4282fb*/
          sub_422BA0(this, v3->unk001); /*0x4283ed*/
          break; /*0x4283f2*/
        case kExtraData_EditorRefMoveData: /*0x4282fb*/
          ExtraData = (ExtraCell3D *)BaseExtraList_GetExtraData(this, kExtraData_EditorRefMoveData); /*0x42830b*/
          if ( !ExtraData ) /*0x42830f*/
          {
            v7 = (BSExtraData *)FormHeapAlloc(0x30u); /*0x428313*/
            a2 = v7; /*0x42831b*/
            if ( v7 ) /*0x428325*/
              v8 = (BSExtraData *)sub_42B090(v7, 0); /*0x42832a*/
            else
              v8 = 0; /*0x428331*/
            ExtraData = (ExtraCell3D *)v8; /*0x42833e*/
            BaseExtraList_AddExtra(this, v8); /*0x428340*/
          }
          ExtraData[2].super = v3[2].super; /*0x428348*/
          ExtraData[2].unk001 = v3[2].unk001; /*0x428354*/
          ExtraData->unk001 = v3->unk001; /*0x42835a*/
          ExtraData[1] = v3[1]; /*0x428360*/
          ExtraData[2].vtbl = v3[2].vtbl; /*0x42837d*/
          break; /*0x428380*/
        case kExtraData_TravelHorse: /*0x4282fb*/
          ExtraDataList_SetTravelHorse(this, (BSExtraDataVtbl *)v3->unk001); /*0x42879a*/
          break; /*0x42879f*/
        default:
          PrintError("No Copy function available for Extra Data type %i.", type); /*0x4287e1*/
          break; /*0x4287e1*/
      }
    }
  }
}
