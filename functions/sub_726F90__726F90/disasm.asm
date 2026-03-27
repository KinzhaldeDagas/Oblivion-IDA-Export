0x726F90: push    ecx
0x726F91: push    ebx
0x726F92: mov     ebx, ecx
0x726F94: mov     eax, [ebx+4]
0x726F97: cmp     eax, 21h; switch 34 cases
0x726F9A: push    esi
0x726F9B: push    edi
0x726F9C: ja      def_726FA2
0x726FA2: jmp     ds:jpt_726FA2[eax*4]; switch jump
0x726FA9: push    offset aAgd_nitype_inv; jumptable 00726FA2 case 0
0x726FAE: push    offset aM_uitype; "        m_uiType"
0x726FB3: call    TESOutput_PrintLabeledString
0x726FB8: mov     esi, [esp+18h+arg_0]
0x726FBC: mov     [esp+18h+var_4], eax
0x726FC0: add     esp, 8
0x726FC3: lea     eax, [esp+10h+var_4]
0x726FC7: push    eax
0x726FC8: mov     ecx, esi
0x726FCA: call    NiTArray_Add
0x726FCF: jmp     loc_72759A
0x726FD4: push    offset aAgd_nitype_flo; jumptable 00726FA2 case 1
0x726FD9: push    offset aM_uitype; "        m_uiType"
0x726FDE: call    TESOutput_PrintLabeledString
0x726FE3: mov     esi, [esp+18h+arg_0]
0x726FE7: add     esp, 8
0x726FEA: lea     ecx, [esp+10h+var_4]
0x726FEE: push    ecx
0x726FEF: mov     ecx, esi
0x726FF1: mov     [esp+14h+var_4], eax
0x726FF5: call    NiTArray_Add
0x726FFA: jmp     loc_72759A
0x726FFF: push    offset aAgd_nitype_f_0; jumptable 00726FA2 case 2
0x727004: push    offset aM_uitype; "        m_uiType"
0x727009: call    TESOutput_PrintLabeledString
0x72700E: mov     esi, [esp+18h+arg_0]
0x727012: add     esp, 8
0x727015: lea     edx, [esp+10h+var_4]
0x727019: push    edx
0x72701A: mov     ecx, esi
0x72701C: mov     [esp+14h+var_4], eax
0x727020: call    NiTArray_Add
0x727025: jmp     loc_72759A
0x72702A: push    offset aAgd_nitype_f_1; jumptable 00726FA2 case 3
0x72702F: push    offset aM_uitype; "        m_uiType"
0x727034: call    TESOutput_PrintLabeledString
0x727039: mov     esi, [esp+18h+arg_0]
0x72703D: mov     [esp+18h+var_4], eax
0x727041: add     esp, 8
0x727044: lea     eax, [esp+10h+var_4]
0x727048: push    eax
0x727049: mov     ecx, esi
0x72704B: call    NiTArray_Add
0x727050: jmp     loc_72759A
0x727055: push    offset aAgd_nitype_f_2; jumptable 00726FA2 case 4
0x72705A: push    offset aM_uitype; "        m_uiType"
0x72705F: call    TESOutput_PrintLabeledString
0x727064: mov     esi, [esp+18h+arg_0]
0x727068: add     esp, 8
0x72706B: lea     ecx, [esp+10h+var_4]
0x72706F: push    ecx
0x727070: mov     ecx, esi
0x727072: mov     [esp+14h+var_4], eax
0x727076: call    NiTArray_Add
0x72707B: jmp     loc_72759A
0x727080: push    offset aAgd_nitype_lon; jumptable 00726FA2 case 5
0x727085: push    offset aM_uitype; "        m_uiType"
0x72708A: call    TESOutput_PrintLabeledString
0x72708F: mov     esi, [esp+18h+arg_0]
0x727093: add     esp, 8
0x727096: lea     edx, [esp+10h+var_4]
0x72709A: push    edx
0x72709B: mov     ecx, esi
0x72709D: mov     [esp+14h+var_4], eax
0x7270A1: call    NiTArray_Add
0x7270A6: jmp     loc_72759A
0x7270AB: push    offset aAgd_nitype_l_0; jumptable 00726FA2 case 6
0x7270B0: push    offset aM_uitype; "        m_uiType"
0x7270B5: call    TESOutput_PrintLabeledString
0x7270BA: mov     esi, [esp+18h+arg_0]
0x7270BE: mov     [esp+18h+var_4], eax
0x7270C2: add     esp, 8
0x7270C5: lea     eax, [esp+10h+var_4]
0x7270C9: push    eax
0x7270CA: mov     ecx, esi
0x7270CC: call    NiTArray_Add
0x7270D1: jmp     loc_72759A
0x7270D6: push    offset aAgd_nitype_l_1; jumptable 00726FA2 case 7
0x7270DB: push    offset aM_uitype; "        m_uiType"
0x7270E0: call    TESOutput_PrintLabeledString
0x7270E5: mov     esi, [esp+18h+arg_0]
0x7270E9: add     esp, 8
0x7270EC: lea     ecx, [esp+10h+var_4]
0x7270F0: push    ecx
0x7270F1: mov     ecx, esi
0x7270F3: mov     [esp+14h+var_4], eax
0x7270F7: call    NiTArray_Add
0x7270FC: jmp     loc_72759A
0x727101: push    offset aAgd_nitype_l_2; jumptable 00726FA2 case 8
0x727106: push    offset aM_uitype; "        m_uiType"
0x72710B: call    TESOutput_PrintLabeledString
0x727110: mov     esi, [esp+18h+arg_0]
0x727114: add     esp, 8
0x727117: lea     edx, [esp+10h+var_4]
0x72711B: push    edx
0x72711C: mov     ecx, esi
0x72711E: mov     [esp+14h+var_4], eax
0x727122: call    NiTArray_Add
0x727127: jmp     loc_72759A
0x72712C: push    offset aAgd_nitype_ulo; jumptable 00726FA2 case 9
0x727131: push    offset aM_uitype; "        m_uiType"
0x727136: call    TESOutput_PrintLabeledString
0x72713B: mov     esi, [esp+18h+arg_0]
0x72713F: mov     [esp+18h+var_4], eax
0x727143: add     esp, 8
0x727146: lea     eax, [esp+10h+var_4]
0x72714A: push    eax
0x72714B: mov     ecx, esi
0x72714D: call    NiTArray_Add
0x727152: jmp     loc_72759A
0x727157: push    offset aAgd_nitype_u_0; jumptable 00726FA2 case 10
0x72715C: push    offset aM_uitype; "        m_uiType"
0x727161: call    TESOutput_PrintLabeledString
0x727166: mov     esi, [esp+18h+arg_0]
0x72716A: add     esp, 8
0x72716D: lea     ecx, [esp+10h+var_4]
0x727171: push    ecx
0x727172: mov     ecx, esi
0x727174: mov     [esp+14h+var_4], eax
0x727178: call    NiTArray_Add
0x72717D: jmp     loc_72759A
0x727182: push    offset aAgd_nitype_u_1; jumptable 00726FA2 case 11
0x727187: push    offset aM_uitype; "        m_uiType"
0x72718C: call    TESOutput_PrintLabeledString
0x727191: mov     esi, [esp+18h+arg_0]
0x727195: add     esp, 8
0x727198: lea     edx, [esp+10h+var_4]
0x72719C: push    edx
0x72719D: mov     ecx, esi
0x72719F: mov     [esp+14h+var_4], eax
0x7271A3: call    NiTArray_Add
0x7271A8: jmp     loc_72759A
0x7271AD: push    offset aAgd_nitype_u_2; jumptable 00726FA2 case 12
0x7271B2: push    offset aM_uitype; "        m_uiType"
0x7271B7: call    TESOutput_PrintLabeledString
0x7271BC: mov     esi, [esp+18h+arg_0]
0x7271C0: mov     [esp+18h+var_4], eax
0x7271C4: add     esp, 8
0x7271C7: lea     eax, [esp+10h+var_4]
0x7271CB: push    eax
0x7271CC: mov     ecx, esi
0x7271CE: call    NiTArray_Add
0x7271D3: jmp     loc_72759A
0x7271D8: push    offset aAgd_nitype_sho; jumptable 00726FA2 case 13
0x7271DD: push    offset aM_uitype; "        m_uiType"
0x7271E2: call    TESOutput_PrintLabeledString
0x7271E7: mov     esi, [esp+18h+arg_0]
0x7271EB: add     esp, 8
0x7271EE: lea     ecx, [esp+10h+var_4]
0x7271F2: push    ecx
0x7271F3: mov     ecx, esi
0x7271F5: mov     [esp+14h+var_4], eax
0x7271F9: call    NiTArray_Add
0x7271FE: jmp     loc_72759A
0x727203: push    offset aAgd_nitype_s_0; jumptable 00726FA2 case 14
0x727208: push    offset aM_uitype; "        m_uiType"
0x72720D: call    TESOutput_PrintLabeledString
0x727212: mov     esi, [esp+18h+arg_0]
0x727216: add     esp, 8
0x727219: lea     edx, [esp+10h+var_4]
0x72721D: push    edx
0x72721E: mov     ecx, esi
0x727220: mov     [esp+14h+var_4], eax
0x727224: call    NiTArray_Add
0x727229: jmp     loc_72759A
0x72722E: push    offset aAgd_nitype_s_1; jumptable 00726FA2 case 15
0x727233: push    offset aM_uitype; "        m_uiType"
0x727238: call    TESOutput_PrintLabeledString
0x72723D: mov     esi, [esp+18h+arg_0]
0x727241: mov     [esp+18h+var_4], eax
0x727245: add     esp, 8
0x727248: lea     eax, [esp+10h+var_4]
0x72724C: push    eax
0x72724D: mov     ecx, esi
0x72724F: call    NiTArray_Add
0x727254: jmp     loc_72759A
0x727259: push    offset aAgd_nitype_s_2; jumptable 00726FA2 case 16
0x72725E: push    offset aM_uitype; "        m_uiType"
0x727263: call    TESOutput_PrintLabeledString
0x727268: mov     esi, [esp+18h+arg_0]
0x72726C: add     esp, 8
0x72726F: lea     ecx, [esp+10h+var_4]
0x727273: push    ecx
0x727274: mov     ecx, esi
0x727276: mov     [esp+14h+var_4], eax
0x72727A: call    NiTArray_Add
0x72727F: jmp     loc_72759A
0x727284: push    offset aAgd_nitype_ush; jumptable 00726FA2 case 17
0x727289: push    offset aM_uitype; "        m_uiType"
0x72728E: call    TESOutput_PrintLabeledString
0x727293: mov     esi, [esp+18h+arg_0]
0x727297: add     esp, 8
0x72729A: lea     edx, [esp+10h+var_4]
0x72729E: push    edx
0x72729F: mov     ecx, esi
0x7272A1: mov     [esp+14h+var_4], eax
0x7272A5: call    NiTArray_Add
0x7272AA: jmp     loc_72759A
0x7272AF: push    offset aAgd_nitype_u_3; jumptable 00726FA2 case 18
0x7272B4: push    offset aM_uitype; "        m_uiType"
0x7272B9: call    TESOutput_PrintLabeledString
0x7272BE: mov     esi, [esp+18h+arg_0]
0x7272C2: mov     [esp+18h+var_4], eax
0x7272C6: add     esp, 8
0x7272C9: lea     eax, [esp+10h+var_4]
0x7272CD: push    eax
0x7272CE: mov     ecx, esi
0x7272D0: call    NiTArray_Add
0x7272D5: jmp     loc_72759A
0x7272DA: push    offset aAgd_nitype_u_4; jumptable 00726FA2 case 19
0x7272DF: push    offset aM_uitype; "        m_uiType"
0x7272E4: call    TESOutput_PrintLabeledString
0x7272E9: mov     esi, [esp+18h+arg_0]
0x7272ED: add     esp, 8
0x7272F0: lea     ecx, [esp+10h+var_4]
0x7272F4: push    ecx
0x7272F5: mov     ecx, esi
0x7272F7: mov     [esp+14h+var_4], eax
0x7272FB: call    NiTArray_Add
0x727300: jmp     loc_72759A
0x727305: push    offset aAgd_nitype_u_5; jumptable 00726FA2 case 20
0x72730A: push    offset aM_uitype; "        m_uiType"
0x72730F: call    TESOutput_PrintLabeledString
0x727314: mov     esi, [esp+18h+arg_0]
0x727318: add     esp, 8
0x72731B: lea     edx, [esp+10h+var_4]
0x72731F: push    edx
0x727320: mov     ecx, esi
0x727322: mov     [esp+14h+var_4], eax
0x727326: call    NiTArray_Add
0x72732B: jmp     loc_72759A
0x727330: push    offset aAgd_nitype_byt; jumptable 00726FA2 case 21
0x727335: push    offset aM_uitype; "        m_uiType"
0x72733A: call    TESOutput_PrintLabeledString
0x72733F: mov     esi, [esp+18h+arg_0]
0x727343: mov     [esp+18h+var_4], eax
0x727347: add     esp, 8
0x72734A: lea     eax, [esp+10h+var_4]
0x72734E: push    eax
0x72734F: mov     ecx, esi
0x727351: call    NiTArray_Add
0x727356: jmp     loc_72759A
0x72735B: push    offset aAgd_nitype_b_0; jumptable 00726FA2 case 22
0x727360: push    offset aM_uitype; "        m_uiType"
0x727365: call    TESOutput_PrintLabeledString
0x72736A: mov     esi, [esp+18h+arg_0]
0x72736E: add     esp, 8
0x727371: lea     ecx, [esp+10h+var_4]
0x727375: push    ecx
0x727376: mov     ecx, esi
0x727378: mov     [esp+14h+var_4], eax
0x72737C: call    NiTArray_Add
0x727381: jmp     loc_72759A
0x727386: push    offset aAgd_nitype_b_1; jumptable 00726FA2 case 23
0x72738B: push    offset aM_uitype; "        m_uiType"
0x727390: call    TESOutput_PrintLabeledString
0x727395: mov     esi, [esp+18h+arg_0]
0x727399: add     esp, 8
0x72739C: lea     edx, [esp+10h+var_4]
0x7273A0: push    edx
0x7273A1: mov     ecx, esi
0x7273A3: mov     [esp+14h+var_4], eax
0x7273A7: call    NiTArray_Add
0x7273AC: jmp     loc_72759A
0x7273B1: push    offset aAgd_nitype_b_2; jumptable 00726FA2 case 24
0x7273B6: push    offset aM_uitype; "        m_uiType"
0x7273BB: call    TESOutput_PrintLabeledString
0x7273C0: mov     esi, [esp+18h+arg_0]
0x7273C4: mov     [esp+18h+var_4], eax
0x7273C8: add     esp, 8
0x7273CB: lea     eax, [esp+10h+var_4]
0x7273CF: push    eax
0x7273D0: mov     ecx, esi
0x7273D2: call    NiTArray_Add
0x7273D7: jmp     loc_72759A
0x7273DC: push    offset aAgd_nitype_uby; jumptable 00726FA2 case 25
0x7273E1: push    offset aM_uitype; "        m_uiType"
0x7273E6: call    TESOutput_PrintLabeledString
0x7273EB: mov     esi, [esp+18h+arg_0]
0x7273EF: add     esp, 8
0x7273F2: lea     ecx, [esp+10h+var_4]
0x7273F6: push    ecx
0x7273F7: mov     ecx, esi
0x7273F9: mov     [esp+14h+var_4], eax
0x7273FD: call    NiTArray_Add
0x727402: jmp     loc_72759A
0x727407: push    offset aAgd_nitype_u_6; jumptable 00726FA2 case 26
0x72740C: push    offset aM_uitype; "        m_uiType"
0x727411: call    TESOutput_PrintLabeledString
0x727416: mov     esi, [esp+18h+arg_0]
0x72741A: add     esp, 8
0x72741D: lea     edx, [esp+10h+var_4]
0x727421: push    edx
0x727422: mov     ecx, esi
0x727424: mov     [esp+14h+var_4], eax
0x727428: call    NiTArray_Add
0x72742D: jmp     loc_72759A
0x727432: push    offset aAgd_nitype_u_7; jumptable 00726FA2 case 27
0x727437: push    offset aM_uitype; "        m_uiType"
0x72743C: call    TESOutput_PrintLabeledString
0x727441: mov     esi, [esp+18h+arg_0]
0x727445: mov     [esp+18h+var_4], eax
0x727449: add     esp, 8
0x72744C: lea     eax, [esp+10h+var_4]
0x727450: push    eax
0x727451: mov     ecx, esi
0x727453: call    NiTArray_Add
0x727458: jmp     loc_72759A
0x72745D: push    offset aAgd_nitype_u_8; jumptable 00726FA2 case 28
0x727462: push    offset aM_uitype; "        m_uiType"
0x727467: call    TESOutput_PrintLabeledString
0x72746C: mov     esi, [esp+18h+arg_0]
0x727470: add     esp, 8
0x727473: lea     ecx, [esp+10h+var_4]
0x727477: push    ecx
0x727478: mov     ecx, esi
0x72747A: mov     [esp+14h+var_4], eax
0x72747E: call    NiTArray_Add
0x727483: jmp     loc_72759A
0x727488: push    offset aAgd_nitype_ble; jumptable 00726FA2 case 29
0x72748D: push    offset aM_uitype; "        m_uiType"
0x727492: call    TESOutput_PrintLabeledString
0x727497: mov     esi, [esp+18h+arg_0]
0x72749B: add     esp, 8
0x72749E: lea     edx, [esp+10h+var_4]
0x7274A2: push    edx
0x7274A3: mov     ecx, esi
0x7274A5: mov     [esp+14h+var_4], eax
0x7274A9: call    NiTArray_Add
0x7274AE: jmp     loc_72759A
0x7274B3: push    offset aAgd_nitype_b_3; jumptable 00726FA2 case 30
0x7274B8: push    offset aM_uitype; "        m_uiType"
0x7274BD: call    TESOutput_PrintLabeledString
0x7274C2: mov     esi, [esp+18h+arg_0]
0x7274C6: mov     [esp+18h+var_4], eax
0x7274CA: add     esp, 8
0x7274CD: lea     eax, [esp+10h+var_4]
0x7274D1: push    eax
0x7274D2: mov     ecx, esi
0x7274D4: call    NiTArray_Add
0x7274D9: jmp     loc_72759A
0x7274DE: push    offset aAgd_nitype_b_4; jumptable 00726FA2 case 31
0x7274E3: push    offset aM_uitype; "        m_uiType"
0x7274E8: call    TESOutput_PrintLabeledString
0x7274ED: mov     esi, [esp+18h+arg_0]
0x7274F1: add     esp, 8
0x7274F4: lea     ecx, [esp+10h+var_4]
0x7274F8: push    ecx
0x7274F9: mov     ecx, esi
0x7274FB: mov     [esp+14h+var_4], eax
0x7274FF: call    NiTArray_Add
0x727504: jmp     loc_72759A
0x727509: push    offset aAgd_nitype_b_5; jumptable 00726FA2 case 32
0x72750E: push    offset aM_uitype; "        m_uiType"
0x727513: call    TESOutput_PrintLabeledString
0x727518: mov     esi, [esp+18h+arg_0]
0x72751C: add     esp, 8
0x72751F: lea     edx, [esp+10h+var_4]
0x727523: push    edx
0x727524: mov     ecx, esi
0x727526: mov     [esp+14h+var_4], eax
0x72752A: call    NiTArray_Add
0x72752F: jmp     short loc_72759A
0x727531: push    offset aAgd_nitype_cou; jumptable 00726FA2 case 33
0x727536: push    offset aM_uitype; "        m_uiType"
0x72753B: call    TESOutput_PrintLabeledString
0x727540: mov     esi, [esp+18h+arg_0]
0x727544: mov     [esp+18h+var_4], eax
0x727548: add     esp, 8
0x72754B: lea     eax, [esp+10h+var_4]
0x72754F: push    eax
0x727550: mov     ecx, esi
0x727552: call    NiTArray_Add
0x727557: jmp     short loc_72759A
