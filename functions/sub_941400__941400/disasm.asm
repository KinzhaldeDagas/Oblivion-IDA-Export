0x941400: push    ebx
0x941401: push    esi
0x941402: mov     esi, ecx
0x941404: mov     ecx, [esi+30h]
0x941407: test    ecx, ecx
0x941409: push    edi
0x94140A: jz      short loc_941412
0x94140C: mov     eax, [ecx]
0x94140E: push    1
0x941410: call    dword ptr [eax]
0x941412: mov     eax, [esi+2Ch]
0x941415: test    eax, eax
0x941417: mov     edi, ds:0BA9DE4h
0x94141D: mov     ebx, large fs:2Ch
0x941424: js      short loc_941443
0x941426: mov     ecx, [esi+24h]
0x941429: mov     edx, [ebx+edi*4]
0x94142C: and     eax, 3FFFFFFFh
0x941431: push    14h
0x941433: shl     eax, 3
0x941436: push    eax
0x941437: push    ecx
0x941438: mov     ecx, [edx+19Ch]
0x94143E: call    sub_8A75D0
0x941443: mov     eax, [esi+20h]
0x941446: test    eax, eax
0x941448: js      short loc_941467
0x94144A: mov     ecx, [ebx+edi*4]
0x94144D: mov     ecx, [ecx+19Ch]
0x941453: and     eax, 3FFFFFFFh
0x941458: push    14h
0x94145A: shl     eax, 3
0x94145D: push    eax
0x94145E: mov     eax, [esi+18h]
0x941461: push    eax
0x941462: call    sub_8A75D0
0x941467: mov     eax, [esi+14h]
0x94146A: test    eax, eax
0x94146C: js      short loc_94148E
0x94146E: mov     ecx, [ebx+edi*4]
0x941471: mov     ecx, [ecx+19Ch]
0x941477: and     eax, 3FFFFFFFh
0x94147C: lea     edx, [eax+eax*2]
0x94147F: mov     eax, [esi+0Ch]
0x941482: push    14h
0x941484: shl     edx, 2
0x941487: push    edx
0x941488: push    eax
0x941489: call    sub_8A75D0
0x94148E: mov     eax, [esi+8]
0x941491: test    eax, eax
0x941493: js      short loc_9414B1
0x941495: mov     edx, [esi]
0x941497: and     eax, 3FFFFFFFh
0x94149C: push    14h
0x94149E: shl     eax, 3
0x9414A1: push    eax
0x9414A2: mov     eax, [ebx+edi*4]
0x9414A5: mov     ecx, [eax+19Ch]
0x9414AB: push    edx
0x9414AC: call    sub_8A75D0
0x9414B1: pop     edi
0x9414B2: pop     esi
0x9414B3: pop     ebx
0x9414B4: retn
