0x71B460: mov     ecx, [esp+arg_0]
0x71B464: test    ecx, ecx
0x71B466: jnz     short loc_71B46B
0x71B468: xor     al, al
0x71B46A: retn
0x71B46B: lea     eax, [ecx-1]
0x71B46E: and     eax, ecx
0x71B470: neg     eax
0x71B472: sbb     eax, eax
0x71B474: add     eax, 1
0x71B477: retn
