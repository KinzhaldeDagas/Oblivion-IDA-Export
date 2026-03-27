0x6CE320: push    esi
0x6CE321: push    edi
0x6CE322: mov     edi, [esp+8+arg_0]
0x6CE326: push    edi
0x6CE327: mov     esi, ecx
0x6CE329: call    sub_6D0550
0x6CE32E: cmp     dword ptr [edi+0D8h], 0A010068h
0x6CE338: jb      short loc_6CE34A
0x6CE33A: mov     ecx, edi
0x6CE33C: call    sub_712A90
0x6CE341: push    eax; a2
0x6CE342: lea     ecx, [esi+3Ch]; this
0x6CE345: call    NiSmartPointer_Set??
0x6CE34A: pop     edi
0x6CE34B: pop     esi
0x6CE34C: retn    4
