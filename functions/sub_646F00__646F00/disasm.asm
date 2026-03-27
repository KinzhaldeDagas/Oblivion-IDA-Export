0x646F00: mov     edx, ecx
0x646F02: mov     ecx, [edx+8]
0x646F05: xor     eax, eax
0x646F07: test    ecx, ecx
0x646F09: jnz     short loc_646F0E
0x646F0B: retn    4
0x646F0E: push    esi
0x646F0F: mov     esi, [ecx+18h]
0x646F12: mov     esi, ds:0B152B0h[esi*4]
0x646F19: push    edi
0x646F1A: mov     edi, [edx+4]
0x646F1D: mov     esi, [esi+edi*4]
0x646F20: cmp     esi, 2Ch; switch 45 cases
0x646F23: ja      short def_646F2C; jumptable 00646F2C default case, cases 9-12,16-28,30,31,33-43
0x646F25: movzx   esi, ds:byte_646F64[esi]
0x646F2C: jmp     ds:jpt_646F2C[esi*4]; switch jump
0x646F33: cmp     [ecx+24h], eax; jumptable 00646F2C cases 0,4,5,7
0x646F36: jz      short loc_646F46; jumptable 00646F2C cases 29,44
0x646F38: pop     edi
0x646F39: pop     esi
0x646F3A: jmp     sub_566940
0x646F3F: mov     ecx, [edx+2Ch]; jumptable 00646F2C cases 1-3,6,8,13-15,32
0x646F42: test    ecx, ecx
0x646F44: jnz     short loc_646F4A
0x646F46: mov     ecx, [esp+8+arg_0]; jumptable 00646F2C cases 29,44
0x646F4A: call    TESObjectREFR_GetWorldSpace
0x646F4F: pop     edi; jumptable 00646F2C default case, cases 9-12,16-28,30,31,33-43
0x646F50: pop     esi
0x646F51: retn    4
