0x6F9540: push    esi
0x6F9541: mov     esi, [esp+4+arg_0]
0x6F9545: push    edi
0x6F9546: xor     edi, edi
0x6F9548: test    esi, esi
0x6F954A: jz      short loc_6F9582
0x6F954C: mov     eax, [esi]
0x6F954E: mov     edx, [eax+4]
0x6F9551: mov     ecx, esi
0x6F9553: call    edx
0x6F9555: test    eax, eax
0x6F9557: jz      short loc_6F956E
0x6F9559: lea     esp, [esp+0]
0x6F9560: cmp     eax, offset dword_B3F95C
0x6F9565: jz      short loc_6F957E
0x6F9567: mov     eax, [eax+4]
0x6F956A: test    eax, eax
0x6F956C: jnz     short loc_6F9560
0x6F956E: xor     al, al
0x6F9570: neg     al
0x6F9572: sbb     eax, eax
0x6F9574: and     eax, esi
0x6F9576: jz      short loc_6F9582
0x6F9578: mov     eax, [eax+38h]
0x6F957B: pop     edi
0x6F957C: pop     esi
0x6F957D: retn
0x6F957E: mov     al, 1
0x6F9580: jmp     short loc_6F9570
0x6F9582: mov     eax, edi
0x6F9584: pop     edi
0x6F9585: pop     esi
0x6F9586: retn
