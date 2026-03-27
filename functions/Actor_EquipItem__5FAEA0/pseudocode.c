void __userpurge Actor_EquipItem(
        PlayerCharacter *a1@<ecx>,
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
        signed int a12,
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
  Sky *ItemCount; // ebx
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
  Sky *v46; // eax
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
  int BaseCalcAVi; // [esp+6Ch] [ebp+8h]
  int v82; // [esp+6Ch] [ebp+8h]

  v75 = 0;
  if ( a2->member.type != kFormType_Ammo )
    goto LABEL_11;
  if ( ((unsigned __int8 (__thiscall *)(TESForm *))a2->vtbl->Unk_1E)(a2) )
  {
    Script_AddEventToExtraScript(a1, a13, 2);
    Script_AddEventToExtraScript(a2, &a1->super.super.super.super.baseExtraList, 2);
    if ( a1 == TESDataHandler_g_PlayerRef )
    {
      __asm { fld     dword ptr ds:0A30634h }
      __asm { fstp    [esp+30h+duration]; duration }
      GameUI_QueueMessage((const char *)dword_B38570, 0, 1u, duration);
    }
    return;
  }
  if ( a1->super.super.super.process
    && ((int (__thiscall *)(LowProcess *))a1->super.super.super.process->GetCurrentAction)(a1->super.super.super.process) == 5 )
  {
    if ( a1 == TESDataHandler_g_PlayerRef )
    {
      __asm { fld     dword ptr ds:0A30634h }
      __asm { fstp    [esp+30h+duration]; duration }
      GameUI_QueueMessage((const char *)dword_B38A30, 0, 1u, durationa);
    }
  }
  else
  {
LABEL_11:
    if ( a13 && sub_41DF40(a13) && !(_BYTE)a15 )
    {
LABEL_12:
      if ( a1 == TESDataHandler_g_PlayerRef )
      {
        __asm { fld     dword ptr ds:0A30634h }
        __asm { fstp    [esp+30h+duration]; duration }
        GameUI_QueueMessage((const char *)dword_B38A30, 0, 1u, durationb);
      }
    }
    else
    {
      if ( a1->vtbl->super.super.super.GetBaseForm((TESObjectREFR *)a1) )
        ((int (__thiscall *)(PlayerCharacter *))a1->vtbl->super.super.super.IsActor)(a1);
      ContainerExtraDataForRef = ContainerExtraData_GetContainerExtraDataForRef((TESObjectREFR *)a1);
      ItemCount = (Sky *)ContainerExtraData_GetItemCount(ContainerExtraDataForRef, a2);
      v30 = (unsigned __int16 *)sub_4691B0((TESObjectARMO *)a2);
      if ( (int)ItemCount > 0 )
      {
        if ( a12 <= 0 )
        {
          type = a2->member.type;
          if ( type == kFormType_Ammo || a2 == (TESForm *)TESDataHandler_g_RepairHammer || type == kFormType_SoulGem )
            a12 = (signed int)ItemCount;
        }
        if ( a13 && (_EAX = BaseExtraList_GetExtraData((ExtraDataList *)a13, kExtraData_Health)) != 0 )
        {
          __asm { fld     dword ptr [eax+0Ch] }
        }
        else
        {
          a2b = (TESForm *)TESHealthForm_GetHealthForForm(a2);
          __asm { fild    [esp+2Ch+a2] }
          if ( (int)a2b < 0 )
            __asm { fadd    dword ptr ds:0A2FC78h }
        }
        __asm { fstp    [esp+2Ch+a2] }
        v76 = 0;
        switch ( a2->member.type )
        {
          case kFormType_Apparatus:
            if ( a1 != TESDataHandler_g_PlayerRef )
              goto LABEL_106;
            if ( !PlayerCharacter_IsPlayerInCombat(TESDataHandler_g_PlayerRef, 0) || dword_B38A98 )
            {
              Actor_EquipItem_::Player_EquipItem_Apparatus(
                (int)a2a,
                a12,
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
              __asm { fld     dword ptr ds:0A30634h }
              __asm { fstp    [esp+30h+duration]; duration }
              GameUI_QueueMessage((const char *)dword_B38A60, 0, 1u, durationg);
            }
            return;
          case kFormType_Armor:
            if ( !TESBipedModelForm_CoversSlot(v30, 0xD, 0) )
              goto LABEL_43;
            __asm
            {
              fldz
              fcomp   [esp+2Ch+a2]
              fnstsw  ax
            }
            if ( (_AX & 0x100) != 0 )
            {
LABEL_43:
              a1->vtbl->super.Unk_B0((Actor *)a1);
              goto Actor_EquipItem___Player_EquipItem_TESObjectLIGH;
            }
            if ( a1 == TESDataHandler_g_PlayerRef )
            {
              if ( InterfaceManager_IsMenuMode() )
              {
                __asm { fld     dword ptr ds:0A30634h }
                __asm { fstp    [esp+30h+duration]; duration }
                GameUI_QueueMessage((const char *)dword_B38558, 0, 1u, durationd);
              }
            }
            return;
          case kFormType_Book:
            if ( a1 != TESDataHandler_g_PlayerRef )
              goto LABEL_106;
            if ( !PlayerCharacter_IsPlayerInCombat(TESDataHandler_g_PlayerRef, 0) || InterfaceManager_IsMenuMode() )
            {
              ((void (__thiscall *)(TESForm *, _DWORD, PlayerCharacter *, _DWORD, _DWORD, int))a2->vtbl->Unk_33)(
                a2,
                0,
                a1,
                0,
                0,
                1);
              goto LABEL_106;
            }
            __asm { fld     dword ptr ds:0A30634h }
            __asm { fstp    [esp+30h+duration]; duration }
            GameUI_QueueMessage((const char *)dword_B38A68, 0, 1u, durationh);
            return;
          case kFormType_Clothing:
            goto Actor_EquipItem___Player_EquipItem_TESObjectCLOT;
          case kFormType_Ingredient:
            v41 = Script_AddEventToExtraScript(a1, a13, 2);
            if ( ((unsigned __int8 (__thiscall *)(TESForm *))a2->vtbl->Unk_1E)(a2) )
            {
              if ( a1 == TESDataHandler_g_PlayerRef )
              {
                __asm { fld     dword ptr ds:0A30634h }
                __asm { fstp    [esp+30h+duration]; duration }
                GameUI_QueueMessage((const char *)sNoEatQuestItem, 0, 1u, durationf);
              }
            }
            else
            {
              Actor_EquipIngredient_(a1, st5_0, st6_0, v41, a2, (BaseExtraList *)a13, a1 != TESDataHandler_g_PlayerRef);
              sub_5E99C0((TESObjectREFR *)a1, a2, 1, 1);
            }
            return;
          case kFormType_Light:
Actor_EquipItem___Player_EquipItem_TESObjectLIGH:
            if ( a2->member.type == kFormType_Light )
            {
              v36 = sub_447490("ITMTorchHeldEquip");
              if ( v36 )
              {
                if ( a1 == TESDataHandler_g_PlayerRef && InterfaceManager_IsMenuMode() )
                  v37 = (_DWORD *)sub_65AC50(a1, *(_DWORD *)(v36 + 0xC), 0, 0x121, 1);
                else
                  v37 = (_DWORD *)sub_65AC50(a1, *(_DWORD *)(v36 + 0xC), 0, 0x102, 1);
                v38 = (unsigned int)v37;
                if ( v37 )
                {
                  sub_6B73E0(v37);
                  FormHeapFree(v38);
                }
              }
            }
Actor_EquipItem___Player_EquipItem_TESObjectCLOT:
            ItemCount = (Sky *)a13;
            if ( sub_5E3DE0((TESObjectREFR *)a1, a2, (int)a13) )
            {
              v39 = a12;
              if ( a12 > 1 )
              {
                v39 = 1;
                a12 = 1;
              }
              sub_5F3140(
                (TESObjectREFR *)a1,
                st7_0,
                st5_0,
                st6_0,
                (unsigned __int16 *)a2,
                (ExtraDataList *)v39,
                a13,
                a15,
                v74);
              if ( v40 )
              {
                if ( a1 != TESDataHandler_g_PlayerRef || (_BYTE)a14 )
                  sub_5E48D0(a1, a2, (int)a13);
                else
                  sub_662C10(TESDataHandler_g_PlayerRef, a2, (int)a13);
              }
              goto LABEL_106;
            }
            if ( a1 != TESDataHandler_g_PlayerRef )
              goto LABEL_106;
            __asm { fld     dword ptr ds:0A30634h }
            __asm { fstp    [esp+30h+duration]; duration }
            GameUI_QueueMessage((const char *)dword_B38A80, 0, 1u, duratione);
            return;
          case kFormType_Weapon:
            if ( a1->vtbl->super.GetMountedHorse((Actor *)a1)
              && a1->vtbl->super.super.super.GetSleepState((TESObjectREFR *)a1) )
            {
              goto LABEL_12;
            }
            v33 = a12;
            if ( a12 > 1 )
            {
              v33 = 1;
              a12 = 1;
            }
            __asm
            {
              fldz
              fcomp   [esp+2Ch+a2]
              fnstsw  ax
            }
            if ( __SETP__(HIBYTE(_AX) & 5, 0) )
            {
              if ( a1 == TESDataHandler_g_PlayerRef )
              {
                if ( InterfaceManager_IsMenuMode() )
                {
                  __asm { fld     dword ptr ds:0A30634h }
                  __asm { fstp    [esp+30h+duration]; duration }
                  GameUI_QueueMessage((const char *)dword_B38558, 0, 1u, durationc);
                }
              }
            }
            else
            {
              sub_5F3140(
                (TESObjectREFR *)a1,
                st7_0,
                st5_0,
                st6_0,
                (unsigned __int16 *)a2,
                (ExtraDataList *)v33,
                a13,
                a15,
                v74);
            }
            sub_65DD20(TESDataHandler_g_PlayerRef);
            a1->vtbl->super.Unk_B0((Actor *)a1);
            goto LABEL_106;
          case kFormType_Ammo:
            ItemCount = (Sky *)a12;
            sub_5F3140(
              (TESObjectREFR *)a1,
              st7_0,
              st5_0,
              st6_0,
              (unsigned __int16 *)a2,
              (ExtraDataList *)a12,
              a13,
              a15,
              v74);
            if ( dword_B3B7D0 > 0 )
              sub_607F90(a2, a12, a1, 1, 1);
            goto LABEL_106;
          case kFormType_SoulGem:
            if ( a1 != TESDataHandler_g_PlayerRef )
              goto LABEL_106;
            if ( PlayerCharacter_IsPlayerInCombat(TESDataHandler_g_PlayerRef, 0) && !dword_B38A88 )
              goto LABEL_93;
            if ( !LOBYTE(a2[4].member.modlist.data) && (!a13 || !ExtraDataList_GetExtraSoul((ExtraDataList *)a13)) )
            {
              __asm { fld     dword ptr ds:0A30634h }
              __asm { fstp    [esp+30h+duration]; duration }
              GameUI_QueueMessage((const char *)dword_B38870, 0, 1u, durationl);
              return;
            }
            sub_57CC00((char)v30, st5_0, st6_0, st7_0);
            v43 = (_DWORD *)FormHeapAlloc(0xCu);
            if ( v43 )
              ItemCount = (Sky *)ContainerEntryExtraData_constr(v43, (int)a2, 0);
            else
              ItemCount = 0;
            LOBYTE(v30) = (_BYTE)a13;
            BSSimpleList_PushFront(ItemCount->vtbl, (int)a13);
            if ( a13 )
            {
              durationm = ExtraDataList_GetExtraCount((ExtraDataList *)a13);
              sub_60D020(ItemCount, durationm);
            }
            else
            {
              sub_60D020(ItemCount, a12);
            }
            sub_5CFB50((char)a2, st5_0, st7_0, st6_0, ItemCount);
            goto LABEL_106;
          case kFormType_AlchemyItem:
            v76 = 1;
            if ( (unsigned __int8)EffectItemList_AllEffectsHostile(&a2[2].vtbl) )
            {
              if ( a1 != TESDataHandler_g_PlayerRef )
                goto LABEL_106;
              sub_66A490(TESDataHandler_g_PlayerRef, st5_0, st6_0, st7_0, a2);
            }
            else
            {
              v42 = Script_AddEventToExtraScript(a1, a13, 2);
              if ( Actor_ConsumePotion_(
                     a1,
                     (char)v30,
                     st5_0,
                     st6_0,
                     v42,
                     a2,
                     (BaseExtraList *)a13,
                     a1 != TESDataHandler_g_PlayerRef) )
              {
                sub_5E99C0((TESObjectREFR *)a1, a2, 1, 1);
              }
            }
            return;
          case kFormType_SigilStone:
            if ( a1 != TESDataHandler_g_PlayerRef )
              goto LABEL_106;
            if ( PlayerCharacter_IsPlayerInCombat(TESDataHandler_g_PlayerRef, 0) && !InterfaceManager_IsMenuMode() )
            {
              __asm { fld     dword ptr ds:0A30634h }
              __asm { fstp    [esp+30h+duration]; duration }
              GameUI_QueueMessage((const char *)dword_B38A68, 0, 1u, durationi);
              return;
            }
            if ( TESDataHandler_g_PlayerRef->vtbl->super.GetMountedHorse(TESDataHandler_g_PlayerRef)
              && a1->vtbl->super.super.super.GetSleepState((TESObjectREFR *)a1) )
            {
              __asm { fld     dword ptr ds:0A30634h }
              __asm { fstp    [esp+30h+duration]; duration }
              GameUI_QueueMessage((const char *)TESObjectREFR, 0, 1u, durationj);
              return;
            }
            sub_57CC00((char)v30, st5_0, st6_0, st7_0);
            sub_5D5200(st5_0, st7_0, st6_0, (int)a2);
LABEL_106:
            if ( a2 != (TESForm *)TESDataHandler_g_RepairHammer || a1 != TESDataHandler_g_PlayerRef )
              goto LABEL_112;
            if ( PlayerCharacter_IsPlayerInCombat(TESDataHandler_g_PlayerRef, 0) && !dword_B38A90 )
            {
              __asm { fld     dword ptr ds:0A30634h }
              __asm { fstp    [esp+30h+duration]; duration }
              GameUI_QueueMessage((const char *)dword_B38A78, 0, 1u, durationn);
              return;
            }
            v75 = 0;
            sub_57CC00((char)v30, st5_0, st6_0, st7_0);
            sub_5D2070(st7_0, st6_0, 1, a12, 0, 0);
LABEL_112:
            if ( a2 == (TESForm *)TESDataHandler_g_VarlaStone && a1 == TESDataHandler_g_PlayerRef )
            {
              if ( PlayerCharacter_IsPlayerInCombat(TESDataHandler_g_PlayerRef, 0) && !dword_B38A88 )
              {
LABEL_93:
                __asm { fld     dword ptr ds:0A30634h }
                __asm { fstp    [esp+30h+duration]; duration }
                GameUI_QueueMessage((const char *)dword_B38A70, 0, 1u, durationk);
                return;
              }
              v75 = 0;
              if ( sub_5E0860((TESObjectREFR *)a1) )
              {
                v44 = ((double (__thiscall *)(PlayerCharacter *, TESForm *, ExtraDataList **, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD))a1->vtbl->super.super.super.RemoveItem)(
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
                __asm { fld     dword ptr ds:0A379B4h }
                __asm { fstp    [esp+38h+var_38]; float }
                QueueUIMessage((char)v30, v44, st6_0, (const char *)dword_B38890, v53, 0, 0);
                v45 = sub_447490("ITMWelkyndStoneUse");
                if ( v45 )
                {
                  v46 = (Sky *)sub_65AC50(a1, *(_DWORD *)(v45 + 0xC), 0, 1, 1);
                  ItemCount = v46;
                  if ( v46 )
                  {
                    sub_6B73E0(v46);
                    FormHeapFree((unsigned int)ItemCount);
                  }
                }
              }
              else
              {
                __asm { fld     dword ptr ds:0A30634h }
                __asm { fstp    [esp+38h+var_38]; float }
                QueueUIMessage((char)v30, st7_0, st6_0, (const char *)dword_B38878, v54, 0, 0);
              }
            }
            v47 = (float *)TESDataHandler_g_PlayerRef;
            if ( a2 == (TESForm *)TESDataHandler_g_WelkyndStone && a1 == (PlayerCharacter *)v47 )
            {
              AVModifierf = Player_GetAVModifierf(v47, 0, 9);
              __asm { fstp    [esp+2Ch+arg_C] }
              a1->vtbl->super.GetAV_F((Actor *)a1, kActorVal_Magicka);
              __asm { fstp    [esp+2Ch+var_14] }
              BaseCalcAVi = Actor_GetBaseCalcAVi((int *)a1, (int)ItemCount, (int)a2, (int)a1, 9);
              __asm
              {
                fild    [esp+2Ch+arg_4]
                fadd    [esp+2Ch+arg_C]
                fcomp   [esp+2Ch+var_14]
                fnstsw  ax
              }
              if ( (_AX & 0x4100) != 0 )
              {
                __asm { fld     dword ptr ds:0A30634h }
                __asm { fstp    [esp+30h+duration]; duration }
                GameUI_QueueMessage((const char *)dword_B38E98, 0, 1u, durationo);
              }
              else
              {
                v82 = Actor_GetBaseCalcAVi((int *)a1, (int)ItemCount, (int)a2, (int)a1, 9);
                __asm { fild    [esp+2Ch+arg_4] }
                __asm
                {
                  fadd    [esp+30h+arg_C]
                  fstp    [esp+30h+arg_C]
                  fld     [esp+30h+arg_C]
                  fstp    [esp+30h+var_14]
                }
                a1->vtbl->super.GetAV_F((Actor *)a1, kActorVal_Magicka);
                __asm { fsubr   [esp+2Ch+var_14] }
                __asm
                {
                  fstp    [esp+34h+arg_C]
                  fld     [esp+34h+arg_C]
                }
                __asm { fstp    [esp+34h+var_34] }
                ((void (__thiscall *)(PlayerCharacter *, int, _DWORD, _DWORD))a1->vtbl->super.DamageAV_F)(
                  a1,
                  9,
                  LODWORD(v56),
                  0);
                if ( TESDataHandler_g_PlayerRef == a1 )
                {
                  __asm { fld     dword ptr ds:0A30634h }
                  __asm { fstp    [esp+38h+var_38]; float }
                  QueueUIMessage((char)v30, AVModifierf, st6_0, (const char *)dword_B38888, v55, 0, 0);
                }
                v50 = sub_447490("ITMWelkyndStoneUse");
                if ( v50 )
                {
                  v51 = (_DWORD *)sub_65AC50(a1, *(_DWORD *)(v50 + 0xC), 0, 1, 1);
                  v52 = (unsigned int)v51;
                  if ( v51 )
                  {
                    sub_6B73E0(v51);
                    FormHeapFree(v52);
                  }
                }
                Script_AddEventToExtraScript(a1, a13, 2);
                a1->vtbl->super.super.super.RemoveItem(
                  (TESObjectREFR *)a1,
                  a2,
                  (BaseExtraList *)a13,
                  1,
                  0,
                  0,
                  0,
                  0,
                  0,
                  1,
                  0);
                sub_5C1900();
              }
              return;
            }
            if ( !v75 )
              goto LABEL_134;
            if ( a1 == (PlayerCharacter *)v47 )
            {
              __asm { fld     dword ptr ds:0A30634h }
              __asm { fstp    [esp+30h+duration]; duration }
              GameUI_QueueMessage((const char *)dword_B38A30, 0, 1u, durationp);
LABEL_134:
              if ( a1 == TESDataHandler_g_PlayerRef )
                sub_5E99C0((TESObjectREFR *)a1, a2, 1, v76);
            }
            if ( !sub_45A500(SaveLoad_CurrentSavegame) )
            {
              Script_AddEventToExtraScript(a1, a13, 2);
              Script_AddEventToExtraScript(a2, &a1->super.super.super.super.baseExtraList, 2);
            }
            break;
          default:
            v75 = 1;
            goto LABEL_106;
        }
      }
    }
  }
}
