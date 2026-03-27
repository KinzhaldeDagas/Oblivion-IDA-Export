0x96DDA0: push    esi
0x96DDA1: mov     esi, [esp+4+arg_0]
0x96DDA5: push    edi
0x96DDA6: push    esi
0x96DDA7: mov     edi, ecx
0x96DDA9: call    sub_711D20
0x96DDAE: test    al, al
0x96DDB0: jz      short loc_96DDD1
0x96DDB2: test    esi, esi
0x96DDB4: jz      short loc_96DDD1
0x96DDB6: mov     eax, [esi]
0x96DDB8: mov     edx, [eax+4]
0x96DDBB: mov     ecx, esi
0x96DDBD: call    edx
0x96DDBF: test    eax, eax
0x96DDC1: jz      short loc_96DDD1
0x96DDC3: cmp     eax, offset dword_BA9AC8
0x96DDC8: jz      short loc_96DDD8
0x96DDCA: mov     eax, [eax+4]
0x96DDCD: test    eax, eax
0x96DDCF: jnz     short loc_96DDC3
0x96DDD1: pop     edi
0x96DDD2: xor     al, al
0x96DDD4: pop     esi
0x96DDD5: retn    4
0x96DDD8: mov     eax, [esi+28h]
0x96DDDB: cmp     eax, [edi+28h]
0x96DDDE: jnz     short loc_96DDD1
0x96DDE0: mov     ecx, [esi+24h]
0x96DDE3: cmp     ecx, [edi+24h]
0x96DDE6: jnz     short loc_96DDD1
0x96DDE8: mov     ecx, [esi+2Ch]
0x96DDEB: test    ecx, ecx
0x96DDED: jz      short loc_96DE13
0x96DDEF: mov     esi, [edi+2Ch]
0x96DDF2: test    esi, esi
0x96DDF4: jz      short loc_96DE13
0x96DDF6: mov     edx, [ecx]
0x96DDF8: mov     eax, [edx+0Ch]
0x96DDFB: call    eax
0x96DDFD: mov     edx, [esi]
0x96DDFF: mov     edi, eax
0x96DE01: mov     eax, [edx+0Ch]
0x96DE04: mov     ecx, esi
0x96DE06: call    eax
0x96DE08: cmp     edi, eax
0x96DE0A: jz      short loc_96DE18
0x96DE0C: pop     edi
0x96DE0D: xor     al, al
0x96DE0F: pop     esi
0x96DE10: retn    4
0x96DE13: cmp     ecx, [edi+2Ch]
0x96DE16: jnz     short loc_96DDD1
0x96DE18: pop     edi
0x96DE19: mov     al, 1
0x96DE1B: pop     esi
0x96DE1C: retn    4
