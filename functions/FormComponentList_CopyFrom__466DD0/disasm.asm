0x466DD0: push    edi
0x466DD1: mov     edi, [esp+4+arg_0]
0x466DD5: test    edi, edi
0x466DD7: jz      short loc_466E04
0x466DD9: push    ebx
0x466DDA: push    esi
0x466DDB: mov     esi, ecx
0x466DDD: sub     edi, ecx
0x466DDF: mov     ebx, 1Ah
0x466DE4: cmp     dword ptr [esi], 0
0x466DE7: jz      short loc_466DFA
0x466DE9: mov     eax, [edi+esi]
0x466DEC: test    eax, eax
0x466DEE: jz      short loc_466DFA
0x466DF0: mov     ecx, [esi]
0x466DF2: mov     edx, [ecx]
0x466DF4: push    eax
0x466DF5: mov     eax, [edx+8]
0x466DF8: call    eax
0x466DFA: add     esi, 4
0x466DFD: sub     ebx, 1
0x466E00: jnz     short loc_466DE4
0x466E02: pop     esi
0x466E03: pop     ebx
0x466E04: pop     edi
0x466E05: retn    4
