0x45A500: mov     eax, ds:0B33398h
0x45A505: push    esi
0x45A506: push    edi
0x45A507: mov     edi, [eax+10h]
0x45A50A: mov     esi, ecx
0x45A50C: call    dword ptr ds:0A2808Ch
0x45A512: cmp     eax, edi
0x45A514: jnz     short loc_45A51E
0x45A516: mov     al, [esi+18h]
0x45A519: pop     edi
0x45A51A: and     al, 1
0x45A51C: pop     esi
0x45A51D: retn
0x45A51E: mov     eax, [esi+18h]
0x45A521: shr     eax, 12h
0x45A524: pop     edi
0x45A525: and     al, 1
0x45A527: pop     esi
0x45A528: retn
