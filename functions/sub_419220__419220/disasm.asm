0x419220: push    ebx
0x419221: mov     ebx, ecx
0x419223: lea     eax, [ebx+28h]
0x419226: xor     ecx, ecx
0x419228: test    eax, eax
0x41922A: jz      short sub_419243
0x41922C: lea     esp, [esp+0]
0x419230: cmp     dword ptr [eax], 0
0x419233: jz      short loc_419238
0x419235: add     ecx, 1
0x419238: mov     eax, [eax+4]
0x41923B: test    eax, eax
0x41923D: jnz     short loc_419230
0x41923F: test    ecx, ecx
0x419241: jnz     short loc_419249
