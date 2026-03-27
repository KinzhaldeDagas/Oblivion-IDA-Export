0x796FE0: push    ebp
0x796FE1: mov     ebp, esp
0x796FE3: push    0FFFFFFFFh
0x796FE5: push    offset SEH_796FE0
0x796FEA: mov     eax, large fs:0
0x796FF0: push    eax
0x796FF1: sub     esp, 1Ch
0x796FF4: push    ebx
0x796FF5: push    esi
0x796FF6: push    edi
0x796FF7: mov     eax, ds:0B30AACh
0x796FFC: xor     eax, ebp
0x796FFE: push    eax
0x796FFF: lea     eax, [ebp+var_C]
0x797002: mov     large fs:0, eax
0x797008: mov     [ebp+var_10], esp
0x79700B: mov     esi, ecx
0x79700D: mov     [ebp+var_14], esi
0x797010: mov     eax, [ebp+arg_C]
0x797013: push    eax
0x797014: lea     ecx, [ebp+var_28]
0x797017: call    sub_795480
0x79701C: mov     ecx, [esi+4]
0x79701F: xor     eax, eax
0x797021: cmp     ecx, eax
0x797023: mov     [ebp+var_4], eax
0x797026: jnz     short loc_79702C
0x797028: xor     ebx, ebx
0x79702A: jmp     short loc_797034
0x79702C: mov     ebx, [esi+0Ch]
0x79702F: sub     ebx, ecx
0x797031: sar     ebx, 4
0x797034: mov     edi, [ebp+arg_8]
0x797037: cmp     edi, eax
0x797039: jz      loc_797246
0x79703F: cmp     ecx, eax
0x797041: jz      short loc_79704B
0x797043: mov     eax, [esi+8]
0x797046: sub     eax, ecx
0x797048: sar     eax, 4
0x79704B: mov     edx, 0FFFFFFFh
0x797050: sub     edx, eax
0x797052: cmp     edx, edi
0x797054: jnb     short loc_79705B
0x797056: call    sub_790B90
0x79705B: test    ecx, ecx
0x79705D: jnz     short loc_797063
0x79705F: xor     eax, eax
0x797061: jmp     short loc_79706B
0x797063: mov     eax, [esi+8]
0x797066: sub     eax, ecx
0x797068: sar     eax, 4
0x79706B: add     eax, edi
0x79706D: cmp     ebx, eax
0x79706F: jnb     loc_797185
0x797075: mov     eax, ebx
0x797077: shr     eax, 1
0x797079: mov     edx, 0FFFFFFFh
0x79707E: sub     edx, eax
0x797080: cmp     edx, ebx
0x797082: jnb     short loc_797088
0x797084: xor     ebx, ebx
0x797086: jmp     short loc_79708A
0x797088: add     ebx, eax
0x79708A: test    ecx, ecx
0x79708C: jnz     short loc_797092
0x79708E: xor     eax, eax
0x797090: jmp     short loc_79709A
0x797092: mov     eax, [esi+8]
0x797095: sub     eax, ecx
0x797097: sar     eax, 4
0x79709A: add     eax, edi
0x79709C: cmp     ebx, eax
0x79709E: jnb     short loc_7970B3
0x7970A0: test    ecx, ecx
0x7970A2: jnz     short loc_7970A8
0x7970A4: xor     eax, eax
0x7970A6: jmp     short loc_7970B0
0x7970A8: mov     eax, [esi+8]
0x7970AB: sub     eax, ecx
0x7970AD: sar     eax, 4
0x7970B0: lea     ebx, [eax+edi]
0x7970B3: push    0
0x7970B5: push    ebx; char *
0x7970B6: call    sub_794550
0x7970BB: mov     ecx, [esi+4]
0x7970BE: mov     byte ptr [ebp+var_18], 0
0x7970C2: mov     edx, [ebp+var_18]
0x7970C5: push    edx
0x7970C6: mov     [ebp+arg_8], eax
0x7970C9: mov     edx, [ebp+arg_8]
0x7970CC: push    edx
0x7970CD: push    esi
0x7970CE: push    eax
0x7970CF: mov     [ebp+arg_C], eax
0x7970D2: mov     eax, [ebp+arg_4]
0x7970D5: push    eax
0x7970D6: push    ecx
0x7970D7: mov     byte ptr [ebp+var_4], 1
0x7970DB: call    sub_795E00
0x7970E0: add     esp, 20h
0x7970E3: lea     ecx, [ebp+var_28]
0x7970E6: push    ecx
0x7970E7: push    edi
0x7970E8: push    eax
0x7970E9: mov     ecx, esi
0x7970EB: mov     [ebp+arg_8], eax
0x7970EE: call    sub_7968D0
0x7970F3: mov     ecx, [esi+8]
0x7970F6: mov     byte ptr [ebp+var_18], 0
0x7970FA: mov     edx, [ebp+var_18]
0x7970FD: push    edx
0x7970FE: mov     [ebp+arg_8], eax
0x797101: mov     edx, [ebp+arg_8]
0x797104: push    edx
0x797105: push    esi
0x797106: push    eax
0x797107: mov     eax, [ebp+arg_4]
0x79710A: push    ecx
0x79710B: push    eax
0x79710C: call    sub_795E00
0x797111: mov     ecx, [esi+4]
0x797114: add     esp, 18h
0x797117: test    ecx, ecx
0x797119: jnz     short loc_79711F
0x79711B: xor     eax, eax
0x79711D: jmp     short loc_797127
0x79711F: mov     eax, [esi+8]
0x797122: sub     eax, ecx
0x797124: sar     eax, 4
0x797127: add     edi, eax
0x797129: test    ecx, ecx
0x79712B: jz      short loc_797148
0x79712D: mov     edx, [ebp+arg_8]
0x797130: mov     eax, [esi+8]
0x797133: push    edx
0x797134: push    esi
0x797135: push    eax
0x797136: push    ecx
0x797137: call    sub_794FC0
0x79713C: mov     ecx, [esi+4]
0x79713F: push    ecx
0x797140: call    FormHeapFree
0x797145: add     esp, 14h
0x797148: mov     eax, [ebp+arg_C]
0x79714B: shl     ebx, 4
0x79714E: add     ebx, eax
0x797150: shl     edi, 4
0x797153: add     edi, eax
0x797155: mov     [esi+0Ch], ebx
0x797158: mov     [esi+8], edi
0x79715B: mov     [esi+4], eax
0x79715E: jmp     loc_797246
0x797163: mov     edx, [ebp+arg_8]
0x797166: mov     esi, [ebp+arg_C]
0x797169: mov     ecx, [ebp+var_14]
0x79716C: push    edx
0x79716D: push    esi
0x79716E: call    sub_795820
0x797173: push    esi
0x797174: call    FormHeapFree
0x797179: add     esp, 4
0x79717C: push    0
0x79717E: push    0
0x797180: call    ThrowException??
0x797185: mov     eax, [esi+8]
0x797188: mov     ebx, [ebp+arg_4]
0x79718B: mov     ecx, eax
0x79718D: sub     ecx, ebx
0x79718F: sar     ecx, 4
0x797192: cmp     ecx, edi
0x797194: mov     [ebp+var_18], eax
0x797197: jnb     short loc_79720F
0x797199: mov     ecx, edi
0x79719B: shl     ecx, 4
0x79719E: mov     [ebp+arg_C], ecx
0x7971A1: add     ecx, ebx
0x7971A3: push    ecx
0x7971A4: push    eax
0x7971A5: push    ebx
0x7971A6: mov     ecx, esi
0x7971A8: call    sub_796910
0x7971AD: mov     eax, [esi+8]
0x7971B0: mov     ecx, eax
0x7971B2: sub     ecx, ebx
0x7971B4: sar     ecx, 4
0x7971B7: lea     edx, [ebp+var_28]
0x7971BA: push    edx
0x7971BB: sub     edi, ecx
0x7971BD: push    edi
0x7971BE: push    eax
0x7971BF: mov     ecx, esi
0x7971C1: mov     byte ptr [ebp+var_4], 3
0x7971C5: call    sub_7968D0
0x7971CA: mov     eax, [ebp+arg_C]
0x7971CD: add     [esi+8], eax
0x7971D0: mov     esi, [esi+8]
0x7971D3: lea     edx, [ebp+var_28]
0x7971D6: push    edx
0x7971D7: sub     esi, eax
0x7971D9: push    esi
0x7971DA: push    ebx
0x7971DB: mov     [ebp+var_4], 0
0x7971E2: call    sub_795D20
0x7971E7: add     esp, 0Ch
0x7971EA: jmp     short loc_797246
0x7971EC: mov     ecx, [ebp+var_14]
0x7971EF: mov     eax, [ebp+arg_8]
0x7971F2: mov     edx, [ecx+8]
0x7971F5: shl     eax, 4
0x7971F8: add     edx, eax
0x7971FA: push    edx
0x7971FB: mov     edx, [ebp+arg_4]
0x7971FE: add     eax, edx
0x797200: push    eax
0x797201: call    sub_795820
0x797206: push    0
0x797208: push    0
0x79720A: call    ThrowException??
0x79720F: shl     edi, 4
0x797212: mov     ecx, edi
0x797214: push    eax
0x797215: mov     edi, eax
0x797217: sub     edi, ecx
0x797219: push    eax
0x79721A: mov     [ebp+arg_C], ecx
0x79721D: push    edi
0x79721E: mov     ecx, esi
0x797220: call    sub_796910
0x797225: mov     [esi+8], eax
0x797228: mov     eax, [ebp+var_18]
0x79722B: push    eax
0x79722C: push    edi
0x79722D: push    ebx
0x79722E: call    sub_796940
0x797233: mov     edx, [ebp+arg_C]
0x797236: lea     ecx, [ebp+var_28]
0x797239: push    ecx
0x79723A: add     edx, ebx
0x79723C: push    edx
0x79723D: push    ebx
0x79723E: call    sub_795D20
0x797243: add     esp, 18h
0x797246: mov     eax, [ebp+var_24]
0x797249: test    eax, eax
0x79724B: jz      short loc_797256
0x79724D: push    eax
0x79724E: call    FormHeapFree
0x797253: add     esp, 4
0x797256: mov     ecx, [ebp+var_C]
0x797259: mov     large fs:0, ecx
0x797260: pop     ecx
0x797261: pop     edi
0x797262: pop     esi
0x797263: pop     ebx
0x797264: mov     esp, ebp
0x797266: pop     ebp
0x797267: retn    10h
