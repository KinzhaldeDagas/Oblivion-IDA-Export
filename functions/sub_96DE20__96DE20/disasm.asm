0x96DE20: push    esi
0x96DE21: mov     esi, [esp+4+arg_0]
0x96DE25: test    esi, esi
0x96DE27: jz      short loc_96DE51
0x96DE29: mov     eax, [esi]
0x96DE2B: mov     edx, [eax+0Ch]
0x96DE2E: mov     ecx, esi
0x96DE30: call    edx
0x96DE32: test    eax, eax
0x96DE34: jz      short loc_96DE51
0x96DE36: mov     esi, [esi+0B4h]
0x96DE3C: test    esi, esi
0x96DE3E: jz      short loc_96DE51
0x96DE40: mov     eax, [esp+4+arg_4]
0x96DE44: test    eax, eax
0x96DE46: jz      short loc_96DE4D
0x96DE48: cmp     eax, 1
0x96DE4B: jnz     short loc_96DE51
0x96DE4D: or      byte ptr [esi+30h], 33h
0x96DE51: pop     esi
0x96DE52: retn
