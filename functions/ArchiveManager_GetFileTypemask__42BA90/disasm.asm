0x42BA90: mov     eax, [esp+arg_0]
0x42BA94: push    ebx
0x42BA95: push    ebp
0x42BA96: push    esi
0x42BA97: xor     ebx, ebx
0x42BA99: cmp     byte ptr [eax], 2Eh ; '.'
0x42BA9C: push    edi
0x42BA9D: mov     ebp, 18h
0x42BAA2: jnz     short loc_42BAAD
0x42BAA4: add     eax, 1
0x42BAA7: mov     [esp+10h+arg_0], eax
0x42BAAB: jmp     short loc_42BAC4
0x42BAAD: cmp     byte ptr [eax+1], 2Eh ; '.'
0x42BAB1: jnz     short loc_42BAC4
0x42BAB3: add     eax, 2
0x42BAB6: mov     [esp+10h+arg_0], eax
0x42BABA: jmp     short loc_42BAC4
0x42BABC: align 10h
0x42BAC0: mov     eax, [esp+10h+arg_0]
0x42BAC4: mov     esi, ebp
0x42BAC6: sub     esi, ebx
0x42BAC8: shr     esi, 1
0x42BACA: lea     edi, [esi+ebx]
0x42BACD: lea     ecx, ds:0B04368h[edi*8]
0x42BAD4: push    ecx; Str2
0x42BAD5: push    eax; Str1
0x42BAD6: call    __strcmp
0x42BADB: add     esp, 8
0x42BADE: test    eax, eax
0x42BAE0: jle     short loc_42BAE6
0x42BAE2: mov     ebx, edi
0x42BAE4: jmp     short loc_42BAEA
0x42BAE6: jge     short loc_42BAEE
0x42BAE8: mov     ebp, edi
0x42BAEA: test    esi, esi
0x42BAEC: jnz     short loc_42BAC0
0x42BAEE: test    eax, eax
0x42BAF0: jnz     short loc_42BAFE
0x42BAF2: mov     eax, dword_B0436C[edi*8]
0x42BAF9: pop     edi
0x42BAFA: pop     esi
0x42BAFB: pop     ebp
0x42BAFC: pop     ebx
0x42BAFD: retn
0x42BAFE: pop     edi
0x42BAFF: pop     esi
0x42BB00: pop     ebp
0x42BB01: mov     eax, 100h
0x42BB06: pop     ebx
0x42BB07: retn
