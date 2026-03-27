0x519D90: mov     edx, [esp+arg_0]
0x519D94: xor     eax, eax
0x519D96: cmp     edx, 27h; switch 40 cases
0x519D99: push    esi
0x519D9A: ja      TESActorBase_GetAViBase___def_519DA7
0x519DA0: movzx   esi, ds:byte_519F24[edx]
0x519DA7: jmp     ds:jpt_519DA7[esi*4]; switch jump
0x519DAE: push    3; jumptable 00519DA7 case 3
0x519DB0: add     ecx, 88h ; 'ˆ'
0x519DB6: call    TESAttributes_GetAVi
0x519DBB: movzx   eax, al
0x519DBE: pop     esi
0x519DBF: retn    4
0x519DC2: push    5; jumptable 00519DA7 case 5
0x519DC4: add     ecx, 88h ; 'ˆ'
0x519DCA: call    TESAttributes_GetAVi
0x519DCF: movzx   eax, al
0x519DD2: pop     esi
0x519DD3: retn    4
0x519DD6: push    1; jumptable 00519DA7 case 1
0x519DD8: add     ecx, 88h ; 'ˆ'
0x519DDE: call    TESAttributes_GetAVi
0x519DE3: movzx   eax, al
0x519DE6: pop     esi
0x519DE7: retn    4
0x519DEA: push    7; jumptable 00519DA7 case 7
0x519DEC: add     ecx, 88h ; 'ˆ'
0x519DF2: call    TESAttributes_GetAVi
0x519DF7: movzx   eax, al
0x519DFA: pop     esi
0x519DFB: retn    4
0x519DFE: push    6; jumptable 00519DA7 case 6
0x519E00: add     ecx, 88h ; 'ˆ'
0x519E06: call    TESAttributes_GetAVi
0x519E0B: movzx   eax, al
0x519E0E: pop     esi
0x519E0F: retn    4
0x519E12: push    4; jumptable 00519DA7 case 4
0x519E14: add     ecx, 88h ; 'ˆ'
0x519E1A: call    TESAttributes_GetAVi
0x519E1F: movzx   eax, al
0x519E22: pop     esi
0x519E23: retn    4
0x519E26: push    0; jumptable 00519DA7 case 0
0x519E28: add     ecx, 88h ; 'ˆ'
0x519E2E: call    TESAttributes_GetAVi
0x519E33: movzx   eax, al
0x519E36: pop     esi
0x519E37: retn    4
0x519E3A: push    2; jumptable 00519DA7 case 2
0x519E3C: add     ecx, 88h ; 'ˆ'
0x519E42: call    TESAttributes_GetAVi
0x519E47: movzx   eax, al
0x519E4A: pop     esi
0x519E4B: retn    4
0x519E4E: call    TESActorBase_GetHealth; jumptable 00519DA7 case 8
0x519E53: pop     esi
0x519E54: retn    4
0x519E57: mov     eax, [ecx+24h]; jumptable 00519DA7 case 10
0x519E5A: mov     edx, [eax+4Ch]
0x519E5D: add     ecx, 24h ; '$'
0x519E60: call    edx
0x519E62: movzx   eax, ax
0x519E65: pop     esi
0x519E66: retn    4
0x519E69: mov     eax, [ecx+24h]; jumptable 00519DA7 case 9
0x519E6C: mov     edx, [eax+48h]
0x519E6F: add     ecx, 24h ; '$'
0x519E72: call    edx
0x519E74: movzx   eax, ax
0x519E77: pop     esi
0x519E78: retn    4
0x519E7B: add     ecx, 44h ; 'D'; jumptable 00519DA7 case 11
0x519E7E: call    TESContainer_GetEncumberance
0x519E83: call    Double_To_SInt32
0x519E88: pop     esi
0x519E89: retn    4
0x519E8C: add     ecx, 68h ; 'h'; jumptable 00519DA7 case 33
0x519E8F: call    TESAIForm_GetAggression
0x519E94: movzx   eax, al
0x519E97: pop     esi
0x519E98: retn    4
0x519E9B: add     ecx, 68h ; 'h'; jumptable 00519DA7 case 34
0x519E9E: call    TESAIForm_GetConfidence
0x519EA3: movzx   eax, al
0x519EA6: pop     esi
0x519EA7: retn    4
0x519EAA: add     ecx, 68h ; 'h'; jumptable 00519DA7 case 35
0x519EAD: call    TESAIForm_GetEnergy
0x519EB2: movzx   eax, al
0x519EB5: pop     esi
0x519EB6: retn    4
0x519EB9: add     ecx, 68h ; 'h'; jumptable 00519DA7 case 36
0x519EBC: call    TESAIForm_GetResponsibility
0x519EC1: movzx   eax, al
0x519EC4: pop     esi
0x519EC5: retn    4
