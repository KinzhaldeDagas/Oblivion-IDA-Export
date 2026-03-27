0x646E60: mov     edx, ecx
0x646E62: mov     ecx, [edx+8]
0x646E65: xor     eax, eax
0x646E67: test    ecx, ecx
0x646E69: jnz     short loc_646E6E
0x646E6B: retn    4
0x646E6E: push    esi
0x646E6F: mov     esi, [ecx+18h]
0x646E72: mov     esi, ds:0B152B0h[esi*4]
0x646E79: push    edi
0x646E7A: mov     edi, [edx+4]
0x646E7D: mov     esi, [esi+edi*4]
0x646E80: cmp     esi, 2Ch; switch 45 cases
0x646E83: ja      short def_646E8C; jumptable 00646E8C default case, cases 9-12,16-28,30,31,33-43
0x646E85: movzx   esi, ds:byte_646EC4[esi]
0x646E8C: jmp     ds:jpt_646E8C[esi*4]; switch jump
0x646E93: cmp     [ecx+24h], eax; jumptable 00646E8C cases 0,4,5,7
0x646E96: jz      short loc_646EA6; jumptable 00646E8C cases 29,44
0x646E98: pop     edi
0x646E99: pop     esi
0x646E9A: jmp     sub_566A40
0x646E9F: mov     ecx, [edx+2Ch]; jumptable 00646E8C cases 1-3,6,8,13-15,32
0x646EA2: test    ecx, ecx
0x646EA4: jnz     short loc_646EAA
0x646EA6: mov     ecx, [esp+8+arg_0]; jumptable 00646E8C cases 29,44
0x646EAA: call    TESObjectREFR_GetParentCell
0x646EAF: pop     edi; jumptable 00646E8C default case, cases 9-12,16-28,30,31,33-43
0x646EB0: pop     esi
0x646EB1: retn    4
