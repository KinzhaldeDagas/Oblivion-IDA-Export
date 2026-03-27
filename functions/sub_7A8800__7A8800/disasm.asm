0x7A8800: push    esi
0x7A8801: push    edi
0x7A8802: mov     edi, [esp+8+arg_0]
0x7A8806: test    edi, edi
0x7A8808: mov     esi, ecx
0x7A880A: jz      loc_7A88C4
0x7A8810: cmp     dword ptr [esi], 0
0x7A8813: jz      short loc_7A881B
0x7A8815: cmp     dword ptr [esi+4], 0
0x7A8819: jnz     short loc_7A8820
0x7A881B: call    __invalid_parameter_noinfo
0x7A8820: mov     eax, [esi]
0x7A8822: push    ebx
0x7A8823: mov     ebx, [eax+8]
0x7A8826: add     eax, 4
0x7A8829: test    edi, edi
0x7A882B: push    ebp
0x7A882C: mov     ebp, [esi+8]
0x7A882F: jge     short loc_7A8852
0x7A8831: cmp     ebx, [eax+8]
0x7A8834: jbe     short loc_7A883B
0x7A8836: call    __invalid_parameter_noinfo
0x7A883B: mov     eax, [esi+4]
0x7A883E: sub     eax, ebx
0x7A8840: sar     eax, 2
0x7A8843: shl     eax, 5
0x7A8846: mov     ecx, edi
0x7A8848: add     eax, ebp
0x7A884A: neg     ecx
0x7A884C: cmp     eax, ecx
0x7A884E: jnb     short loc_7A8876
0x7A8850: jmp     short loc_7A8871
0x7A8852: cmp     ebx, [eax+8]
0x7A8855: jbe     short loc_7A885C
0x7A8857: call    __invalid_parameter_noinfo
0x7A885C: mov     edx, [esi+4]
0x7A885F: mov     eax, [esi]
0x7A8861: sub     edx, ebx
0x7A8863: sar     edx, 2
0x7A8866: shl     edx, 5
0x7A8869: add     edx, ebp
0x7A886B: add     edx, edi
0x7A886D: cmp     edx, [eax]
0x7A886F: jbe     short loc_7A8876
0x7A8871: call    __invalid_parameter_noinfo
0x7A8876: test    edi, edi
0x7A8878: pop     ebp
0x7A8879: pop     ebx
0x7A887A: jge     short loc_7A88AC
0x7A887C: mov     eax, [esi+8]
0x7A887F: mov     ecx, edi
0x7A8881: neg     ecx
0x7A8883: cmp     eax, ecx
0x7A8885: jnb     short loc_7A88AC
0x7A8887: or      edx, 0FFFFFFFFh
0x7A888A: add     eax, edi
0x7A888C: sub     edx, eax
0x7A888E: shr     edx, 5
0x7A8891: add     edx, edx
0x7A8893: add     edx, edx
0x7A8895: mov     ecx, 0FFFFFFFCh
0x7A889A: sub     ecx, edx
0x7A889C: add     [esi+4], ecx
0x7A889F: and     eax, 1Fh
0x7A88A2: mov     [esi+8], eax
0x7A88A5: pop     edi
0x7A88A6: mov     eax, esi
0x7A88A8: pop     esi
0x7A88A9: retn    4
0x7A88AC: mov     edx, [esi+8]
0x7A88AF: lea     eax, [edx+edi]
0x7A88B2: mov     ecx, eax
0x7A88B4: shr     ecx, 5
0x7A88B7: add     ecx, ecx
0x7A88B9: add     ecx, ecx
0x7A88BB: add     [esi+4], ecx
0x7A88BE: and     eax, 1Fh
0x7A88C1: mov     [esi+8], eax
0x7A88C4: pop     edi
0x7A88C5: mov     eax, esi
0x7A88C7: pop     esi
0x7A88C8: retn    4
