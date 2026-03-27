0x54F440: push    edi
0x54F441: mov     edi, [esp+4+Str2]
0x54F445: test    edi, edi
0x54F447: jz      short loc_54F47C
0x54F449: push    esi
0x54F44A: xor     esi, esi
0x54F44C: lea     esp, [esp+0]
0x54F450: mov     eax, ds:0B11FE0h[esi*4]
0x54F457: test    eax, eax
0x54F459: jz      short loc_54F469
0x54F45B: push    edi; Str2
0x54F45C: push    eax; Str1
0x54F45D: call    __strcmp
0x54F462: add     esp, 8
0x54F465: test    eax, eax
0x54F467: jnz     short loc_54F477
0x54F469: add     esi, 1
0x54F46C: cmp     esi, 4
0x54F46F: jl      short loc_54F450
0x54F471: pop     esi
0x54F472: or      eax, 0FFFFFFFFh
0x54F475: pop     edi
0x54F476: retn
0x54F477: mov     eax, esi
0x54F479: pop     esi
0x54F47A: pop     edi
0x54F47B: retn
0x54F47C: or      eax, 0FFFFFFFFh
0x54F47F: pop     edi
0x54F480: retn
