0x4DBEA0: push    esi
0x4DBEA1: push    edi
0x4DBEA2: mov     edi, ecx
0x4DBEA4: lea     esi, [edi+44h]
0x4DBEA7: push    31h ; '1'; a2
0x4DBEA9: mov     ecx, esi; this
0x4DBEAB: call    BaseExtraList_GetExtraData
0x4DBEB0: test    eax, eax
0x4DBEB2: jnz     short loc_4DBEDE
0x4DBEB4: mov     ecx, esi; this
0x4DBEB6: call    ExtraDataList_GetTeleport
0x4DBEBB: mov     esi, eax
0x4DBEBD: test    esi, esi
0x4DBEBF: jz      short loc_4DBEEE
0x4DBEC1: mov     ecx, esi
0x4DBEC3: call    sub_42B410
0x4DBEC8: test    eax, eax
0x4DBECA: jz      short loc_4DBEEE
0x4DBECC: mov     ecx, esi
0x4DBECE: call    sub_42B410
0x4DBED3: mov     ecx, eax
0x4DBED5: call    sub_4D77D0
0x4DBEDA: test    eax, eax
0x4DBEDC: jz      short loc_4DBEEE
0x4DBEDE: mov     ecx, eax
0x4DBEE0: call    sub_428E90
0x4DBEE5: mov     ecx, edi
0x4DBEE7: pop     edi
0x4DBEE8: pop     esi
0x4DBEE9: jmp     sub_4D9070
0x4DBEEE: pop     edi
0x4DBEEF: pop     esi
0x4DBEF0: retn
