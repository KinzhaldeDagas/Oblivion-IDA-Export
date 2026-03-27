0x5E03E0: mov     eax, [esp+arg_4]
0x5E03E4: mov     edx, [eax]
0x5E03E6: push    esi
0x5E03E7: mov     esi, [esp+4+arg_0]
0x5E03EB: mov     [esi], edx
0x5E03ED: mov     edx, [eax+4]
0x5E03F0: mov     [esi+4], edx
0x5E03F3: mov     edx, [eax+8]
0x5E03F6: push    ecx
0x5E03F7: push    eax
0x5E03F8: mov     [esi+8], edx
0x5E03FB: call    sub_67DD70
0x5E0400: add     esp, 8
0x5E0403: test    eax, eax
0x5E0405: jz      short loc_5E041E
0x5E0407: mov     ecx, eax
0x5E0409: call    sub_4BEF40
0x5E040E: mov     ecx, [eax]
0x5E0410: mov     edx, [eax+4]
0x5E0413: mov     eax, [eax+8]
0x5E0416: mov     [esi], ecx
0x5E0418: mov     [esi+4], edx
0x5E041B: mov     [esi+8], eax
0x5E041E: mov     eax, esi
0x5E0420: pop     esi
0x5E0421: retn    8
