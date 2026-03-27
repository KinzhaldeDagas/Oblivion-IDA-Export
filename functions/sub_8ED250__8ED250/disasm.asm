0x8ED250: push    esi
0x8ED251: push    edi
0x8ED252: mov     edi, [esp+8+arg_0]
0x8ED256: mov     eax, [edi]
0x8ED258: mov     esi, ecx
0x8ED25A: push    esi
0x8ED25B: push    2
0x8ED25D: push    offset aSimplephantm; "SimplePhantm"
0x8ED262: mov     ecx, edi
0x8ED264: call    dword ptr [eax]
0x8ED266: push    edi
0x8ED267: mov     ecx, esi
0x8ED269: call    sub_8DE790
0x8ED26E: mov     eax, [esi+128h]
0x8ED274: test    eax, eax
0x8ED276: js      short loc_8ED2A0
0x8ED278: mov     ecx, [esi+120h]
0x8ED27E: mov     edx, [edi]
0x8ED280: and     eax, 3FFFFFFFh
0x8ED285: shl     eax, 2
0x8ED288: push    eax
0x8ED289: mov     eax, [esi+124h]
0x8ED28F: shl     eax, 2
0x8ED292: push    eax
0x8ED293: push    ecx
0x8ED294: push    8
0x8ED296: push    offset aOverlapptr; "OverlapPtr"
0x8ED29B: mov     ecx, edi
0x8ED29D: call    dword ptr [edx+4]
0x8ED2A0: mov     edx, [edi]
0x8ED2A2: mov     ecx, edi
0x8ED2A4: call    dword ptr [edx+14h]
0x8ED2A7: pop     edi
0x8ED2A8: pop     esi
0x8ED2A9: retn    4
