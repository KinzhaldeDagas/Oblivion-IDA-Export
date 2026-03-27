0x712560: movzx   edx, word ptr [ecx+0D2h]
0x712567: xor     eax, eax
0x712569: test    edx, edx
0x71256B: push    esi
0x71256C: jbe     short loc_712586
0x71256E: mov     ecx, [ecx+0CCh]
0x712574: mov     esi, [esp+4+arg_0]
0x712578: cmp     esi, [ecx]
0x71257A: jz      short loc_712588
0x71257C: add     eax, 1
0x71257F: add     ecx, 4
0x712582: cmp     eax, edx
0x712584: jb      short loc_712578
0x712586: xor     eax, eax
0x712588: pop     esi
0x712589: retn    4
