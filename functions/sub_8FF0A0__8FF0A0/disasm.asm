0x8FF0A0: push    esi
0x8FF0A1: mov     esi, [esp+4+arg_4]
0x8FF0A5: movzx   edx, byte ptr [esi+0Eh]
0x8FF0A9: xor     eax, eax
0x8FF0AB: test    edx, edx
0x8FF0AD: jle     short loc_8FF0CD
0x8FF0AF: lea     ecx, [esi+12h]
0x8FF0B2: cmp     word ptr [ecx], 0FFFFh
0x8FF0B7: jz      short loc_8FF0C3
0x8FF0B9: inc     eax
0x8FF0BA: add     ecx, 8
0x8FF0BD: cmp     eax, edx
0x8FF0BF: jl      short loc_8FF0B2
0x8FF0C1: pop     esi
0x8FF0C2: retn
0x8FF0C3: mov     cx, [esp+4+arg_8]
0x8FF0C8: mov     [esi+eax*8+12h], cx
0x8FF0CD: pop     esi
0x8FF0CE: retn
