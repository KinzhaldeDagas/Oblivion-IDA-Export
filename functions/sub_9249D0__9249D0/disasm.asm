0x9249D0: push    esi
0x9249D1: mov     esi, ecx
0x9249D3: mov     ecx, [esi+98h]
0x9249D9: test    ecx, ecx
0x9249DB: mov     dword ptr [esi], offset off_A9DFA0
0x9249E1: jz      short loc_9249FB
0x9249E3: cmp     word ptr [ecx+4], 0
0x9249E8: jz      short loc_9249FB
0x9249EA: dec     word ptr [ecx+6]
0x9249EE: cmp     word ptr [ecx+6], 0
0x9249F3: jnz     short loc_9249FB
0x9249F5: mov     eax, [ecx]
0x9249F7: push    1
0x9249F9: call    dword ptr [eax]
0x9249FB: test    [esp+4+arg_0], 1
0x924A00: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x924A06: jz      short loc_924A1B
0x924A08: movzx   eax, word ptr [esi+4]
0x924A0C: mov     ecx, ds:0BA7D98h
0x924A12: mov     edx, [ecx]
0x924A14: push    29h ; ')'
0x924A16: push    eax
0x924A17: push    esi
0x924A18: call    dword ptr [edx+14h]
0x924A1B: mov     eax, esi
0x924A1D: pop     esi
0x924A1E: retn    4
