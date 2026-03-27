0x469D10: push    esi
0x469D11: push    edi
0x469D12: mov     edi, [esp+8+arg_0]
0x469D16: movzx   eax, byte ptr [edi+4]
0x469D1A: add     eax, 0FFFFFFF1h; switch 50 cases
0x469D1D: cmp     eax, 31h
0x469D20: mov     esi, ecx
0x469D22: ja      short TESContainer_AddValidatedForm___def_469D2B; jumptable 00469D2B default case, cases 17,19-22,25-27,29,31-48,50-63
0x469D24: movzx   eax, ds:byte_469E38[eax]
0x469D2B: jmp     ds:jpt_469D2B[eax*4]; switch jump
0x469D32: pop     edi; jumptable 00469D2B cases 15,16,18,23,24,28,30,64
0x469D33: xor     eax, eax
0x469D35: pop     esi
0x469D36: retn    0Ch
0x469D39: push    offset aNeverCallTheTh; jumptable 00469D2B case 49
0x469D3E: call    PrintError
0x469D43: add     esp, 4
0x469D46: pop     edi
0x469D47: xor     eax, eax
0x469D49: pop     esi
0x469D4A: retn    0Ch
0x469D4D: push    ebx; jumptable 00469D2B default case, cases 17,19-22,25-27,29,31-48,50-63
0x469D4E: mov     ebx, [esp+0Ch+arg_4]
0x469D52: test    ebx, ebx
0x469D54: push    ebp
0x469D55: jnz     short loc_469D76
0x469D57: mov     edx, [edi]
0x469D59: mov     eax, [edx+0D4h]
0x469D5F: mov     ecx, edi
0x469D61: call    eax
0x469D63: push    eax
0x469D64: push    offset aCountOf0NotAll; "Count of 0 not allowed on items. Fix th"...
0x469D69: call    PrintError
0x469D6E: add     esp, 8
0x469D71: mov     ebx, 1
0x469D76: or      byte ptr [esi+4], 1
0x469D7A: movzx   eax, byte ptr [edi+4]
0x469D7E: add     eax, 0FFFFFFECh; switch 14 cases
0x469D81: cmp     eax, 0Dh
0x469D84: ja      short TESContainer_AddValidatedForm___def_469D8D; jumptable 00469D8D default case, cases 20,23-33
0x469D86: movzx   ecx, ds:byte_469E78[eax]
0x469D8D: jmp     ds:jpt_469D8D[ecx*4]; switch jump
0x469D94: push    edi; jumptable 00469D8D cases 21,22
0x469D95: call    TESEnchantableForm_GetFormEnchantment
0x469D9A: add     esp, 4
0x469D9D: lea     ebp, [esi+8]; jumptable 00469D8D default case, cases 20,23-33
0x469DA0: mov     eax, ebp
0x469DA2: cmp     dword ptr [eax], 0
0x469DA5: jz      short TESContainer_AddValidatedForm___AddNewContentEntry
0x469DA7: mov     esi, [eax]
0x469DA9: cmp     [esi+4], edi
0x469DAC: jz      short loc_469DBA
0x469DAE: mov     eax, [eax+4]
0x469DB1: test    eax, eax
0x469DB3: jnz     short TESContainer_AddValidatedForm___ContentListLoop
0x469DB5: cmp     [esi+4], edi
0x469DB8: jnz     short TESContainer_AddValidatedForm___AddNewContentEntry
0x469DBA: cmp     [esp+10h+arg_8], 0
0x469DBF: jz      short loc_469DCC
0x469DC1: pop     ebp
0x469DC2: mov     [esi], ebx
0x469DC4: mov     eax, ebx
0x469DC6: pop     ebx
0x469DC7: pop     edi
0x469DC8: pop     esi
0x469DC9: retn    0Ch
0x469DCC: test    ebx, ebx
0x469DCE: jge     short loc_469DDC
0x469DD0: mov     eax, [esi]
0x469DD2: test    eax, eax
0x469DD4: jle     short loc_469DDA
0x469DD6: neg     eax
0x469DD8: mov     [esi], eax
0x469DDA: neg     ebx
0x469DDC: mov     eax, [esi]
0x469DDE: test    eax, eax
0x469DE0: jl      short loc_469DED
0x469DE2: pop     ebp
0x469DE3: add     eax, ebx
0x469DE5: pop     ebx
0x469DE6: pop     edi
0x469DE7: mov     [esi], eax
0x469DE9: pop     esi
0x469DEA: retn    0Ch
0x469DED: pop     ebp
0x469DEE: sub     eax, ebx
0x469DF0: pop     ebx
0x469DF1: pop     edi
0x469DF2: mov     [esi], eax
0x469DF4: pop     esi
0x469DF5: retn    0Ch
0x469DF8: push    8; Size
0x469DFA: call    FormHeapAlloc
0x469DFF: xor     esi, esi
0x469E01: add     esp, 4
0x469E04: cmp     eax, esi
0x469E06: jz      short loc_469E13
0x469E08: mov     [eax+4], esi
0x469E0B: mov     dword ptr [eax], 1
0x469E11: mov     esi, eax
0x469E13: push    esi
0x469E14: mov     ecx, ebp
0x469E16: mov     [esi], ebx
0x469E18: mov     [esi+4], edi
0x469E1B: call    BSSimpleList_PushFront
0x469E20: mov     eax, [esi]
0x469E22: pop     ebp
0x469E23: pop     ebx
0x469E24: pop     edi
0x469E25: pop     esi
0x469E26: retn    0Ch
