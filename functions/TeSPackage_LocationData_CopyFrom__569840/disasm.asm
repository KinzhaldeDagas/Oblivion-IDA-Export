0x569840: push    esi
0x569841: mov     esi, [esp+4+arg_0]
0x569845: test    esi, esi
0x569847: push    edi
0x569848: mov     edi, ecx
0x56984A: jz      TeSPackage_LocationData_CopyFrom___Done
0x569850: cmp     [esp+8+arg_4], 0
0x569855: jnz     short loc_569860
0x569857: cmp     byte ptr [esi], 0FFh
0x56985A: jz      TeSPackage_LocationData_CopyFrom___Done
0x569860: movsx   eax, byte ptr [esi]
0x569863: push    eax
0x569864: call    TESPackage_LocationData_SetType
0x569869: mov     cl, [edi]
0x56986B: movsx   eax, cl
0x56986E: cmp     eax, 5; switch 6 cases
0x569871: ja      TeSPackage_LocationData_CopyFrom___Done
0x569877: jmp     ds:jpt_569877[eax*4]; switch jump
0x56987E: mov     ecx, esi; jumptable 00569877 case 0
0x569880: call    TESPackage_LocationData_GetRadius
0x569885: push    eax
0x569886: mov     ecx, edi
0x569888: call    TESPackage_LocationData_SetRadius
0x56988D: cmp     byte ptr [esi], 0
0x569890: jnz     short loc_569897
0x569892: mov     esi, [esi+8]
0x569895: jmp     short loc_569899
0x569897: xor     esi, esi
0x569899: cmp     byte ptr [edi], 0
0x56989C: jnz     TeSPackage_LocationData_CopyFrom___Done
0x5698A2: mov     [edi+8], esi
0x5698A5: pop     edi
0x5698A6: pop     esi
0x5698A7: retn    8
0x5698AA: cmp     byte ptr [esi], 1; jumptable 00569877 case 1
0x5698AD: jnz     short loc_5698B4
0x5698AF: mov     esi, [esi+8]
0x5698B2: jmp     short loc_5698B6
0x5698B4: xor     esi, esi
0x5698B6: cmp     cl, 1
0x5698B9: jnz     short TeSPackage_LocationData_CopyFrom___Done
0x5698BB: mov     [edi+8], esi
0x5698BE: pop     edi
0x5698BF: pop     esi
0x5698C0: retn    8
0x5698C3: mov     ecx, esi; jumptable 00569877 case 4
0x5698C5: call    TESPackage_LocationData_GetRadius
0x5698CA: push    eax
0x5698CB: mov     ecx, edi
0x5698CD: call    TESPackage_LocationData_SetRadius
0x5698D2: cmp     byte ptr [esi], 4
0x5698D5: jnz     short loc_5698DC
0x5698D7: mov     esi, [esi+8]
0x5698DA: jmp     short loc_5698DE
0x5698DC: xor     esi, esi
0x5698DE: cmp     byte ptr [edi], 4
0x5698E1: jnz     short TeSPackage_LocationData_CopyFrom___Done
0x5698E3: mov     [edi+8], esi
0x5698E6: pop     edi
0x5698E7: pop     esi
0x5698E8: retn    8
0x5698EB: mov     ecx, esi; jumptable 00569877 case 5
0x5698ED: call    TESPackage_LocationData_GetRadius
0x5698F2: push    eax
0x5698F3: mov     ecx, edi
0x5698F5: call    TESPackage_LocationData_SetRadius
0x5698FA: cmp     byte ptr [esi], 5
0x5698FD: jnz     short loc_569904
0x5698FF: mov     esi, [esi+8]
0x569902: jmp     short loc_569906
0x569904: xor     esi, esi
0x569906: cmp     byte ptr [edi], 5
0x569909: jnz     short TeSPackage_LocationData_CopyFrom___Done
0x56990B: mov     [edi+8], esi
0x56990E: pop     edi
0x56990F: pop     esi
0x569910: retn    8
0x569913: mov     ecx, esi; jumptable 00569877 cases 2,3
0x569915: call    TESPackage_LocationData_GetRadius
0x56991A: push    eax
0x56991B: mov     ecx, edi
0x56991D: call    TESPackage_LocationData_SetRadius
