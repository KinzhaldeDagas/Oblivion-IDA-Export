0x5F3C30: push    esi
0x5F3C31: mov     esi, ecx
0x5F3C33: mov     ecx, [esi+58h]
0x5F3C36: mov     eax, [ecx]
0x5F3C38: mov     edx, [eax+0ECh]
0x5F3C3E: push    1
0x5F3C40: call    edx
0x5F3C42: test    eax, eax
0x5F3C44: jnz     short loc_5F3C74
0x5F3C46: mov     ecx, [esi+58h]
0x5F3C49: mov     eax, [ecx]
0x5F3C4B: mov     edx, [eax+0F8h]
0x5F3C51: push    1
0x5F3C53: call    edx
0x5F3C55: test    eax, eax
0x5F3C57: jnz     short loc_5F3C74
0x5F3C59: push    11h
0x5F3C5B: mov     ecx, esi
0x5F3C5D: call    Actor_GetBaseCalcAVi
0x5F3C62: push    eax
0x5F3C63: call    Calc_MasteryFromSkill
0x5F3C68: add     esp, 4
0x5F3C6B: cmp     eax, 3
0x5F3C6E: jge     short loc_5F3C9E
0x5F3C70: xor     al, al
0x5F3C72: pop     esi
0x5F3C73: retn
0x5F3C74: push    0Fh
0x5F3C76: mov     ecx, esi
0x5F3C78: call    Actor_GetBaseCalcAVi
0x5F3C7D: push    eax
0x5F3C7E: call    Calc_MasteryFromSkill
0x5F3C83: add     esp, 4
0x5F3C86: cmp     eax, 3
0x5F3C89: jl      short loc_5F3C70
0x5F3C8B: mov     ecx, [esi+58h]
0x5F3C8E: mov     eax, [ecx]
0x5F3C90: mov     edx, [eax+0F8h]
0x5F3C96: push    1
0x5F3C98: call    edx
0x5F3C9A: test    eax, eax
0x5F3C9C: jz      short loc_5F3C70
0x5F3C9E: push    0; Seed
0x5F3CA0: call    GetRandomLargeInteger?
0x5F3CA5: cdq
0x5F3CA6: mov     ecx, 64h ; 'd'
0x5F3CAB: idiv    ecx
0x5F3CAD: add     esp, 4
0x5F3CB0: pop     esi
0x5F3CB1: cmp     edx, ds:0B37238h
0x5F3CB7: setle   al
0x5F3CBA: retn
