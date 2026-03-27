0x6ED260: push    esi
0x6ED261: mov     esi, ecx
0x6ED263: mov     eax, [esi]
0x6ED265: mov     edx, [eax+98h]
0x6ED26B: call    edx
0x6ED26D: mov     ecx, [esp+4+arg_0]
0x6ED271: cmp     cx, ax
0x6ED274: jnb     short loc_6ED29E
0x6ED276: cmp     dword ptr [esi+14h], 0
0x6ED27A: jz      short loc_6ED29E
0x6ED27C: mov     eax, [esi]
0x6ED27E: mov     edx, [eax+0B4h]
0x6ED284: push    ecx
0x6ED285: mov     ecx, esi
0x6ED287: call    edx
0x6ED289: cmp     eax, 0FFFFh
0x6ED28E: jz      short loc_6ED29E
0x6ED290: mov     ecx, [esi+18h]
0x6ED293: call    sub_6E78D0
0x6ED298: mov     eax, [eax]
0x6ED29A: pop     esi
0x6ED29B: retn    4
0x6ED29E: xor     eax, eax
0x6ED2A0: pop     esi
0x6ED2A1: retn    4
