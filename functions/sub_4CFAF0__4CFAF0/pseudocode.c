double __usercall sub_4CFAF0@<st0>(
        ExtraDataList *a1@<ecx>,
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
  BSExtraDataVtbl *DetachTime; // eax
  signed int v11; // edi
  int v12; // esi
  ObjectListEntry *p_objectList; // ebp
  TESObjectREFR *refr; // edi
  TESObjectREFR *v15; // eax
  TESObjectREFR *v16; // esi
  char v17; // al
  TESObjectREFRVtbl *vtbl; // edx
  BSExtraData *v19; // ebp
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

  v9 = (TESObjectCELL *)a1;
  if ( (SaveLoad_CurrentSavegame->flags & 0x800) == 0 )
  {
    DetachTime = ExtraDataList__GetDetachTime(a1 + 2);
    v11 = (signed int)DetachTime;
    if ( DetachTime )
    {
      v36 = 0;
      if ( DetachTime == (BSExtraDataVtbl *)0xFFFFFFFF )
      {
        v36 = 1;
      }
      else
      {
        v12 = 0x18 * TimeGlobals_GetGameDaysPassed(&TimeGlobals);
        result = TimeGlobals_GetGameHour(&TimeGlobals);
        __asm { fnstcw  word ptr [esp+34h+var_20] }
        LOWORD(a4[0]) = v37 | 0xC00;
        __asm
        {
          fldcw   word ptr [esp+34h+a4]
          fistp   qword ptr [esp+34h+a4]
        }
        __asm { fldcw   word ptr [esp+34h+var_20] }
        if ( LODWORD(a4[0]) + v12 - v11 <= (unsigned int)iHoursToRespawnCell )
        {
LABEL_48:
          sub_45A500(SaveLoad_CurrentSavegame);
          ExtraDataList__SetDetachTime(&v9->members.extraData, 0);
          return ((double (__thiscall *)(TESObjectCELL *, int))v9->vtbl->ClearModified)(v9, 0xE000000);
        }
      }
      sub_4CC660(v9, v11);
      sub_496EA0((char *)&stru_B35C80, v9);
      p_objectList = &v9->members.objectList;
      next = &v9->members.objectList;
      if ( v9 != (TESObjectCELL *)0xFFFFFFB8 )
      {
        while ( 1 )
        {
          if ( !p_objectList->next && !p_objectList->refr )
            goto LABEL_47;
          refr = p_objectList->refr;
          if ( !v36 || !TESDataHandler_IsFormIDCreated_(refr->member.super.refID) )
            break;
          if ( !((unsigned __int8 (__thiscall *)(TESObjectREFR *))refr->vtbl->super.Unk_1E)(refr) && !sub_4D9040(refr) )
            ((void (__thiscall *)(TESObjectREFR *, int))refr->vtbl->super.Unk_23)(refr, 1);
          next = p_objectList->next;
LABEL_46:
          if ( !next )
            goto LABEL_47;
          p_objectList = next;
        }
        v15 = (TESObjectREFR *)OblivionDynamicCast(
                                 refr,
                                 0,
                                 (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                                 &Actor `RTTI Type Descriptor',
                                 0);
        v16 = v15;
        if ( !v15 )
        {
          v30 = (unsigned __int8)refr->vtbl->GetBaseForm(refr)->member.type - 0x17;
          if ( v30 )
          {
            v31 = v30 - 2;
            if ( v31 )
            {
              if ( v31 == 6 )
                sub_46AA00(refr, 0);
            }
            else if ( (refr->member.super.flags & 0x20) != 0
                   && !TESForm_GetQuestItem((TESForm *)refr)
                   && !((unsigned __int8 (__thiscall *)(TESObjectREFR *))refr->vtbl->super.Unk_1E)(refr) )
            {
              v32 = refr->vtbl->GetBaseForm(refr);
              v33 = OblivionDynamicCast(
                      v32,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                      &IngredientItem `RTTI Type Descriptor',
                      0);
              if ( v33 )
              {
                if ( (v33[0x7C] & 2) != 0 )
                  ((void (__thiscall *)(TESObjectREFR *, _DWORD))refr->vtbl->super.Unk_23)(refr, 0);
              }
            }
          }
          else if ( TESObjectREFR::ShouldReferenceRespawn(refr) )
          {
            refr->vtbl->Unk_61(refr, 0);
            if ( ExtraDataList_GetContainerChanges(&refr->member.baseExtraList) )
            {
              ContainerChanges = ExtraDataList_GetContainerChanges(&refr->member.baseExtraList);
              if ( !sub_4491B0(ContainerChanges) )
                sub_4DBE40(refr);
            }
          }
          v35 = sub_4533F0(SaveLoad_CurrentSavegame, (int)refr, 0);
          if ( (v35 & 8) != 0 && (v35 & 6) == 0 )
          {
            TESSaveLoadGame_ClearFormModifier(SaveLoad_CurrentSavegame, (int)refr, 0x80000008);
            sub_45BB30((int)SaveLoad_CurrentSavegame, (char)v9, st5_0, a3, result, refr, 0);
          }
          goto LABEL_45;
        }
        v17 = sub_5E1D70(v15);
        vtbl = v16->vtbl;
        if ( v17 )
        {
          ((void (__thiscall *)(TESObjectREFR *, int, _DWORD, _DWORD))vtbl[1].super.Unk_19)(v16, 1, 0, 0);
          v19 = sub_420480(&v16->member.baseExtraList);
          if ( v19 )
          {
            while ( !BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)v19) )
            {
              v20 = v19->vtbl;
              sub_4203E0((ExtraDataList *)&v19->vtbl[8].CompareTo, 0);
              if ( !(*((unsigned __int8 (__thiscall **)(BSExtraDataVtbl *))v20->Destructor + 0x1E))(v20) )
                sub_4D6640(v20);
              v21 = *(BSExtraDataVtbl ***)&v19->members.type;
              if ( v21 )
              {
                *(_DWORD *)&v19->members.type = v21[1];
                v19->vtbl = *v21;
                FormHeapFree((unsigned int)v21);
                v9 = (TESObjectCELL *)a1;
              }
              else
              {
                v9 = (TESObjectCELL *)a1;
                v19->vtbl = 0;
              }
            }
            sub_4204A0(&v16->member.baseExtraList);
          }
          v16->vtbl->GetStartingPos(v16, a4);
          if ( (TESObjectCELL *)sub_5E1F60(v16) == v9
            || (sub_5E1F40((Actor *)v16), WorldSpace = TESObjectCELL_GetWorldSpace(v9), v24 == WorldSpace)
            && sub_4CC540(v23, a4) )
          {
            TESObjectREFR_SetPosition(v16, a4[0], a4[1], a4[2]);
            v25 = (int *)((int (__thiscall *)(TESObjectREFR *, char *))v16->vtbl->GetStartingAngle)(v16, v41);
            sub_4D89A0((int *)v16, *v25, v25[1], v25[2]);
          }
        }
        else
        {
          if ( !vtbl->IsDead(v16, 0) )
          {
LABEL_45:
            sub_4F9EC0(result, st5_0, a3, (int)refr, &refr->member.baseExtraList);
            result = Script_AddEventToExtraScript(refr, &refr->member.baseExtraList, 0x80000000);
            next = p_objectList->next;
            goto LABEL_46;
          }
          if ( !((unsigned __int8 (__thiscall *)(TESObjectREFR *))v16->vtbl->super.Unk_1E)(v16) && !sub_4D9040(v16) )
            sub_4D6640(v16);
          p_baseExtraList = &v16->member.baseExtraList;
          v27 = sub_420480(&v16->member.baseExtraList);
          if ( v27 )
          {
            while ( !BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)v27) )
            {
              v28 = v27->vtbl;
              sub_4203E0((ExtraDataList *)&v27->vtbl[8].CompareTo, 0);
              if ( !(*((unsigned __int8 (__thiscall **)(BSExtraDataVtbl *))v28->Destructor + 0x1E))(v28) )
                sub_4D6640(v28);
              v29 = *(BSExtraDataVtbl ***)&v27->members.type;
              if ( v29 )
              {
                *(_DWORD *)&v27->members.type = v29[1];
                v27->vtbl = *v29;
                FormHeapFree((unsigned int)v29);
              }
              else
              {
                v27->vtbl = 0;
              }
            }
            sub_4204A0(p_baseExtraList);
          }
          v9 = (TESObjectCELL *)a1;
        }
        p_objectList = next;
        goto LABEL_45;
      }
LABEL_47:
      sub_496F50(&stru_B35C80, v9);
      goto LABEL_48;
    }
  }
  return result;
}
