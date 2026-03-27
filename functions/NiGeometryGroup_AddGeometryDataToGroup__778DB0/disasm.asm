0x778DB0: push    ebp
0x778DB1: mov     ebp, [esp+4+arg_8]
0x778DB5: test    ebp, ebp
0x778DB7: jz      short loc_778E08
0x778DB9: cmp     [esp+4+arg_C], 0
0x778DBE: jz      short loc_778E08
0x778DC0: mov     eax, [ebp+0Ch]
0x778DC3: test    eax, eax
0x778DC5: jz      short loc_778E08
0x778DC7: push    esi
0x778DC8: mov     esi, [eax+0Ch]
0x778DCB: cmp     dword ptr [esi+28h], 0
0x778DCF: jz      short loc_778DD8
0x778DD1: pop     esi
0x778DD2: xor     al, al
0x778DD4: pop     ebp
0x778DD5: retn    18h
0x778DD8: mov     eax, [eax+8]
0x778DDB: test    eax, eax
0x778DDD: jbe     short loc_778E01
0x778DDF: push    ebx
0x778DE0: push    edi
0x778DE1: mov     edi, [esp+10h+arg_0]
0x778DE5: mov     ebx, eax
0x778DE7: mov     ecx, [esp+10h+arg_4]
0x778DEB: mov     eax, [edi]
0x778DED: mov     edx, [eax+8]
0x778DF0: push    esi
0x778DF1: push    ebp
0x778DF2: push    ecx
0x778DF3: mov     ecx, edi
0x778DF5: call    edx
0x778DF7: add     esi, 2Ch ; ','
0x778DFA: sub     ebx, 1
0x778DFD: jnz     short loc_778DE7
0x778DFF: pop     edi
0x778E00: pop     ebx
0x778E01: pop     esi
0x778E02: mov     al, 1
0x778E04: pop     ebp
0x778E05: retn    18h
0x778E08: mov     eax, [esp+4+arg_4]
0x778E0C: cmp     dword ptr [eax+38h], 0
0x778E10: jz      short loc_778E18
0x778E12: xor     al, al
0x778E14: pop     ebp
0x778E15: retn    18h
0x778E18: mov     ecx, [esp+4+arg_0]
0x778E1C: mov     edx, [ecx]
0x778E1E: push    0
0x778E20: push    ebp
0x778E21: push    eax
0x778E22: mov     eax, [edx+8]
0x778E25: call    eax
0x778E27: mov     al, 1
0x778E29: pop     ebp
0x778E2A: retn    18h
