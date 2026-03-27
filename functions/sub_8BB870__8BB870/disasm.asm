0x8BB870: push    esi
0x8BB871: mov     esi, ecx
0x8BB873: call    sub_8BB8A0
0x8BB878: test    [esp+4+arg_0], 1
0x8BB87D: jz      short loc_8BB892
0x8BB87F: movzx   edx, word ptr [esi+4]
0x8BB883: mov     ecx, ds:0BA7D98h
0x8BB889: mov     eax, [ecx]
0x8BB88B: push    15h
0x8BB88D: push    edx
0x8BB88E: push    esi
0x8BB88F: call    dword ptr [eax+14h]
0x8BB892: mov     eax, esi
0x8BB894: pop     esi
0x8BB895: retn    4
