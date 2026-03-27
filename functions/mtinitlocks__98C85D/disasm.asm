0x98C85D: push    esi
0x98C85E: push    edi
0x98C85F: xor     esi, esi
0x98C861: mov     edi, offset unk_BAA158
0x98C866: cmp     dword_B310C4[esi*8], 1
0x98C86E: jnz     short loc_98C88E
0x98C870: lea     eax, ds:0B310C0h[esi*8]
0x98C877: mov     [eax], edi
0x98C879: push    0FA0h
0x98C87E: push    dword ptr [eax]
0x98C880: add     edi, 18h
0x98C883: call    ___crtInitCritSecAndSpinCount
0x98C888: test    eax, eax
0x98C88A: pop     ecx
0x98C88B: pop     ecx
0x98C88C: jz      short loc_98C89A
0x98C88E: inc     esi
0x98C88F: cmp     esi, 24h ; '$'
0x98C892: jl      short loc_98C866
0x98C894: xor     eax, eax
0x98C896: inc     eax
0x98C897: pop     edi
0x98C898: pop     esi
0x98C899: retn
0x98C89A: and     lpCriticalSection[esi*8], 0
0x98C8A2: xor     eax, eax
0x98C8A4: jmp     short loc_98C897
