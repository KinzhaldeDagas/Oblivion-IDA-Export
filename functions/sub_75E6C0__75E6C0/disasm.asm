0x75E6C0: mov     eax, [esp+arg_0]
0x75E6C4: push    esi
0x75E6C5: push    eax
0x75E6C6: mov     esi, ecx
0x75E6C8: call    nullsub_returnvVoid_1arg
0x75E6CD: mov     ecx, [esi+30h]
0x75E6D0: test    ecx, ecx
0x75E6D2: jz      short loc_75E6F3
0x75E6D4: mov     eax, [esi+40h]
0x75E6D7: lea     edx, [esp+4+arg_0]
0x75E6DB: push    edx
0x75E6DC: push    eax
0x75E6DD: add     ecx, 0D4h ; 'Ô'
0x75E6E3: call    NiTMap_GetAt
0x75E6E8: neg     al
0x75E6EA: sbb     eax, eax
0x75E6EC: and     eax, [esp+4+arg_0]
0x75E6F0: mov     [esi+44h], eax
0x75E6F3: pop     esi
0x75E6F4: retn    4
