0x8DE8B0: push    ebx
0x8DE8B1: push    esi
0x8DE8B2: mov     esi, ecx
0x8DE8B4: push    edi
0x8DE8B5: mov     edi, [esi+60h]
0x8DE8B8: dec     edi
0x8DE8B9: mov     dword ptr [esi], offset off_A97B60
0x8DE8BF: js      short loc_8DE8D4
0x8DE8C1: mov     eax, [esi+5Ch]
0x8DE8C4: mov     ecx, [eax+edi*4]
0x8DE8C7: test    ecx, ecx
0x8DE8C9: jz      short loc_8DE8D1
0x8DE8CB: mov     edx, [ecx]
0x8DE8CD: push    esi
0x8DE8CE: call    dword ptr [edx+10h]
0x8DE8D1: dec     edi
0x8DE8D2: jns     short loc_8DE8C1
0x8DE8D4: mov     eax, [esi+64h]
0x8DE8D7: test    eax, eax
0x8DE8D9: mov     edi, ds:0BA9DE4h
0x8DE8DF: mov     ebx, large fs:2Ch
0x8DE8E6: js      short loc_8DE90F
0x8DE8E8: mov     ecx, [ebx+edi*4]
0x8DE8EB: mov     ecx, [ecx+19Ch]
0x8DE8F1: test    ecx, ecx
0x8DE8F3: jnz     short loc_8DE8FB
0x8DE8F5: mov     ecx, ds:0BA7D9Ch
0x8DE8FB: mov     edx, [esi+5Ch]
0x8DE8FE: and     eax, 3FFFFFFFh
0x8DE903: push    14h
0x8DE905: shl     eax, 2
0x8DE908: push    eax
0x8DE909: push    edx
0x8DE90A: call    sub_8A75D0
0x8DE90F: mov     eax, [esi+58h]
0x8DE912: test    eax, eax
0x8DE914: js      short loc_8DE93D
0x8DE916: mov     ecx, [ebx+edi*4]
0x8DE919: mov     ecx, [ecx+19Ch]
0x8DE91F: test    ecx, ecx
0x8DE921: jnz     short loc_8DE929
0x8DE923: mov     ecx, ds:0BA7D9Ch
0x8DE929: mov     edx, [esi+50h]
0x8DE92C: and     eax, 3FFFFFFFh
0x8DE931: push    14h
0x8DE933: shl     eax, 2
0x8DE936: push    eax
0x8DE937: push    edx
0x8DE938: call    sub_8A75D0
0x8DE93D: pop     edi
0x8DE93E: mov     ecx, esi
0x8DE940: pop     esi
0x8DE941: pop     ebx
0x8DE942: jmp     sub_8A66A0
