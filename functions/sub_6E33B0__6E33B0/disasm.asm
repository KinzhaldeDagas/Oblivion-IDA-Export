0x6E33B0: push    esi
0x6E33B1: push    edi
0x6E33B2: mov     edi, [esp+8+arg_0]
0x6E33B6: xor     edx, edx
0x6E33B8: cmp     edi, edx
0x6E33BA: jz      short loc_6E33E3
0x6E33BC: mov     esi, [esp+8+arg_4]
0x6E33C0: cmp     esi, edx
0x6E33C2: jz      short loc_6E33E3
0x6E33C4: mov     eax, [esp+8+arg_8]
0x6E33C8: cmp     eax, edx
0x6E33CA: jz      short loc_6E33E3
0x6E33CC: mov     dl, ds:byte_B3D3E8[eax]
0x6E33D2: mov     [ecx+0Ch], edi
0x6E33D5: pop     edi
0x6E33D6: mov     [ecx+8], esi
0x6E33D9: mov     [ecx+10h], eax
0x6E33DC: mov     [ecx+14h], dl
0x6E33DF: pop     esi
0x6E33E0: retn    0Ch
0x6E33E3: pop     edi
0x6E33E4: mov     [ecx+8], edx
0x6E33E7: mov     [ecx+0Ch], edx
0x6E33EA: mov     [ecx+10h], edx
0x6E33ED: mov     [ecx+14h], dl
0x6E33F0: pop     esi
0x6E33F1: retn    0Ch
