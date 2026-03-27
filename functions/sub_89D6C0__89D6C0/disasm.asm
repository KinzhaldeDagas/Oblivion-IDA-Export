0x89D6C0: mov     eax, [esp+arg_0]
0x89D6C4: push    esi
0x89D6C5: push    eax
0x89D6C6: mov     esi, ecx
0x89D6C8: call    nullsub_returnvVoid_1arg
0x89D6CD: mov     eax, [esi+0Ch]
0x89D6D0: test    eax, eax
0x89D6D2: jz      short loc_89D6DE
0x89D6D4: mov     edx, [esi]
0x89D6D6: push    eax
0x89D6D7: mov     eax, [edx+70h]
0x89D6DA: mov     ecx, esi
0x89D6DC: call    eax
0x89D6DE: pop     esi
0x89D6DF: retn    4
