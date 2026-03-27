0x6E03E0: push    esi
0x6E03E1: push    edi
0x6E03E2: mov     edi, [esp+8+arg_0]
0x6E03E6: push    edi
0x6E03E7: mov     esi, ecx
0x6E03E9: call    sub_715F10
0x6E03EE: test    al, al
0x6E03F0: jnz     short loc_6E03F7
0x6E03F2: pop     edi
0x6E03F3: pop     esi
0x6E03F4: retn    4
0x6E03F7: cmp     dword ptr [esi+40h], 0
0x6E03FB: jz      short loc_6E0408
0x6E03FD: mov     ecx, [esi+40h]
0x6E0400: mov     eax, [ecx]
0x6E0402: mov     edx, [eax+24h]
0x6E0405: push    edi
0x6E0406: call    edx
0x6E0408: pop     edi
0x6E0409: mov     al, 1
0x6E040B: pop     esi
0x6E040C: retn    4
