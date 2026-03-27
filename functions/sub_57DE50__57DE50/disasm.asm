0x57DE50: mov     eax, ds:0B33398h
0x57DE55: mov     ecx, [eax+24h]
0x57DE58: test    ecx, ecx
0x57DE5A: jz      def_57DE71; jumptable 0057DE71 default case
0x57DE60: mov     eax, [esp+arg_0]
0x57DE64: add     eax, 0FFFFFFFFh; switch 36 cases
0x57DE67: cmp     eax, 23h
0x57DE6A: ja      def_57DE71; jumptable 0057DE71 default case
0x57DE70: push    esi
0x57DE71: jmp     ds:jpt_57DE71[eax*4]; switch jump
0x57DE78: push    1; jumptable 0057DE71 case 12
0x57DE7A: push    121h
0x57DE7F: push    offset aMenuend; "MenuEnd"
0x57DE84: jmp     loc_57E09A
0x57DE89: push    1; jumptable 0057DE71 case 13
0x57DE8B: push    121h
0x57DE90: push    offset aMenustart; "MenuStart"
0x57DE95: jmp     loc_57E09A
0x57DE9A: push    1; jumptable 0057DE71 case 14
0x57DE9C: push    121h
0x57DEA1: push    offset aUimenubracket; "UIMenuBracket"
0x57DEA6: jmp     loc_57E09A
0x57DEAB: push    1; jumptable 0057DE71 case 6
0x57DEAD: push    121h
0x57DEB2: push    offset aItmbookpagetur; "ITMBookPageTurn"
0x57DEB7: jmp     loc_57E09A
0x57DEBC: push    1; jumptable 0057DE71 case 4
0x57DEBE: push    121h
0x57DEC3: push    offset aUimenufocus; "UIMenuFocus"
0x57DEC8: jmp     loc_57E09A
0x57DECD: push    1; jumptable 0057DE71 cases 11,20
0x57DECF: push    121h
0x57DED4: push    offset aUimessage; "UIMessage"
0x57DED9: jmp     loc_57E09A
0x57DEDE: push    1; jumptable 0057DE71 case 3
0x57DEE0: push    121h
0x57DEE5: push    offset aUimenuprevnext; "UIMenuPrevNext"
0x57DEEA: jmp     loc_57E09A
0x57DEEF: push    1; jumptable 0057DE71 case 1
0x57DEF1: push    121h
0x57DEF6: push    offset aUimenuok; "UIMenuOK"
0x57DEFB: jmp     loc_57E09A
0x57DF00: push    1; jumptable 0057DE71 case 9
0x57DF02: push    121h
0x57DF07: push    offset aUiquestnew; "UIQuestNew"
0x57DF0C: jmp     loc_57E09A
0x57DF11: push    1; jumptable 0057DE71 case 10
0x57DF13: push    121h
0x57DF18: push    offset aUiquestupdate; "UIQuestUpdate"
0x57DF1D: jmp     loc_57E09A
0x57DF22: push    1; jumptable 0057DE71 case 7
0x57DF24: push    121h
0x57DF29: push    offset aUispeechrollov; "UISpeechRollover"
0x57DF2E: jmp     loc_57E09A
0x57DF33: push    1; jumptable 0057DE71 case 8
0x57DF35: push    121h
0x57DF3A: push    offset aUispeechrotate; "UISpeechRotate"
0x57DF3F: jmp     loc_57E09A
0x57DF44: push    1; jumptable 0057DE71 case 5
0x57DF46: push    121h
0x57DF4B: push    offset aUimenutabs; "UIMenuTabs"
0x57DF50: jmp     loc_57E09A
0x57DF55: push    1; jumptable 0057DE71 case 15
0x57DF57: push    121h
0x57DF5C: push    offset aUimessagefade; "UIMessageFade"
0x57DF61: jmp     loc_57E09A
0x57DF66: push    1; jumptable 0057DE71 case 16
0x57DF68: push    121h
0x57DF6D: push    offset aUiinventoryope; "UIInventoryOpen"
0x57DF72: jmp     loc_57E09A
0x57DF77: push    1; jumptable 0057DE71 case 17
0x57DF79: push    121h
0x57DF7E: push    offset aUiinventoryclo; "UIInventoryClose"
0x57DF83: jmp     loc_57E09A
0x57DF88: push    1; jumptable 0057DE71 case 18
0x57DF8A: push    121h
0x57DF8F: push    offset aUipotioncreate; "UIPotionCreate"
0x57DF94: jmp     loc_57E09A
0x57DF99: push    1; jumptable 0057DE71 case 19
0x57DF9B: push    121h
0x57DFA0: push    offset aDrslocked; "DRSLocked"
0x57DFA5: jmp     loc_57E09A
0x57DFAA: push    1; jumptable 0057DE71 cases 2,21
0x57DFAC: push    121h
0x57DFB1: push    offset aUimenucancel; "UIMenuCancel"
0x57DFB6: jmp     loc_57E09A
0x57DFBB: push    1; jumptable 0057DE71 case 22
0x57DFBD: push    121h
0x57DFC2: push    offset aUistatsskillup; "UIStatsSkillUp"
0x57DFC7: jmp     loc_57E09A
0x57DFCC: push    1; jumptable 0057DE71 case 23
0x57DFCE: push    121h
0x57DFD3: push    offset aSplequip; "SPLEquip"
0x57DFD8: jmp     loc_57E09A
0x57DFDD: push    1; jumptable 0057DE71 case 24
0x57DFDF: push    121h
0x57DFE4: push    offset aItmwelkyndston; "ITMWelkyndStoneUse"
0x57DFE9: jmp     loc_57E09A
0x57DFEE: push    1; jumptable 0057DE71 case 25
0x57DFF0: push    121h
0x57DFF5: push    offset aItmscrollopen; "ITMScrollOpen"
0x57DFFA: jmp     loc_57E09A
0x57DFFF: push    1; jumptable 0057DE71 case 26
0x57E001: push    121h
0x57E006: push    offset aItmscrollclose; "ITMScrollClose"
0x57E00B: jmp     loc_57E09A
0x57E010: push    1; jumptable 0057DE71 case 27
0x57E012: push    121h
0x57E017: push    offset aItmbookopen; "ITMBookOpen"
0x57E01C: jmp     short loc_57E09A
0x57E01E: push    1; jumptable 0057DE71 case 28
0x57E020: push    121h
0x57E025: push    offset aItmbookclose; "ITMBookClose"
0x57E02A: jmp     short loc_57E09A
0x57E02C: push    1; jumptable 0057DE71 case 29
0x57E02E: push    121h
0x57E033: push    offset aItmtakeall; "ITMTakeAll"
0x57E038: jmp     short loc_57E09A
0x57E03A: push    1; jumptable 0057DE71 case 30
0x57E03C: push    121h
0x57E041: push    offset aItmingredientn; "ITMIngredientNothing"
0x57E046: jmp     short loc_57E09A
0x57E048: push    1; jumptable 0057DE71 case 31
0x57E04A: push    121h
0x57E04F: push    offset aItmingredientd; "ITMIngredientDown"
0x57E054: jmp     short loc_57E09A
0x57E056: push    1; jumptable 0057DE71 case 32
0x57E058: push    121h
0x57E05D: push    offset aItmsoultrap; "ITMSoulTrap"
0x57E062: jmp     short loc_57E09A
0x57E064: push    1; jumptable 0057DE71 case 33
0x57E066: push    121h
0x57E06B: push    offset aUiarmorweaponr; "UIArmorWeaponRepairBreak"
0x57E070: jmp     short loc_57E09A
0x57E072: push    1; jumptable 0057DE71 case 34
0x57E074: push    121h
0x57E079: push    offset aItmbounddisapp; "ITMBoundDisappear"
0x57E07E: jmp     short loc_57E09A
0x57E080: push    1; jumptable 0057DE71 case 35
0x57E082: push    121h
0x57E087: push    offset aItmgoldup; "ITMGoldUp"
0x57E08C: jmp     short loc_57E09A
0x57E08E: push    1; jumptable 0057DE71 case 36
0x57E090: push    121h
0x57E095: push    offset aUiitemenchant; "UIItemEnchant"
0x57E09A: call    PlaySound???
0x57E09F: mov     esi, eax
0x57E0A1: test    esi, esi
0x57E0A3: jz      short loc_57E0BE
0x57E0A5: push    0
0x57E0A7: mov     ecx, esi
0x57E0A9: call    sub_6B7190
0x57E0AE: mov     ecx, esi; this
0x57E0B0: call    sub_6B73E0
0x57E0B5: push    esi
0x57E0B6: call    FormHeapFree
0x57E0BB: add     esp, 4
0x57E0BE: pop     esi
0x57E0BF: retn; jumptable 0057DE71 default case
