0x587D20: push    0FFFFFFFFh
0x587D22: push    offset Menu_CreateDynamic_SEH
0x587D27: mov     eax, large fs:0
0x587D2D: push    eax
0x587D2E: mov     eax, ds:0B30AACh
0x587D33: xor     eax, esp
0x587D35: push    eax; ArgList
0x587D36: lea     eax, [esp+10h+var_C]
0x587D3A: mov     large fs:0, eax
0x587D40: mov     eax, [esp+10h+arg_0]
0x587D44: add     eax, 0FFFFFC17h; switch 51 cases
0x587D49: cmp     eax, 32h
0x587D4C: ja      Menu_CreateDynamic___def_587D52; jumptable 00587D52 default case, cases 1029,1031,1033,1050
0x587D52: jmp     ds:jpt_587D52[eax*4]; switch jump
0x587D59: push    64h ; 'd'; jumptable 00587D52 case 1001
0x587D5B: call    FormHeapAlloc
0x587D60: add     esp, 4
0x587D63: mov     [esp+10h+arg_0], eax
0x587D67: test    eax, eax
0x587D69: mov     [esp+10h+var_4], 0
0x587D71: jz      Menu_CreateDynamic___Return_0
0x587D77: mov     ecx, eax; this
0x587D79: call    ??0MessageMenu@@QAE@XZ; MessageMenu::MessageMenu(void)
0x587D7E: mov     ecx, [esp+10h+var_C]
0x587D82: mov     large fs:0, ecx
0x587D89: pop     ecx
0x587D8A: add     esp, 0Ch
0x587D8D: retn    4
0x587D90: push    100h; jumptable 00587D52 case 1023
0x587D95: call    FormHeapAlloc
0x587D9A: add     esp, 4
0x587D9D: mov     [esp+10h+arg_0], eax
0x587DA1: test    eax, eax
0x587DA3: mov     [esp+10h+var_4], 1
0x587DAB: jz      Menu_CreateDynamic___Return_0
0x587DB1: mov     ecx, eax; this
0x587DB3: call    ??0MapMenu@@QAE@XZ; MapMenu::MapMenu(void)
0x587DB8: mov     ecx, [esp+10h+var_C]
0x587DBC: mov     large fs:0, ecx
0x587DC3: pop     ecx
0x587DC4: add     esp, 0Ch
0x587DC7: retn    4
0x587DCA: push    5Ch ; '\'; jumptable 00587D52 case 1022
0x587DCC: call    FormHeapAlloc
0x587DD1: add     esp, 4
0x587DD4: mov     [esp+10h+arg_0], eax
0x587DD8: test    eax, eax
0x587DDA: mov     [esp+10h+var_4], 2
0x587DE2: jz      Menu_CreateDynamic___Return_0
0x587DE8: mov     ecx, eax; this
0x587DEA: call    ??0MagicMenu@@QAE@XZ; MagicMenu::MagicMenu(void)
0x587DEF: mov     ecx, [esp+10h+var_C]
0x587DF3: mov     large fs:0, ecx
0x587DFA: pop     ecx
0x587DFB: add     esp, 0Ch
0x587DFE: retn    4
0x587E01: push    58h ; 'X'; jumptable 00587D52 case 1002
0x587E03: call    FormHeapAlloc
0x587E08: add     esp, 4
0x587E0B: mov     [esp+10h+arg_0], eax
0x587E0F: test    eax, eax
0x587E11: mov     [esp+10h+var_4], 3
0x587E19: jz      Menu_CreateDynamic___Return_0
0x587E1F: mov     ecx, eax
0x587E21: call    InventoryMenu_constr
0x587E26: mov     ecx, [esp+10h+var_C]
0x587E2A: mov     large fs:0, ecx
0x587E31: pop     ecx
0x587E32: add     esp, 0Ch
0x587E35: retn    4
0x587E38: push    0B4h ; '´'; jumptable 00587D52 case 1003
0x587E3D: call    FormHeapAlloc
0x587E42: add     esp, 4
0x587E45: mov     [esp+10h+arg_0], eax
0x587E49: test    eax, eax
0x587E4B: mov     [esp+10h+var_4], 4
0x587E53: jz      Menu_CreateDynamic___Return_0
0x587E59: mov     ecx, eax
0x587E5B: call    StatsMenu_constr
0x587E60: mov     ecx, [esp+10h+var_C]
0x587E64: mov     large fs:0, ecx
0x587E6B: pop     ecx
0x587E6C: add     esp, 0Ch
0x587E6F: retn    4
0x587E72: push    94h ; '”'; jumptable 00587D52 case 1004
0x587E77: call    FormHeapAlloc
0x587E7C: add     esp, 4
0x587E7F: mov     [esp+10h+arg_0], eax
0x587E83: test    eax, eax
0x587E85: mov     [esp+10h+var_4], 5
0x587E8D: jz      Menu_CreateDynamic___Return_0
0x587E93: mov     ecx, eax; this
0x587E95: call    ??0HUDMainMenu@@QAE@XZ; HUDMainMenu::HUDMainMenu(void)
0x587E9A: mov     ecx, [esp+10h+var_C]
0x587E9E: mov     large fs:0, ecx
0x587EA5: pop     ecx
0x587EA6: add     esp, 0Ch
0x587EA9: retn    4
0x587EAC: push    5Ch ; '\'; jumptable 00587D52 case 1005
0x587EAE: call    FormHeapAlloc
0x587EB3: add     esp, 4
0x587EB6: mov     [esp+10h+arg_0], eax
0x587EBA: test    eax, eax
0x587EBC: mov     [esp+10h+var_4], 6
0x587EC4: jz      Menu_CreateDynamic___Return_0
0x587ECA: mov     ecx, eax
0x587ECC: call    sub_5A4660
0x587ED1: mov     ecx, [esp+10h+var_C]
0x587ED5: mov     large fs:0, ecx
0x587EDC: pop     ecx
0x587EDD: add     esp, 0Ch
0x587EE0: retn    4
0x587EE3: push    74h ; 't'; jumptable 00587D52 case 1007
0x587EE5: call    FormHeapAlloc
0x587EEA: add     esp, 4
0x587EED: mov     [esp+10h+arg_0], eax
0x587EF1: test    eax, eax
0x587EF3: mov     [esp+10h+var_4], 7
0x587EFB: jz      Menu_CreateDynamic___Return_0
0x587F01: mov     ecx, eax; this
0x587F03: call    ??0LoadingMenu@@QAE@XZ; LoadingMenu::LoadingMenu(void)
0x587F08: mov     ecx, [esp+10h+var_C]
0x587F0C: mov     large fs:0, ecx
0x587F13: pop     ecx
0x587F14: add     esp, 0Ch
0x587F17: retn    4
0x587F1A: push    68h ; 'h'; jumptable 00587D52 case 1008
0x587F1C: call    FormHeapAlloc
0x587F21: add     esp, 4
0x587F24: mov     [esp+10h+arg_0], eax
0x587F28: test    eax, eax
0x587F2A: mov     [esp+10h+var_4], 8
0x587F32: jz      Menu_CreateDynamic___Return_0
0x587F38: mov     ecx, eax; this
0x587F3A: call    ??0ContainerMenu@@QAE@XZ; ContainerMenu::ContainerMenu(void)
0x587F3F: mov     ecx, [esp+10h+var_C]
0x587F43: mov     large fs:0, ecx
0x587F4A: pop     ecx
0x587F4B: add     esp, 0Ch
0x587F4E: retn    4
0x587F51: push    98h ; '˜'; jumptable 00587D52 case 1009
0x587F56: call    FormHeapAlloc
0x587F5B: add     esp, 4
0x587F5E: mov     [esp+10h+arg_0], eax
0x587F62: test    eax, eax
0x587F64: mov     [esp+10h+var_4], 9
0x587F6C: jz      Menu_CreateDynamic___Return_0
0x587F72: mov     ecx, eax; this
0x587F74: call    ??0DialogMenu@@QAE@XZ; DialogMenu::DialogMenu(void)
0x587F79: mov     ecx, [esp+10h+var_C]
0x587F7D: mov     large fs:0, ecx
0x587F84: pop     ecx
0x587F85: add     esp, 0Ch
0x587F88: retn    4
0x587F8B: push    44h ; 'D'; jumptable 00587D52 case 1010
0x587F8D: call    FormHeapAlloc
0x587F92: add     esp, 4
0x587F95: mov     [esp+10h+arg_0], eax
0x587F99: test    eax, eax
0x587F9B: mov     [esp+10h+var_4], 0Ah
0x587FA3: jz      Menu_CreateDynamic___Return_0
0x587FA9: mov     ecx, eax; this
0x587FAB: call    ??0HUDSubtitleMenu@@QAE@XZ; HUDSubtitleMenu::HUDSubtitleMenu(void)
0x587FB0: mov     ecx, [esp+10h+var_C]
0x587FB4: mov     large fs:0, ecx
0x587FBB: pop     ecx
0x587FBC: add     esp, 0Ch
0x587FBF: retn    4
0x587FC2: push    38h ; '8'; jumptable 00587D52 case 1011
0x587FC4: call    FormHeapAlloc
0x587FC9: add     esp, 4
0x587FCC: mov     [esp+10h+arg_0], eax
0x587FD0: test    eax, eax
0x587FD2: mov     [esp+10h+var_4], 0Bh
0x587FDA: jz      Menu_CreateDynamic___Return_0
0x587FE0: mov     ecx, eax; this
0x587FE2: call    ??0GenericMenu@@QAE@XZ; GenericMenu::GenericMenu(void)
0x587FE7: mov     ecx, [esp+10h+var_C]
0x587FEB: mov     large fs:0, ecx
0x587FF2: pop     ecx
0x587FF3: add     esp, 0Ch
0x587FF6: retn    4
0x587FF9: push    50h ; 'P'; jumptable 00587D52 case 1012
0x587FFB: call    FormHeapAlloc
0x588000: add     esp, 4
0x588003: mov     [esp+10h+arg_0], eax
0x588007: test    eax, eax
0x588009: mov     [esp+10h+var_4], 0Ch
0x588011: jz      Menu_CreateDynamic___Return_0
0x588017: mov     ecx, eax; this
0x588019: call    ??0SleepWaitMenu@@QAE@XZ; SleepWaitMenu::SleepWaitMenu(void)
0x58801E: mov     ecx, [esp+10h+var_C]
0x588022: mov     large fs:0, ecx
0x588029: pop     ecx
0x58802A: add     esp, 0Ch
0x58802D: retn    4
0x588030: push    3Ch ; '<'; jumptable 00587D52 case 1013
0x588032: call    FormHeapAlloc
0x588037: add     esp, 4
0x58803A: mov     [esp+10h+arg_0], eax
0x58803E: test    eax, eax
0x588040: mov     [esp+10h+var_4], 0Dh
0x588048: jz      Menu_CreateDynamic___Return_0
0x58804E: mov     ecx, eax
0x588050: call    sub_5BD960
0x588055: mov     ecx, [esp+10h+var_C]
0x588059: mov     large fs:0, ecx
0x588060: pop     ecx
0x588061: add     esp, 0Ch
0x588064: retn    4
0x588067: push    180h; jumptable 00587D52 case 1014
0x58806C: call    FormHeapAlloc
0x588071: add     esp, 4
0x588074: mov     [esp+10h+arg_0], eax
0x588078: test    eax, eax
0x58807A: mov     [esp+10h+var_4], 0Eh
0x588082: jz      Menu_CreateDynamic___Return_0
0x588088: mov     ecx, eax
0x58808A: call    sub_5AF310
0x58808F: mov     ecx, [esp+10h+var_C]
0x588093: mov     large fs:0, ecx
0x58809A: pop     ecx
0x58809B: add     esp, 0Ch
0x58809E: retn    4
0x5880A1: push    40h ; '@'; jumptable 00587D52 case 1015
0x5880A3: call    FormHeapAlloc
0x5880A8: add     esp, 4
0x5880AB: mov     [esp+10h+arg_0], eax
0x5880AF: test    eax, eax
0x5880B1: mov     [esp+10h+var_4], 0Fh
0x5880B9: jz      Menu_CreateDynamic___Return_0
0x5880BF: mov     ecx, eax
0x5880C1: call    sub_5BD580
0x5880C6: mov     ecx, [esp+10h+var_C]
0x5880CA: mov     large fs:0, ecx
0x5880D1: pop     ecx
0x5880D2: add     esp, 0Ch
0x5880D5: retn    4
0x5880D8: push    58h ; 'X'; jumptable 00587D52 case 1016
0x5880DA: call    FormHeapAlloc
0x5880DF: add     esp, 4
0x5880E2: mov     [esp+10h+arg_0], eax
0x5880E6: test    eax, eax
0x5880E8: mov     [esp+10h+var_4], 10h
0x5880F0: jz      Menu_CreateDynamic___Return_0
0x5880F6: mov     ecx, eax
0x5880F8: call    sub_5C04F0
0x5880FD: mov     ecx, [esp+10h+var_C]
0x588101: mov     large fs:0, ecx
0x588108: pop     ecx
0x588109: add     esp, 0Ch
0x58810C: retn    4
0x58810F: push    54h ; 'T'; jumptable 00587D52 case 1017
0x588111: call    FormHeapAlloc
0x588116: add     esp, 4
0x588119: mov     [esp+10h+arg_0], eax
0x58811D: test    eax, eax
0x58811F: mov     [esp+10h+var_4], 11h
0x588127: jz      Menu_CreateDynamic___Return_0
0x58812D: mov     ecx, eax
0x58812F: call    sub_595150
0x588134: mov     ecx, [esp+10h+var_C]
0x588138: mov     large fs:0, ecx
0x58813F: pop     ecx
0x588140: add     esp, 0Ch
0x588143: retn    4
0x588146: push    48h ; 'H'; jumptable 00587D52 case 1019
0x588148: call    FormHeapAlloc
0x58814D: add     esp, 4
0x588150: mov     [esp+10h+arg_0], eax
0x588154: test    eax, eax
0x588156: mov     [esp+10h+var_4], 12h
0x58815E: jz      Menu_CreateDynamic___Return_0
0x588164: mov     ecx, eax
0x588166: call    sub_5DD960
0x58816B: mov     ecx, [esp+10h+var_C]
0x58816F: mov     large fs:0, ecx
0x588176: pop     ecx
0x588177: add     esp, 0Ch
0x58817A: retn    4
0x58817D: push    118h; jumptable 00587D52 case 1018
0x588182: call    FormHeapAlloc
0x588187: add     esp, 4
0x58818A: mov     [esp+10h+arg_0], eax
0x58818E: test    eax, eax
0x588190: mov     [esp+10h+var_4], 13h
0x588198: jz      Menu_CreateDynamic___Return_0
0x58819E: mov     ecx, eax; this
0x5881A0: call    ??0VideoMenu@@QAE@XZ; VideoMenu::VideoMenu(void)
0x5881A5: mov     ecx, [esp+10h+var_C]
0x5881A9: mov     large fs:0, ecx
0x5881B0: pop     ecx
0x5881B1: add     esp, 0Ch
0x5881B4: retn    4
0x5881B7: push    4Ch ; 'L'; jumptable 00587D52 case 1020
0x5881B9: call    FormHeapAlloc
0x5881BE: add     esp, 4
0x5881C1: mov     [esp+10h+arg_0], eax
0x5881C5: test    eax, eax
0x5881C7: mov     [esp+10h+var_4], 14h
0x5881CF: jz      Menu_CreateDynamic___Return_0
0x5881D5: mov     ecx, eax
0x5881D7: call    sub_5A3310
0x5881DC: mov     ecx, [esp+10h+var_C]
0x5881E0: mov     large fs:0, ecx
0x5881E7: pop     ecx
0x5881E8: add     esp, 0Ch
0x5881EB: retn    4
0x5881EE: push    0E8h ; 'è'; jumptable 00587D52 case 1021
0x5881F3: call    FormHeapAlloc
0x5881F8: add     esp, 4
0x5881FB: mov     [esp+10h+arg_0], eax
0x5881FF: test    eax, eax
0x588201: mov     [esp+10h+var_4], 15h
0x588209: jz      Menu_CreateDynamic___Return_0
0x58820F: mov     ecx, eax
0x588211: call    sub_5874A0
0x588216: mov     ecx, [esp+10h+var_C]
0x58821A: mov     large fs:0, ecx
0x588221: pop     ecx
0x588222: add     esp, 0Ch
0x588225: retn    4
0x588228: push    68h ; 'h'; jumptable 00587D52 case 1025
0x58822A: call    FormHeapAlloc
0x58822F: add     esp, 4
0x588232: mov     [esp+10h+arg_0], eax
0x588236: test    eax, eax
0x588238: mov     [esp+10h+var_4], 16h
0x588240: jz      Menu_CreateDynamic___Return_0
0x588246: mov     ecx, eax
0x588248: call    sub_5BCE40
0x58824D: mov     ecx, [esp+10h+var_C]
0x588251: mov     large fs:0, ecx
0x588258: pop     ecx
0x588259: add     esp, 0Ch
0x58825C: retn    4
0x58825F: push    60h ; '`'; jumptable 00587D52 case 1024
0x588261: call    FormHeapAlloc
0x588266: add     esp, 4
0x588269: mov     [esp+10h+arg_0], eax
0x58826D: test    eax, eax
0x58826F: mov     [esp+10h+var_4], 17h
0x588277: jz      Menu_CreateDynamic___Return_0
0x58827D: mov     ecx, eax
0x58827F: call    MagicPopupMenu_constr
0x588284: mov     ecx, [esp+10h+var_C]
0x588288: mov     large fs:0, ecx
0x58828F: pop     ecx
0x588290: add     esp, 0Ch
0x588293: retn    4
0x588296: push    3Ch ; '<'; jumptable 00587D52 case 1026
0x588298: call    FormHeapAlloc
0x58829D: add     esp, 4
0x5882A0: mov     [esp+10h+arg_0], eax
0x5882A4: test    eax, eax
0x5882A6: mov     [esp+10h+var_4], 18h
0x5882AE: jz      Menu_CreateDynamic___Return_0
0x5882B4: mov     ecx, eax
0x5882B6: call    sub_595BE0
0x5882BB: mov     ecx, [esp+10h+var_C]
0x5882BF: mov     large fs:0, ecx
0x5882C6: pop     ecx
0x5882C7: add     esp, 0Ch
0x5882CA: retn    4
0x5882CD: push    80h ; '€'; jumptable 00587D52 case 1048
0x5882D2: call    FormHeapAlloc
0x5882D7: add     esp, 4
0x5882DA: mov     [esp+10h+arg_0], eax
0x5882DE: test    eax, eax
0x5882E0: mov     [esp+10h+var_4], 19h
0x5882E8: jz      Menu_CreateDynamic___Return_0
0x5882EE: mov     ecx, eax; this
0x5882F0: call    ??0SigilStoneMenu@@QAE@XZ; SigilStoneMenu::SigilStoneMenu(void)
0x5882F5: mov     ecx, [esp+10h+var_C]
0x5882F9: mov     large fs:0, ecx
0x588300: pop     ecx
0x588301: add     esp, 0Ch
0x588304: retn    4
0x588307: push    28h ; '('; jumptable 00587D52 case 1006
0x588309: call    FormHeapAlloc
0x58830E: add     esp, 4
0x588311: mov     [esp+10h+arg_0], eax
0x588315: test    eax, eax
0x588317: mov     [esp+10h+var_4], 1Ah
0x58831F: jz      Menu_CreateDynamic___Return_0
0x588325: mov     ecx, eax
0x588327: call    sub_5A7FE0
0x58832C: mov     ecx, [esp+10h+var_C]
0x588330: mov     large fs:0, ecx
0x588337: pop     ecx
0x588338: add     esp, 0Ch
0x58833B: retn    4
0x58833E: push    34h ; '4'; jumptable 00587D52 case 1027
0x588340: call    FormHeapAlloc
0x588345: add     esp, 4
0x588348: mov     [esp+10h+arg_0], eax
0x58834C: test    eax, eax
0x58834E: mov     [esp+10h+var_4], 1Bh
0x588356: jz      Menu_CreateDynamic___Return_0
0x58835C: mov     ecx, eax
0x58835E: call    sub_5AC550
0x588363: mov     ecx, [esp+10h+var_C]
0x588367: mov     large fs:0, ecx
0x58836E: pop     ecx
0x58836F: add     esp, 0Ch
0x588372: retn    4
0x588375: push    64h ; 'd'; jumptable 00587D52 case 1028
0x588377: call    FormHeapAlloc
0x58837C: add     esp, 4
0x58837F: mov     [esp+10h+arg_0], eax
0x588383: test    eax, eax
0x588385: mov     [esp+10h+var_4], 1Ch
0x58838D: jz      Menu_CreateDynamic___Return_0
0x588393: mov     ecx, eax
0x588395: call    sub_5DD200
0x58839A: mov     ecx, [esp+10h+var_C]
0x58839E: mov     large fs:0, ecx
0x5883A5: pop     ecx
0x5883A6: add     esp, 0Ch
0x5883A9: retn    4
0x5883AC: push    8Ch ; 'Œ'; jumptable 00587D52 case 1030
0x5883B1: call    FormHeapAlloc
0x5883B6: add     esp, 4
0x5883B9: mov     [esp+10h+arg_0], eax
0x5883BD: test    eax, eax
0x5883BF: mov     [esp+10h+var_4], 1Dh
0x5883C7: jz      Menu_CreateDynamic___Return_0
0x5883CD: mov     ecx, eax; this
0x5883CF: call    ??0ClassMenu@@QAE@XZ; ClassMenu::ClassMenu(void)
0x5883D4: mov     ecx, [esp+10h+var_C]
0x5883D8: mov     large fs:0, ecx
0x5883DF: pop     ecx
0x5883E0: add     esp, 0Ch
0x5883E3: retn    4
0x5883E6: push    50h ; 'P'; jumptable 00587D52 case 1032
0x5883E8: call    FormHeapAlloc
0x5883ED: add     esp, 4
0x5883F0: mov     [esp+10h+arg_0], eax
0x5883F4: test    eax, eax
0x5883F6: mov     [esp+10h+var_4], 1Eh
0x5883FE: jz      Menu_CreateDynamic___Return_0
0x588404: mov     ecx, eax
0x588406: call    sub_5D5610
0x58840B: mov     ecx, [esp+10h+var_C]
0x58840F: mov     large fs:0, ecx
0x588416: pop     ecx
0x588417: add     esp, 0Ch
0x58841A: retn    4
0x58841D: push    0FCh ; 'ü'; jumptable 00587D52 case 1034
0x588422: call    FormHeapAlloc
0x588427: add     esp, 4
0x58842A: mov     [esp+10h+arg_0], eax
0x58842E: test    eax, eax
0x588430: mov     [esp+10h+var_4], 1Fh
0x588438: jz      Menu_CreateDynamic___Return_0
0x58843E: mov     ecx, eax
0x588440: call    sub_5BDFF0
0x588445: mov     ecx, [esp+10h+var_C]
0x588449: mov     large fs:0, ecx
0x588450: pop     ecx
0x588451: add     esp, 0Ch
0x588454: retn    4
0x588457: push    9B0h; jumptable 00587D52 case 1036
0x58845C: call    FormHeapAlloc
0x588461: add     esp, 4
0x588464: mov     [esp+10h+arg_0], eax
0x588468: test    eax, eax
0x58846A: mov     [esp+10h+var_4], 20h ; ' '
0x588472: jz      Menu_CreateDynamic___Return_0
0x588478: mov     ecx, eax; this
0x58847A: call    ??0RaceSexMenu@@QAE@XZ; RaceSexMenu::RaceSexMenu(void)
0x58847F: mov     ecx, [esp+10h+var_C]
0x588483: mov     large fs:0, ecx
0x58848A: pop     ecx
0x58848B: add     esp, 0Ch
0x58848E: retn    4
0x588491: push    78h ; 'x'; jumptable 00587D52 case 1035
0x588493: call    FormHeapAlloc
0x588498: add     esp, 4
0x58849B: mov     [esp+10h+arg_0], eax
0x58849F: test    eax, eax
0x5884A1: mov     [esp+10h+var_4], 21h ; '!'
0x5884A9: jz      Menu_CreateDynamic___Return_0
0x5884AF: mov     ecx, eax; this
0x5884B1: call    ??0RepairMenu@@QAE@XZ; RepairMenu::RepairMenu(void)
0x5884B6: mov     ecx, [esp+10h+var_C]
0x5884BA: mov     large fs:0, ecx
0x5884C1: pop     ecx
0x5884C2: add     esp, 0Ch
0x5884C5: retn    4
0x5884C8: push    54h ; 'T'; jumptable 00587D52 case 1049
0x5884CA: call    FormHeapAlloc
0x5884CF: add     esp, 4
0x5884D2: mov     [esp+10h+arg_0], eax
0x5884D6: test    eax, eax
0x5884D8: mov     [esp+10h+var_4], 22h ; '"'
0x5884E0: jz      Menu_CreateDynamic___Return_0
0x5884E6: mov     ecx, eax; this
0x5884E8: call    ??0RechargeMenu@@QAE@XZ; RechargeMenu::RechargeMenu(void)
0x5884ED: mov     ecx, [esp+10h+var_C]
0x5884F1: mov     large fs:0, ecx
0x5884F8: pop     ecx
0x5884F9: add     esp, 0Ch
0x5884FC: retn    4
0x5884FF: push    68h ; 'h'; jumptable 00587D52 case 1037
0x588501: call    FormHeapAlloc
0x588506: add     esp, 4
0x588509: mov     [esp+10h+arg_0], eax
0x58850D: test    eax, eax
0x58850F: mov     [esp+10h+var_4], 23h ; '#'
0x588517: jz      Menu_CreateDynamic___Return_0
0x58851D: mov     ecx, eax
0x58851F: call    sub_5D8900
0x588524: mov     ecx, [esp+10h+var_C]
0x588528: mov     large fs:0, ecx
0x58852F: pop     ecx
0x588530: add     esp, 0Ch
0x588533: retn    4
0x588536: push    60h ; '`'; jumptable 00587D52 case 1039
0x588538: call    FormHeapAlloc
0x58853D: add     esp, 4
0x588540: mov     [esp+10h+arg_0], eax
0x588544: test    eax, eax
0x588546: mov     [esp+10h+var_4], 24h ; '$'
0x58854E: jz      Menu_CreateDynamic___Return_0
0x588554: mov     ecx, eax; this
0x588556: call    ??0SaveMenu@@QAE@XZ; SaveMenu::SaveMenu(void)
0x58855B: mov     ecx, [esp+10h+var_C]
0x58855F: mov     large fs:0, ecx
0x588566: pop     ecx
0x588567: add     esp, 0Ch
0x58856A: retn    4
0x58856D: push    68h ; 'h'; jumptable 00587D52 case 1038
0x58856F: call    FormHeapAlloc
0x588574: add     esp, 4
0x588577: mov     [esp+10h+arg_0], eax
0x58857B: test    eax, eax
0x58857D: mov     [esp+10h+var_4], 25h ; '%'
0x588585: jz      Menu_CreateDynamic___Return_0
0x58858B: mov     ecx, eax; this
0x58858D: call    ??0LoadgameMenu@@QAE@XZ; LoadgameMenu::LoadgameMenu(void)
0x588592: mov     ecx, [esp+10h+var_C]
0x588596: mov     large fs:0, ecx
0x58859D: pop     ecx
0x58859E: add     esp, 0Ch
0x5885A1: retn    4
0x5885A4: push    9Ch ; 'œ'; jumptable 00587D52 case 1043
0x5885A9: call    FormHeapAlloc
0x5885AE: add     esp, 4
0x5885B1: mov     [esp+10h+arg_0], eax
0x5885B5: test    eax, eax
0x5885B7: mov     [esp+10h+var_4], 26h ; '&'
0x5885BF: jz      Menu_CreateDynamic___Return_0
0x5885C5: mov     ecx, eax
0x5885C7: call    EffectSettingMenu_constr
0x5885CC: mov     ecx, [esp+10h+var_C]
0x5885D0: mov     large fs:0, ecx
0x5885D7: pop     ecx
0x5885D8: add     esp, 0Ch
0x5885DB: retn    4
0x5885DE: push    78h ; 'x'; jumptable 00587D52 case 1041
0x5885E0: call    FormHeapAlloc
0x5885E5: add     esp, 4
0x5885E8: mov     [esp+10h+arg_0], eax
0x5885EC: test    eax, eax
0x5885EE: mov     [esp+10h+var_4], 27h ; '''
0x5885F6: jz      Menu_CreateDynamic___Return_0
0x5885FC: mov     ecx, eax; this
0x5885FE: call    ??0SpellMakingMenu@@QAE@XZ; SpellMakingMenu::SpellMakingMenu(void)
0x588603: mov     ecx, [esp+10h+var_C]
0x588607: mov     large fs:0, ecx
0x58860E: pop     ecx
0x58860F: add     esp, 0Ch
0x588612: retn    4
0x588615: push    0A0h ; ' '; jumptable 00587D52 case 1042
0x58861A: call    FormHeapAlloc
0x58861F: add     esp, 4
0x588622: mov     [esp+10h+arg_0], eax
0x588626: test    eax, eax
0x588628: mov     [esp+10h+var_4], 28h ; '('
0x588630: jz      Menu_CreateDynamic___Return_0
0x588636: mov     ecx, eax; this
0x588638: call    ??0EnchantmentMenu@@QAE@XZ; EnchantmentMenu::EnchantmentMenu(void)
0x58863D: mov     ecx, [esp+10h+var_C]
0x588641: mov     large fs:0, ecx
0x588648: pop     ecx
0x588649: add     esp, 0Ch
0x58864C: retn    4
0x58864F: push    0C0h ; 'À'; jumptable 00587D52 case 1040
0x588654: call    FormHeapAlloc
0x588659: add     esp, 4
0x58865C: mov     [esp+10h+arg_0], eax
0x588660: test    eax, eax
0x588662: mov     [esp+10h+var_4], 29h ; ')'
0x58866A: jz      Menu_CreateDynamic___Return_0
0x588670: mov     ecx, eax; this
0x588672: call    ??0AlchemyMenu@@QAE@XZ; AlchemyMenu::AlchemyMenu(void)
0x588677: mov     ecx, [esp+10h+var_C]
0x58867B: mov     large fs:0, ecx
0x588682: pop     ecx
0x588683: add     esp, 0Ch
0x588686: retn    4
0x588689: push    50h ; 'P'; jumptable 00587D52 case 1044
0x58868B: call    FormHeapAlloc
0x588690: add     esp, 4
0x588693: mov     [esp+10h+arg_0], eax
0x588697: test    eax, eax
0x588699: mov     [esp+10h+var_4], 2Ah ; '*'
0x5886A1: jz      Menu_CreateDynamic___Return_0
0x5886A7: mov     ecx, eax; this
0x5886A9: call    ??0MainMenu@@QAE@XZ; MainMenu::MainMenu(void)
0x5886AE: mov     ecx, [esp+10h+var_C]
0x5886B2: mov     large fs:0, ecx
0x5886B9: pop     ecx
0x5886BA: add     esp, 0Ch
0x5886BD: retn    4
0x5886C0: push    34h ; '4'; jumptable 00587D52 case 1045
0x5886C2: call    FormHeapAlloc
0x5886C7: add     esp, 4
0x5886CA: mov     [esp+10h+arg_0], eax
0x5886CE: test    eax, eax
0x5886D0: mov     [esp+10h+var_4], 2Bh ; '+'
0x5886D8: jz      Menu_CreateDynamic___Return_0
0x5886DE: mov     ecx, eax
0x5886E0: call    sub_596420
0x5886E5: mov     ecx, [esp+10h+var_C]
0x5886E9: mov     large fs:0, ecx
0x5886F0: pop     ecx
0x5886F1: add     esp, 0Ch
0x5886F4: retn    4
0x5886F7: push    50h ; 'P'; jumptable 00587D52 case 1046
0x5886F9: call    FormHeapAlloc
0x5886FE: add     esp, 4
0x588701: mov     [esp+10h+arg_0], eax
0x588705: test    eax, eax
0x588707: mov     [esp+10h+var_4], 2Ch ; ','
0x58870F: jz      Menu_CreateDynamic___Return_0
0x588715: mov     ecx, eax
0x588717: call    sub_5C0B50
0x58871C: mov     ecx, [esp+10h+var_C]
0x588720: mov     large fs:0, ecx
0x588727: pop     ecx
0x588728: add     esp, 0Ch
0x58872B: retn    4
0x58872E: push    5Ch ; '\'; jumptable 00587D52 case 1047
0x588730: call    FormHeapAlloc
0x588735: add     esp, 4
0x588738: mov     [esp+10h+arg_0], eax
0x58873C: test    eax, eax
0x58873E: mov     [esp+10h+var_4], 2Dh ; '-'
0x588746: jz      short Menu_CreateDynamic___Return_0
0x588748: mov     ecx, eax; this
0x58874A: call    ??0CreditsMenu@@QAE@XZ; CreditsMenu::CreditsMenu(void)
0x58874F: mov     ecx, [esp+10h+var_C]
0x588753: mov     large fs:0, ecx
0x58875A: pop     ecx
0x58875B: add     esp, 0Ch
0x58875E: retn    4
0x588761: push    5Ch ; '\'; jumptable 00587D52 case 1051
0x588763: call    FormHeapAlloc
0x588768: add     esp, 4
0x58876B: mov     [esp+10h+arg_0], eax
0x58876F: test    eax, eax
0x588771: mov     [esp+10h+var_4], 2Eh ; '.'
0x588779: jz      short Menu_CreateDynamic___Return_0
0x58877B: mov     ecx, eax; this
0x58877D: call    ??0TextEditMenu@@QAE@XZ; TextEditMenu::TextEditMenu(void)
0x588782: mov     ecx, [esp+10h+var_C]
0x588786: mov     large fs:0, ecx
0x58878D: pop     ecx
0x58878E: add     esp, 0Ch
0x588791: retn    4
0x588794: push    offset aUnknownMenuCla; jumptable 00587D52 default case, cases 1029,1031,1033,1050
0x588799: call    PrintError
0x58879E: add     esp, 4
