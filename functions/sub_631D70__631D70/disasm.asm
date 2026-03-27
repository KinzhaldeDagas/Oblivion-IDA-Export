0x631D70: push    ebx
0x631D71: push    esi
0x631D72: push    edi
0x631D73: mov     edi, [esp+0Ch+arg_0]
0x631D77: xor     bl, bl
0x631D79: test    edi, edi
0x631D7B: mov     esi, ecx
0x631D7D: jz      short loc_631DAD
0x631D7F: mov     ecx, edi
0x631D81: call    sub_5E6B40
0x631D86: test    al, al
0x631D88: jz      short loc_631DAD
0x631D8A: mov     eax, [esi]
0x631D8C: mov     edx, [eax+184h]
0x631D92: mov     ecx, esi
0x631D94: call    edx
0x631D96: test    eax, eax
0x631D98: jz      short loc_631DB8
0x631D9A: cmp     byte ptr [eax+20h], 12h
0x631D9E: jnz     short loc_631DB8
0x631DA0: cmp     [eax+48h], edi
0x631DA3: jnz     short loc_631DB8
0x631DA5: pop     edi
0x631DA6: pop     esi
0x631DA7: mov     al, 1
0x631DA9: pop     ebx
0x631DAA: retn    4
0x631DAD: cmp     dword ptr [esi+220h], 0
0x631DB4: mov     al, 1
0x631DB6: jnz     short loc_631DBA
0x631DB8: mov     al, bl
0x631DBA: pop     edi
0x631DBB: pop     esi
0x631DBC: pop     ebx
0x631DBD: retn    4
