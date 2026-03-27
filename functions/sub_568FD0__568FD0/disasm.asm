0x568FD0: cmp     dword ptr [ecx+4], 0
0x568FD4: mov     eax, [esp+arg_0]
0x568FD8: push    esi
0x568FD9: jnz     short loc_568FE0
0x568FDB: cmp     dword ptr [ecx], 0
0x568FDE: jz      short loc_569008
0x568FE0: mov     esi, [ecx]
0x568FE2: test    esi, esi
0x568FE4: jz      short loc_569002
0x568FE6: test    eax, eax
0x568FE8: jz      short loc_569002
0x568FEA: mov     edx, [eax]
0x568FEC: test    edx, edx
0x568FEE: jz      short loc_569002
0x568FF0: cmp     esi, edx
0x568FF2: jnz     short loc_569002
0x568FF4: mov     ecx, [ecx+4]
0x568FF7: test    ecx, ecx
0x568FF9: mov     eax, [eax+4]
0x568FFC: jnz     short loc_568FE0
0x568FFE: test    eax, eax
0x569000: jz      short loc_569019
0x569002: mov     al, 1
0x569004: pop     esi
0x569005: retn    4
0x569008: cmp     dword ptr [eax+4], 0
0x56900C: jnz     short loc_569013
0x56900E: cmp     dword ptr [eax], 0
0x569011: jz      short loc_569019
0x569013: mov     al, 1
0x569015: pop     esi
0x569016: retn    4
0x569019: xor     al, al
0x56901B: pop     esi
0x56901C: retn    4
