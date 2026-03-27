0x5EA720: push    esi
0x5EA721: mov     esi, ecx
0x5EA723: call    Actor_IsNPC
0x5EA728: test    al, al
0x5EA72A: jz      short loc_5EA782
0x5EA72C: mov     eax, [esi]
0x5EA72E: mov     edx, [eax+170h]
0x5EA734: mov     ecx, esi
0x5EA736: call    edx
0x5EA738: test    eax, eax
0x5EA73A: jz      short loc_5EA782
0x5EA73C: mov     eax, [eax+0E8h]
0x5EA742: test    eax, eax
0x5EA744: jz      short loc_5EA782
0x5EA746: lea     edx, [eax+18h]
0x5EA749: test    edx, edx
0x5EA74B: jz      short loc_5EA782
0x5EA74D: movzx   eax, word ptr [edx+8]
0x5EA751: cmp     ax, 0FFFFh
0x5EA755: jnz     short loc_5EA76D
0x5EA757: mov     eax, [edx+4]
0x5EA75A: lea     esi, [eax+1]
0x5EA75D: lea     ecx, [ecx+0]
0x5EA760: mov     cl, [eax]
0x5EA762: add     eax, 1
0x5EA765: test    cl, cl
0x5EA767: jnz     short loc_5EA760
0x5EA769: sub     eax, esi
0x5EA76B: jmp     short loc_5EA770
0x5EA76D: movzx   eax, ax
0x5EA770: test    eax, eax
0x5EA772: jz      short loc_5EA782
0x5EA774: mov     eax, [edx+4]
0x5EA777: test    eax, eax
0x5EA779: jnz     short loc_5EA784
0x5EA77B: mov     eax, offset EmptyString
0x5EA780: pop     esi
0x5EA781: retn
0x5EA782: xor     eax, eax
0x5EA784: pop     esi
0x5EA785: retn
