0x712520: push    ecx
0x712521: mov     ecx, [esp+4+arg_0]
0x712525: lea     eax, [esp+4+var_4]
0x712528: push    eax
0x712529: push    ecx
0x71252A: mov     ecx, ds:0B3FB80h
0x712530: call    NiTMap_GetAt
0x712535: test    al, al
0x712537: jnz     short loc_71253D
0x712539: xor     eax, eax
0x71253B: pop     ecx
0x71253C: retn
0x71253D: call    [esp+4+var_4]
0x712540: pop     ecx
0x712541: retn
