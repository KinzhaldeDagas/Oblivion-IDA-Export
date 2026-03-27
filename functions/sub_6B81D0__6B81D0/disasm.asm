0x6B81D0: push    0FFFFFFFFh
0x6B81D2: push    offset SEH_6B8F50
0x6B81D7: mov     eax, large fs:0
0x6B81DD: push    eax
0x6B81DE: push    ecx
0x6B81DF: push    ebx
0x6B81E0: push    esi
0x6B81E1: push    edi
0x6B81E2: mov     eax, ds:0B30AACh
0x6B81E7: xor     eax, esp
0x6B81E9: push    eax
0x6B81EA: lea     eax, [esp+20h+var_C]
0x6B81EE: mov     large fs:0, eax
0x6B81F4: mov     edi, ecx
0x6B81F6: xor     ebx, ebx
0x6B81F8: cmp     edi, ebx
0x6B81FA: jz      short loc_6B8260
0x6B81FC: lea     esp, [esp+0]
0x6B8200: mov     ecx, edi
0x6B8202: call    BSSimpleList_IsEmpty
0x6B8207: test    al, al
0x6B8209: jnz     short loc_6B8260
0x6B820B: mov     esi, [edi]
0x6B820D: cmp     esi, ebx
0x6B820F: jz      short loc_6B8240
0x6B8211: mov     eax, [esi+10h]
0x6B8214: push    eax
0x6B8215: call    FormHeapFree
0x6B821A: mov     [esi+10h], ebx
0x6B821D: mov     [esi+16h], bx
0x6B8221: mov     [esi+14h], bx
0x6B8225: mov     eax, [esi]
0x6B8227: push    eax
0x6B8228: call    FormHeapFree
0x6B822D: push    esi
0x6B822E: mov     [esi], ebx
0x6B8230: mov     [esi+6], bx
0x6B8234: mov     [esi+4], bx
0x6B8238: call    FormHeapFree
0x6B823D: add     esp, 0Ch
0x6B8240: mov     eax, [edi+4]
0x6B8243: cmp     eax, ebx
0x6B8245: jz      short loc_6B825C
0x6B8247: mov     ecx, [eax+4]
0x6B824A: mov     [edi+4], ecx
0x6B824D: mov     edx, [eax]
0x6B824F: push    eax
0x6B8250: mov     [edi], edx
0x6B8252: call    FormHeapFree
0x6B8257: add     esp, 4
0x6B825A: jmp     short loc_6B8200
0x6B825C: mov     [edi], ebx
0x6B825E: jmp     short loc_6B8200
0x6B8260: mov     ecx, [esp+20h+var_C]
0x6B8264: mov     large fs:0, ecx
0x6B826B: pop     ecx
0x6B826C: pop     edi
0x6B826D: pop     esi
0x6B826E: pop     ebx
0x6B826F: add     esp, 10h
0x6B8272: retn
