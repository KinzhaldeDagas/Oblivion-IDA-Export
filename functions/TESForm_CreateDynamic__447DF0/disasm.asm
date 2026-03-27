0x447DF0: push    0FFFFFFFFh
0x447DF2: push    offset TESForm_CreateDynamic_SEH
0x447DF7: mov     eax, large fs:0
0x447DFD: push    eax
0x447DFE: push    esi
0x447DFF: mov     eax, ds:0B30AACh
0x447E04: xor     eax, esp
0x447E06: push    eax
0x447E07: lea     eax, [esp+14h+var_C]
0x447E0B: mov     large fs:0, eax
0x447E11: mov     dl, byte ptr [esp+14h+arg_0]
0x447E15: movzx   eax, dl
0x447E18: lea     ecx, [eax-4]; switch 64 cases
0x447E1B: xor     esi, esi
0x447E1D: cmp     ecx, 3Fh
0x447E20: ja      TESForm_CreateDynamic___def_447E26; jumptable 00447E26 default case, cases 44,50,51,55,57,58
0x447E26: jmp     ds:jpt_447E26[ecx*4]; switch jump
0x447E2D: push    58h ; 'X'; jumptable 00447E26 case 18
0x447E2F: call    FormHeapAlloc
0x447E34: add     esp, 4
0x447E37: mov     [esp+14h+arg_0], eax
0x447E3B: cmp     eax, esi
0x447E3D: mov     [esp+14h+var_4], esi
0x447E41: jz      short TESForm_CreateDynamic___Return_0
0x447E43: mov     ecx, eax; this
0x447E45: call    ??0TESObjectACTI@@QAE@XZ; TESObjectACTI::TESObjectACTI(void)
0x447E4A: mov     esi, eax
0x447E4C: mov     ecx, [esp+14h+var_C]
0x447E50: mov     large fs:0, ecx
0x447E57: pop     ecx
0x447E58: pop     esi
0x447E59: add     esp, 0Ch
0x447E5C: retn
0x447E5D: xor     eax, eax
0x447E5F: mov     esi, eax
0x447E61: mov     ecx, [esp+14h+var_C]
0x447E65: mov     large fs:0, ecx
0x447E6C: pop     ecx
0x447E6D: pop     esi
0x447E6E: add     esp, 0Ch
0x447E71: retn
0x447E72: push    7Ch ; '|'; jumptable 00447E26 case 19
0x447E74: call    FormHeapAlloc
0x447E79: add     esp, 4
0x447E7C: mov     [esp+14h+arg_0], eax
0x447E80: cmp     eax, esi
0x447E82: mov     [esp+14h+var_4], 1
0x447E8A: jz      short TESForm_CreateDynamic___Return_0
0x447E8C: mov     ecx, eax; this
0x447E8E: call    ??0TESObjectAPPA@@QAE@XZ; TESObjectAPPA::TESObjectAPPA(void)
0x447E93: mov     esi, eax
0x447E95: mov     ecx, [esp+14h+var_C]
0x447E99: mov     large fs:0, ecx
0x447EA0: pop     ecx
0x447EA1: pop     esi
0x447EA2: add     esp, 0Ch
0x447EA5: retn
0x447EA6: push    0E8h ; 'è'; jumptable 00447E26 case 20
0x447EAB: call    FormHeapAlloc
0x447EB0: add     esp, 4
0x447EB3: mov     [esp+14h+arg_0], eax
0x447EB7: cmp     eax, esi
0x447EB9: mov     [esp+14h+var_4], 2
0x447EC1: jz      short TESForm_CreateDynamic___Return_0
0x447EC3: mov     ecx, eax; this
0x447EC5: call    ??0TESObjectARMO@@QAE@XZ; TESObjectARMO::TESObjectARMO(void)
0x447ECA: mov     esi, eax
0x447ECC: mov     ecx, [esp+14h+var_C]
0x447ED0: mov     large fs:0, ecx
0x447ED7: pop     ecx
0x447ED8: pop     esi
0x447ED9: add     esp, 0Ch
0x447EDC: retn
0x447EDD: push    8Ch ; 'Œ'; jumptable 00447E26 case 21
0x447EE2: call    FormHeapAlloc
0x447EE7: add     esp, 4
0x447EEA: mov     [esp+14h+arg_0], eax
0x447EEE: cmp     eax, esi
0x447EF0: mov     [esp+14h+var_4], 3
0x447EF8: jz      TESForm_CreateDynamic___Return_0
0x447EFE: mov     ecx, eax; this
0x447F00: call    ??0TESObjectBOOK@@QAE@XZ; TESObjectBOOK::TESObjectBOOK(void)
0x447F05: mov     esi, eax
0x447F07: mov     ecx, [esp+14h+var_C]
0x447F0B: mov     large fs:0, ecx
0x447F12: pop     ecx
0x447F13: pop     esi
0x447F14: add     esp, 0Ch
0x447F17: retn
0x447F18: push    0DCh ; 'Ü'; jumptable 00447E26 case 22
0x447F1D: call    FormHeapAlloc
0x447F22: add     esp, 4
0x447F25: mov     [esp+14h+arg_0], eax
0x447F29: cmp     eax, esi
0x447F2B: mov     [esp+14h+var_4], 4
0x447F33: jz      TESForm_CreateDynamic___Return_0
0x447F39: mov     ecx, eax; this
0x447F3B: call    ??0TESObjectCLOT@@QAE@XZ; TESObjectCLOT::TESObjectCLOT(void)
0x447F40: mov     esi, eax
0x447F42: mov     ecx, [esp+14h+var_C]
0x447F46: mov     large fs:0, ecx
0x447F4D: pop     ecx
0x447F4E: pop     esi
0x447F4F: add     esp, 0Ch
0x447F52: retn
0x447F53: push    7Ch ; '|'; jumptable 00447E26 case 23
0x447F55: call    FormHeapAlloc
0x447F5A: add     esp, 4
0x447F5D: mov     [esp+14h+arg_0], eax
0x447F61: cmp     eax, esi
0x447F63: mov     [esp+14h+var_4], 5
0x447F6B: jz      TESForm_CreateDynamic___Return_0
0x447F71: mov     ecx, eax; this
0x447F73: call    ??0TESObjectCONT@@QAE@XZ; TESObjectCONT::TESObjectCONT(void)
0x447F78: mov     esi, eax
0x447F7A: mov     ecx, [esp+14h+var_C]
0x447F7E: mov     large fs:0, ecx
0x447F85: pop     ecx
0x447F86: pop     esi
0x447F87: add     esp, 0Ch
0x447F8A: retn
0x447F8B: push    70h ; 'p'; jumptable 00447E26 case 24
0x447F8D: call    FormHeapAlloc
0x447F92: add     esp, 4
0x447F95: mov     [esp+14h+arg_0], eax
0x447F99: cmp     eax, esi
0x447F9B: mov     [esp+14h+var_4], 6
0x447FA3: jz      TESForm_CreateDynamic___Return_0
0x447FA9: mov     ecx, eax; this
0x447FAB: call    ??0TESObjectDOOR@@QAE@XZ; TESObjectDOOR::TESObjectDOOR(void)
0x447FB0: mov     esi, eax
0x447FB2: mov     ecx, [esp+14h+var_C]
0x447FB6: mov     large fs:0, ecx
0x447FBD: pop     ecx
0x447FBE: pop     esi
0x447FBF: add     esp, 0Ch
0x447FC2: retn
0x447FC3: push    80h ; '€'; jumptable 00447E26 case 25
0x447FC8: call    FormHeapAlloc
0x447FCD: add     esp, 4
0x447FD0: mov     [esp+14h+arg_0], eax
0x447FD4: cmp     eax, esi
0x447FD6: mov     [esp+14h+var_4], 7
0x447FDE: jz      TESForm_CreateDynamic___Return_0
0x447FE4: mov     ecx, eax; this
0x447FE6: call    ??0IngredientItem@@QAE@XZ; IngredientItem::IngredientItem(void)
0x447FEB: mov     esi, eax
0x447FED: mov     ecx, [esp+14h+var_C]
0x447FF1: mov     large fs:0, ecx
0x447FF8: pop     ecx
0x447FF9: pop     esi
0x447FFA: add     esp, 0Ch
0x447FFD: retn
0x447FFE: push    90h; jumptable 00447E26 case 26
0x448003: call    FormHeapAlloc
0x448008: add     esp, 4
0x44800B: mov     [esp+14h+arg_0], eax
0x44800F: cmp     eax, esi
0x448011: mov     [esp+14h+var_4], 8
0x448019: jz      TESForm_CreateDynamic___Return_0
0x44801F: mov     ecx, eax; this
0x448021: call    ??0TESObjectLIGH@@QAE@XZ; TESObjectLIGH::TESObjectLIGH(void)
0x448026: mov     esi, eax
0x448028: mov     ecx, [esp+14h+var_C]
0x44802C: mov     large fs:0, ecx
0x448033: pop     ecx
0x448034: pop     esi
0x448035: add     esp, 0Ch
0x448038: retn
0x448039: push    70h ; 'p'; jumptable 00447E26 case 27
0x44803B: call    FormHeapAlloc
0x448040: add     esp, 4
0x448043: mov     [esp+14h+arg_0], eax
0x448047: cmp     eax, esi
0x448049: mov     [esp+14h+var_4], 9
0x448051: jz      TESForm_CreateDynamic___Return_0
0x448057: mov     ecx, eax; this
0x448059: call    ??0TESObjectMISC@@QAE@XZ; TESObjectMISC::TESObjectMISC(void)
0x44805E: mov     esi, eax
0x448060: mov     ecx, [esp+14h+var_C]
0x448064: mov     large fs:0, ecx
0x44806B: pop     ecx
0x44806C: pop     esi
0x44806D: add     esp, 0Ch
0x448070: retn
0x448071: push    70h ; 'p'; jumptable 00447E26 case 39
0x448073: call    FormHeapAlloc
0x448078: add     esp, 4
0x44807B: mov     [esp+14h+arg_0], eax
0x44807F: cmp     eax, esi
0x448081: mov     [esp+14h+var_4], 0Ah
0x448089: jz      TESForm_CreateDynamic___Return_0
0x44808F: mov     ecx, eax; this
0x448091: call    ??0TESKey@@QAE@XZ; TESKey::TESKey(void)
0x448096: mov     esi, eax
0x448098: mov     ecx, [esp+14h+var_C]
0x44809C: mov     large fs:0, ecx
0x4480A3: pop     ecx
0x4480A4: pop     esi
0x4480A5: add     esp, 0Ch
0x4480A8: retn
0x4480A9: push    74h ; 't'; jumptable 00447E26 case 38
0x4480AB: call    FormHeapAlloc
0x4480B0: add     esp, 4
0x4480B3: mov     [esp+14h+arg_0], eax
0x4480B7: cmp     eax, esi
0x4480B9: mov     [esp+14h+var_4], 0Bh
0x4480C1: jz      TESForm_CreateDynamic___Return_0
0x4480C7: mov     ecx, eax; this
0x4480C9: call    ??0TESSoulGem@@QAE@XZ; TESSoulGem::TESSoulGem(void)
0x4480CE: mov     esi, eax
0x4480D0: mov     ecx, [esp+14h+var_C]
0x4480D4: mov     large fs:0, ecx
0x4480DB: pop     ecx
0x4480DC: pop     esi
0x4480DD: add     esp, 0Ch
0x4480E0: retn
0x4480E1: push    3Ch ; '<'; jumptable 00447E26 case 28
0x4480E3: call    FormHeapAlloc
0x4480E8: add     esp, 4
0x4480EB: mov     [esp+14h+arg_0], eax
0x4480EF: cmp     eax, esi
0x4480F1: mov     [esp+14h+var_4], 0Ch
0x4480F9: jz      TESForm_CreateDynamic___Return_0
0x4480FF: mov     ecx, eax; this
0x448101: call    ??0TESObjectSTAT@@QAE@XZ; TESObjectSTAT::TESObjectSTAT(void)
0x448106: mov     esi, eax
0x448108: mov     ecx, [esp+14h+var_C]
0x44810C: mov     large fs:0, ecx
0x448113: pop     ecx
0x448114: pop     esi
0x448115: add     esp, 0Ch
0x448118: retn
0x448119: push    5Ch ; '\'; jumptable 00447E26 case 29
0x44811B: call    FormHeapAlloc
0x448120: add     esp, 4
0x448123: mov     [esp+14h+arg_0], eax
0x448127: cmp     eax, esi
0x448129: mov     [esp+14h+var_4], 0Dh
0x448131: jz      TESForm_CreateDynamic___Return_0
0x448137: mov     ecx, eax; this
0x448139: call    ??0TESGrass@@QAE@XZ; TESGrass::TESGrass(void)
0x44813E: mov     esi, eax
0x448140: mov     ecx, [esp+14h+var_C]
0x448144: mov     large fs:0, ecx
0x44814B: pop     ecx
0x44814C: pop     esi
0x44814D: add     esp, 0Ch
0x448150: retn
0x448151: push    48h ; 'H'; jumptable 00447E26 case 60
0x448153: call    FormHeapAlloc
0x448158: add     esp, 4
0x44815B: mov     [esp+14h+arg_0], eax
0x44815F: cmp     eax, esi
0x448161: mov     [esp+14h+var_4], 0Eh
0x448169: jz      TESForm_CreateDynamic___Return_0
0x44816F: mov     ecx, eax; this
0x448171: call    ??0TESIdleForm@@QAE@XZ; TESIdleForm::TESIdleForm(void)
0x448176: mov     esi, eax
0x448178: mov     ecx, [esp+14h+var_C]
0x44817C: mov     large fs:0, ecx
0x448183: pop     ecx
0x448184: pop     esi
0x448185: add     esp, 0Ch
0x448188: retn
0x448189: push    3Ch ; '<'; jumptable 00447E26 case 61
0x44818B: call    FormHeapAlloc
0x448190: add     esp, 4
0x448193: mov     [esp+14h+arg_0], eax
0x448197: cmp     eax, esi
0x448199: mov     [esp+14h+var_4], 0Fh
0x4481A1: jz      TESForm_CreateDynamic___Return_0
0x4481A7: mov     ecx, eax; this
0x4481A9: call    ??0TESPackage@@QAE@XZ; TESPackage::TESPackage(void)
0x4481AE: mov     esi, eax
0x4481B0: mov     ecx, [esp+14h+var_C]
0x4481B4: mov     large fs:0, ecx
0x4481BB: pop     ecx
0x4481BC: pop     esi
0x4481BD: add     esp, 0Ch
0x4481C0: retn
0x4481C1: push    80h ; '€'; jumptable 00447E26 case 30
0x4481C6: call    FormHeapAlloc
0x4481CB: add     esp, 4
0x4481CE: mov     [esp+14h+arg_0], eax
0x4481D2: cmp     eax, esi
0x4481D4: mov     [esp+14h+var_4], 10h
0x4481DC: jz      TESForm_CreateDynamic___Return_0
0x4481E2: mov     ecx, eax; this
0x4481E4: call    ??0TESObjectTREE@@QAE@XZ; TESObjectTREE::TESObjectTREE(void)
0x4481E9: mov     esi, eax
0x4481EB: mov     ecx, [esp+14h+var_C]
0x4481EF: mov     large fs:0, ecx
0x4481F6: pop     ecx
0x4481F7: pop     esi
0x4481F8: add     esp, 0Ch
0x4481FB: retn
0x4481FC: push    64h ; 'd'; jumptable 00447E26 case 31
0x4481FE: call    FormHeapAlloc
0x448203: add     esp, 4
0x448206: mov     [esp+14h+arg_0], eax
0x44820A: cmp     eax, esi
0x44820C: mov     [esp+14h+var_4], 11h
0x448214: jz      loc_448B4A
0x44821A: mov     ecx, eax; this
0x44821C: call    ??0TESFlora@@QAE@XZ; TESFlora::TESFlora(void)
0x448221: cmp     eax, esi
0x448223: jz      loc_448B4A
0x448229: lea     esi, [eax+0Ch]
0x44822C: mov     eax, esi
0x44822E: mov     ecx, [esp+14h+var_C]
0x448232: mov     large fs:0, ecx
0x448239: pop     ecx
0x44823A: pop     esi
0x44823B: add     esp, 0Ch
0x44823E: retn
0x44823F: push    5Ch ; '\'; jumptable 00447E26 case 32
0x448241: call    FormHeapAlloc
0x448246: add     esp, 4
0x448249: mov     [esp+14h+arg_0], eax
0x44824D: cmp     eax, esi
0x44824F: mov     [esp+14h+var_4], 12h
0x448257: jz      TESForm_CreateDynamic___Return_0
0x44825D: mov     ecx, eax; this
0x44825F: call    ??0TESFurniture@@QAE@XZ; TESFurniture::TESFurniture(void)
0x448264: mov     esi, eax
0x448266: mov     ecx, [esp+14h+var_C]
0x44826A: mov     large fs:0, ecx
0x448271: pop     ecx
0x448272: pop     esi
0x448273: add     esp, 0Ch
0x448276: retn
0x448277: push    0A0h ; ' '; jumptable 00447E26 case 33
0x44827C: call    FormHeapAlloc
0x448281: add     esp, 4
0x448284: mov     [esp+14h+arg_0], eax
0x448288: cmp     eax, esi
0x44828A: mov     [esp+14h+var_4], 13h
0x448292: jz      TESForm_CreateDynamic___Return_0
0x448298: mov     ecx, eax; this
0x44829A: call    ??0TESObjectWEAP@@QAE@XZ; TESObjectWEAP::TESObjectWEAP(void)
0x44829F: mov     esi, eax
0x4482A1: mov     ecx, [esp+14h+var_C]
0x4482A5: mov     large fs:0, ecx
0x4482AC: pop     ecx
0x4482AD: pop     esi
0x4482AE: add     esp, 0Ch
0x4482B1: retn
0x4482B2: push    84h ; '„'; jumptable 00447E26 case 34
0x4482B7: call    FormHeapAlloc
0x4482BC: add     esp, 4
0x4482BF: mov     [esp+14h+arg_0], eax
0x4482C3: cmp     eax, esi
0x4482C5: mov     [esp+14h+var_4], 14h
0x4482CD: jz      TESForm_CreateDynamic___Return_0
0x4482D3: mov     ecx, eax; this
0x4482D5: call    ??0TESAmmo@@QAE@XZ; TESAmmo::TESAmmo(void)
0x4482DA: mov     esi, eax
0x4482DC: mov     ecx, [esp+14h+var_C]
0x4482E0: mov     large fs:0, ecx
0x4482E7: pop     ecx
0x4482E8: pop     esi
0x4482E9: add     esp, 0Ch
0x4482EC: retn
0x4482ED: push    200h; jumptable 00447E26 case 35
0x4482F2: call    FormHeapAlloc
0x4482F7: add     esp, 4
0x4482FA: mov     [esp+14h+arg_0], eax
0x4482FE: cmp     eax, esi
0x448300: mov     [esp+14h+var_4], 15h
0x448308: jz      TESForm_CreateDynamic___Return_0
0x44830E: mov     ecx, eax
0x448310: call    TESNPC_constr
0x448315: mov     esi, eax
0x448317: mov     ecx, [esp+14h+var_C]
0x44831B: mov     large fs:0, ecx
0x448322: pop     ecx
0x448323: pop     esi
0x448324: add     esp, 0Ch
0x448327: retn
0x448328: push    140h; jumptable 00447E26 case 36
0x44832D: call    FormHeapAlloc
0x448332: add     esp, 4
0x448335: mov     [esp+14h+arg_0], eax
0x448339: cmp     eax, esi
0x44833B: mov     [esp+14h+var_4], 16h
0x448343: jz      TESForm_CreateDynamic___Return_0
0x448349: mov     ecx, eax
0x44834B: call    TESCreature_constr
0x448350: mov     esi, eax
0x448352: mov     ecx, [esp+14h+var_C]
0x448356: mov     large fs:0, ecx
0x44835D: pop     ecx
0x44835E: pop     esi
0x44835F: add     esp, 0Ch
0x448362: retn
0x448363: push    44h ; 'D'; jumptable 00447E26 case 37
0x448365: call    FormHeapAlloc
0x44836A: add     esp, 4
0x44836D: mov     [esp+14h+arg_0], eax
0x448371: cmp     eax, esi
0x448373: mov     [esp+14h+var_4], 17h
0x44837B: jz      TESForm_CreateDynamic___Return_0
0x448381: mov     ecx, eax; this
0x448383: call    ??0TESLevCreature@@QAE@XZ; TESLevCreature::TESLevCreature(void)
0x448388: mov     esi, eax
0x44838A: mov     ecx, [esp+14h+var_C]
0x44838E: mov     large fs:0, ecx
0x448395: pop     ecx
0x448396: pop     esi
0x448397: add     esp, 0Ch
0x44839A: retn
0x44839B: push    44h ; 'D'; jumptable 00447E26 case 16
0x44839D: call    FormHeapAlloc
0x4483A2: add     esp, 4
0x4483A5: mov     [esp+14h+arg_0], eax
0x4483A9: cmp     eax, esi
0x4483AB: mov     [esp+14h+var_4], 18h
0x4483B3: jz      TESForm_CreateDynamic___Return_0
0x4483B9: mov     ecx, eax; this
0x4483BB: call    ??0SpellItem@@QAE@XZ; SpellItem::SpellItem(void)
0x4483C0: mov     esi, eax
0x4483C2: mov     ecx, [esp+14h+var_C]
0x4483C6: mov     large fs:0, ecx
0x4483CD: pop     ecx
0x4483CE: pop     esi
0x4483CF: add     esp, 0Ch
0x4483D2: retn
0x4483D3: push    44h ; 'D'; jumptable 00447E26 case 15
0x4483D5: call    FormHeapAlloc
0x4483DA: add     esp, 4
0x4483DD: mov     [esp+14h+arg_0], eax
0x4483E1: cmp     eax, esi
0x4483E3: mov     [esp+14h+var_4], 19h
0x4483EB: jz      TESForm_CreateDynamic___Return_0
0x4483F1: mov     ecx, eax; this
0x4483F3: call    ??0EnchantmentItem@@QAE@XZ; EnchantmentItem::EnchantmentItem(void)
0x4483F8: mov     esi, eax
0x4483FA: mov     ecx, [esp+14h+var_C]
0x4483FE: mov     large fs:0, ecx
0x448405: pop     ecx
0x448406: pop     esi
0x448407: add     esp, 0Ch
0x44840A: retn
0x44840B: push    80h ; '€'; jumptable 00447E26 case 40
0x448410: call    FormHeapAlloc
0x448415: add     esp, 4
0x448418: mov     [esp+14h+arg_0], eax
0x44841C: cmp     eax, esi
0x44841E: mov     [esp+14h+var_4], 1Ah
0x448426: jz      TESForm_CreateDynamic___Return_0
0x44842C: mov     ecx, eax; this
0x44842E: call    ??0AlchemyItem@@QAE@XZ; AlchemyItem::AlchemyItem(void)
0x448433: mov     esi, eax
0x448435: mov     ecx, [esp+14h+var_C]
0x448439: mov     large fs:0, ecx
0x448440: pop     ecx
0x448441: pop     esi
0x448442: add     esp, 0Ch
0x448445: retn
0x448446: push    34h ; '4'; jumptable 00447E26 case 43
0x448448: call    FormHeapAlloc
0x44844D: add     esp, 4
0x448450: mov     [esp+14h+arg_0], eax
0x448454: cmp     eax, esi
0x448456: mov     [esp+14h+var_4], 1Bh
0x44845E: jz      TESForm_CreateDynamic___Return_0
0x448464: mov     ecx, eax
0x448466: call    TESLevItem_constr
0x44846B: mov     esi, eax
0x44846D: mov     ecx, [esp+14h+var_C]
0x448471: mov     large fs:0, ecx
0x448478: pop     ecx
0x448479: pop     esi
0x44847A: add     esp, 0Ch
0x44847D: retn
0x44847E: push    58h ; 'X'; jumptable 00447E26 case 49
0x448480: call    FormHeapAlloc
0x448485: add     esp, 4
0x448488: mov     [esp+14h+arg_0], eax
0x44848C: cmp     eax, esi
0x44848E: mov     [esp+14h+var_4], 1Ch
0x448496: jz      TESForm_CreateDynamic___Return_0
0x44849C: mov     ecx, eax; this
0x44849E: call    TESObjectREFR_constr
0x4484A3: mov     esi, eax
0x4484A5: mov     ecx, [esp+14h+var_C]
0x4484A9: mov     large fs:0, ecx
0x4484B0: pop     ecx
0x4484B1: pop     esi
0x4484B2: add     esp, 0Ch
0x4484B5: retn
0x4484B6: push    4Ch ; 'L'; jumptable 00447E26 case 7
0x4484B8: call    FormHeapAlloc
0x4484BD: add     esp, 4
0x4484C0: mov     [esp+14h+arg_0], eax
0x4484C4: cmp     eax, esi
0x4484C6: mov     [esp+14h+var_4], 1Dh
0x4484CE: jz      TESForm_CreateDynamic___Return_0
0x4484D4: mov     ecx, eax; this
0x4484D6: call    ??0TESHair@@QAE@XZ; TESHair::TESHair(void)
0x4484DB: mov     esi, eax
0x4484DD: mov     ecx, [esp+14h+var_C]
0x4484E1: mov     large fs:0, ecx
0x4484E8: pop     ecx
0x4484E9: pop     esi
0x4484EA: add     esp, 0Ch
0x4484ED: retn
0x4484EE: push    34h ; '4'; jumptable 00447E26 case 8
0x4484F0: call    FormHeapAlloc
0x4484F5: add     esp, 4
0x4484F8: mov     [esp+14h+arg_0], eax
0x4484FC: cmp     eax, esi
0x4484FE: mov     [esp+14h+var_4], 1Eh
0x448506: jz      TESForm_CreateDynamic___Return_0
0x44850C: mov     ecx, eax; this
0x44850E: call    ??0TESEyes@@QAE@XZ; TESEyes::TESEyes(void)
0x448513: mov     esi, eax
0x448515: mov     ecx, [esp+14h+var_C]
0x448519: mov     large fs:0, ecx
0x448520: pop     ecx
0x448521: pop     esi
0x448522: add     esp, 0Ch
0x448525: retn
0x448526: push    318h; jumptable 00447E26 case 9
0x44852B: call    FormHeapAlloc
0x448530: add     esp, 4
0x448533: mov     [esp+14h+arg_0], eax
0x448537: cmp     eax, esi
0x448539: mov     [esp+14h+var_4], 1Fh
0x448541: jz      TESForm_CreateDynamic___Return_0
0x448547: mov     ecx, eax; this
0x448549: call    ??0TESRace@@QAE@XZ; TESRace::TESRace(void)
0x44854E: mov     esi, eax
0x448550: mov     ecx, [esp+14h+var_C]
0x448554: mov     large fs:0, ecx
0x44855B: pop     ecx
0x44855C: pop     esi
0x44855D: add     esp, 0Ch
0x448560: retn
0x448561: push    6Ch ; 'l'; jumptable 00447E26 case 5
0x448563: call    FormHeapAlloc
0x448568: add     esp, 4
0x44856B: mov     [esp+14h+arg_0], eax
0x44856F: cmp     eax, esi
0x448571: mov     [esp+14h+var_4], 20h ; ' '
0x448579: jz      TESForm_CreateDynamic___Return_0
0x44857F: mov     ecx, eax; this
0x448581: call    ??0TESClass@@QAE@XZ; TESClass::TESClass(void)
0x448586: mov     esi, eax
0x448588: mov     ecx, [esp+14h+var_C]
0x44858C: mov     large fs:0, ecx
0x448593: pop     ecx
0x448594: pop     esi
0x448595: add     esp, 0Ch
0x448598: retn
0x448599: push    4Ch ; 'L'; jumptable 00447E26 case 17
0x44859B: call    FormHeapAlloc
0x4485A0: add     esp, 4
0x4485A3: mov     [esp+14h+arg_0], eax
0x4485A7: cmp     eax, esi
0x4485A9: mov     [esp+14h+var_4], 21h ; '!'
0x4485B1: jz      TESForm_CreateDynamic___Return_0
0x4485B7: mov     ecx, eax; this
0x4485B9: call    ??0BirthSign@@QAE@XZ; BirthSign::BirthSign(void)
0x4485BE: mov     esi, eax
0x4485C0: mov     ecx, [esp+14h+var_C]
0x4485C4: mov     large fs:0, ecx
0x4485CB: pop     ecx
0x4485CC: pop     esi
0x4485CD: add     esp, 0Ch
0x4485D0: retn
0x4485D1: push    44h ; 'D'; jumptable 00447E26 case 6
0x4485D3: call    FormHeapAlloc
0x4485D8: add     esp, 4
0x4485DB: mov     [esp+14h+arg_0], eax
0x4485DF: cmp     eax, esi
0x4485E1: mov     [esp+14h+var_4], 22h ; '"'
0x4485E9: jz      TESForm_CreateDynamic___Return_0
0x4485EF: mov     ecx, eax
0x4485F1: call    sub_51F820
0x4485F6: mov     esi, eax
0x4485F8: mov     ecx, [esp+14h+var_C]
0x4485FC: mov     large fs:0, ecx
0x448603: pop     ecx
0x448604: pop     esi
0x448605: add     esp, 0Ch
0x448608: retn
0x448609: push    44h ; 'D'; jumptable 00447E26 case 10
0x44860B: call    FormHeapAlloc
0x448610: add     esp, 4
0x448613: mov     [esp+14h+arg_0], eax
0x448617: cmp     eax, esi
0x448619: mov     [esp+14h+var_4], 23h ; '#'
0x448621: jz      TESForm_CreateDynamic___Return_0
0x448627: mov     ecx, eax; this
0x448629: call    ??0TESSound@@QAE@XZ; TESSound::TESSound(void)
0x44862E: mov     esi, eax
0x448630: mov     ecx, [esp+14h+var_C]
0x448634: mov     large fs:0, ecx
0x44863B: pop     ecx
0x44863C: pop     esi
0x44863D: add     esp, 0Ch
0x448640: retn
0x448641: push    28h ; '('; jumptable 00447E26 case 4
0x448643: call    FormHeapAlloc
0x448648: add     esp, 4
0x44864B: mov     [esp+14h+arg_0], eax
0x44864F: cmp     eax, esi
0x448651: mov     [esp+14h+var_4], 24h ; '$'
0x448659: jz      TESForm_CreateDynamic___Return_0
0x44865F: mov     ecx, eax; this
0x448661: call    ??0TESGlobal@@QAE@XZ; TESGlobal::TESGlobal(void)
0x448666: mov     esi, eax
0x448668: mov     ecx, [esp+14h+var_C]
0x44866C: mov     large fs:0, ecx
0x448673: pop     ecx
0x448674: pop     esi
0x448675: add     esp, 0Ch
0x448678: retn
0x448679: push    0A8h ; '¨'; jumptable 00447E26 case 12
0x44867E: call    FormHeapAlloc
0x448683: add     esp, 4
0x448686: mov     [esp+14h+arg_0], eax
0x44868A: cmp     eax, esi
0x44868C: mov     [esp+14h+var_4], 25h ; '%'
0x448694: jz      TESForm_CreateDynamic___Return_0
0x44869A: mov     ecx, eax; this
0x44869C: call    ??0EffectSetting@@QAE@XZ; EffectSetting::EffectSetting(void)
0x4486A1: mov     esi, eax
0x4486A3: mov     ecx, [esp+14h+var_C]
0x4486A7: mov     large fs:0, ecx
0x4486AE: pop     ecx
0x4486AF: pop     esi
0x4486B0: add     esp, 0Ch
0x4486B3: retn
0x4486B4: push    58h ; 'X'; jumptable 00447E26 case 46
0x4486B6: call    FormHeapAlloc
0x4486BB: add     esp, 4
0x4486BE: mov     [esp+14h+arg_0], eax
0x4486C2: cmp     eax, esi
0x4486C4: mov     [esp+14h+var_4], 26h ; '&'
0x4486CC: jz      TESForm_CreateDynamic___Return_0
0x4486D2: mov     ecx, eax; this
0x4486D4: call    ??0TESClimate@@QAE@XZ; TESClimate::TESClimate(void)
0x4486D9: mov     esi, eax
0x4486DB: mov     ecx, [esp+14h+var_C]
0x4486DF: mov     large fs:0, ecx
0x4486E6: pop     ecx
0x4486E7: pop     esi
0x4486E8: add     esp, 0Ch
0x4486EB: retn
0x4486EC: push    148h; jumptable 00447E26 case 45
0x4486F1: call    FormHeapAlloc
0x4486F6: add     esp, 4
0x4486F9: mov     [esp+14h+arg_0], eax
0x4486FD: cmp     eax, esi
0x4486FF: mov     [esp+14h+var_4], 27h ; '''
0x448707: jz      TESForm_CreateDynamic___Return_0
0x44870D: mov     ecx, eax; this
0x44870F: call    ??0TESWeather@@QAE@XZ; TESWeather::TESWeather(void)
0x448714: mov     esi, eax
0x448716: mov     ecx, [esp+14h+var_C]
0x44871A: mov     large fs:0, ecx
0x448721: pop     ecx
0x448722: pop     esi
0x448723: add     esp, 0Ch
0x448726: retn
0x448727: push    0E0h ; 'à'; jumptable 00447E26 case 53
0x44872C: call    FormHeapAlloc
0x448731: add     esp, 4
0x448734: mov     [esp+14h+arg_0], eax
0x448738: cmp     eax, esi
0x44873A: mov     [esp+14h+var_4], 28h ; '('
0x448742: jz      TESForm_CreateDynamic___Return_0
0x448748: mov     ecx, eax; this
0x44874A: call    ??0TESWorldSpace@@QAE@XZ; TESWorldSpace::TESWorldSpace(void)
0x44874F: mov     esi, eax
0x448751: mov     ecx, [esp+14h+var_C]
0x448755: mov     large fs:0, ecx
0x44875C: pop     ecx
0x44875D: pop     esi
0x44875E: add     esp, 0Ch
0x448761: retn
0x448762: push    58h ; 'X'; jumptable 00447E26 case 48
0x448764: call    FormHeapAlloc
0x448769: add     esp, 4
0x44876C: mov     [esp+14h+arg_0], eax
0x448770: cmp     eax, esi
0x448772: mov     [esp+14h+var_4], 29h ; ')'
0x44877A: jz      TESForm_CreateDynamic___Return_0
0x448780: mov     ecx, eax
0x448782: call    TESObjectCELL_constr
0x448787: mov     esi, eax
0x448789: mov     ecx, [esp+14h+var_C]
0x44878D: mov     large fs:0, ecx
0x448794: pop     ecx
0x448795: pop     esi
0x448796: add     esp, 0Ch
0x448799: retn
0x44879A: push    60h ; '`'; jumptable 00447E26 case 11
0x44879C: call    FormHeapAlloc
0x4487A1: add     esp, 4
0x4487A4: mov     [esp+14h+arg_0], eax
0x4487A8: cmp     eax, esi
0x4487AA: mov     [esp+14h+var_4], 2Ah ; '*'
0x4487B2: jz      TESForm_CreateDynamic___Return_0
0x4487B8: mov     ecx, eax; this
0x4487BA: call    ??0TESSkill@@QAE@XZ; TESSkill::TESSkill(void)
0x4487BF: mov     esi, eax
0x4487C1: mov     ecx, [esp+14h+var_C]
0x4487C5: mov     large fs:0, ecx
0x4487CC: pop     ecx
0x4487CD: pop     esi
0x4487CE: add     esp, 0Ch
0x4487D1: retn
0x4487D2: push    34h ; '4'; jumptable 00447E26 case 14
0x4487D4: call    FormHeapAlloc
0x4487D9: add     esp, 4
0x4487DC: mov     [esp+14h+arg_0], eax
0x4487E0: cmp     eax, esi
0x4487E2: mov     [esp+14h+var_4], 2Bh ; '+'
0x4487EA: jz      TESForm_CreateDynamic___Return_0
0x4487F0: mov     ecx, eax
0x4487F2: call    sub_4C93D0
0x4487F7: mov     esi, eax
0x4487F9: mov     ecx, [esp+14h+var_C]
0x4487FD: mov     large fs:0, ecx
0x448804: pop     ecx
0x448805: pop     esi
0x448806: add     esp, 0Ch
0x448809: retn
0x44880A: push    68h ; 'h'; jumptable 00447E26 case 59
0x44880C: call    FormHeapAlloc
0x448811: add     esp, 4
0x448814: mov     [esp+14h+arg_0], eax
0x448818: cmp     eax, esi
0x44881A: mov     [esp+14h+var_4], 2Ch ; ','
0x448822: jz      TESForm_CreateDynamic___Return_0
0x448828: mov     ecx, eax
0x44882A: call    sub_52AA00
0x44882F: mov     esi, eax
0x448831: mov     ecx, [esp+14h+var_C]
0x448835: mov     large fs:0, ecx
0x44883C: pop     ecx
0x44883D: pop     esi
0x44883E: add     esp, 0Ch
0x448841: retn
0x448842: push    2Ch ; ','; jumptable 00447E26 case 47
0x448844: call    FormHeapAlloc
0x448849: add     esp, 4
0x44884C: mov     [esp+14h+arg_0], eax
0x448850: cmp     eax, esi
0x448852: mov     [esp+14h+var_4], 2Dh ; '-'
0x44885A: jz      TESForm_CreateDynamic___Return_0
0x448860: mov     ecx, eax; this
0x448862: call    ??0TESRegion@@QAE@XZ; TESRegion::TESRegion(void)
0x448867: mov     esi, eax
0x448869: mov     ecx, [esp+14h+var_C]
0x44886D: mov     large fs:0, ecx
0x448874: pop     ecx
0x448875: pop     esi
0x448876: add     esp, 0Ch
0x448879: retn
0x44887A: push    50h ; 'P'; jumptable 00447E26 case 13
0x44887C: call    FormHeapAlloc
0x448881: add     esp, 4
0x448884: mov     [esp+14h+arg_0], eax
0x448888: cmp     eax, esi
0x44888A: mov     [esp+14h+var_4], 2Eh ; '.'
0x448892: jz      TESForm_CreateDynamic___Return_0
0x448898: mov     ecx, eax
0x44889A: call    Script_Constructor
0x44889F: mov     esi, eax
0x4488A1: mov     ecx, [esp+14h+var_C]
0x4488A5: mov     large fs:0, ecx
0x4488AC: pop     ecx
0x4488AD: pop     esi
0x4488AE: add     esp, 0Ch
0x4488B1: retn
0x4488B2: push    98h ; '˜'; jumptable 00447E26 case 62
0x4488B7: call    FormHeapAlloc
0x4488BC: add     esp, 4
0x4488BF: mov     [esp+14h+arg_0], eax
0x4488C3: cmp     eax, esi
0x4488C5: mov     [esp+14h+var_4], 2Fh ; '/'
0x4488CD: jz      TESForm_CreateDynamic___Return_0
0x4488D3: mov     ecx, eax
0x4488D5: call    sub_4ABB40
0x4488DA: mov     esi, eax
0x4488DC: mov     ecx, [esp+14h+var_C]
0x4488E0: mov     large fs:0, ecx
0x4488E7: pop     ecx
0x4488E8: pop     esi
0x4488E9: add     esp, 0Ch
0x4488EC: retn
0x4488ED: push    3Ch ; '<'; jumptable 00447E26 case 63
0x4488EF: call    FormHeapAlloc
0x4488F4: add     esp, 4
0x4488F7: mov     [esp+14h+arg_0], eax
0x4488FB: cmp     eax, esi
0x4488FD: mov     [esp+14h+var_4], 30h ; '0'
0x448905: jz      TESForm_CreateDynamic___Return_0
0x44890B: mov     ecx, eax; this
0x44890D: call    ??0TESLoadScreen@@QAE@XZ; TESLoadScreen::TESLoadScreen(void)
0x448912: mov     esi, eax
0x448914: mov     ecx, [esp+14h+var_C]
0x448918: mov     large fs:0, ecx
0x44891F: pop     ecx
0x448920: pop     esi
0x448921: add     esp, 0Ch
0x448924: retn
0x448925: push    0ACh ; '¬'; jumptable 00447E26 case 66
0x44892A: call    FormHeapAlloc
0x44892F: add     esp, 4
0x448932: mov     [esp+14h+arg_0], eax
0x448936: cmp     eax, esi
0x448938: mov     [esp+14h+var_4], 31h ; '1'
0x448940: jz      TESForm_CreateDynamic___Return_0
0x448946: mov     ecx, eax; this
0x448948: call    ??0TESWaterForm@@QAE@XZ; TESWaterForm::TESWaterForm(void)
0x44894D: mov     esi, eax
0x44894F: mov     ecx, [esp+14h+var_C]
0x448953: mov     large fs:0, ecx
0x44895A: pop     ecx
0x44895B: pop     esi
0x44895C: add     esp, 0Ch
0x44895F: retn
0x448960: push    34h ; '4'; jumptable 00447E26 case 64
0x448962: call    FormHeapAlloc
0x448967: add     esp, 4
0x44896A: mov     [esp+14h+arg_0], eax
0x44896E: cmp     eax, esi
0x448970: mov     [esp+14h+var_4], 32h ; '2'
0x448978: jz      TESForm_CreateDynamic___Return_0
0x44897E: mov     ecx, eax; this
0x448980: call    ??0TESLevSpell@@QAE@XZ; TESLevSpell::TESLevSpell(void)
0x448985: mov     esi, eax
0x448987: mov     ecx, [esp+14h+var_C]
0x44898B: mov     large fs:0, ecx
0x448992: pop     ecx
0x448993: pop     esi
0x448994: add     esp, 0Ch
0x448997: retn
0x448998: push    34h ; '4'; jumptable 00447E26 case 65
0x44899A: call    FormHeapAlloc
0x44899F: add     esp, 4
0x4489A2: mov     [esp+14h+arg_0], eax
0x4489A6: cmp     eax, esi
0x4489A8: mov     [esp+14h+var_4], 33h ; '3'
0x4489B0: jz      TESForm_CreateDynamic___Return_0
0x4489B6: mov     ecx, eax; this
0x4489B8: call    ??0TESObjectANIO@@QAE@XZ; TESObjectANIO::TESObjectANIO(void)
0x4489BD: mov     esi, eax
0x4489BF: mov     ecx, [esp+14h+var_C]
0x4489C3: mov     large fs:0, ecx
0x4489CA: pop     ecx
0x4489CB: pop     esi
0x4489CC: add     esp, 0Ch
0x4489CF: retn
0x4489D0: push    28h ; '('; jumptable 00447E26 case 54
0x4489D2: call    FormHeapAlloc
0x4489D7: add     esp, 4
0x4489DA: mov     [esp+14h+arg_0], eax
0x4489DE: cmp     eax, esi
0x4489E0: mov     [esp+14h+var_4], 34h ; '4'
0x4489E8: jz      TESForm_CreateDynamic___Return_0
0x4489EE: mov     ecx, eax; this
0x4489F0: call    ??0TESObjectLAND@@QAE@XZ; TESObjectLAND::TESObjectLAND(void)
0x4489F5: mov     esi, eax
0x4489F7: mov     ecx, [esp+14h+var_C]
0x4489FB: mov     large fs:0, ecx
0x448A02: pop     ecx
0x448A03: pop     esi
0x448A04: add     esp, 0Ch
0x448A07: retn
0x448A08: push    54h ; 'T'; jumptable 00447E26 case 52
0x448A0A: call    FormHeapAlloc
0x448A0F: add     esp, 4
0x448A12: mov     [esp+14h+arg_0], eax
0x448A16: cmp     eax, esi
0x448A18: mov     [esp+14h+var_4], 35h ; '5'
0x448A20: jz      TESForm_CreateDynamic___Return_0
0x448A26: mov     ecx, eax; this
0x448A28: call    ??0TESPathGrid@@QAE@XZ; TESPathGrid::TESPathGrid(void)
0x448A2D: mov     esi, eax
0x448A2F: mov     ecx, [esp+14h+var_C]
0x448A33: mov     large fs:0, ecx
0x448A3A: pop     ecx
0x448A3B: pop     esi
0x448A3C: add     esp, 0Ch
0x448A3F: retn
0x448A40: push    30h ; '0'; jumptable 00447E26 case 56
0x448A42: call    FormHeapAlloc
0x448A47: add     esp, 4
0x448A4A: mov     [esp+14h+arg_0], eax
0x448A4E: cmp     eax, esi
0x448A50: mov     [esp+14h+var_4], 36h ; '6'
0x448A58: jz      TESForm_CreateDynamic___Return_0
0x448A5E: mov     ecx, eax; this
0x448A60: call    ??0TESRoad@@QAE@XZ; TESRoad::TESRoad(void)
0x448A65: mov     esi, eax
0x448A67: mov     ecx, [esp+14h+var_C]
0x448A6B: mov     large fs:0, ecx
0x448A72: pop     ecx
0x448A73: pop     esi
0x448A74: add     esp, 0Ch
0x448A77: retn
0x448A78: push    30h ; '0'; jumptable 00447E26 case 41
0x448A7A: call    FormHeapAlloc
0x448A7F: add     esp, 4
0x448A82: mov     [esp+14h+arg_0], eax
0x448A86: cmp     eax, esi
0x448A88: mov     [esp+14h+var_4], 37h ; '7'
0x448A90: jz      TESForm_CreateDynamic___Return_0
0x448A96: mov     ecx, eax; this
0x448A98: call    ??0TESSubSpace@@QAE@XZ; TESSubSpace::TESSubSpace(void)
0x448A9D: mov     esi, eax
0x448A9F: mov     ecx, [esp+14h+var_C]
0x448AA3: mov     large fs:0, ecx
0x448AAA: pop     ecx
0x448AAB: pop     esi
0x448AAC: add     esp, 0Ch
0x448AAF: retn
0x448AB0: push    110h; jumptable 00447E26 case 67
0x448AB5: call    FormHeapAlloc
0x448ABA: add     esp, 4
0x448ABD: mov     [esp+14h+arg_0], eax
0x448AC1: cmp     eax, esi
0x448AC3: mov     [esp+14h+var_4], 38h ; '8'
0x448ACB: jz      TESForm_CreateDynamic___Return_0
0x448AD1: mov     ecx, eax; this
0x448AD3: call    ??0TESEffectShader@@QAE@XZ; TESEffectShader::TESEffectShader(void)
0x448AD8: mov     esi, eax
0x448ADA: mov     ecx, [esp+14h+var_C]
0x448ADE: mov     large fs:0, ecx
0x448AE5: pop     ecx
0x448AE6: pop     esi
0x448AE7: add     esp, 0Ch
0x448AEA: retn
0x448AEB: push    88h ; 'ˆ'; jumptable 00447E26 case 42
0x448AF0: call    FormHeapAlloc
0x448AF5: add     esp, 4
0x448AF8: mov     [esp+14h+arg_0], eax
0x448AFC: cmp     eax, esi
0x448AFE: mov     [esp+14h+var_4], 39h ; '9'
0x448B06: jz      TESForm_CreateDynamic___Return_0
0x448B0C: mov     ecx, eax; this
0x448B0E: call    ??0TESSigilStone@@QAE@XZ; TESSigilStone::TESSigilStone(void)
0x448B13: mov     esi, eax
0x448B15: mov     ecx, [esp+14h+var_C]
0x448B19: mov     large fs:0, ecx
0x448B20: pop     ecx
0x448B21: pop     esi
0x448B22: add     esp, 0Ch
0x448B25: retn
0x448B26: cmp     dl, 45h ; 'E'; jumptable 00447E26 default case, cases 44,50,51,55,57,58
0x448B29: jnb     short loc_448B37
0x448B2B: lea     eax, [eax+eax*2]
0x448B2E: mov     eax, ds:0B05E04h[eax*4]
0x448B35: jmp     short loc_448B3C
0x448B37: mov     eax, offset EmptyString
0x448B3C: push    eax; ArgList
0x448B3D: push    offset aTesdatahandler; "TESDataHandler trying to create TESForm"...
0x448B42: call    PrintError
0x448B47: add     esp, 8
0x448B4A: mov     eax, esi
0x448B4C: mov     ecx, [esp+14h+var_C]
0x448B50: mov     large fs:0, ecx
0x448B57: pop     ecx
0x448B58: pop     esi
0x448B59: add     esp, 0Ch
0x448B5C: retn
