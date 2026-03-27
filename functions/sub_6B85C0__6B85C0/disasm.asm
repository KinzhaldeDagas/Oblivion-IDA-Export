0x6B85C0: cmp     [esp+arg_0], 0
0x6B85C5: lea     eax, [ecx+4]
0x6B85C8: mov     [ecx], eax
0x6B85CA: jz      short loc_6B85D5
0x6B85CC: test    eax, eax
0x6B85CE: jz      short loc_6B85E8
0x6B85D0: mov     eax, [eax+4]
0x6B85D3: mov     [ecx], eax
0x6B85D5: mov     ecx, [ecx]
0x6B85D7: test    ecx, ecx
0x6B85D9: jz      short loc_6B85E8
0x6B85DB: cmp     dword ptr [ecx], 0
0x6B85DE: jz      short loc_6B85E8
0x6B85E0: mov     eax, 1
0x6B85E5: retn    4
0x6B85E8: xor     eax, eax
0x6B85EA: retn    4
