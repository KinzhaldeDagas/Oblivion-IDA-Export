0x70E8E0: push    ebx
0x70E8E1: push    esi
0x70E8E2: mov     esi, [esp+8+arg_0]
0x70E8E6: push    edi
0x70E8E7: push    esi
0x70E8E8: mov     edi, ecx
0x70E8EA: call    nullsub_returnvVoid_1arg
0x70E8EF: mov     ecx, esi
0x70E8F1: call    sub_7124A0
0x70E8F6: mov     esi, [edi+4Ch]
0x70E8F9: mov     ebx, eax
0x70E8FB: cmp     esi, ebx
0x70E8FD: jz      short loc_70E930
0x70E8FF: test    esi, esi
0x70E901: jz      short loc_70E91F
0x70E903: lea     eax, [esi+4]
0x70E906: push    eax; lpAddend
0x70E907: call    dword ptr ds:0A2807Ch
0x70E90D: test    eax, eax
0x70E90F: jnz     short loc_70E91F
0x70E911: test    esi, esi
0x70E913: jz      short loc_70E91F
0x70E915: mov     edx, [esi]
0x70E917: mov     eax, [edx]
0x70E919: push    1
0x70E91B: mov     ecx, esi
0x70E91D: call    eax
0x70E91F: test    ebx, ebx
0x70E921: mov     [edi+4Ch], ebx
0x70E924: jz      short loc_70E930
0x70E926: add     ebx, 4
0x70E929: push    ebx; lpAddend
0x70E92A: call    dword ptr ds:0A28078h
0x70E930: pop     edi
0x70E931: pop     esi
0x70E932: pop     ebx
0x70E933: retn    4
