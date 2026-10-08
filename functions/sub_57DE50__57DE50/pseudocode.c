void __cdecl sub_57DE50(int a1)
{
  int *sound; // ecx
  int *v2; // eax
  int *v3; // esi

  sound = (int *)MEMORY[0xB33398]->sound; /*0x57de55*/
  if ( sound ) /*0x57de5a*/
  {
    switch ( a1 ) /*0x57de71*/
    {
      case 1: /*0x57de71*/
        v2 = PlaySound___(sound, "UIMenuOK", 0x121, 1); /*0x57defb*/
        goto LABEL_37; /*0x57defb*/
      case 2: /*0x57de71*/
      case 0x15: /*0x57de71*/
        v2 = PlaySound___(sound, "UIMenuCancel", 0x121, 1); /*0x57dfb6*/
        goto LABEL_37; /*0x57dfb6*/
      case 3: /*0x57de71*/
        v2 = PlaySound___(sound, "UIMenuPrevNext", 0x121, 1); /*0x57deea*/
        goto LABEL_37; /*0x57deea*/
      case 4: /*0x57de71*/
        v2 = PlaySound___(sound, "UIMenuFocus", 0x121, 1); /*0x57dec8*/
        goto LABEL_37; /*0x57dec8*/
      case 5: /*0x57de71*/
        v2 = PlaySound___(sound, "UIMenuTabs", 0x121, 1); /*0x57df50*/
        goto LABEL_37; /*0x57df50*/
      case 6: /*0x57de71*/
        v2 = PlaySound___(sound, "ITMBookPageTurn", 0x121, 1); /*0x57deb7*/
        goto LABEL_37; /*0x57deb7*/
      case 7: /*0x57de71*/
        v2 = PlaySound___(sound, "UISpeechRollover", 0x121, 1); /*0x57df2e*/
        goto LABEL_37; /*0x57df2e*/
      case 8: /*0x57de71*/
        v2 = PlaySound___(sound, "UISpeechRotate", 0x121, 1); /*0x57df3f*/
        goto LABEL_37; /*0x57df3f*/
      case 9: /*0x57de71*/
        v2 = PlaySound___(sound, "UIQuestNew", 0x121, 1); /*0x57df0c*/
        goto LABEL_37; /*0x57df0c*/
      case 0xA: /*0x57de71*/
        v2 = PlaySound___(sound, "UIQuestUpdate", 0x121, 1); /*0x57df1d*/
        goto LABEL_37; /*0x57df1d*/
      case 0xB: /*0x57de71*/
      case 0x14: /*0x57de71*/
        v2 = PlaySound___(sound, "UIMessage", 0x121, 1); /*0x57ded9*/
        goto LABEL_37; /*0x57ded9*/
      case 0xC: /*0x57de71*/
        v2 = PlaySound___(sound, "MenuEnd", 0x121, 1); /*0x57de84*/
        goto LABEL_37; /*0x57de84*/
      case 0xD: /*0x57de71*/
        v2 = PlaySound___(sound, "MenuStart", 0x121, 1); /*0x57de95*/
        goto LABEL_37; /*0x57de95*/
      case 0xE: /*0x57de71*/
        v2 = PlaySound___(sound, "UIMenuBracket", 0x121, 1); /*0x57dea6*/
        goto LABEL_37; /*0x57dea6*/
      case 0xF: /*0x57de71*/
        v2 = PlaySound___(sound, "UIMessageFade", 0x121, 1); /*0x57df61*/
        goto LABEL_37; /*0x57df61*/
      case 0x10: /*0x57de71*/
        v2 = PlaySound___(sound, "UIInventoryOpen", 0x121, 1); /*0x57df72*/
        goto LABEL_37; /*0x57df72*/
      case 0x11: /*0x57de71*/
        v2 = PlaySound___(sound, "UIInventoryClose", 0x121, 1); /*0x57df83*/
        goto LABEL_37; /*0x57df83*/
      case 0x12: /*0x57de71*/
        v2 = PlaySound___(sound, "UIPotionCreate", 0x121, 1); /*0x57df94*/
        goto LABEL_37; /*0x57df94*/
      case 0x13: /*0x57de71*/
        v2 = PlaySound___(sound, "DRSLocked", 0x121, 1); /*0x57dfa5*/
        goto LABEL_37; /*0x57dfa5*/
      case 0x16: /*0x57de71*/
        v2 = PlaySound___(sound, "UIStatsSkillUp", 0x121, 1); /*0x57dfc7*/
        goto LABEL_37; /*0x57dfc7*/
      case 0x17: /*0x57de71*/
        v2 = PlaySound___(sound, "SPLEquip", 0x121, 1); /*0x57dfd8*/
        goto LABEL_37; /*0x57dfd8*/
      case 0x18: /*0x57de71*/
        v2 = PlaySound___(sound, "ITMWelkyndStoneUse", 0x121, 1); /*0x57dfe9*/
        goto LABEL_37; /*0x57dfe9*/
      case 0x19: /*0x57de71*/
        v2 = PlaySound___(sound, "ITMScrollOpen", 0x121, 1); /*0x57dffa*/
        goto LABEL_37; /*0x57dffa*/
      case 0x1A: /*0x57de71*/
        v2 = PlaySound___(sound, "ITMScrollClose", 0x121, 1); /*0x57e00b*/
        goto LABEL_37; /*0x57e00b*/
      case 0x1B: /*0x57de71*/
        v2 = PlaySound___(sound, "ITMBookOpen", 0x121, 1); /*0x57e01c*/
        goto LABEL_37; /*0x57e01c*/
      case 0x1C: /*0x57de71*/
        v2 = PlaySound___(sound, "ITMBookClose", 0x121, 1); /*0x57e02a*/
        goto LABEL_37; /*0x57e02a*/
      case 0x1D: /*0x57de71*/
        v2 = PlaySound___(sound, "ITMTakeAll", 0x121, 1); /*0x57e038*/
        goto LABEL_37; /*0x57e038*/
      case 0x1E: /*0x57de71*/
        v2 = PlaySound___(sound, "ITMIngredientNothing", 0x121, 1); /*0x57e046*/
        goto LABEL_37; /*0x57e046*/
      case 0x1F: /*0x57de71*/
        v2 = PlaySound___(sound, "ITMIngredientDown", 0x121, 1); /*0x57e054*/
        goto LABEL_37; /*0x57e054*/
      case 0x20: /*0x57de71*/
        v2 = PlaySound___(sound, "ITMSoulTrap", 0x121, 1); /*0x57e062*/
        goto LABEL_37; /*0x57e062*/
      case 0x21: /*0x57de71*/
        v2 = PlaySound___(sound, "UIArmorWeaponRepairBreak", 0x121, 1); /*0x57e070*/
        goto LABEL_37; /*0x57e070*/
      case 0x22: /*0x57de71*/
        v2 = PlaySound___(sound, "ITMBoundDisappear", 0x121, 1); /*0x57e07e*/
        goto LABEL_37; /*0x57e07e*/
      case 0x23: /*0x57de71*/
        v2 = PlaySound___(sound, "ITMGoldUp", 0x121, 1); /*0x57e08c*/
        goto LABEL_37; /*0x57e08c*/
      case 0x24: /*0x57de71*/
        v2 = PlaySound___(sound, "UIItemEnchant", 0x121, 1); /*0x57e09a*/
LABEL_37:
        v3 = v2; /*0x57e09f*/
        if ( v2 ) /*0x57e0a3*/
        {
          sub_6B7190(v2, 0); /*0x57e0a9*/
          sub_6B73E0(v3); /*0x57e0b0*/
          FormHeapFree((unsigned int)v3); /*0x57e0b6*/
        }
        break; /*0x57e0b6*/
      default:
        return;
    }
  }
}
