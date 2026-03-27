0x5E3220: push    ebx
0x5E3221: xor     bl, bl
0x5E3223: cmp     dword ptr [ecx+58h], 0
0x5E3227: jz      short loc_5E325E
0x5E3229: mov     ecx, [ecx+58h]
0x5E322C: mov     eax, [ecx]
0x5E322E: mov     edx, [eax+184h]
0x5E3234: push    esi
0x5E3235: call    edx
0x5E3237: mov     esi, eax
0x5E3239: test    esi, esi
0x5E323B: jz      short loc_5E3259
0x5E323D: cmp     byte ptr [esi+20h], 1
0x5E3241: jnz     short loc_5E324E
0x5E3243: mov     ecx, esi
0x5E3245: call    sub_5660A0
0x5E324A: test    al, al
0x5E324C: jz      short loc_5E3254
0x5E324E: cmp     byte ptr [esi+20h], 1Fh
0x5E3252: jnz     short loc_5E3259
0x5E3254: pop     esi
0x5E3255: mov     al, 1
0x5E3257: pop     ebx
0x5E3258: retn
0x5E3259: pop     esi
0x5E325A: mov     al, bl
0x5E325C: pop     ebx
0x5E325D: retn
0x5E325E: mov     al, bl
0x5E3260: pop     ebx
0x5E3261: retn
