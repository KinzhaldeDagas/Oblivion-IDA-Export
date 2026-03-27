0x898870: push    esi
0x898871: mov     esi, ecx
0x898873: call    sub_8D3390
0x898878: test    [esp+4+arg_0], 1
0x89887D: jz      short loc_898892
0x89887F: movzx   edx, word ptr [esi+4]
0x898883: mov     ecx, ds:0BA7D98h
0x898889: mov     eax, [ecx]
0x89888B: push    12h
0x89888D: push    edx
0x89888E: push    esi
0x89888F: call    dword ptr [eax+14h]
0x898892: mov     eax, esi
0x898894: pop     esi
0x898895: retn    4
