0x467370: push    esi
0x467371: lea     esi, [ecx+18h]
0x467374: test    esi, esi
0x467376: jz      short loc_4673B2
0x467378: mov     ecx, esi
0x46737A: call    BSSimpleList_IsEmpty
0x46737F: test    al, al
0x467381: jnz     short loc_4673B2
0x467383: mov     eax, [esi]
0x467385: push    eax
0x467386: call    FormHeapFree
0x46738B: mov     eax, [esi+4]
0x46738E: add     esp, 4
0x467391: test    eax, eax
0x467393: jz      short loc_4673AA
0x467395: mov     ecx, [eax+4]
0x467398: mov     [esi+4], ecx
0x46739B: mov     edx, [eax]
0x46739D: push    eax
0x46739E: mov     [esi], edx
0x4673A0: call    FormHeapFree
0x4673A5: add     esp, 4
0x4673A8: jmp     short loc_467378
0x4673AA: mov     dword ptr [esi], 0
0x4673B0: jmp     short loc_467378
0x4673B2: pop     esi
0x4673B3: retn
