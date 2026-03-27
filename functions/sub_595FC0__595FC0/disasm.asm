0x595FC0: mov     eax, [esp+arg_0]
0x595FC4: cmp     eax, 1Fh
0x595FC7: push    esi
0x595FC8: mov     esi, ecx
0x595FCA: jnz     short loc_595FD5
0x595FCC: call    sub_595F30
0x595FD1: pop     esi
0x595FD2: retn    8
0x595FD5: cmp     eax, 20h ; ' '
0x595FD8: jnz     short loc_59600D
0x595FDA: mov     ecx, [esi+30h]
0x595FDD: mov     eax, ds:0B333C4h
0x595FE2: push    edi
0x595FE3: mov     edi, [eax]
0x595FE5: add     ecx, 44h ; 'D'
0x595FE8: push    0
0x595FEA: call    ExtraDataList_GetExtraCount
0x595FEF: mov     edx, [esi+30h]
0x595FF2: movsx   ecx, ax
0x595FF5: mov     eax, [edi+2CCh]
0x595FFB: push    ecx
0x595FFC: mov     ecx, ds:0B333C4h
0x596002: push    edx
0x596003: call    eax
0x596005: mov     ecx, esi
0x596007: call    sub_595F30
0x59600C: pop     edi
0x59600D: pop     esi
0x59600E: retn    8
