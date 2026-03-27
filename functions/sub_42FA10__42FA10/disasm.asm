0x42FA10: push    esi
0x42FA11: mov     esi, ecx
0x42FA13: cmp     byte ptr [esi+4], 0
0x42FA17: jnz     short loc_42FA4B
0x42FA19: mov     ecx, [esi+0Ch]; lpParameter
0x42FA1C: test    ecx, ecx
0x42FA1E: jz      short loc_42FA4B
0x42FA20: mov     byte ptr [esi+4], 1
0x42FA24: call    sub_47CFD0
0x42FA29: mov     eax, [esp+4+arg_4]
0x42FA2D: mov     ecx, [esi+0Ch]
0x42FA30: push    eax
0x42FA31: call    nullsub_returnvVoid_1arg
0x42FA36: mov     ecx, [esp+4+arg_0]
0x42FA3A: push    ecx
0x42FA3B: mov     ecx, [esi+0Ch]
0x42FA3E: call    sub_47CFA0
0x42FA43: mov     ecx, [esi+0Ch]
0x42FA46: call    sub_47CF50
0x42FA4B: pop     esi
0x42FA4C: retn    8
