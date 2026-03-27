int __userpurge sub_5D22C0@<eax>(
        int a1@<ecx>,
        double st5_0@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        int a5,
        _DWORD *a6)
{
  int v8; // esi
  char *v9; // ecx
  TESForm *v10; // eax
  EntryData *InventoryEntryOfItem; // esi
  char *v12; // ecx
  double Float; // st7
  int v14; // eax
  ExtraDataList **extendData; // eax
  tListVoid *v16; // eax
  int type; // ebx
  ExtraDataList **v18; // eax
  ExtraDataList *v19; // ebp
  _DWORD *v20; // eax
  ExtraDataList *v21; // edi
  bool v22; // zf
  tListVoid *v23; // eax
  int v24; // eax
  ExtraDataList *v25; // ebx
  _DWORD *v26; // eax
  ExtraDataList *v27; // edi
  double HealthData; // st7
  int v29; // eax
  double v30; // st7
  double v31; // st7
  int v32; // eax
  int v33; // edi
  double Health; // st7
  ExtraDataList **v35; // ebp
  ExtraDataList *v36; // edi
  ExtraDataList **v37; // eax
  int v38; // eax
  float *Singleton; // eax
  double v40; // st7
  UInt32 v41; // eax
  int v42; // eax
  double v43; // st7
  int v44; // eax
  int v45; // edi
  double v47; // st7
  _DWORD *OpenMenuTile; // eax
  int ParentMenu; // eax
  int v50; // edi
  int v51; // edx
  TESForm::FormType v52; // al
  char v53; // cl
  char v54; // cl
  char v55; // al
  int v56; // edx
  unsigned int v57; // ebp
  _DWORD *v58; // eax
  int v59; // eax
  int v60; // edx
  int v61; // edi
  _DWORD *v62; // eax
  int v63; // eax
  int v64; // edx
  int v65; // edi
  float a2; // [esp+8h] [ebp-2ECh]
  int v67; // [esp+Ch] [ebp-2E8h]
  int v68; // [esp+10h] [ebp-2E4h]
  int v69; // [esp+14h] [ebp-2E0h]
  int v70; // [esp+18h] [ebp-2DCh]
  int v71; // [esp+1Ch] [ebp-2D8h]
  char v72; // [esp+23h] [ebp-2D1h]
  ExtraDataList ***v73; // [esp+34h] [ebp-2C0h]
  ExtraDataList *data; // [esp+38h] [ebp-2BCh]
  float v75; // [esp+38h] [ebp-2BCh]
  const char *v76; // [esp+40h] [ebp-2B4h]
  float v77; // [esp+40h] [ebp-2B4h]
  float v78; // [esp+40h] [ebp-2B4h]
  const char *v79; // [esp+40h] [ebp-2B4h]
  float v80; // [esp+44h] [ebp-2B0h]
  const char *v81; // [esp+48h] [ebp-2ACh]
  float v82; // [esp+48h] [ebp-2ACh]
  const char *v83; // [esp+48h] [ebp-2ACh]
  Tile *v84; // [esp+50h] [ebp-2A4h]
  int v85; // [esp+54h] [ebp-2A0h]
  float v86; // [esp+54h] [ebp-2A0h]
  int v87; // [esp+58h] [ebp-29Ch]
  int v88; // [esp+5Ch] [ebp-298h]
  int v89; // [esp+5Ch] [ebp-298h]
  int v90; // [esp+60h] [ebp-294h]
  int HealthForForm; // [esp+64h] [ebp-290h]
  char v93[300]; // [esp+8Ch] [ebp-268h] BYREF
  char v94[296]; // [esp+1B8h] [ebp-13Ch] BYREF
  int v95; // [esp+2E0h] [ebp-14h]
  unsigned int v96; // [esp+2E8h] [ebp-Ch]

  if ( *(_BYTE *)(a1 + 0x64) )
    goto LABEL_127;
  switch ( a5 )
  {
    case 2:
      sub_57DE50(2);
      sub_5D03B0(st5_0, a3, a1);
      break;
    case 0xF:
      if ( *(_DWORD *)(a1 + 0x58) == 3 )
        sub_5D0A20(a1, st5_0, a3, a4, 0, 1);
      break;
    case 0x10:
      v8 = sub_5D0BE0((_DWORD *)a1);
      if ( v8 > 0 )
      {
        if ( sub_5E4420((Actor *)TESDataHandler_g_PlayerRef) < v8 )
        {
          ShowUIMessageBox(v9, a1, st5_0, a3, a4, (const char *)sNotEnoughGold, 0, 1, (const char *)sOk, 0);
        }
        else
        {
          v81 = (const char *)dword_B38D20;
          v76 = (const char *)dword_B38850;
          dword_B3B710 = (int)a6;
          dword_B3B714 = v8;
          _sprintf(v93, "%s %d %s?", v76, v8, v81);
          ShowUIMessageBox(
            v93,
            a1,
            st5_0,
            a3,
            a4,
            v93,
            (int)sub_5D1FC0,
            1,
            (const char *)MessageButtonTextYes,
            MessageButtonTextNo);
          *(_BYTE *)(a1 + 0x64) = 1;
        }
      }
      break;
    case 0x11:
      *(_BYTE *)(a1 + 0x65) = *(_BYTE *)(a1 + 0x65) == 0;
      if ( Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x50), 0xFB1) == fConstant_2 )
        sub_57DE50(1);
      sub_5D1080(a1, (int)a6, a4, st5_0, a3, 1);
      break;
    default:
      break;
  }
  ExtraDataList_GetContainerChanges(&TESDataHandler_g_PlayerRef->super.super.super.super.baseExtraList);
  if ( a5 < 0x33 )
    goto LABEL_127;
  Tile_GetFloat(a6, 0xFAA);
  dword_B3B718 = Double_To_SInt32(a4);
  Tile_GetFloat(a6, 0xFB9);
  v10 = (TESForm *)Double_To_SInt32(a4);
  InventoryEntryOfItem = GetInventoryEntryOfItem((TESObjectREFR *)TESDataHandler_g_PlayerRef, v10, 0);
  Actor_GetSkillMasteryLevel(0xC);
  if ( !InventoryEntryOfItem )
    goto LABEL_127;
  switch ( *(_DWORD *)(a1 + 0x58) )
  {
    case 1:
      Float = Tile_GetFloat(a6, 0xFAE);
      if ( Float == fConstant_2 )
      {
        ShowUIMessageBox((char *)sOk, a1, st5_0, a3, Float, (const char *)dword_B38880, 0, 1, (const char *)sOk, 0);
        goto LABEL_126;
      }
      if ( *(int *)(a1 + 0x54) <= 0 )
      {
        ShowUIMessageBox(v12, a1, st5_0, a3, Float, (const char *)dword_B38860, 0, 1, (const char *)sOk, 0);
        goto LABEL_126;
      }
      v77 = COERCE_FLOAT(((int (__thiscall *)(PlayerCharacter *))TESDataHandler_g_PlayerRef->vtbl->super.GetActorValue)(TESDataHandler_g_PlayerRef));
      v14 = ((int (__thiscall *)(PlayerCharacter *))TESDataHandler_g_PlayerRef->vtbl->super.GetActorValue)(TESDataHandler_g_PlayerRef);
      sub_5482F0(v14, 0xC, v77);
      extendData = (ExtraDataList **)InventoryEntryOfItem->extendData;
      if ( InventoryEntryOfItem->extendData )
      {
        if ( *extendData )
          ExtraDataList_GetExtraCount(*extendData);
      }
      v16 = InventoryEntryOfItem->extendData;
      if ( InventoryEntryOfItem->extendData )
      {
        if ( v16->node.data )
        {
          if ( sub_41DF40(v16->node.data) )
            sub_41F6D0(InventoryEntryOfItem->extendData->node.data);
        }
      }
      TESHealthForm_GetHealthForForm(InventoryEntryOfItem->type);
      type = (int)InventoryEntryOfItem->type;
      v18 = (ExtraDataList **)InventoryEntryOfItem->extendData;
      if ( !InventoryEntryOfItem->extendData || (v19 = *v18) == 0 )
      {
        v20 = (_DWORD *)FormHeapAlloc(0x14u);
        v96 = 0;
        if ( v20 )
          v21 = (ExtraDataList *)ExtraDataList_constr(v20);
        else
          v21 = 0;
        v22 = InventoryEntryOfItem->extendData == 0;
        v96 = 0xFFFFFFFF;
        v19 = v21;
        if ( v22 )
        {
          v23 = (tListVoid *)FormHeapAlloc(8u);
          if ( v23 )
          {
            v23->node.data = 0;
            v23->node.next = 0;
          }
          else
          {
            v23 = 0;
          }
          InventoryEntryOfItem->extendData = v23;
        }
        sub_60D020(InventoryEntryOfItem, 0);
        BSSimpleList_PushFront(&InventoryEntryOfItem->extendData->node.data, (int)v21);
        HIBYTE(v87) = 0;
      }
      ContainerExtraData_GetEntryForForm((_DWORD **)a6, type, 1, 0);
      if ( !v24 )
        goto LABEL_38;
      if ( ExtraDataList_GetExtraCount(v19) == 1 )
      {
        v25 = v19;
      }
      else
      {
        v26 = (_DWORD *)FormHeapAlloc(0x14u);
        v95 = 1;
        if ( v26 )
          v27 = (ExtraDataList *)ExtraDataList_constr(v26);
        else
          v27 = 0;
        data = (ExtraDataList *)InventoryEntryOfItem->extendData->node.data;
        v95 = 0xFFFFFFFF;
        v25 = v27;
        BaseExtraList_Copy(v27, data);
        ExtraDataList_SetExtraCount(v27, 1);
      }
      if ( HIBYTE(v84) )
      {
        if ( ExtraDataList_GetExtraCount(v19) > 1 )
          ExtraDataList_SetExtraCount(v19, v88 - 1);
      }
      HealthData = ExtraDataList_GetHealthData(v25);
      v29 = Double_To_SInt32(HealthData);
      v90 = v29;
      if ( v29 == 0xFFFFFFFF )
      {
        v29 = v87;
        v90 = v87;
      }
      v89 = a1 + v29;
      if ( v87 > a1 + v29 )
      {
        v31 = (double)v89;
      }
      else if ( v85 < 3 )
      {
        v31 = (double)v87;
      }
      else
      {
        v86 = (float)v89;
        v30 = (double)v87 * dbl_A3FA98;
        a3 = v86;
        if ( v86 >= v30 )
          v86 = v30;
        v31 = v86;
      }
      v75 = v31;
      ExtraDataList_SetHealthValue(v25, (BSExtraDataVtbl *)LODWORD(v75));
      v73 = (ExtraDataList ***)((int (__thiscall *)(PlayerCharacter *))TESDataHandler_g_PlayerRef->vtbl->super.GetActorValue)(TESDataHandler_g_PlayerRef);
      v32 = ((int (__thiscall *)(PlayerCharacter *))TESDataHandler_g_PlayerRef->vtbl->super.GetActorValue)(TESDataHandler_g_PlayerRef);
      v33 = v90;
      if ( sub_548330(v32, 0xC) )
      {
        --*(_DWORD *)(v90 + 0x54);
        sub_57DE50(0x21);
        v72 = 0;
        v71 = 0;
        v70 = 0;
        v69 = 1;
        v68 = 0;
        v67 = TESDataHandler_g_RepairHammer;
        ((void (__thiscall *)(PlayerCharacter *))TESDataHandler_g_PlayerRef->vtbl->super.super.super.RemoveItem)(TESDataHandler_g_PlayerRef);
        if ( *(int *)(v90 + 0x54) <= 0 )
          sub_5C1900();
        a2 = (float)*(int *)(v90 + 0x54);
        Tile_SetFloat(*(Tile **)(v90 + 0x34), (_DWORD *)0xFAE, a2);
      }
      Health = ContainerEntryExtraData_GetHealth((void **)&InventoryEntryOfItem->extendData, 1);
      if ( v25 )
      {
        v35 = *v73;
        if ( *v73 )
        {
          while ( 1 )
          {
            v36 = *v35;
            if ( !*v35 )
              goto LABEL_67;
            if ( !ExtraDataList_CompareList(v36, v25) )
              break;
            v35 = (ExtraDataList **)v35[1];
            if ( !v35 )
              goto LABEL_67;
          }
          if ( v36 != v25 )
          {
            LOWORD(v38) = ExtraDataList_GetExtraCount(v36) + 1;
            ExtraDataList_SetExtraCount(v36, v38);
            BSSimpleList_Remove(v35, (int)v25);
          }
        }
        else
        {
LABEL_67:
          if ( !*v73 )
          {
            v37 = (ExtraDataList **)FormHeapAlloc(8u);
            if ( v37 )
            {
              *v37 = 0;
              v37[1] = 0;
            }
            else
            {
              v37 = 0;
            }
            *v73 = v37;
          }
          BSSimpleList_PushFront(*v73, (int)v25);
        }
      }
      else if ( !v72 )
      {
        ContainerExtraData_AddEntry(0, (int *)InventoryEntryOfItem, 1, v67, v68, v69, v70, v71);
        InterfaceManager_GetSingleton(0, 1);
        v41 = sub_5966F0(1);
        sub_57D300(v84, (Tile *)0xFF0, v41);
LABEL_73:
        ((void (__cdecl *)(int, _DWORD, _DWORD))TESDataHandler_g_PlayerRef->vtbl->super.ModExperience)(0xC, 0, 0.0);
        v40 = ((double (__thiscall *)(PlayerCharacter *))TESDataHandler_g_PlayerRef->vtbl->super.Unk_B0)(TESDataHandler_g_PlayerRef);
        sub_5D1080(v33, (int)v25, v40, st5_0, a3, (int)v73);
        sub_5D0B80();
LABEL_38:
        if ( HIBYTE(v84) )
LABEL_126:
          JUMPOUT(0x5D29F8);
LABEL_127:
        JUMPOUT(0x5D2A08);
      }
      Singleton = (float *)InterfaceManager_GetSingleton(0, 1);
      sub_57F9F0(Singleton, st5_0, Health, a3, 0.0, (_DWORD *)0xFDD, 0);
      v33 = 7;
      goto LABEL_73;
    case 2:
      HealthForForm = TESHealthForm_GetHealthForForm(InventoryEntryOfItem->type);
      sub_470520(InventoryEntryOfItem->type);
      v82 = (float)v42;
      v80 = ContainerEntryExtraData_GetHealth((void **)&InventoryEntryOfItem->extendData, 0);
      v78 = (float)HealthForForm;
      v43 = sub_5483C0(v78, v80, v82);
      v45 = v44;
      if ( v44 <= 1 )
        v45 = 1;
      if ( sub_5E4420((Actor *)TESDataHandler_g_PlayerRef) < v45 )
      {
        ShowUIMessageBox((char *)sOk, a1, st5_0, a3, v43, (const char *)sNotEnoughGold, 0, 1, (const char *)sOk, 0);
      }
      else
      {
        v83 = (const char *)dword_B38D20;
        v79 = (const char *)dword_B38840;
        dword_B3B710 = (int)a6;
        dword_B3B714 = v45;
        _sprintf(v94, "%s %d %s?", v79, v45, v83);
        ShowUIMessageBox(
          (char *)MessageButtonTextNo,
          a1,
          st5_0,
          a3,
          v43,
          v94,
          (int)sub_5D1E50,
          1,
          (const char *)MessageButtonTextYes,
          MessageButtonTextNo);
        *(_BYTE *)(a1 + 0x64) = 1;
      }
      return def_5D24AB(a5, a6);
    case 3:
      v47 = Tile_GetFloat(a6, 0xFBA);
      if ( v47 == fConstant_1 )
      {
        sub_5D0A20(a1, st5_0, a3, v47, InventoryEntryOfItem, 1);
        sub_5E99C0((TESObjectREFR *)TESDataHandler_g_PlayerRef, a1, st5_0, a3, v47, InventoryEntryOfItem->type, 1, 0);
      }
      goto LABEL_127;
    case 4:
      OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x412);
      if ( !OpenMenuTile )
        goto LABEL_122;
      ParentMenu = Tile_GetParentMenu(OpenMenuTile);
      v50 = ParentMenu;
      if ( !ParentMenu )
        goto LABEL_122;
      v51 = *(_DWORD *)(ParentMenu + 0x30);
      if ( v51 )
      {
        v52 = InventoryEntryOfItem->type->member.type;
        if ( v52 != kFormType_Ammo && v52 != kFormType_Weapon
          || (v53 = *(_BYTE *)(*(_DWORD *)(v51 + 8) + 4), v53 != 0x22) && v53 != 0x21 )
        {
          if ( v52 != kFormType_Armor && v52 != kFormType_Clothing
            || (v54 = *(_BYTE *)(*(_DWORD *)(v51 + 8) + 4), v54 != 0x14) && v54 != 0x16 )
          {
            if ( v52 == kFormType_Ammo
              || v52 == kFormType_Weapon
              || v52 == kFormType_Armor
              || v52 == kFormType_Clothing
              || (v55 = *(_BYTE *)(*(_DWORD *)(v51 + 8) + 4), v55 == 0x22)
              || v55 == 0x21
              || v55 == 0x14
              || v55 == 0x16 )
            {
              EffectItemList_Clear(*(_DWORD *)(v50 + 0x28) + 0x24);
            }
          }
        }
      }
      v56 = *(_DWORD *)(v50 + 0x28);
      *(_DWORD *)(v56 + 0x34) = (InventoryEntryOfItem->type->member.type != kFormType_Weapon) + 2;
      v57 = *(_DWORD *)(v50 + 0x30);
      if ( v57 )
      {
        ContainerEntryExtraData_DestroyDataTable(*(unsigned int **)(v50 + 0x30), v56);
        FormHeapFree(v57);
      }
      *(_DWORD *)(v50 + 0x30) = InventoryEntryOfItem;
      sub_5A2160(v50, st5_0, a3);
      sub_5A2520(v50, st5_0, a3, a4);
      sub_5E99C0((TESObjectREFR *)TESDataHandler_g_PlayerRef, v57, st5_0, a3, a4, InventoryEntryOfItem->type, 1, 0);
      goto LABEL_111;
    case 5:
      v62 = (_DWORD *)Menu_GetOpenMenuTile(0x412);
      if ( !v62 )
        goto LABEL_122;
      v63 = Tile_GetParentMenu(v62);
      v65 = v63;
      if ( !v63 )
        goto LABEL_122;
      v57 = *(_DWORD *)(v63 + 0x2C);
      if ( v57 )
      {
        ContainerEntryExtraData_DestroyDataTable(*(unsigned int **)(v63 + 0x2C), v64);
        FormHeapFree(v57);
      }
      *(_DWORD *)(v65 + 0x2C) = InventoryEntryOfItem;
      sub_5A2160(v65, st5_0, a3);
      sub_5A2520(v65, st5_0, a3, a4);
      sub_5E99C0((TESObjectREFR *)TESDataHandler_g_PlayerRef, v57, st5_0, a3, a4, InventoryEntryOfItem->type, 1, 0);
      goto LABEL_111;
    case 6:
      v58 = (_DWORD *)Menu_GetOpenMenuTile(0x418);
      if ( !v58 )
        goto LABEL_122;
      v59 = Tile_GetParentMenu(v58);
      v61 = v59;
      if ( !v59 )
        goto LABEL_122;
      v57 = *(_DWORD *)(v59 + 0x2C);
      if ( v57 )
      {
        ContainerEntryExtraData_DestroyDataTable(*(unsigned int **)(v59 + 0x2C), v60);
        FormHeapFree(v57);
      }
      *(_DWORD *)(v61 + 0x2C) = InventoryEntryOfItem;
      sub_5E99C0((TESObjectREFR *)TESDataHandler_g_PlayerRef, v57, st5_0, a3, a4, InventoryEntryOfItem->type, 1, 0);
LABEL_111:
      sub_5D03B0(st5_0, a3, v57);
      goto LABEL_127;
    default:
LABEL_122:
      JUMPOUT(0x5D29E5);
  }
}
