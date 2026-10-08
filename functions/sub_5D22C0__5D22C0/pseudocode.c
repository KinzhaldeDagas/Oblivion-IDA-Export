// Repair-menu item handling. A successful repair awards Armorer useValue0 before inventory/repair-state updates.
void __userpurge sub_5D22C0(
        int a1@<ecx>,
        double st5_0@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        double a5@<st7>,
        double a6@<st6>,
        double a7@<st5>,
        double a8@<st4>,
        int a9,
        ExtraContainerChanges_Data *a10)
{
  int v11; // esi
  char *v12; // ecx
  double Float; // st5
  TESForm *v14; // eax
  EntryData *InventoryEntryOfItem; // esi
  char *v16; // ecx
  double v17; // st6
  int v18; // eax
  int v19; // eax
  ExtraDataList **extendData; // eax
  tListVoid *v21; // eax
  int HealthForForm; // eax
  TESForm *type; // ebx
  ExtraDataList **v24; // eax
  ExtraDataList *v25; // ebp
  _DWORD *v26; // eax
  ExtraDataList *v27; // edi
  bool v28; // zf
  tListVoid *v29; // eax
  ExtraDataList *v30; // ebx
  _DWORD *v31; // eax
  ExtraDataList *v32; // edi
  double HealthData; // st7
  int v34; // eax
  double v35; // st7
  double v36; // st7
  SInt32 v37; // eax
  int v38; // edi
  double Health; // st7
  int *v40; // ebp
  ExtraDataList *v41; // edi
  int *v42; // eax
  int v43; // eax
  float *Singleton; // eax
  double v45; // st7
  UInt32 v46; // eax
  double v47; // st6
  int v48; // eax
  int v49; // edi
  double v50; // st6
  _DWORD *OpenMenuTile; // eax
  int ParentMenu; // eax
  int v53; // edi
  int v54; // edx
  TESForm::FormType v55; // al
  char v56; // cl
  char v57; // cl
  char v58; // al
  int v59; // edx
  unsigned int v60; // ebp
  _DWORD *v61; // eax
  int v62; // eax
  int v63; // edx
  int v64; // edi
  _DWORD *v65; // eax
  int v66; // eax
  int v67; // edx
  int v68; // edi
  float v69; // [esp+10h] [ebp-2E4h]
  char v70; // [esp+2Bh] [ebp-2C9h]
  int **v71; // [esp+3Ch] [ebp-2B8h]
  const char *v72; // [esp+40h] [ebp-2B4h]
  float v73; // [esp+40h] [ebp-2B4h]
  ExtraDataList *data; // [esp+40h] [ebp-2B4h]
  float v75; // [esp+40h] [ebp-2B4h]
  float v76; // [esp+40h] [ebp-2B4h]
  const char *v77; // [esp+40h] [ebp-2B4h]
  float v78; // [esp+44h] [ebp-2B0h]
  const char *value; // [esp+48h] [ebp-2ACh]
  float v80; // [esp+48h] [ebp-2ACh]
  const char *v81; // [esp+48h] [ebp-2ACh]
  ExtraContainerChanges_Data *v82; // [esp+4Ch] [ebp-2A8h]
  char v83; // [esp+5Bh] [ebp-299h]
  int v84; // [esp+5Ch] [ebp-298h]
  float v85; // [esp+5Ch] [ebp-298h]
  int v86; // [esp+60h] [ebp-294h]
  int ExtraCount; // [esp+64h] [ebp-290h]
  int v88; // [esp+64h] [ebp-290h]
  int v89; // [esp+64h] [ebp-290h]
  int v90; // [esp+68h] [ebp-28Ch]
  int v91; // [esp+80h] [ebp-274h]
  char v92[300]; // [esp+8Ch] [ebp-268h] BYREF
  char v93[300]; // [esp+1B8h] [ebp-13Ch] BYREF
  int v94; // [esp+2E8h] [ebp-Ch]

  if ( *(_BYTE *)(a1 + 0x64) ) /*0x5d2304*/
    goto LABEL_127; /*0x5d2304*/
  switch ( a9 ) /*0x5d2330*/
  {
    case 2: /*0x5d2330*/
      sub_57DE50(2); /*0x5d2339*/
      a4 = sub_5D03B0(st5_0, a3, a1, a5, a6, a7, a8, a4); /*0x5d2341*/
      break; /*0x5d2346*/
    case 0xF: /*0x5d2330*/
      if ( *(_DWORD *)(a1 + 0x58) == 3 ) /*0x5d234f*/
        sub_5D0A20(a1, st5_0, a3, a4, a5, a6, a7, a8, 0, 1); /*0x5d2359*/
      break; /*0x5d235e*/
    case 0x10: /*0x5d2330*/
      v11 = sub_5D0BE0((_DWORD *)a1); /*0x5d23a4*/
      if ( v11 > 0 ) /*0x5d23a8*/
      {
        if ( sub_5E4420((Actor *)reference) < v11 ) /*0x5d23b7*/
        {
          ShowUIMessageBox(v12, st5_0, a3, a4, (char *)MEMORY[0xB38DB0].value, 0, 1, (char *)MEMORY[0xB38CF0].value, 0); /*0x5d241e*/
        }
        else
        {
          value = stru_B38D20.value; /*0x5d23c4*/
          v72 = stru_B38850.value; /*0x5d23c6*/
          dword_B3B704[3] = (int)a10; /*0x5d23d1*/
          dword_B3B704[4] = v11; /*0x5d23d7*/
          _sprintf(v92, "%s %d %s?", v72, v11, value); /*0x5d23dd*/
          ShowUIMessageBox( /*0x5d23fd*/
            v92,
            st5_0,
            a3,
            a4,
            v92,
            (int)sub_5D1FC0,
            1,
            (char *)MEMORY[0xB38CF8].value,
            (char)MEMORY[0xB38D00].value);
          *(_BYTE *)(a1 + 0x64) = 1; /*0x5d2405*/
        }
      }
      break; /*0x5d2409*/
    case 0x11: /*0x5d2330*/
      *(_BYTE *)(a1 + 0x65) = *(_BYTE *)(a1 + 0x65) == 0; /*0x5d236f*/
      Tile_GetFloat(*(_DWORD **)(a1 + 0x50), 0xFB1); /*0x5d2375*/
      if ( st5_0 == fConstant_2 ) /*0x5d2385*/
        sub_57DE50(1); /*0x5d2389*/
      sub_5D1080(a1, a4, st5_0, a3, 1); /*0x5d2395*/
      break; /*0x5d239a*/
    default:
      break;
  }
  ExtraDataList_GetContainerChanges(&reference->super.super.super.super.baseExtraList); /*0x5d242f*/
  if ( a9 < 0x33 ) /*0x5d243b*/
    goto LABEL_127; /*0x5d243b*/
  Tile_GetFloat(a10, 0xFAA); /*0x5d2448*/
  unk_B3B718 = Double_To_SInt32(a4); /*0x5d245c*/
  Float = Tile_GetFloat(a10, 0xFB9); /*0x5d2461*/
  v14 = (TESForm *)Double_To_SInt32(a4); /*0x5d2466*/
  InventoryEntryOfItem = GetInventoryEntryOfItem((TESObjectREFR *)reference, v14, 0); /*0x5d247f*/
  Actor_GetSkillMasteryLevel((Actor *)reference, kSkillAV_Armorer); /*0x5d2481*/
  if ( !InventoryEntryOfItem ) /*0x5d2496*/
    goto LABEL_127; /*0x5d2496*/
  switch ( *(_DWORD *)(a1 + 0x58) ) /*0x5d24ab*/
  {
    case 1: /*0x5d24ab*/
      v17 = Tile_GetFloat(a10, 0xFAE); /*0x5d24b9*/
      if ( a4 == fConstant_2 ) /*0x5d24c9*/
      {
        ShowUIMessageBox( /*0x5d24dd*/
          (char *)MEMORY[0xB38CF0].value,
          Float,
          v17,
          a4,
          (char *)stru_B38880.value,
          0,
          1,
          (char *)MEMORY[0xB38CF0].value,
          0);
        goto LABEL_126; /*0x5d24e5*/
      }
      if ( *(int *)(a1 + 0x54) <= 0 ) /*0x5d24ed*/
      {
        ShowUIMessageBox(v16, Float, v17, a4, (char *)stru_B38860.value, 0, 1, (char *)MEMORY[0xB38CF0].value, 0); /*0x5d291e*/
        goto LABEL_126; /*0x5d2926*/
      }
      v73 = COERCE_FLOAT(((int (__thiscall *)(PlayerCharacter *))reference->vtbl->super.GetActorValue)(reference)); /*0x5d2510*/
      v18 = ((int (__thiscall *)(PlayerCharacter *))reference->vtbl->super.GetActorValue)(reference); /*0x5d251b*/
      sub_5482F0(v18, 0xC, v73); /*0x5d251e*/
      v91 = v19; /*0x5d2523*/
      extendData = (ExtraDataList **)InventoryEntryOfItem->extendData; /*0x5d2527*/
      ExtraCount = 0; /*0x5d252e*/
      if ( InventoryEntryOfItem->extendData ) /*0x5d2527*/
      {
        if ( *extendData ) /*0x5d2534*/
          ExtraCount = ExtraDataList_GetExtraCount(*extendData); /*0x5d2542*/
      }
      v21 = InventoryEntryOfItem->extendData; /*0x5d2546*/
      if ( InventoryEntryOfItem->extendData ) /*0x5d2546*/
      {
        if ( v21->node.data ) /*0x5d254c*/
        {
          if ( sub_41DF40(v21->node.data) ) /*0x5d2552*/
            sub_41F6D0(InventoryEntryOfItem->extendData->node.data); /*0x5d255f*/
        }
      }
      HealthForForm = TESHealthForm_GetHealthForForm(InventoryEntryOfItem->type); /*0x5d2568*/
      type = InventoryEntryOfItem->type; /*0x5d256d*/
      v86 = HealthForForm; /*0x5d2570*/
      v24 = (ExtraDataList **)InventoryEntryOfItem->extendData; /*0x5d2574*/
      if ( !InventoryEntryOfItem->extendData || (v25 = *v24) == 0 ) /*0x5d257d*/
      {
        v26 = (_DWORD *)FormHeapAlloc(0x14u); /*0x5d2585*/
        v94 = 0; /*0x5d2593*/
        if ( v26 ) /*0x5d259a*/
          v27 = (ExtraDataList *)ExtraDataList_constr(v26); /*0x5d25a3*/
        else
          v27 = 0; /*0x5d25a7*/
        v28 = InventoryEntryOfItem->extendData == 0; /*0x5d25a9*/
        v94 = 0xFFFFFFFF; /*0x5d25ac*/
        v25 = v27; /*0x5d25b7*/
        if ( v28 ) /*0x5d25b9*/
        {
          v29 = (tListVoid *)FormHeapAlloc(8u); /*0x5d25bd*/
          if ( v29 ) /*0x5d25c7*/
          {
            v29->node.data = 0; /*0x5d25c9*/
            v29->node.next = 0; /*0x5d25cf*/
          }
          else
          {
            v29 = 0; /*0x5d25d8*/
          }
          InventoryEntryOfItem->extendData = v29; /*0x5d25da*/
        }
        Shared_SetDwordAtOffset04(InventoryEntryOfItem, 0); /*0x5d25e0*/
        BSSimpleList_PushFront(&InventoryEntryOfItem->extendData->node.data, (int)v27); /*0x5d25e8*/
        v83 = 0; /*0x5d25ed*/
      }
      if ( !ContainerExtraData_GetEntryForForm(a10, type, 1, 0) ) /*0x5d25fb*/
        goto LABEL_38; /*0x5d2606*/
      if ( ExtraDataList_GetExtraCount(v25) == 1 ) /*0x5d2623*/
      {
        v30 = v25; /*0x5d2625*/
      }
      else
      {
        v31 = (_DWORD *)FormHeapAlloc(0x14u); /*0x5d262b*/
        v94 = 1; /*0x5d2639*/
        if ( v31 ) /*0x5d2644*/
          v32 = (ExtraDataList *)ExtraDataList_constr(v31); /*0x5d264d*/
        else
          v32 = 0; /*0x5d2651*/
        data = (ExtraDataList *)InventoryEntryOfItem->extendData->node.data; /*0x5d2657*/
        v94 = 0xFFFFFFFF; /*0x5d265a*/
        v30 = v32; /*0x5d2665*/
        BaseExtraList_Copy(v32, data); /*0x5d2667*/
        ExtraDataList_SetExtraCount(v32, 1); /*0x5d2670*/
      }
      if ( v83 ) /*0x5d267a*/
      {
        if ( ExtraDataList_GetExtraCount(v25) > 1 ) /*0x5d2687*/
          ExtraDataList_SetExtraCount(v25, ExtraCount - 1); /*0x5d2693*/
      }
      HealthData = ExtraDataList_GetHealthData(v30); /*0x5d269a*/
      v34 = Double_To_SInt32(HealthData); /*0x5d269f*/
      v90 = v34; /*0x5d26a7*/
      if ( v34 == 0xFFFFFFFF ) /*0x5d26ab*/
      {
        v34 = v86; /*0x5d26ad*/
        v90 = v86; /*0x5d26b1*/
      }
      v88 = v91 + v34; /*0x5d26bf*/
      if ( v86 > v91 + v34 ) /*0x5d26c3*/
      {
        v36 = (double)v88; /*0x5d2709*/
      }
      else if ( v84 < 3 ) /*0x5d26ca*/
      {
        v36 = (double)v86; /*0x5d2703*/
      }
      else
      {
        v85 = (float)v88; /*0x5d26d0*/
        v35 = (double)v86 * dbl_A3FA98; /*0x5d26d8*/
        v17 = v85; /*0x5d26de*/
        if ( v85 >= v35 ) /*0x5d26e9*/
          v85 = v35; /*0x5d26f9*/
        v36 = v85; /*0x5d26f1*/
      }
      v75 = v36; /*0x5d2710*/
      ExtraDataList_SetHealthValue(v30, (BSExtraDataVtbl *)LODWORD(v75)); /*0x5d2713*/
      v71 = (int **)((int (__thiscall *)(PlayerCharacter *))reference->vtbl->super.GetActorValue)(reference); /*0x5d2732*/
      v37 = ((int (__thiscall *)(PlayerCharacter *))reference->vtbl->super.GetActorValue)(reference); /*0x5d273b*/
      v38 = v90; /*0x5d2743*/
      if ( sub_548330(v37, 0xC) ) /*0x5d273e*/
      {
        --*(_DWORD *)(v90 + 0x54); /*0x5d274e*/
        sub_57DE50(0x21); /*0x5d2754*/
        ((void (__thiscall *)(PlayerCharacter *, int, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD))reference->vtbl->super.super.super.RemoveItem)( /*0x5d2782*/
          reference,
          MEMORY[0xB35ED0],
          0,
          1,
          0,
          0,
          0,
          0);
        if ( *(int *)(v90 + 0x54) <= 0 ) /*0x5d2788*/
          PlayerCharacter_ReconcileHotkeysAfterInventoryRemoval(); /*0x5d278a*/
        v69 = (float)*(int *)(v90 + 0x54); /*0x5d2796*/
        Tile_SetFloat(*(Tile **)(v90 + 0x34), 0xFAEu, v69); /*0x5d279e*/
      }
      Health = ContainerEntryExtraData_GetHealth((void **)&InventoryEntryOfItem->extendData, 1); /*0x5d27a7*/
      if ( v30 ) /*0x5d27c0*/
      {
        v40 = *v71; /*0x5d27ca*/
        if ( *v71 ) /*0x5d27ca*/
        {
          while ( 1 ) /*0x5d27d0*/
          {
            v41 = (ExtraDataList *)*v40; /*0x5d27d0*/
            if ( !*v40 ) /*0x5d27d5*/
              goto LABEL_67; /*0x5d27d5*/
            if ( !ExtraDataList_CompareList(v41, v30) ) /*0x5d27da*/
              break; /*0x5d27da*/
            v40 = (int *)v40[1]; /*0x5d27e3*/
            if ( !v40 ) /*0x5d27e8*/
              goto LABEL_67; /*0x5d27e8*/
          }
          if ( v41 != v30 ) /*0x5d281d*/
          {
            LOWORD(v43) = ExtraDataList_GetExtraCount(v41) + 1; /*0x5d2826*/
            ExtraDataList_SetExtraCount(v41, v43); /*0x5d282d*/
            BSSimpleList_Remove(v40, (int)v30); /*0x5d2835*/
          }
        }
        else
        {
LABEL_67:
          if ( !*v71 ) /*0x5d27ee*/
          {
            v42 = (int *)FormHeapAlloc(8u); /*0x5d27f9*/
            if ( v42 ) /*0x5d2803*/
            {
              *v42 = 0; /*0x5d2809*/
              v42[1] = 0; /*0x5d280f*/
            }
            else
            {
              v42 = 0; /*0x5d28b4*/
            }
            *v71 = v42; /*0x5d28ba*/
          }
          BSSimpleList_PushFront(*v71, (int)v30); /*0x5d28c3*/
        }
      }
      else if ( !v70 ) /*0x5d28d4*/
      {
        ContainerExtraData_AddEntry(v82, InventoryEntryOfItem, 1); /*0x5d28e1*/
        InterfaceManager_GetSingleton(0, 1); /*0x5d28ea*/
        v46 = sub_5966F0(1); /*0x5d28f1*/
        sub_57D300(0, (Tile *)0xFF0, v46); /*0x5d2903*/
LABEL_73:
        ((void (__cdecl *)(int, _DWORD, _DWORD))reference->vtbl->super.ModExperience)(0xC, 0, 0.0);// Successful repair: Armorer (0x0C), useValue0, identity scale (0.0). /*0x5d2872*/
        v45 = ((double (__thiscall *)(PlayerCharacter *))reference->vtbl->super.Unk_B0)(reference); /*0x5d289a*/
        sub_5D1080(v38, v45, Float, v17, (int)v71); /*0x5d28a3*/
        sub_5D0B80(); /*0x5d28aa*/
LABEL_38:
        if ( v83 ) /*0x5d260d*/
LABEL_126:
          JUMPOUT(0x5D29F8); /*0x5d29f8*/
LABEL_127:
        JUMPOUT(0x5D2A08); /*0x5d2a08*/
      }
      Singleton = (float *)InterfaceManager_GetSingleton(0, 1); /*0x5d285f*/
      InterfaceManager::SetCurrentFocusTarget(Singleton, Float, Health, v17, 0.0, (_DWORD *)0xFDD, 0); /*0x5d2869*/
      v38 = 7; /*0x5d286e*/
      goto LABEL_73; /*0x5d286e*/
    case 2: /*0x5d24ab*/
      v89 = TESHealthForm_GetHealthForForm(InventoryEntryOfItem->type); /*0x5d2934*/
      v80 = (float)TESForm_GetValue(InventoryEntryOfItem->type); /*0x5d294e*/
      v78 = ContainerEntryExtraData_GetHealth((void **)&InventoryEntryOfItem->extendData, 0); /*0x5d295b*/
      v76 = (float)v89; /*0x5d2963*/
      v47 = sub_5483C0(v76, v78, v80); /*0x5d2966*/
      v49 = v48; /*0x5d296b*/
      if ( v48 <= 1 ) /*0x5d2973*/
        v49 = 1; /*0x5d2975*/
      if ( sub_5E4420((Actor *)reference) < v49 ) /*0x5d2987*/
      {
        ShowUIMessageBox( /*0x5d2a46*/
          (char *)MEMORY[0xB38CF0].value,
          Float,
          v47,
          a4,
          (char *)MEMORY[0xB38DB0].value,
          0,
          1,
          (char *)MEMORY[0xB38CF0].value,
          0);
      }
      else
      {
        v81 = stru_B38D20.value; /*0x5d2999*/
        v77 = stru_B38840.value; /*0x5d299b*/
        dword_B3B704[3] = (int)a10; /*0x5d29a9*/
        dword_B3B704[4] = v49; /*0x5d29af*/
        _sprintf(v93, "%s %d %s?", v77, v49, v81); /*0x5d29b5*/
        ShowUIMessageBox( /*0x5d29d9*/
          (char *)MEMORY[0xB38D00].value,
          Float,
          v47,
          a4,
          v93,
          (int)sub_5D1E50,
          1,
          (char *)MEMORY[0xB38CF8].value,
          (char)MEMORY[0xB38D00].value);
        *(_BYTE *)(a1 + 0x64) = 1; /*0x5d29e1*/
      }
      def_5D24AB(a1, (unsigned int *)InventoryEntryOfItem, a9, (int)a10); /*0x5d29e2*/
      return;
    case 3: /*0x5d24ab*/
      v50 = Tile_GetFloat(a10, 0xFBA); /*0x5d2a57*/
      if ( a4 == fConstant_1 ) /*0x5d2a67*/
      {
        sub_5D0A20(a1, Float, v50, a4, a5, a6, a7, a8, InventoryEntryOfItem, 1); /*0x5d2a6e*/
        sub_5E99C0((TESObjectREFR *)reference, InventoryEntryOfItem->type, 1, 0); /*0x5d2a80*/
      }
      goto LABEL_127; /*0x5d2a85*/
    case 4: /*0x5d24ab*/
      OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x412); /*0x5d2a8c*/
      if ( !OpenMenuTile ) /*0x5d2a96*/
        goto LABEL_122; /*0x5d2a96*/
      ParentMenu = Tile_GetParentMenu(OpenMenuTile); /*0x5d2a9e*/
      v53 = ParentMenu; /*0x5d2aa3*/
      if ( !ParentMenu ) /*0x5d2aa7*/
        goto LABEL_122; /*0x5d2aa7*/
      v54 = *(_DWORD *)(ParentMenu + 0x30); /*0x5d2aad*/
      if ( v54 ) /*0x5d2ab2*/
      {
        v55 = InventoryEntryOfItem->type->member.type; /*0x5d2ab7*/
        if ( v55 != kFormType_Ammo && v55 != kFormType_Weapon /*0x5d2ad0*/
          || (v56 = *(_BYTE *)(*(_DWORD *)(v54 + 8) + 4), v56 != 0x22) && v56 != 0x21 )
        {
          if ( v55 != kFormType_Armor && v55 != kFormType_Clothing /*0x5d2ae8*/
            || (v57 = *(_BYTE *)(*(_DWORD *)(v54 + 8) + 4), v57 != 0x14) && v57 != 0x16 )
          {
            if ( v55 == kFormType_Ammo /*0x5d2b0e*/
              || v55 == kFormType_Weapon
              || v55 == kFormType_Armor
              || v55 == kFormType_Clothing
              || (v58 = *(_BYTE *)(*(_DWORD *)(v54 + 8) + 4), v58 == 0x22)
              || v58 == 0x21
              || v58 == 0x14
              || v58 == 0x16 )
            {
              EffectItemList_Clear(*(_DWORD *)(v53 + 0x28) + 0x24); /*0x5d2b16*/
            }
          }
        }
      }
      v59 = *(_DWORD *)(v53 + 0x28); /*0x5d2b1e*/
      *(_DWORD *)(v59 + 0x34) = (InventoryEntryOfItem->type->member.type != kFormType_Weapon) + 2; /*0x5d2b2d*/
      v60 = *(_DWORD *)(v53 + 0x30); /*0x5d2b30*/
      if ( v60 ) /*0x5d2b35*/
      {
        ContainerEntryExtraData_DestroyDataTable(*(unsigned int **)(v53 + 0x30), v59); /*0x5d2b39*/
        FormHeapFree(v60); /*0x5d2b3f*/
      }
      *(_DWORD *)(v53 + 0x30) = InventoryEntryOfItem; /*0x5d2b49*/
      sub_5A2160(v53); /*0x5d2b4c*/
      sub_5A2520(v53, Float, a3); /*0x5d2b53*/
      sub_5E99C0((TESObjectREFR *)reference, InventoryEntryOfItem->type, 1, 0); /*0x5d2b66*/
      goto LABEL_111; /*0x5d2b66*/
    case 5: /*0x5d24ab*/
      v65 = (_DWORD *)Menu_GetOpenMenuTile(0x412); /*0x5d2bc4*/
      if ( !v65 ) /*0x5d2bce*/
        goto LABEL_122; /*0x5d2bce*/
      v66 = Tile_GetParentMenu(v65); /*0x5d2bd6*/
      v68 = v66; /*0x5d2bdb*/
      if ( !v66 ) /*0x5d2bdf*/
        goto LABEL_122; /*0x5d2bdf*/
      v60 = *(_DWORD *)(v66 + 0x2C); /*0x5d2be5*/
      if ( v60 ) /*0x5d2bea*/
      {
        ContainerEntryExtraData_DestroyDataTable(*(unsigned int **)(v66 + 0x2C), v67); /*0x5d2bee*/
        FormHeapFree(v60); /*0x5d2bf4*/
      }
      *(_DWORD *)(v68 + 0x2C) = InventoryEntryOfItem; /*0x5d2bfe*/
      sub_5A2160(v68); /*0x5d2c01*/
      sub_5A2520(v68, Float, a3); /*0x5d2c08*/
      sub_5E99C0((TESObjectREFR *)reference, InventoryEntryOfItem->type, 1, 0); /*0x5d2c15*/
      goto LABEL_111; /*0x5d2c15*/
    case 6: /*0x5d24ab*/
      v61 = (_DWORD *)Menu_GetOpenMenuTile(0x418); /*0x5d2b7a*/
      if ( !v61 ) /*0x5d2b84*/
        goto LABEL_122; /*0x5d2b84*/
      v62 = Tile_GetParentMenu(v61); /*0x5d2b8c*/
      v64 = v62; /*0x5d2b91*/
      if ( !v62 ) /*0x5d2b95*/
        goto LABEL_122; /*0x5d2b95*/
      v60 = *(_DWORD *)(v62 + 0x2C); /*0x5d2b9b*/
      if ( v60 ) /*0x5d2ba0*/
      {
        ContainerEntryExtraData_DestroyDataTable(*(unsigned int **)(v62 + 0x2C), v63); /*0x5d2ba4*/
        FormHeapFree(v60); /*0x5d2baa*/
      }
      *(_DWORD *)(v64 + 0x2C) = InventoryEntryOfItem; /*0x5d2bb4*/
      sub_5E99C0((TESObjectREFR *)reference, InventoryEntryOfItem->type, 1, 0); /*0x5d2bbd*/
LABEL_111:
      sub_5D03B0(Float, a3, v60, a5, a6, a7, a8, a4); /*0x5d2b6b*/
      goto LABEL_127; /*0x5d2b70*/
    default:
LABEL_122:
      JUMPOUT(0x5D29E5); /*0x5d29e5*/
  }
}
