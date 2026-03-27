0x413FF1: mov     edx, [edi+1Ch]
0x413FF4: mov     eax, [edx+58h]
0x413FF7: shr     eax, 8
0x413FFA: xor     ebp, ebp
0x413FFC: test    al, 1
0x413FFE: jz      short loc_414004
0x414000: xor     eax, eax
0x414002: jmp     short loc_414007
0x414004: mov     eax, [edi+4]
0x414007: mov     ecx, [esi+1Ch]
0x41400A: fld     ds:flt_A30634
0x414010: mov     edx, [ecx+58h]
0x414013: shr     edx, 8
0x414016: test    dl, 1
0x414019: jnz     short EffectItem_CopyFrom___CopyArea
0x41401B: cmp     eax, ebp
0x41401D: jl      short EffectItem_CopyFrom___CopyArea
0x41401F: fst     dword ptr [esi+20h]
0x414022: mov     [esi+4], eax
