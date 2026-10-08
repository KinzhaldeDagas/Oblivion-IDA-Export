// UCWUS pipeline note: Actor equip path is not currently hooked by UCWUS.dll. Bridge replacement scripts own equip selection/token setup through OBSE commands.
void __userpurge Actor_EquipItem(
        TESObjectREFR *a1@<ecx>,
        unsigned __int16 *ebp0@<ebp>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double st3_0@<st4>,
        double st7_0@<st0>,
        double st0_0@<st7>,
        double a8@<st3>,
        double a9@<st5>,
        double a10@<st6>,
        TESForm *a2,
        signed int maximumMatches,
        ExtraDataList **a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26)
{
  ExtraContainerChanges_Data *ContainerExtraDataForRef; // eax
  TESHealthForm *ItemCount; // ebx
  unsigned __int16 *v30; // ebp
  TESForm::FormType type; // al
  signed int v33; // ecx
  int v36; // ebx
  _DWORD *v37; // eax
  unsigned int v38; // ebx
  signed int v39; // eax
  char v40; // al
  double v41; // st7
  double v42; // st7
  _DWORD *v43; // eax
  double v44; // st7
  int v45; // eax
  TESHealthForm *v46; // eax
  float *v47; // ecx
  double AVModifierf; // st7
  int v50; // eax
  _DWORD *v51; // eax
  unsigned int v52; // ebx
  float v53; // [esp+2Ch] [ebp-38h]
  float v54; // [esp+2Ch] [ebp-38h]
  float v55; // [esp+2Ch] [ebp-38h]
  float v56; // [esp+30h] [ebp-34h]
  float duration; // [esp+34h] [ebp-30h]
  float durationa; // [esp+34h] [ebp-30h]
  float durationb; // [esp+34h] [ebp-30h]
  float durationc; // [esp+34h] [ebp-30h]
  float durationd; // [esp+34h] [ebp-30h]
  float duratione; // [esp+34h] [ebp-30h]
  float durationf; // [esp+34h] [ebp-30h]
  float durationg; // [esp+34h] [ebp-30h]
  float durationh; // [esp+34h] [ebp-30h]
  float durationi; // [esp+34h] [ebp-30h]
  float durationj; // [esp+34h] [ebp-30h]
  float durationk; // [esp+34h] [ebp-30h]
  float durationl; // [esp+34h] [ebp-30h]
  int durationm; // [esp+34h] [ebp-30h]
  float durationn; // [esp+34h] [ebp-30h]
  float durationo; // [esp+34h] [ebp-30h]
  float durationp; // [esp+34h] [ebp-30h]
  ExtraDataList *v74; // [esp+38h] [ebp-2Ch]
  char v75; // [esp+4Fh] [ebp-15h]
  char v76; // [esp+50h] [ebp-14h]
  TESForm *a2b; // [esp+68h] [ebp+4h]
  TESForm *a2a; // [esp+68h] [ebp+4h]
  int maximumMatchesa; // [esp+6Ch] [ebp+8h]
  int maximumMatchesb; // [esp+6Ch] [ebp+8h]

  v75 = 0; /*0x5faed1*/
  if ( a2->member.type != kFormType_Ammo ) /*0x5faed6*/
    goto LABEL_11; /*0x5faed6*/
  if ( ((unsigned __int8 (__thiscall *)(TESForm *))a2->vtbl->Unk_1E)(a2) ) /*0x5faee3*/
  {
    Script_AddEventToExtraScript(a1, a13, 2); /*0x5faef1*/
    Script_AddEventToExtraScript(a2, &a1->member.baseExtraList, 2); /*0x5faefd*/
    if ( a1 == (TESObjectREFR *)reference ) /*0x5faf0b*/
    {
      __asm { fld     dword ptr ds:0A30634h } /*0x5faf11*/
      __asm { fstp    [esp+30h+duration]; duration }
      GameUI_QueueMessage(stru_B38570.value, 0, 1u, duration); /*0x5faf26*/
    }
    return; /*0x5faf2e*/
  }
  if ( a1[1].vtbl /*0x5faf49*/
    && (*((int (__thiscall **)(TESObjectREFRVtbl *))a1[1].vtbl->super.super.InitializeComponent + 0xB4))(a1[1].vtbl) == 5 )
  {
    if ( a1 == (TESObjectREFR *)reference ) /*0x5faf51*/
    {
      __asm { fld     dword ptr ds:0A30634h } /*0x5faf57*/
      __asm { fstp    [esp+30h+duration]; duration }
      GameUI_QueueMessage(stru_B38A30.value, 0, 1u, durationa); /*0x5faf6b*/
    }
  }
  else
  {
LABEL_11:
    if ( a13 && sub_41DF40(a13) && !(_BYTE)a15 ) /*0x5faf8e*/
    {
LABEL_12:
      if ( a1 == (TESObjectREFR *)reference ) /*0x5faf96*/
      {
        __asm { fld     dword ptr ds:0A30634h } /*0x5faf9c*/
        __asm { fstp    [esp+30h+duration]; duration }
        GameUI_QueueMessage(stru_B38A30.value, 0, 1u, durationb); /*0x5fafb1*/
      }
    }
    else
    {
      if ( a1->vtbl->GetBaseForm(a1) ) /*0x5fafc8*/
        ((int (__thiscall *)(TESObjectREFR *))a1->vtbl->IsActor)(a1); /*0x5fafda*/
      ContainerExtraDataForRef = ContainerExtraData_GetContainerExtraDataForRef(a1); /*0x5fafe9*/
      ItemCount = (TESHealthForm *)ContainerExtraData_GetItemCount(ContainerExtraDataForRef, a2); /*0x5faffa*/
      v30 = (unsigned __int16 *)sub_4691B0((TESObjectARMO *)a2); /*0x5fb006*/
      if ( (int)ItemCount > 0 ) /*0x5fb008*/
      {
        if ( maximumMatches <= 0 ) /*0x5fb013*/
        {
          type = a2->member.type; /*0x5fb015*/
          if ( type == kFormType_Ammo || a2 == (TESForm *)MEMORY[0xB35ED0] || type == kFormType_SoulGem ) /*0x5fb026*/
            maximumMatches = (signed int)ItemCount; /*0x5fb028*/
        }
        if ( a13 && (_EAX = BaseExtraList_GetExtraData((ExtraDataList *)a13, kExtraData_Health)) != 0 ) /*0x5fb040*/
        {
          __asm { fld     dword ptr [eax+0Ch] } /*0x5fb042*/
        }
        else
        {
          a2b = (TESForm *)TESHealthForm_GetHealthForForm(a2); /*0x5fb052*/
          __asm { fild    [esp+2Ch+a2] } /*0x5fb056*/
          if ( (int)a2b < 0 ) /*0x5fb05a*/
            __asm { fadd    dword ptr ds:0A2FC78h } /*0x5fb05c*/
        }
        __asm { fstp    [esp+2Ch+a2] } /*0x5fb066*/
        v76 = 0; /*0x5fb070*/
        switch ( a2->member.type ) /*0x5fb082*/
        {
          case kFormType_Apparatus: /*0x5fb082*/
            if ( a1 != (TESObjectREFR *)reference ) /*0x5fb39a*/
              goto LABEL_106; /*0x5fb39a*/
            if ( !PlayerCharacter_IsPlayerInCombat((TESObjectREFR ***)reference, 0) || stru_B38A98.value ) /*0x5fb3ab*/
            {
              Actor_EquipItem_::Player_EquipItem_Apparatus( /*0x5fb3a9*/
                (int)a2a,
                maximumMatches,
                (int)a13,
                a14,
                a15,
                a16,
                a17,
                a18,
                a19,
                a20,
                a21,
                a22,
                a23,
                a24,
                a25,
                a26);
            }
            else
            {
              __asm { fld     dword ptr ds:0A30634h } /*0x5fb3b4*/
              __asm { fstp    [esp+30h+duration]; duration }
              GameUI_QueueMessage(stru_B38A60.value, 0, 1u, durationg); /*0x5fb3c9*/
            }
            return; /*0x5fb3d1*/
          case kFormType_Armor: /*0x5fb082*/
            if ( !TESBipedModelForm_CoversSlot(v30, 0xD, 0) ) /*0x5fb131*/
              goto LABEL_43; /*0x5fb131*/
            __asm /*0x5fb13a*/
            {
              fldz
              fcomp   [esp+2Ch+a2]
              fnstsw  ax
            }
            if ( (_AX & 0x100) != 0 ) /*0x5fb145*/
            {
LABEL_43:
              a1->vtbl[1].Unk_46(a1); /*0x5fb18c*/
              goto Actor_EquipItem___Player_EquipItem_TESObjectLIGH; /*0x5fb18c*/
            }
            if ( a1 == (TESObjectREFR *)reference ) /*0x5fb14d*/
            {
              if ( InterfaceManager_IsMenuMode() ) /*0x5fb153*/
              {
                __asm { fld     dword ptr ds:0A30634h } /*0x5fb160*/
                __asm { fstp    [esp+30h+duration]; duration }
                GameUI_QueueMessage(stru_B38558.value, 0, 1u, durationd); /*0x5fb175*/
              }
            }
            return; /*0x5fb17d*/
          case kFormType_Book: /*0x5fb082*/
            if ( a1 != (TESObjectREFR *)reference ) /*0x5fb4a7*/
              goto LABEL_106; /*0x5fb4a7*/
            if ( !PlayerCharacter_IsPlayerInCombat((TESObjectREFR ***)reference, 0) || InterfaceManager_IsMenuMode() ) /*0x5fb4b8*/
            {
              ((void (__thiscall *)(TESForm *, _DWORD, TESObjectREFR *, _DWORD, _DWORD, int))a2->vtbl->Unk_33)( /*0x5fb4f5*/
                a2,
                0,
                a1,
                0,
                0,
                1);
              goto LABEL_106; /*0x5fb4f7*/
            }
            __asm { fld     dword ptr ds:0A30634h } /*0x5fb4c1*/
            __asm { fstp    [esp+30h+duration]; duration }
            GameUI_QueueMessage(stru_B38A68.value, 0, 1u, durationh); /*0x5fb4d5*/
            return; /*0x5fb4dd*/
          case kFormType_Clothing: /*0x5fb082*/
            goto Actor_EquipItem___Player_EquipItem_TESObjectCLOT;
          case kFormType_Ingredient: /*0x5fb082*/
            v41 = Script_AddEventToExtraScript(a1, a13, 2); /*0x5fb2c5*/
            if ( ((unsigned __int8 (__thiscall *)(TESForm *))a2->vtbl->Unk_1E)(a2) ) /*0x5fb2d4*/
            {
              if ( a1 == (TESObjectREFR *)reference ) /*0x5fb304*/
              {
                __asm { fld     dword ptr ds:0A30634h } /*0x5fb30a*/
                __asm { fstp    [esp+30h+duration]; duration }
                GameUI_QueueMessage(MEMORY[0xB394C0].value, 0, 1u, durationf); /*0x5fb31f*/
              }
            }
            else
            {
              Actor_EquipIngredient_( /*0x5fb2e8*/
                (PlayerCharacter *)a1,
                st5_0,
                st6_0,
                v41,
                a2,
                (BaseExtraList *)a13,
                a1 != (TESObjectREFR *)reference);
              sub_5E99C0(a1, (TESKey *)a2, 1, 1); /*0x5fb2f4*/
            }
            return; /*0x5fb2f9*/
          case kFormType_Light: /*0x5fb082*/
Actor_EquipItem___Player_EquipItem_TESObjectLIGH:
            if ( a2->member.type == kFormType_Light ) /*0x5fb192*/
            {
              v36 = SoundMap_ResolveAnimSoundNote("ITMTorchHeldEquip"); /*0x5fb1a4*/
              if ( v36 ) /*0x5fb1a8*/
              {
                if ( a1 == (TESObjectREFR *)reference && InterfaceManager_IsMenuMode() ) /*0x5fb1b2*/
                  v37 = (_DWORD *)sub_65AC50(a1, *(_DWORD *)(v36 + 0xC), 0, 0x121, 1); /*0x5fb1c2*/
                else
                  v37 = (_DWORD *)sub_65AC50(a1, *(_DWORD *)(v36 + 0xC), 0, 0x102, 1); /*0x5fb1d3*/
                v38 = (unsigned int)v37; /*0x5fb1d8*/
                if ( v37 ) /*0x5fb1dc*/
                {
                  sub_6B73E0(v37); /*0x5fb1e0*/
                  FormHeapFree(v38); /*0x5fb1e6*/
                }
              }
            }
Actor_EquipItem___Player_EquipItem_TESObjectCLOT:
            ItemCount = (TESHealthForm *)a13; /*0x5fb1ee*/
            if ( sub_5E3DE0(a1, a2, (int)a13) ) /*0x5fb1f6*/
            {
              v39 = maximumMatches; /*0x5fb1ff*/
              if ( maximumMatches > 1 ) /*0x5fb206*/
              {
                v39 = 1; /*0x5fb208*/
                maximumMatches = 1; /*0x5fb20d*/
              }
              sub_5F3140(a1, st7_0, st5_0, st6_0, (unsigned __int16 *)a2, (ExtraDataList *)v39, a13, a15, v74); /*0x5fb21b*/
              if ( v40 ) /*0x5fb222*/
              {
                if ( a1 != (TESObjectREFR *)reference || (_BYTE)a14 ) /*0x5fb237*/
                  sub_5E48D0(a1, a2, (int)a13); /*0x5fb24d*/
                else
                  sub_662C10(reference, a2, (int)a13); /*0x5fb23d*/
              }
              goto LABEL_106; /*0x5fb242*/
            }
            if ( a1 != (TESObjectREFR *)reference ) /*0x5fb25d*/
              goto LABEL_106; /*0x5fb25d*/
            __asm { fld     dword ptr ds:0A30634h } /*0x5fb263*/
            __asm { fstp    [esp+30h+duration]; duration }
            GameUI_QueueMessage(stru_B38A80.value, 0, 1u, duratione); /*0x5fb278*/
            return; /*0x5fb280*/
          case kFormType_Weapon: /*0x5fb082*/
            if ( ((int (__thiscall *)(TESObjectREFR *))a1->vtbl[2].super.Unk_0C)(a1) && a1->vtbl->GetSleepState(a1) ) /*0x5fb0a3*/
              goto LABEL_12; /*0x5fb0a7*/
            v33 = maximumMatches; /*0x5fb0ad*/
            if ( maximumMatches > 1 ) /*0x5fb0b4*/
            {
              v33 = 1; /*0x5fb0b6*/
              maximumMatches = 1; /*0x5fb0bb*/
            }
            __asm /*0x5fb0bf*/
            {
              fldz
              fcomp   [esp+2Ch+a2]
              fnstsw  ax
            }
            if ( __SETP__(HIBYTE(_AX) & 5, 0) ) /*0x5fb0ca*/
            {
              if ( a1 == (TESObjectREFR *)reference ) /*0x5fb0e7*/
              {
                if ( InterfaceManager_IsMenuMode() ) /*0x5fb0e9*/
                {
                  __asm { fld     dword ptr ds:0A30634h } /*0x5fb0f2*/
                  __asm { fstp    [esp+30h+duration]; duration }
                  GameUI_QueueMessage(stru_B38558.value, 0, 1u, durationc); /*0x5fb107*/
                }
              }
            }
            else
            {
              sub_5F3140(a1, st7_0, st5_0, st6_0, (unsigned __int16 *)a2, (ExtraDataList *)v33, a13, a15, v74); /*0x5fb0da*/
            }
            sub_65DD20(reference); /*0x5fb115*/
            a1->vtbl[1].Unk_46(a1); /*0x5fb124*/
            goto LABEL_106; /*0x5fb126*/
          case kFormType_Ammo: /*0x5fb082*/
            ItemCount = (TESHealthForm *)maximumMatches; /*0x5fb28d*/
            sub_5F3140(a1, st7_0, st5_0, st6_0, (unsigned __int16 *)a2, (ExtraDataList *)maximumMatches, a13, a15, v74); /*0x5fb297*/
            if ( g_liveArrowProjectileCount > 0 ) /*0x5fb2a3*/
              ArrowProjectile_CleanupMatchingByBaseAndTarget(a2, maximumMatches, a1, 1, 1); /*0x5fb2b0*/
            goto LABEL_106; /*0x5fb2b8*/
          case kFormType_SoulGem: /*0x5fb082*/
            if ( a1 != (TESObjectREFR *)reference ) /*0x5fb5a1*/
              goto LABEL_106; /*0x5fb5a1*/
            if ( PlayerCharacter_IsPlayerInCombat((TESObjectREFR ***)reference, 0) && !stru_B38A88.value ) /*0x5fb5b2*/
              goto LABEL_93; /*0x5fb5b9*/
            if ( !LOBYTE(a2[4].member.modlist.data) && (!a13 || !ExtraDataList_GetExtraSoul((ExtraDataList *)a13)) ) /*0x5fb5eb*/
            {
              __asm { fld     dword ptr ds:0A30634h } /*0x5fb5f4*/
              __asm { fstp    [esp+30h+duration]; duration }
              GameUI_QueueMessage(stru_B38870.value, 0, 1u, durationl); /*0x5fb608*/
              return; /*0x5fb610*/
            }
            sub_57CC00((char)v30, st5_0, st6_0, st7_0, st0_0, a10, a9, st3_0); /*0x5fb615*/
            v43 = (_DWORD *)FormHeapAlloc(0xCu); /*0x5fb61c*/
            if ( v43 ) /*0x5fb632*/
              ItemCount = (TESHealthForm *)ContainerEntryExtraData_constr(v43, (int)a2, 0); /*0x5fb63e*/
            else
              ItemCount = 0; /*0x5fb642*/
            LOBYTE(v30) = (_BYTE)a13; /*0x5fb644*/
            BSSimpleList_PushFront(&ItemCount->vtbl->InitializeComponent, (int)a13); /*0x5fb653*/
            if ( a13 ) /*0x5fb65a*/
            {
              durationm = ExtraDataList_GetExtraCount((ExtraDataList *)a13); /*0x5fb66d*/
              Shared_SetDwordAtOffset04(ItemCount, durationm); /*0x5fb670*/
            }
            else
            {
              Shared_SetDwordAtOffset04(ItemCount, maximumMatches); /*0x5fb661*/
            }
            sub_5CFB50((char)a2, st5_0, st7_0, st6_0, ItemCount); /*0x5fb676*/
            goto LABEL_106; /*0x5fb67e*/
          case kFormType_AlchemyItem: /*0x5fb082*/
            v76 = 1; /*0x5fb32f*/
            if ( EffectItemList_AllEffectsHostile(&a2[2].vtbl) ) /*0x5fb334*/
            {
              if ( a1 != (TESObjectREFR *)reference ) /*0x5fb345*/
                goto LABEL_106; /*0x5fb345*/
              sub_66A490(reference, st5_0, st6_0, st7_0, a2); /*0x5fb34c*/
            }
            else
            {
              v42 = Script_AddEventToExtraScript(a1, a13, 2); /*0x5fb35e*/
              if ( Actor_ConsumePotion_( /*0x5fb374*/
                     (PlayerCharacter *)a1,
                     (char)v30,
                     st5_0,
                     st6_0,
                     v42,
                     a2,
                     (BaseExtraList *)a13,
                     a1 != (TESObjectREFR *)reference) )
              {
                sub_5E99C0(a1, (TESKey *)a2, 1, 1); /*0x5fb388*/
              }
            }
            return; /*0x5fb351*/
          case kFormType_SigilStone: /*0x5fb082*/
            if ( a1 != (TESObjectREFR *)reference ) /*0x5fb504*/
              goto LABEL_106; /*0x5fb504*/
            if ( PlayerCharacter_IsPlayerInCombat((TESObjectREFR ***)reference, 0) && !InterfaceManager_IsMenuMode() ) /*0x5fb515*/
            {
              __asm { fld     dword ptr ds:0A30634h } /*0x5fb51e*/
              __asm { fstp    [esp+30h+duration]; duration }
              GameUI_QueueMessage(stru_B38A68.value, 0, 1u, durationi); /*0x5fb533*/
              return; /*0x5fb53b*/
            }
            if ( reference->vtbl->super.GetMountedHorse(reference) && a1->vtbl->GetSleepState(a1) ) /*0x5fb55e*/
            {
              __asm { fld     dword ptr ds:0A30634h } /*0x5fb564*/
              __asm { fstp    [esp+30h+duration]; duration }
              GameUI_QueueMessage(MEMORY[0xB38A40].value, 0, 1u, durationj); /*0x5fb579*/
              return; /*0x5fb581*/
            }
            sub_57CC00((char)v30, st5_0, st6_0, st7_0, st0_0, a10, a9, st3_0); /*0x5fb586*/
            sub_5D5200(st5_0, st7_0, st6_0, (int)a2); /*0x5fb58c*/
LABEL_106:
            if ( a2 != (TESForm *)MEMORY[0xB35ED0] || a1 != (TESObjectREFR *)reference ) /*0x5fb695*/
              goto LABEL_112; /*0x5fb695*/
            if ( PlayerCharacter_IsPlayerInCombat((TESObjectREFR ***)reference, 0) && !stru_B38A90.value ) /*0x5fb6a2*/
            {
              __asm { fld     dword ptr ds:0A30634h } /*0x5fb6ab*/
              __asm { fstp    [esp+30h+duration]; duration }
              GameUI_QueueMessage(stru_B38A78.value, 0, 1u, durationn); /*0x5fb6bf*/
              return; /*0x5fb6c7*/
            }
            v75 = 0; /*0x5fb6cc*/
            sub_57CC00((char)v30, st5_0, st6_0, st7_0, st0_0, a10, a9, st3_0); /*0x5fb6d1*/
            RepairMenu_Create(st7_0, st5_0, 1, maximumMatches, 0, 0); /*0x5fb6e1*/
LABEL_112:
            if ( a2 == (TESForm *)MEMORY[0xB35EDC] && a1 == (TESObjectREFR *)reference ) /*0x5fb6fd*/
            {
              if ( PlayerCharacter_IsPlayerInCombat((TESObjectREFR ***)reference, 0) && !stru_B38A88.value ) /*0x5fb715*/
              {
LABEL_93:
                __asm { fld     dword ptr ds:0A30634h } /*0x5fb5bb*/
                __asm { fstp    [esp+30h+duration]; duration }
                GameUI_QueueMessage(stru_B38A70.value, 0, 1u, durationk); /*0x5fb5d0*/
                return; /*0x5fb5d8*/
              }
              v75 = 0; /*0x5fb71d*/
              if ( sub_5E0860(a1) ) /*0x5fb722*/
              {
                v44 = ((double (__thiscall *)(TESObjectREFR *, TESForm *, ExtraDataList **, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD))a1->vtbl->RemoveItem)( /*0x5fb74b*/
                        a1,
                        a2,
                        a13,
                        1,
                        0,
                        0,
                        0,
                        0,
                        0,
                        1,
                        0);
                __asm { fld     dword ptr ds:0A379B4h } /*0x5fb74d*/
                __asm { fstp    [esp+38h+var_38]; float }
                QueueUIMessage(v44, st6_0, (char *)stru_B38890.value, v53, 0, 0); /*0x5fb761*/
                v45 = SoundMap_ResolveAnimSoundNote("ITMWelkyndStoneUse"); /*0x5fb774*/
                if ( v45 ) /*0x5fb77b*/
                {
                  v46 = (TESHealthForm *)sub_65AC50(a1, *(_DWORD *)(v45 + 0xC), 0, 1, 1); /*0x5fb789*/
                  ItemCount = v46; /*0x5fb78e*/
                  if ( v46 ) /*0x5fb792*/
                  {
                    sub_6B73E0(v46); /*0x5fb796*/
                    FormHeapFree((unsigned int)ItemCount); /*0x5fb79c*/
                  }
                }
              }
              else
              {
                __asm { fld     dword ptr ds:0A30634h } /*0x5fb7a6*/
                __asm { fstp    [esp+38h+var_38]; float }
                QueueUIMessage(st7_0, st6_0, (char *)stru_B38878.value, v54, 0, 0); /*0x5fb7b9*/
              }
            }
            v47 = (float *)reference; /*0x5fb7c7*/
            if ( a2 == (TESForm *)MEMORY[0xB35ED8] && a1 == (TESObjectREFR *)v47 ) /*0x5fb7d5*/
            {
              AVModifierf = Player_GetAVModifierf(v47, 0, 9); /*0x5fb7df*/
              __asm { fstp    [esp+2Ch+arg_C] } /*0x5fb7e4*/
              ((void (__thiscall *)(TESObjectREFR *, int))a1->vtbl[1].Unk_38)(a1, 9); /*0x5fb7f4*/
              __asm { fstp    [esp+2Ch+var_14] } /*0x5fb7f6*/
              maximumMatchesa = Actor_GetBaseCalcAVi((int *)a1, (int)ItemCount, (int)a2, (int)a1, 9); /*0x5fb803*/
              __asm /*0x5fb807*/
              {
                fild    [esp+2Ch+maximumMatches]
                fadd    [esp+2Ch+arg_C]
                fcomp   [esp+2Ch+var_14]
                fnstsw  ax
              }
              if ( (_AX & 0x4100) != 0 ) /*0x5fb818*/
              {
                __asm { fld     dword ptr ds:0A30634h } /*0x5fb905*/
                __asm { fstp    [esp+30h+duration]; duration }
                GameUI_QueueMessage(stru_B38E98.value, 0, 1u, durationo); /*0x5fb91a*/
              }
              else
              {
                maximumMatchesb = Actor_GetBaseCalcAVi((int *)a1, (int)ItemCount, (int)a2, (int)a1, 9); /*0x5fb829*/
                __asm { fild    [esp+2Ch+maximumMatches] } /*0x5fb82d*/
                __asm
                {
                  fadd    [esp+30h+arg_C]
                  fstp    [esp+30h+arg_C]
                  fld     [esp+30h+arg_C]
                  fstp    [esp+30h+var_14]
                }
                ((void (__thiscall *)(TESObjectREFR *, int))a1->vtbl[1].Unk_38)(a1, 9); /*0x5fb84b*/
                __asm { fsubr   [esp+2Ch+var_14] } /*0x5fb84d*/
                __asm
                {
                  fstp    [esp+34h+arg_C]
                  fld     [esp+34h+arg_C]
                }
                __asm { fstp    [esp+34h+var_34] }
                ((void (__thiscall *)(TESObjectREFR *, int, _DWORD, _DWORD))a1->vtbl[1].Unk_3F)(a1, 9, LODWORD(v56), 0); /*0x5fb86b*/
                if ( reference == (PlayerCharacter *)a1 ) /*0x5fb873*/
                {
                  __asm { fld     dword ptr ds:0A30634h } /*0x5fb875*/
                  __asm { fstp    [esp+38h+var_38]; float }
                  QueueUIMessage(AVModifierf, st6_0, (char *)stru_B38888.value, v55, 0, 0); /*0x5fb88a*/
                }
                v50 = SoundMap_ResolveAnimSoundNote("ITMWelkyndStoneUse"); /*0x5fb89d*/
                if ( v50 ) /*0x5fb8a4*/
                {
                  v51 = (_DWORD *)sub_65AC50(a1, *(_DWORD *)(v50 + 0xC), 0, 1, 1); /*0x5fb8b2*/
                  v52 = (unsigned int)v51; /*0x5fb8b7*/
                  if ( v51 ) /*0x5fb8bb*/
                  {
                    sub_6B73E0(v51); /*0x5fb8bf*/
                    FormHeapFree(v52); /*0x5fb8c5*/
                  }
                }
                Script_AddEventToExtraScript(a1, a13, 2); /*0x5fb8d5*/
                a1->vtbl->RemoveItem(a1, a2, (BaseExtraList *)a13, 1, 0, 0, 0, 0, 0, 1, 0); /*0x5fb8f9*/
                PlayerCharacter_ReconcileHotkeysAfterInventoryRemoval(); /*0x5fb8fb*/
              }
              return; /*0x5fb900*/
            }
            if ( !v75 ) /*0x5fb929*/
              goto LABEL_134; /*0x5fb929*/
            if ( a1 == (TESObjectREFR *)v47 ) /*0x5fb92d*/
            {
              __asm { fld     dword ptr ds:0A30634h } /*0x5fb92f*/
              __asm { fstp    [esp+30h+duration]; duration }
              GameUI_QueueMessage(stru_B38A30.value, 0, 1u, durationp); /*0x5fb944*/
LABEL_134:
              if ( a1 == (TESObjectREFR *)reference ) /*0x5fb952*/
                sub_5E99C0(a1, (TESKey *)a2, 1, v76); /*0x5fb95e*/
            }
            if ( !sub_45A500(g_TESSaveLoadGame) ) /*0x5fb969*/
            {
              Script_AddEventToExtraScript(a1, a13, 2); /*0x5fb97a*/
              Script_AddEventToExtraScript(a2, &a1->member.baseExtraList, 2); /*0x5fb986*/
            }
            break; /*0x5fb986*/
          default:
            v75 = 1; /*0x5fb680*/
            goto LABEL_106; /*0x5fb680*/
        }
      }
    }
  }
}
