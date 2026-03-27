0x412DC0: mov     eax, [esp+arg_4]
0x412DC4: mov     edx, eax
0x412DC6: mov     cl, [eax]
0x412DC8: add     eax, 1
0x412DCB: test    cl, cl
0x412DCD: jnz     short loc_412DC6
0x412DCF: push    ebx
0x412DD0: push    esi
0x412DD1: push    edi
0x412DD2: mov     edi, [esp+0Ch+arg_0]
0x412DD6: sub     eax, edx
0x412DD8: add     edi, 0FFFFFFFFh
0x412DDB: lea     ebx, [edi+1]
0x412DDE: mov     edi, edi
0x412DE0: mov     cl, [edi+1]
0x412DE3: add     edi, 1
0x412DE6: test    cl, cl
0x412DE8: jnz     short loc_412DE0
0x412DEA: mov     ecx, eax
0x412DEC: shr     ecx, 2
0x412DEF: mov     esi, edx
0x412DF1: rep movsd
0x412DF3: mov     ecx, eax
0x412DF5: and     ecx, 3
0x412DF8: rep movsb
0x412DFA: pop     edi
0x412DFB: pop     esi
0x412DFC: mov     eax, ebx
0x412DFE: pop     ebx
0x412DFF: retn
