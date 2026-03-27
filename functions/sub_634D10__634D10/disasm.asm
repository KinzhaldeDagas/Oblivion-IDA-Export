0x634D10: push    esi
0x634D11: mov     esi, ecx
0x634D13: mov     eax, [esi]
0x634D15: mov     edx, [eax+2D0h]
0x634D1B: call    edx
0x634D1D: add     eax, 1; switch 8 cases
0x634D20: cmp     eax, 7
0x634D23: ja      short def_634D2C; jumptable 00634D2C default case, cases 0,1
0x634D25: movzx   eax, ds:byte_634D6C[eax]
0x634D2C: jmp     ds:jpt_634D2C[eax*4]; switch jump
0x634D33: mov     ecx, [esi+17Ch]; jumptable 00634D2C cases 2,4,5
0x634D39: test    ecx, ecx
0x634D3B: jz      short loc_634D58; jumptable 00634D2C cases -1,3,6
0x634D3D: push    1
0x634D3F: call    sub_4706E0
0x634D44: test    eax, eax
0x634D46: jz      short loc_634D58; jumptable 00634D2C cases -1,3,6
0x634D48: mov     ecx, [eax+68h]
0x634D4B: call    TESAnimGroup_GetAnimationGroup
0x634D50: add     eax, 0FFFFFFDEh
0x634D53: cmp     eax, 5
0x634D56: jbe     short def_634D2C; jumptable 00634D2C default case, cases 0,1
0x634D58: mov     al, 1; jumptable 00634D2C cases -1,3,6
0x634D5A: pop     esi
0x634D5B: retn
0x634D5C: xor     al, al; jumptable 00634D2C default case, cases 0,1
0x634D5E: pop     esi
0x634D5F: retn
