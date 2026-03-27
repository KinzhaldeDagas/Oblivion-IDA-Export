0x452600: mov     edx, [esp+arg_4]
0x452604: push    esi
0x452605: push    edi
0x452606: mov     edi, [esp+8+arg_0]
0x45260A: mov     eax, [edi]
0x45260C: mov     esi, ecx
0x45260E: mov     ecx, [eax+4]
0x452611: mov     [edx], ecx
0x452613: mov     ecx, [eax+8]
0x452616: mov     edx, [esp+8+arg_8]
0x45261A: mov     [edx], ecx
0x45261C: mov     ecx, [eax]
0x45261E: test    ecx, ecx
0x452620: jz      short loc_452629
0x452622: mov     [edi], ecx
0x452624: pop     edi
0x452625: pop     esi
0x452626: retn    0Ch
0x452629: mov     edx, [esi]
0x45262B: mov     eax, [eax+4]
0x45262E: mov     edx, [edx+4]
0x452631: push    eax
0x452632: mov     ecx, esi
0x452634: call    edx
0x452636: mov     edx, [esi+4]
0x452639: add     eax, 1
0x45263C: cmp     eax, edx
0x45263E: jnb     short loc_452656
0x452640: mov     ecx, [esi+8]
0x452643: lea     ecx, [ecx+eax*4]
0x452646: mov     esi, [ecx]
0x452648: test    esi, esi
0x45264A: jnz     short loc_452661
0x45264C: add     eax, 1
0x45264F: add     ecx, 4
0x452652: cmp     eax, edx
0x452654: jb      short loc_452646
0x452656: mov     dword ptr [edi], 0
0x45265C: pop     edi
0x45265D: pop     esi
0x45265E: retn    0Ch
0x452661: mov     [edi], esi
0x452663: pop     edi
0x452664: pop     esi
0x452665: retn    0Ch
