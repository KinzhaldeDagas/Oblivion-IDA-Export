0x4D5320: push    esi
0x4D5321: mov     esi, ecx
0x4D5323: test    byte ptr [esi+24h], 1
0x4D5327: jz      short loc_4D5333
0x4D5329: lea     ecx, [esi+28h]
0x4D532C: call    sub_424180
0x4D5331: jmp     short loc_4D5338
0x4D5333: mov     eax, ds:0B35C24h
0x4D5338: test    eax, eax
0x4D533A: mov     ecx, [esi+54h]
0x4D533D: jz      short loc_4D535F
0x4D533F: test    ecx, ecx
0x4D5341: jz      short loc_4D535F
0x4D5343: mov     edx, [eax]
0x4D5345: push    edi
0x4D5346: mov     edi, [esp+8+arg_0]
0x4D534A: push    edi
0x4D534B: push    ecx
0x4D534C: mov     ecx, eax
0x4D534E: mov     eax, [edx+98h]
0x4D5354: call    eax
0x4D5356: push    edi
0x4D5357: mov     ecx, esi
0x4D5359: call    sub_4D1E40
0x4D535E: pop     edi
0x4D535F: pop     esi
0x4D5360: retn    4
