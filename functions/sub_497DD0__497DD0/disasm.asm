0x497DD0: push    esi
0x497DD1: mov     esi, [esp+4+arg_4]
0x497DD5: test    esi, esi
0x497DD7: jnz     short loc_497DDD
0x497DD9: xor     eax, eax
0x497DDB: pop     esi
0x497DDC: retn
0x497DDD: mov     eax, [esi]
0x497DDF: mov     edx, [eax+10h]
0x497DE2: mov     ecx, esi
0x497DE4: call    edx
0x497DE6: test    eax, eax
0x497DE8: jz      short loc_497DFB
0x497DEA: mov     ecx, [esp+4+arg_0]
0x497DEE: mov     edi, edi
0x497DF0: cmp     eax, ecx
0x497DF2: jz      short loc_497E05
0x497DF4: mov     eax, [eax+4]
0x497DF7: test    eax, eax
0x497DF9: jnz     short loc_497DF0
0x497DFB: xor     al, al
0x497DFD: neg     al
0x497DFF: sbb     eax, eax
0x497E01: and     eax, esi
0x497E03: pop     esi
0x497E04: retn
0x497E05: mov     al, 1
0x497E07: neg     al
0x497E09: sbb     eax, eax
0x497E0B: and     eax, esi
0x497E0D: pop     esi
0x497E0E: retn
