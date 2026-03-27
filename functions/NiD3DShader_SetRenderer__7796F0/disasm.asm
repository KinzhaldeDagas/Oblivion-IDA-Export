0x7796F0: mov     eax, [esp+a2]
0x7796F4: test    eax, eax
0x7796F6: push    esi
0x7796F7: mov     esi, ecx
0x7796F9: jnz     short loc_779701
0x7796FB: xor     al, al
0x7796FD: pop     esi
0x7796FE: retn    4
0x779701: push    eax; a2
0x779702: call    NiD3DShaderInterface__SetRenderer
0x779707: mov     al, 1
0x779709: mov     [esi+1Ch], al
0x77970C: pop     esi
0x77970D: retn    4
