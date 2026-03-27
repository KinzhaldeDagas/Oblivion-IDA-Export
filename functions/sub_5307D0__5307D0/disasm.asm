0x5307D0: push    esi
0x5307D1: mov     esi, [esp+4+arg_0]
0x5307D5: test    esi, esi
0x5307D7: jz      short loc_530828
0x5307D9: mov     eax, [esp+4+arg_4]
0x5307DD: test    eax, eax
0x5307DF: mov     dword ptr [esi], 0
0x5307E5: jz      short loc_530828
0x5307E7: cmp     dword ptr [eax+0Ch], 0
0x5307EB: jnz     short loc_530828
0x5307ED: mov     eax, [eax+8]
0x5307F0: cmp     eax, ds:0B060B4h
0x5307F6: jnz     short loc_530828
0x5307F8: push    ecx
0x5307F9: call    TESTopic_static_GetTopicInfoParent?
0x5307FE: add     esp, 4
0x530801: test    eax, eax
0x530803: jz      short loc_530828
0x530805: mov     ecx, ds:0B05E20h
0x53080B: mov     [esi], ecx
0x53080D: mov     dword ptr [esi+0Ch], 7
0x530814: mov     edx, [eax+0Ch]
0x530817: mov     [esi+8], edx
0x53081A: mov     dword ptr [esi+4], 0
0x530821: mov     dword ptr [esi+10h], 0
0x530828: pop     esi
0x530829: retn    8
