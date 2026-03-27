0x719F40: push    esi
0x719F41: mov     esi, ecx
0x719F43: mov     eax, [esi]
0x719F45: mov     edx, [eax+44h]
0x719F48: call    edx
0x719F4A: test    eax, eax
0x719F4C: jz      short loc_719F59
0x719F4E: mov     eax, [esi]
0x719F50: mov     edx, [eax+48h]
0x719F53: push    0
0x719F55: mov     ecx, esi
0x719F57: call    edx
0x719F59: mov     ax, word ptr [esp+4+arg_0]
0x719F5E: mov     ecx, [esp+4+arg_4]
0x719F62: mov     edx, [esp+4+arg_8]
0x719F66: mov     [esi+44h], ax
0x719F6A: mov     [esi+48h], ecx
0x719F6D: mov     [esi+4Ch], edx
0x719F70: pop     esi
0x719F71: retn    0Ch
