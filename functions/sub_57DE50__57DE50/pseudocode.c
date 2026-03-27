void __cdecl sub_57DE50(int a1)
{
  _DWORD *sound; // ecx
  int *v2; // eax
  int *v3; // esi

  sound = OSGlobals->sound;
  if ( sound )
  {
    switch ( a1 )
    {
      case 1:
        v2 = PlaySound___(sound, "UIMenuOK", 0x121, 1);
        goto LABEL_37;
      case 2:
      case 0x15:
        v2 = PlaySound___(sound, "UIMenuCancel", 0x121, 1);
        goto LABEL_37;
      case 3:
        v2 = PlaySound___(sound, "UIMenuPrevNext", 0x121, 1);
        goto LABEL_37;
      case 4:
        v2 = PlaySound___(sound, "UIMenuFocus", 0x121, 1);
        goto LABEL_37;
      case 5:
        v2 = PlaySound___(sound, "UIMenuTabs", 0x121, 1);
        goto LABEL_37;
      case 6:
        v2 = PlaySound___(sound, "ITMBookPageTurn", 0x121, 1);
        goto LABEL_37;
      case 7:
        v2 = PlaySound___(sound, "UISpeechRollover", 0x121, 1);
        goto LABEL_37;
      case 8:
        v2 = PlaySound___(sound, "UISpeechRotate", 0x121, 1);
        goto LABEL_37;
      case 9:
        v2 = PlaySound___(sound, "UIQuestNew", 0x121, 1);
        goto LABEL_37;
      case 0xA:
        v2 = PlaySound___(sound, "UIQuestUpdate", 0x121, 1);
        goto LABEL_37;
      case 0xB:
      case 0x14:
        v2 = PlaySound___(sound, "UIMessage", 0x121, 1);
        goto LABEL_37;
      case 0xC:
        v2 = PlaySound___(sound, "MenuEnd", 0x121, 1);
        goto LABEL_37;
      case 0xD:
        v2 = PlaySound___(sound, "MenuStart", 0x121, 1);
        goto LABEL_37;
      case 0xE:
        v2 = PlaySound___(sound, "UIMenuBracket", 0x121, 1);
        goto LABEL_37;
      case 0xF:
        v2 = PlaySound___(sound, "UIMessageFade", 0x121, 1);
        goto LABEL_37;
      case 0x10:
        v2 = PlaySound___(sound, "UIInventoryOpen", 0x121, 1);
        goto LABEL_37;
      case 0x11:
        v2 = PlaySound___(sound, "UIInventoryClose", 0x121, 1);
        goto LABEL_37;
      case 0x12:
        v2 = PlaySound___(sound, "UIPotionCreate", 0x121, 1);
        goto LABEL_37;
      case 0x13:
        v2 = PlaySound___(sound, "DRSLocked", 0x121, 1);
        goto LABEL_37;
      case 0x16:
        v2 = PlaySound___(sound, "UIStatsSkillUp", 0x121, 1);
        goto LABEL_37;
      case 0x17:
        v2 = PlaySound___(sound, "SPLEquip", 0x121, 1);
        goto LABEL_37;
      case 0x18:
        v2 = PlaySound___(sound, "ITMWelkyndStoneUse", 0x121, 1);
        goto LABEL_37;
      case 0x19:
        v2 = PlaySound___(sound, "ITMScrollOpen", 0x121, 1);
        goto LABEL_37;
      case 0x1A:
        v2 = PlaySound___(sound, "ITMScrollClose", 0x121, 1);
        goto LABEL_37;
      case 0x1B:
        v2 = PlaySound___(sound, "ITMBookOpen", 0x121, 1);
        goto LABEL_37;
      case 0x1C:
        v2 = PlaySound___(sound, "ITMBookClose", 0x121, 1);
        goto LABEL_37;
      case 0x1D:
        v2 = PlaySound___(sound, "ITMTakeAll", 0x121, 1);
        goto LABEL_37;
      case 0x1E:
        v2 = PlaySound___(sound, "ITMIngredientNothing", 0x121, 1);
        goto LABEL_37;
      case 0x1F:
        v2 = PlaySound___(sound, "ITMIngredientDown", 0x121, 1);
        goto LABEL_37;
      case 0x20:
        v2 = PlaySound___(sound, "ITMSoulTrap", 0x121, 1);
        goto LABEL_37;
      case 0x21:
        v2 = PlaySound___(sound, "UIArmorWeaponRepairBreak", 0x121, 1);
        goto LABEL_37;
      case 0x22:
        v2 = PlaySound___(sound, "ITMBoundDisappear", 0x121, 1);
        goto LABEL_37;
      case 0x23:
        v2 = PlaySound___(sound, "ITMGoldUp", 0x121, 1);
        goto LABEL_37;
      case 0x24:
        v2 = PlaySound___(sound, "UIItemEnchant", 0x121, 1);
LABEL_37:
        v3 = v2;
        if ( v2 )
        {
          sub_6B7190(v2, 0);
          sub_6B73E0(v3);
          FormHeapFree((unsigned int)v3);
        }
        break;
      default:
        return;
    }
  }
}
