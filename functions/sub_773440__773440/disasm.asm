0x773440: push    ebx
0x773441: mov     ebx, [esp+4+arg_0]
0x773445: push    esi
0x773446: xor     esi, esi
0x773448: cmp     ebx, ds:0B28CB0h
0x77344E: push    edi
0x77344F: mov     edi, ecx
0x773451: jnb     short loc_77345B
0x773453: push    ebx
0x773454: call    sub_7732B0
0x773459: mov     esi, eax
0x77345B: push    ebx
0x77345C: mov     ecx, edi
0x77345E: call    sub_773330
0x773463: test    esi, esi
0x773465: jz      short loc_773469
0x773467: mov     eax, esi
0x773469: pop     edi
0x77346A: pop     esi
0x77346B: pop     ebx
0x77346C: retn    4
