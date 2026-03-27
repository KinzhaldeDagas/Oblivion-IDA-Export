0x8F7DB0: push    esi
0x8F7DB1: mov     esi, ecx
0x8F7DB3: mov     eax, [esi+14h]
0x8F7DB6: test    eax, eax
0x8F7DB8: js      short loc_8F7DED
0x8F7DBA: mov     ecx, ds:0BA9DE4h
0x8F7DC0: mov     edx, large fs:2Ch
0x8F7DC7: mov     ecx, [edx+ecx*4]
0x8F7DCA: mov     ecx, [ecx+19Ch]
0x8F7DD0: test    ecx, ecx
0x8F7DD2: jnz     short loc_8F7DDA
0x8F7DD4: mov     ecx, ds:0BA7D9Ch
0x8F7DDA: mov     edx, [esi+0Ch]
0x8F7DDD: and     eax, 3FFFFFFFh
0x8F7DE2: push    14h
0x8F7DE4: shl     eax, 1
0x8F7DE6: push    eax
0x8F7DE7: push    edx
0x8F7DE8: call    sub_8A75D0
0x8F7DED: test    [esp+4+arg_0], 1
0x8F7DF2: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x8F7DF8: jz      short loc_8F7E0D
0x8F7DFA: movzx   edx, word ptr [esi+4]
0x8F7DFE: mov     ecx, ds:0BA7D98h
0x8F7E04: mov     eax, [ecx]
0x8F7E06: push    1Ch
0x8F7E08: push    edx
0x8F7E09: push    esi
0x8F7E0A: call    dword ptr [eax+14h]
0x8F7E0D: mov     eax, esi
0x8F7E0F: pop     esi
0x8F7E10: retn    4
