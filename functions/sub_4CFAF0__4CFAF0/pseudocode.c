double __usercall sub_4CFAF0@<st0>(
        TESObjectCELL *a1@<ecx>,
        double result@<st0>,
        double a3@<st1>,
        double st5_0@<st2>,
        double a5@<st3>,
        double a6@<st4>,
        double a7@<st5>,
        double a8@<st6>,
        double a9@<st7>)
{
  TESObjectCELL *v9; // ebx
  unsigned int DetachTime; // eax
  signed int v11; // edi
  int v12; // esi
  ObjectListEntry *p_objectList; // ebp
  TESObjectREFR *refr; // edi
  TESObjectREFR *v15; // eax
  TESObjectREFR *v16; // esi
  bool v17; // al
  TESObjectREFRVtbl *vtbl; // edx
  BSExtraData *DroppedItemList; // ebp
  BSExtraDataVtbl *v20; // ebx
  BSExtraDataVtbl **v21; // eax
  TESWorldSpace *WorldSpace; // eax
  int v23; // ecx
  TESWorldSpace *v24; // edx
  int *v25; // eax
  ExtraDataList *p_baseExtraList; // ebx
  BSExtraData *v27; // esi
  BSExtraDataVtbl *v28; // ebp
  BSExtraDataVtbl **v29; // eax
  int v30; // eax
  int v31; // eax
  TESForm *v32; // eax
  _BYTE *v33; // eax
  ExtraContainerChanges_Data *ContainerChanges; // eax
  char v35; // al
  char v36; // [esp+13h] [ebp-21h]
  __int16 v37; // [esp+14h] [ebp-20h]
  ObjectListEntry *next; // [esp+14h] [ebp-20h]
  float a4[3]; // [esp+1Ch] [ebp-18h] BYREF
  char v41[12]; // [esp+28h] [ebp-Ch] BYREF

  v9 = a1; /*0x4cfaf9*/
  if ( (g_TESSaveLoadGame->flags & 0x800) == 0 ) /*0x4cfb0b*/
  {
    DetachTime = ExtraDataList_GetDetachTime(&a1->members.extraData); /*0x4cfb14*/
    v11 = DetachTime; /*0x4cfb19*/
    if ( DetachTime ) /*0x4cfb1d*/
    {
      v36 = 0; /*0x4cfb26*/
      if ( DetachTime == 0xFFFFFFFF ) /*0x4cfb2b*/
      {
        v36 = 1; /*0x4cfb2d*/
      }
      else
      {
        v12 = 0x18 * TimeGlobals_GetGameDaysPassed(&MEMORY[0xB332E0]); /*0x4cfb4a*/
        result = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]); /*0x4cfb4c*/
        __asm { fnstcw  word ptr [esp+34h+var_20] } /*0x4cfb51*/
        LOWORD(a4[0]) = v37 | 0xC00; /*0x4cfb5f*/
        __asm /*0x4cfb63*/
        {
          fldcw   word ptr [esp+34h+a4]
          fistp   qword ptr [esp+34h+a4]
        }
        __asm { fldcw   word ptr [esp+34h+var_20] }
        if ( (const char *)(LODWORD(a4[0]) + v12 - v11) <= MEMORY[0xB35C1C].value ) /*0x4cfb7d*/
        {
LABEL_48:
          sub_45A500(g_TESSaveLoadGame); /*0x4cfe35*/
          ExtraDataList_SetDetachTime(&v9->members.extraData, 0); /*0x4cfe45*/
          return ((double (__thiscall *)(TESObjectCELL *, int))v9->vtbl->ClearModified)(v9, 0xE000000); /*0x4cfe56*/
        }
      }
      sub_4CC660(v9, v11); /*0x4cfb85*/
      sub_496EA0((char *)&unk_B35C80, v9); /*0x4cfb90*/
      p_objectList = &v9->members.objectList; /*0x4cfb95*/
      next = &v9->members.objectList; /*0x4cfb9a*/
      if ( v9 != (TESObjectCELL *)0xFFFFFFB8 ) /*0x4cfb9e*/
      {
        while ( 1 ) /*0x4cfbaa*/
        {
          if ( !p_objectList->next && !p_objectList->refr ) /*0x4cfbb4*/
            goto LABEL_47; /*0x4cfbb4*/
          refr = p_objectList->refr; /*0x4cfbbf*/
          if ( !v36 || !TESDataHandler_IsFormIDCreated_(refr->member.super.refID) ) /*0x4cfbce*/
            break; /*0x4cfbce*/
          if ( !((unsigned __int8 (__thiscall *)(TESObjectREFR *))refr->vtbl->super.Unk_1E)(refr) && !sub_4D9040(refr) ) /*0x4cfbe6*/
            ((void (__thiscall *)(TESObjectREFR *, int))refr->vtbl->super.Unk_23)(refr, 1); /*0x4cfbfb*/
          next = p_objectList->next; /*0x4cfc00*/
LABEL_46:
          if ( !next ) /*0x4cfe24*/
            goto LABEL_47; /*0x4cfe24*/
          p_objectList = next; /*0x4cfba6*/
        }
        v15 = (TESObjectREFR *)OblivionDynamicCast( /*0x4cfc18*/
                                 refr,
                                 0,
                                 (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                                 &Actor `RTTI Type Descriptor',
                                 0);
        v16 = v15; /*0x4cfc1d*/
        if ( !v15 ) /*0x4cfc24*/
        {
          v30 = (unsigned __int8)refr->vtbl->GetBaseForm(refr)->member.type - 0x17; /*0x4cfe70*/
          if ( v30 ) /*0x4cfe73*/
          {
            v31 = v30 - 2; /*0x4cfe79*/
            if ( v31 ) /*0x4cfe7c*/
            {
              if ( v31 == 6 ) /*0x4cfe81*/
                sub_46AA00(refr, 0); /*0x4cfe8b*/
            }
            else if ( (refr->member.super.flags & 0x20) != 0 /*0x4cfeb9*/
                   && !TESForm_GetQuestItem((TESForm *)refr)
                   && !((unsigned __int8 (__thiscall *)(TESObjectREFR *))refr->vtbl->super.Unk_1E)(refr) )
            {
              v32 = refr->vtbl->GetBaseForm(refr); /*0x4cfed7*/
              v33 = OblivionDynamicCast( /*0x4cfeda*/
                      v32,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                      &IngredientItem `RTTI Type Descriptor',
                      0);
              if ( v33 ) /*0x4cfee4*/
              {
                if ( (v33[0x7C] & 2) != 0 ) /*0x4cfeea*/
                  ((void (__thiscall *)(TESObjectREFR *, _DWORD))refr->vtbl->super.Unk_23)(refr, 0); /*0x4cfef8*/
              }
            }
          }
          else if ( TESObjectREFR::ShouldReferenceRespawn(refr) ) /*0x4cfefe*/
          {
            refr->vtbl->Unk_61(refr, 0); /*0x4cff13*/
            if ( ExtraDataList_GetContainerChanges(&refr->member.baseExtraList) ) /*0x4cff1a*/
            {
              ContainerChanges = ExtraDataList_GetContainerChanges(&refr->member.baseExtraList); /*0x4cff25*/
              if ( !sub_4491B0(ContainerChanges) ) /*0x4cff2c*/
                TESObjectREFR_SetLockedFlagOnSelfOrLinkedDoor(refr); /*0x4cff37*/
            }
          }
          v35 = sub_4533F0(g_TESSaveLoadGame, (int)refr, 0); /*0x4cff45*/
          if ( (v35 & 8) != 0 && (v35 & 6) == 0 ) /*0x4cff54*/
          {
            TESSaveLoadGame_ClearFormModifier(g_TESSaveLoadGame, (int)refr, 0x80000008); /*0x4cff66*/
            sub_45BB30((int)g_TESSaveLoadGame, (char)v9, st5_0, a3, result, refr, 0); /*0x4cff74*/
          }
          goto LABEL_45; /*0x4cff79*/
        }
        v17 = sub_5E1D70(v15); /*0x4cfc2c*/
        vtbl = v16->vtbl; /*0x4cfc33*/
        if ( v17 ) /*0x4cfc39*/
        {
          ((void (__thiscall *)(TESObjectREFR *, int, _DWORD, _DWORD))vtbl[1].super.Unk_19)(v16, 1, 0, 0); /*0x4cfc49*/
          DroppedItemList = ExtraDataList_GetDroppedItemList(&v16->member.baseExtraList); /*0x4cfc53*/
          if ( DroppedItemList ) /*0x4cfc57*/
          {
            while ( !BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)DroppedItemList) ) /*0x4cfc69*/
            {
              v20 = DroppedItemList->vtbl; /*0x4cfc6b*/
              ExtraDataList_SetItemDropper((ExtraDataList *)&DroppedItemList->vtbl[8].CompareTo, 0); /*0x4cfc73*/
              if ( !(*((unsigned __int8 (__thiscall **)(BSExtraDataVtbl *))v20->Destructor + 0x1E))(v20) ) /*0x4cfc7f*/
                sub_4D6640(v20); /*0x4cfc87*/
              v21 = *(BSExtraDataVtbl ***)&DroppedItemList->members.type; /*0x4cfc8c*/
              if ( v21 ) /*0x4cfc91*/
              {
                *(_DWORD *)&DroppedItemList->members.type = v21[1]; /*0x4cfc96*/
                DroppedItemList->vtbl = *v21; /*0x4cfc9c*/
                FormHeapFree((unsigned int)v21); /*0x4cfc9f*/
                v9 = a1; /*0x4cfca4*/
              }
              else
              {
                v9 = a1; /*0x4cfcad*/
                DroppedItemList->vtbl = 0; /*0x4cfcb1*/
              }
            }
            ExtraDataList_RemoveDroppedItemList(&v16->member.baseExtraList); /*0x4cfcbd*/
          }
          v16->vtbl->GetStartingPos(v16, a4); /*0x4cfcd1*/
          if ( (TESObjectCELL *)sub_5E1F60(v16) == v9 /*0x4cfcfb*/
            || (sub_5E1F40((Actor *)v16), WorldSpace = TESObjectCELL_GetWorldSpace(v9), v24 == WorldSpace)
            && sub_4CC540(v23, a4) )
          {
            TESObjectREFR_SetPosition(v16, a4[0], a4[1], a4[2]); /*0x4cfd23*/
            v25 = (int *)((int (__thiscall *)(TESObjectREFR *, char *))v16->vtbl->GetStartingAngle)(v16, v41); /*0x4cfd37*/
            sub_4D89A0((int *)v16, *v25, v25[1], v25[2]); /*0x4cfd50*/
          }
        }
        else
        {
          if ( !vtbl->IsDead(v16, 0) ) /*0x4cfd64*/
          {
LABEL_45:
            sub_4F9EC0(result, st5_0, a3, (int)refr, &refr->member.baseExtraList); /*0x4cfdff*/
            result = Script_AddEventToExtraScript(refr, &refr->member.baseExtraList, 0x80000000); /*0x4cfe10*/
            next = p_objectList->next; /*0x4cfe1b*/
            goto LABEL_46; /*0x4cfe1b*/
          }
          if ( !((unsigned __int8 (__thiscall *)(TESObjectREFR *))v16->vtbl->super.Unk_1E)(v16) && !sub_4D9040(v16) ) /*0x4cfd79*/
            sub_4D6640(v16); /*0x4cfd84*/
          p_baseExtraList = &v16->member.baseExtraList; /*0x4cfd89*/
          v27 = ExtraDataList_GetDroppedItemList(&v16->member.baseExtraList); /*0x4cfd93*/
          if ( v27 ) /*0x4cfd97*/
          {
            while ( !BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)v27) ) /*0x4cfda9*/
            {
              v28 = v27->vtbl; /*0x4cfdab*/
              ExtraDataList_SetItemDropper((ExtraDataList *)&v27->vtbl[8].CompareTo, 0); /*0x4cfdb2*/
              if ( !(*((unsigned __int8 (__thiscall **)(BSExtraDataVtbl *))v28->Destructor + 0x1E))(v28) ) /*0x4cfdbf*/
                sub_4D6640(v28); /*0x4cfdc7*/
              v29 = *(BSExtraDataVtbl ***)&v27->members.type; /*0x4cfdcc*/
              if ( v29 ) /*0x4cfdd1*/
              {
                *(_DWORD *)&v27->members.type = v29[1]; /*0x4cfdd6*/
                v27->vtbl = *v29; /*0x4cfddc*/
                FormHeapFree((unsigned int)v29); /*0x4cfdde*/
              }
              else
              {
                v27->vtbl = 0; /*0x4cfde8*/
              }
            }
            ExtraDataList_RemoveDroppedItemList(p_baseExtraList); /*0x4cfdf2*/
          }
          v9 = a1; /*0x4cfdf7*/
        }
        p_objectList = next; /*0x4cfdfb*/
        goto LABEL_45; /*0x4cfdfb*/
      }
LABEL_47:
      sub_496F50(&unk_B35C80, v9); /*0x4cfe2a*/
      goto LABEL_48; /*0x4cfe30*/
    }
  }
  return result; /*0x4cfe58*/
}
