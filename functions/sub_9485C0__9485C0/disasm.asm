0x9485C0: push    esi
0x9485C1: mov     esi, ecx
0x9485C3: mov     eax, [esi+4]
0x9485C6: test    eax, eax
0x9485C8: jz      short loc_94861D
0x9485CA: push    edi
0x9485CB: mov     edi, [esp+8+arg_0]
0x9485CF: call    sub_948550
0x9485D4: mov     ecx, [esi+4]
0x9485D7: add     eax, 29h ; ')'
0x9485DA: push    eax
0x9485DB: call    sub_918440
0x9485E0: mov     ecx, [esi+4]
0x9485E3: push    1
0x9485E5: call    sub_9181B0
0x9485EA: push    edi
0x9485EB: lea     ecx, [esi-8]
0x9485EE: call    sub_948580
0x9485F3: mov     eax, [esp+8+arg_4]
0x9485F7: mov     ecx, [esi+4]
0x9485FA: push    eax
0x9485FB: call    sub_948810
0x948600: mov     ecx, [esp+8+arg_8]
0x948604: push    0
0x948606: push    ecx
0x948607: mov     ecx, [esi+4]
0x94860A: call    sub_918460
0x94860F: mov     edx, [esp+8+arg_C]
0x948613: mov     ecx, [esi+4]
0x948616: push    edx
0x948617: call    sub_918440
0x94861C: pop     edi
0x94861D: mov     ecx, [esi+4]
0x948620: test    ecx, ecx
0x948622: pop     esi
0x948623: jz      short loc_948639
0x948625: lea     eax, [esp+arg_0]
0x948629: push    eax
0x94862A: call    sub_918060
0x94862F: cmp     byte ptr [eax], 0
0x948632: jz      short loc_948639
0x948634: xor     eax, eax
0x948636: retn    10h
0x948639: mov     eax, 1
0x94863E: retn    10h
