0x538A90: push    esi
0x538A91: mov     esi, ecx
0x538A93: mov     ecx, [esi]
0x538A95: test    ecx, ecx
0x538A97: jz      short loc_538AAA
0x538A99: mov     eax, [ecx+8]
0x538A9C: test    eax, eax
0x538A9E: jz      short loc_538AAA
0x538AA0: add     eax, 14h
0x538AA3: jz      short loc_538AAA
0x538AA5: mov     edx, [eax+1Ch]
0x538AA8: jmp     short loc_538AAC
0x538AAA: xor     edx, edx
0x538AAC: mov     eax, [esp+4+arg_0]
0x538AB0: mov     [esi+8], eax
0x538AB3: movzx   edx, dx
0x538AB6: shl     eax, 10h
0x538AB9: or      edx, eax
0x538ABB: test    ecx, ecx
0x538ABD: pop     esi
0x538ABE: jz      short loc_538ACF
0x538AC0: mov     eax, [ecx+8]
0x538AC3: test    eax, eax
0x538AC5: jz      short loc_538ACF
0x538AC7: add     eax, 14h
0x538ACA: jz      short loc_538ACF
0x538ACC: mov     [eax+1Ch], edx
0x538ACF: mov     eax, [ecx]
0x538AD1: mov     edx, [eax+80h]
0x538AD7: call    edx
0x538AD9: retn    4
