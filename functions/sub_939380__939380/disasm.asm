0x939380: push    esi
0x939381: movzx   esi, byte ptr [ecx+32h]
0x939385: xor     edx, edx
0x939387: test    esi, esi
0x939389: jle     short loc_9393AC
0x93938B: lea     eax, [ecx+34h]
0x93938E: mov     cx, [esp+4+arg_0]
0x939393: cmp     [eax+2], cx
0x939397: jz      short loc_9393A5
0x939399: inc     edx
0x93939A: add     eax, 8
0x93939D: cmp     edx, esi
0x93939F: jl      short loc_939393
0x9393A1: pop     esi
0x9393A2: retn    4
0x9393A5: mov     byte ptr [eax], 0
0x9393A8: mov     byte ptr [eax+1], 0
0x9393AC: pop     esi
0x9393AD: retn    4
