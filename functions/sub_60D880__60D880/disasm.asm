0x60D880: push    esi
0x60D881: mov     esi, [esp+4+arg_0]
0x60D885: test    esi, esi
0x60D887: jz      short loc_60D8A1
0x60D889: lea     eax, [esi+4]
0x60D88C: push    eax; lpAddend
0x60D88D: call    dword ptr ds:0A2807Ch
0x60D893: test    eax, eax
0x60D895: jnz     short loc_60D8A1
0x60D897: mov     edx, [esi]
0x60D899: mov     eax, [edx]
0x60D89B: push    1
0x60D89D: mov     ecx, esi
0x60D89F: call    eax
0x60D8A1: pop     esi
0x60D8A2: retn    4
