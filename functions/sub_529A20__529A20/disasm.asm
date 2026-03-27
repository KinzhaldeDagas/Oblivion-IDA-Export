0x529A20: push    ebp
0x529A21: mov     ebp, [esp+4+arg_0]
0x529A25: test    ebp, ebp
0x529A27: push    esi
0x529A28: mov     esi, ecx
0x529A2A: jz      short loc_529A91
0x529A2C: mov     ecx, ebp
0x529A2E: call    BSSimpleList_Clear
0x529A33: test    byte ptr [esi+3Ch], 2
0x529A37: jnz     short loc_529A91
0x529A39: push    ebx
0x529A3A: lea     ebx, [esi+48h]
0x529A3D: test    ebx, ebx
0x529A3F: jz      short loc_529A90
0x529A41: push    edi
0x529A42: mov     esi, [ebx]
0x529A44: test    esi, esi
0x529A46: jz      short loc_529A8F
0x529A48: mov     eax, ds:0B333C4h
0x529A4D: mov     ebx, [ebx+4]
0x529A50: push    0
0x529A52: push    eax
0x529A53: lea     ecx, [esi+4]
0x529A56: call    sub_56A950
0x529A5B: test    al, al
0x529A5D: jz      short loc_529A8B
0x529A5F: mov     ecx, ds:0B333C4h
0x529A65: push    esi
0x529A66: call    sub_65D8D0
0x529A6B: push    0
0x529A6D: mov     ecx, esi
0x529A6F: mov     edi, eax
0x529A71: call    sub_52B440
0x529A76: mov     ecx, edi
0x529A78: sub     ecx, eax
0x529A7A: neg     ecx
0x529A7C: sbb     ecx, ecx
0x529A7E: and     ecx, edi
0x529A80: mov     [esi+10h], ecx
0x529A83: push    esi
0x529A84: mov     ecx, ebp
0x529A86: call    BSSimpleList_PushBack
0x529A8B: test    ebx, ebx
0x529A8D: jnz     short loc_529A42
0x529A8F: pop     edi
0x529A90: pop     ebx
0x529A91: pop     esi
0x529A92: pop     ebp
0x529A93: retn    4
