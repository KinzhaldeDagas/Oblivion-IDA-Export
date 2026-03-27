0x58DA00: push    ebx
0x58DA01: push    esi
0x58DA02: mov     esi, ecx
0x58DA04: xor     ebx, ebx
0x58DA06: push    edi
0x58DA07: push    ebx; a3
0x58DA08: lea     edi, [esi+8]
0x58DA0B: push    offset EmptyString; a2
0x58DA10: mov     ecx, edi; this
0x58DA12: mov     [esi+4], bl
0x58DA15: mov     [esi+5], bl
0x58DA18: mov     [esi+10h], ebx
0x58DA1B: mov     dword ptr [esi+2Ch], 2
0x58DA22: mov     [esi+24h], ebx
0x58DA25: call    BSStringT_Set
0x58DA2A: mov     eax, [esp+0Ch+arg_0]
0x58DA2E: cmp     eax, ebx
0x58DA30: mov     [esi+28h], ebx
0x58DA33: jz      short loc_58DA42
0x58DA35: mov     ecx, [esp+0Ch+arg_8]
0x58DA39: push    ecx
0x58DA3A: push    eax
0x58DA3B: mov     ecx, esi
0x58DA3D: call    sub_58D1C0
0x58DA42: mov     eax, [esp+0Ch+a2]
0x58DA46: cmp     eax, ebx
0x58DA48: jz      short loc_58DA53
0x58DA4A: push    ebx; a3
0x58DA4B: push    eax; a2
0x58DA4C: mov     ecx, edi; this
0x58DA4E: call    BSStringT_Set
0x58DA53: cmp     ds:0B3B0CCh, ebx
0x58DA59: jnz     short loc_58DA62
0x58DA5B: mov     ecx, esi
0x58DA5D: call    sub_58A1C0
0x58DA62: pop     edi
0x58DA63: pop     esi
0x58DA64: pop     ebx
0x58DA65: retn    0Ch
