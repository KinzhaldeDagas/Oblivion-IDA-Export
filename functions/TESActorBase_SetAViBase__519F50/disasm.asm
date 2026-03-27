0x519F50: mov     eax, [esp+arg_0]
0x519F54: cmp     eax, 27h; switch 40 cases
0x519F57: push    esi
0x519F58: mov     esi, ecx
0x519F5A: ja      TESActorBase_SetAViBase___def_519F67
0x519F60: movzx   ecx, ds:byte_51A0F8[eax]
0x519F67: jmp     ds:jpt_519F67[ecx*4]; switch jump
0x519F6E: mov     edx, dword ptr [esp+4+arg_4]; jumptable 00519F67 case 3
0x519F72: push    edx; char
0x519F73: push    3; int
0x519F75: lea     ecx, [esi+88h]; int
0x519F7B: call    TESAttributes_SetAVi
0x519F80: pop     esi
0x519F81: retn    8
0x519F84: mov     eax, dword ptr [esp+4+arg_4]; jumptable 00519F67 case 5
0x519F88: push    eax; char
0x519F89: push    5; int
0x519F8B: lea     ecx, [esi+88h]; int
0x519F91: call    TESAttributes_SetAVi
0x519F96: pop     esi
0x519F97: retn    8
0x519F9A: mov     ecx, dword ptr [esp+4+arg_4]; jumptable 00519F67 case 1
0x519F9E: push    ecx; char
0x519F9F: push    1; int
0x519FA1: lea     ecx, [esi+88h]; int
0x519FA7: call    TESAttributes_SetAVi
0x519FAC: pop     esi
0x519FAD: retn    8
0x519FB0: mov     edx, dword ptr [esp+4+arg_4]; jumptable 00519F67 case 7
0x519FB4: push    edx; char
0x519FB5: push    7; int
0x519FB7: lea     ecx, [esi+88h]; int
0x519FBD: call    TESAttributes_SetAVi
0x519FC2: pop     esi
0x519FC3: retn    8
0x519FC6: mov     eax, dword ptr [esp+4+arg_4]; jumptable 00519F67 case 6
0x519FCA: push    eax; char
0x519FCB: push    6; int
0x519FCD: lea     ecx, [esi+88h]; int
0x519FD3: call    TESAttributes_SetAVi
0x519FD8: pop     esi
0x519FD9: retn    8
0x519FDC: mov     ecx, dword ptr [esp+4+arg_4]; jumptable 00519F67 case 4
0x519FE0: push    ecx; char
0x519FE1: push    4; int
0x519FE3: lea     ecx, [esi+88h]; int
0x519FE9: call    TESAttributes_SetAVi
0x519FEE: pop     esi
0x519FEF: retn    8
0x519FF2: mov     edx, dword ptr [esp+4+arg_4]; jumptable 00519F67 case 0
0x519FF6: push    edx; char
0x519FF7: push    0; int
0x519FF9: lea     ecx, [esi+88h]; int
0x519FFF: call    TESAttributes_SetAVi
0x51A004: pop     esi
0x51A005: retn    8
0x51A008: mov     eax, dword ptr [esp+4+arg_4]; jumptable 00519F67 case 2
0x51A00C: push    eax; char
0x51A00D: push    2; int
0x51A00F: lea     ecx, [esi+88h]; int
0x51A015: call    TESAttributes_SetAVi
0x51A01A: pop     esi
0x51A01B: retn    8
0x51A01E: mov     ecx, dword ptr [esp+4+arg_4]; jumptable 00519F67 case 8
0x51A022: push    ecx
0x51A023: mov     ecx, esi
0x51A025: call    TESActorBase_SetHealth
0x51A02A: pop     esi
0x51A02B: retn    8
0x51A02E: mov     edx, dword ptr [esp+4+arg_4]; jumptable 00519F67 case 10
0x51A032: push    edx
0x51A033: lea     ecx, [esi+24h]
0x51A036: call    TESActorBaseData_SetFatigue
0x51A03B: pop     esi
0x51A03C: retn    8
0x51A03F: mov     eax, dword ptr [esp+4+arg_4]; jumptable 00519F67 case 9
0x51A043: push    eax
0x51A044: lea     ecx, [esi+24h]
0x51A047: call    TESActorBaseData_SetMagicka
0x51A04C: pop     esi
0x51A04D: retn    8
0x51A050: mov     ecx, dword ptr [esp+4+arg_4]; jumptable 00519F67 case 33
0x51A054: push    ecx
0x51A055: lea     ecx, [esi+68h]
0x51A058: call    TESAIForm_SetAggression
0x51A05D: pop     esi
0x51A05E: retn    8
0x51A061: mov     edx, dword ptr [esp+4+arg_4]; jumptable 00519F67 case 34
0x51A065: push    edx
0x51A066: lea     ecx, [esi+68h]
0x51A069: call    TESAIForm_SetConfidence
0x51A06E: pop     esi
0x51A06F: retn    8
0x51A072: mov     eax, dword ptr [esp+4+arg_4]; jumptable 00519F67 case 35
0x51A076: push    eax
0x51A077: lea     ecx, [esi+68h]
0x51A07A: call    TESAIForm_SetEnergy
0x51A07F: pop     esi
0x51A080: retn    8
0x51A083: mov     ecx, dword ptr [esp+4+arg_4]; jumptable 00519F67 case 36
0x51A087: push    ecx
0x51A088: lea     ecx, [esi+68h]
0x51A08B: call    TESAIForm_SetResponsibility
0x51A090: pop     esi
0x51A091: retn    8
