0x8DC800: push    ebx
0x8DC801: mov     ebx, [esp+4+arg_4]
0x8DC805: push    esi
0x8DC806: mov     esi, [esp+8+arg_0]
0x8DC80A: push    edi
0x8DC80B: mov     dword ptr [ebx+0Ch], 0
0x8DC812: mov     edi, [esi+14Ch]
0x8DC818: dec     edi
0x8DC819: js      short loc_8DC835
0x8DC81B: jmp     short loc_8DC820
0x8DC81D: align 10h
0x8DC820: mov     eax, [esi+148h]
0x8DC826: mov     ecx, [eax+edi*4]
0x8DC829: test    ecx, ecx
0x8DC82B: jz      short loc_8DC832
0x8DC82D: mov     edx, [ecx]
0x8DC82F: push    ebx
0x8DC830: call    dword ptr [edx]
0x8DC832: dec     edi
0x8DC833: jns     short loc_8DC820
0x8DC835: mov     edx, [esi+14Ch]
0x8DC83B: dec     edx
0x8DC83C: js      short loc_8DC87E
0x8DC83E: mov     edi, edi
0x8DC840: mov     eax, [esi+148h]
0x8DC846: cmp     dword ptr [eax+edx*4], 0
0x8DC84A: jnz     short loc_8DC87B
0x8DC84C: mov     ebx, [esi+14Ch]
0x8DC852: dec     ebx
0x8DC853: mov     ecx, ebx
0x8DC855: cmp     edx, ecx
0x8DC857: mov     [esi+14Ch], ebx
0x8DC85D: mov     eax, edx
0x8DC85F: jge     short loc_8DC87B
0x8DC861: mov     ecx, [esi+148h]
0x8DC867: mov     edi, [ecx+eax*4+4]
0x8DC86B: lea     ecx, [ecx+eax*4]
0x8DC86E: mov     [ecx], edi
0x8DC870: mov     ecx, [esi+14Ch]
0x8DC876: inc     eax
0x8DC877: cmp     eax, ecx
0x8DC879: jl      short loc_8DC861
0x8DC87B: dec     edx
0x8DC87C: jns     short loc_8DC840
0x8DC87E: pop     edi
0x8DC87F: pop     esi
0x8DC880: pop     ebx
0x8DC881: retn
