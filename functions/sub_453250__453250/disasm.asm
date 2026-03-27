0x453250: push    ebx
0x453251: push    esi
0x453252: mov     esi, ecx
0x453254: mov     ecx, [esi]
0x453256: xor     ebx, ebx
0x453258: cmp     ecx, ebx
0x45325A: push    edi
0x45325B: jz      short loc_453265
0x45325D: mov     eax, [ecx]
0x45325F: mov     edx, [eax]
0x453261: push    1
0x453263: call    edx
0x453265: mov     ecx, [esi+8]
0x453268: cmp     ecx, ebx
0x45326A: jz      short loc_453274
0x45326C: mov     eax, [ecx]
0x45326E: mov     edx, [eax]
0x453270: push    1
0x453272: call    edx
0x453274: mov     ecx, [esi+0Ch]
0x453277: cmp     ecx, ebx
0x453279: jz      short loc_453283
0x45327B: mov     eax, [ecx]
0x45327D: mov     edx, [eax]
0x45327F: push    1
0x453281: call    edx
0x453283: mov     ecx, [esi+10h]
0x453286: cmp     ecx, ebx
0x453288: jz      short loc_453292
0x45328A: mov     eax, [ecx]
0x45328C: mov     edx, [eax]
0x45328E: push    1
0x453290: call    edx
0x453292: mov     eax, [esi+4Ch]
0x453295: cmp     eax, ebx
0x453297: jz      short loc_4532A2
0x453299: push    eax
0x45329A: call    FormHeapFree
0x45329F: add     esp, 4
0x4532A2: mov     ecx, [esi+54h]
0x4532A5: cmp     ecx, ebx
0x4532A7: jz      short loc_4532B1
0x4532A9: mov     eax, [ecx]
0x4532AB: mov     edx, [eax]
0x4532AD: push    1
0x4532AF: call    edx
0x4532B1: mov     ecx, [esi+58h]
0x4532B4: cmp     ecx, ebx
0x4532B6: jz      short loc_4532C0
0x4532B8: mov     eax, [ecx]
0x4532BA: mov     edx, [eax]
0x4532BC: push    1
0x4532BE: call    edx
0x4532C0: mov     ecx, [esi+5Ch]
0x4532C3: cmp     ecx, ebx
0x4532C5: jz      short loc_4532CF
0x4532C7: mov     eax, [ecx]
0x4532C9: mov     edx, [eax]
0x4532CB: push    1
0x4532CD: call    edx
0x4532CF: mov     ecx, [esi+60h]
0x4532D2: cmp     ecx, ebx
0x4532D4: jz      short loc_4532DE
0x4532D6: mov     eax, [ecx]
0x4532D8: mov     edx, [eax]
0x4532DA: push    1
0x4532DC: call    edx
0x4532DE: mov     eax, [esi+74h]
0x4532E1: cmp     eax, ebx
0x4532E3: jz      short loc_453313
0x4532E5: xor     ecx, ecx
0x4532E7: cmp     [eax+0Ch], ebx
0x4532EA: jbe     short loc_4532FE
0x4532EC: lea     esp, [esp+0]
0x4532F0: mov     edx, [eax+4]
0x4532F3: mov     [edx+ecx*4], ebx
0x4532F6: add     ecx, 1
0x4532F9: cmp     ecx, [eax+0Ch]
0x4532FC: jb      short loc_4532F0
0x4532FE: mov     [eax+0Ch], ebx
0x453301: mov     [eax+10h], ebx
0x453304: mov     ecx, [esi+74h]
0x453307: cmp     ecx, ebx
0x453309: jz      short loc_453313
0x45330B: mov     eax, [ecx]
0x45330D: mov     edx, [eax]
0x45330F: push    1
0x453311: call    edx
0x453313: mov     eax, [esi+78h]
0x453316: cmp     eax, ebx
0x453318: jz      short loc_453344
0x45331A: xor     ecx, ecx
0x45331C: cmp     [eax+0Ch], ebx
0x45331F: jbe     short loc_45332F
0x453321: mov     edx, [eax+4]
0x453324: mov     [edx+ecx*4], ebx
0x453327: add     ecx, 1
0x45332A: cmp     ecx, [eax+0Ch]
0x45332D: jb      short loc_453321
0x45332F: mov     [eax+0Ch], ebx
0x453332: mov     [eax+10h], ebx
0x453335: mov     ecx, [esi+78h]
0x453338: cmp     ecx, ebx
0x45333A: jz      short loc_453344
0x45333C: mov     eax, [ecx]
0x45333E: mov     edx, [eax]
0x453340: push    1
0x453342: call    edx
0x453344: mov     eax, [esi+1C0h]
0x45334A: cmp     eax, ebx
0x45334C: jz      short loc_453359
0x45334E: push    eax; void *
0x45334F: mov     ecx, offset FormHeap
0x453354: call    MemoryHeap_Free_checked
0x453359: cmp     [esi+6Ch], ebx
0x45335C: jz      short loc_45338F
0x45335E: mov     edi, edi
0x453360: mov     eax, [esi+6Ch]
0x453363: cmp     [eax+4], ebx
0x453366: jnz     short loc_45336C
0x453368: cmp     [eax], ebx
0x45336A: jz      short loc_453386
0x45336C: mov     ecx, eax
0x45336E: mov     edi, [ecx]
0x453370: push    edi
0x453371: call    BSSimpleList_Remove
0x453376: cmp     edi, ebx
0x453378: jz      short loc_453360
0x45337A: mov     eax, [edi]
0x45337C: mov     edx, [eax]
0x45337E: push    1
0x453380: mov     ecx, edi
0x453382: call    edx
0x453384: jmp     short loc_453360
0x453386: push    eax
0x453387: call    FormHeapFree
0x45338C: add     esp, 4
0x45338F: cmp     [esi+24h], ebx
0x453392: jz      short loc_4533AA
0x453394: mov     eax, [esi+24h]
0x453397: mov     edi, [eax+4]
0x45339A: push    eax
0x45339B: call    FormHeapFree
0x4533A0: add     esp, 4
0x4533A3: cmp     edi, ebx
0x4533A5: mov     [esi+24h], edi
0x4533A8: jnz     short loc_453394
0x4533AA: mov     [esi+20h], ebx
0x4533AD: cmp     [esi+2Ch], ebx
0x4533B0: jz      short loc_4533C8
0x4533B2: mov     eax, [esi+2Ch]
0x4533B5: mov     edi, [eax+4]
0x4533B8: push    eax
0x4533B9: call    FormHeapFree
0x4533BE: add     esp, 4
0x4533C1: cmp     edi, ebx
0x4533C3: mov     [esi+2Ch], edi
0x4533C6: jnz     short loc_4533B2
0x4533C8: pop     edi
0x4533C9: mov     [esi+28h], ebx
0x4533CC: pop     esi
0x4533CD: pop     ebx
0x4533CE: retn
