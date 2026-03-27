0x79E380: sub     esp, 8
0x79E383: push    ebx
0x79E384: push    esi
0x79E385: mov     esi, ecx
0x79E387: mov     ebx, [esi+8]
0x79E38A: cmp     [esi+4], ebx
0x79E38D: push    edi
0x79E38E: jbe     short loc_79E395
0x79E390: call    __invalid_parameter_noinfo
0x79E395: mov     edi, [esi+4]
0x79E398: cmp     edi, [esi+8]
0x79E39B: jbe     short loc_79E3A2
0x79E39D: call    __invalid_parameter_noinfo
0x79E3A2: push    ebx
0x79E3A3: push    esi
0x79E3A4: push    edi
0x79E3A5: push    esi
0x79E3A6: lea     eax, [esp+24h+var_8]
0x79E3AA: push    eax
0x79E3AB: mov     ecx, esi
0x79E3AD: call    sub_79E020
0x79E3B2: pop     edi
0x79E3B3: pop     esi
0x79E3B4: pop     ebx
0x79E3B5: add     esp, 8
0x79E3B8: retn
