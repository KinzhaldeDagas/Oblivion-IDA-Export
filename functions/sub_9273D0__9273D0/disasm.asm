0x9273D0: mov     eax, ecx
0x9273D2: mov     ecx, [eax+8]
0x9273D5: push    esi
0x9273D6: xor     esi, esi
0x9273D8: test    ecx, ecx
0x9273DA: mov     ecx, [esp+4+arg_0]
0x9273DE: jle     short loc_927418
0x9273E0: push    ebx
0x9273E1: push    edi
0x9273E2: mov     edx, [eax+4]
0x9273E5: mov     edi, [edx+esi*8]
0x9273E8: cmp     edi, ecx
0x9273EA: lea     edx, [edx+esi*8]
0x9273ED: jz      short loc_9273F7
0x9273EF: cmp     [edx+4], ecx
0x9273F2: jz      short loc_9273F7
0x9273F4: inc     esi
0x9273F5: jmp     short loc_927411
0x9273F7: mov     edx, [eax+8]
0x9273FA: dec     edx
0x9273FB: mov     [eax+8], edx
0x9273FE: mov     edi, edx
0x927400: mov     edx, [eax+4]
0x927403: mov     ebx, [edx+edi*8]
0x927406: mov     [edx+esi*8], ebx
0x927409: mov     edi, [edx+edi*8+4]
0x92740D: mov     [edx+esi*8+4], edi
0x927411: cmp     esi, [eax+8]
0x927414: jl      short loc_9273E2
0x927416: pop     edi
0x927417: pop     ebx
0x927418: lea     edx, [eax-18h]
0x92741B: neg     edx
0x92741D: sbb     edx, edx
0x92741F: and     edx, eax
0x927421: pop     esi
0x927422: mov     [esp+arg_0], edx
0x927426: jmp     sub_8A6300
