0x5E5640: cmp     dword ptr [ecx+58h], 0
0x5E5644: jz      short loc_5E5660
0x5E5646: mov     ecx, [ecx+58h]
0x5E5649: mov     eax, [ecx]
0x5E564B: mov     edx, [eax+2D0h]
0x5E5651: call    edx
0x5E5653: cmp     eax, 2
0x5E5656: jl      short loc_5E5660
0x5E5658: cmp     eax, 5
0x5E565B: jg      short loc_5E5660
0x5E565D: mov     al, 1
0x5E565F: retn
0x5E5660: xor     al, al
0x5E5662: retn
