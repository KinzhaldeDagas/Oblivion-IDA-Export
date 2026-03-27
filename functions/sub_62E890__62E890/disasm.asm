0x62E890: push    esi
0x62E891: mov     esi, [esp+4+arg_0]
0x62E895: test    esi, esi
0x62E897: jz      short loc_62E8D5
0x62E899: mov     eax, [esi+8]
0x62E89C: mov     ecx, eax
0x62E89E: shr     ecx, 5
0x62E8A1: test    cl, 1
0x62E8A4: jnz     short loc_62E8D5
0x62E8A6: shr     eax, 0Eh
0x62E8A9: test    al, 1
0x62E8AB: jnz     short loc_62E8D5
0x62E8AD: mov     edx, [esi]
0x62E8AF: mov     eax, [edx+170h]
0x62E8B5: mov     ecx, esi
0x62E8B7: call    eax
0x62E8B9: cmp     byte ptr [eax+4], 18h
0x62E8BD: jnz     short loc_62E8D5
0x62E8BF: mov     ecx, esi; this
0x62E8C1: call    GetTeleportExtraData
0x62E8C6: test    eax, eax
0x62E8C8: jz      short loc_62E8D5
0x62E8CA: push    esi
0x62E8CB: mov     ecx, offset dword_B3B944
0x62E8D0: call    BSSimpleList_PushFront
0x62E8D5: xor     al, al
0x62E8D7: pop     esi
0x62E8D8: retn
