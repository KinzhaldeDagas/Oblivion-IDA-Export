0x5AFD50: mov     eax, ds:0B33398h
0x5AFD55: mov     ecx, [eax+24h]
0x5AFD58: test    ecx, ecx
0x5AFD5A: jz      short locret_5AFD99
0x5AFD5C: mov     edx, [esp+arg_0]
0x5AFD60: push    esi
0x5AFD61: push    1
0x5AFD63: push    121h
0x5AFD68: push    edx
0x5AFD69: call    PlaySound???
0x5AFD6E: mov     esi, eax
0x5AFD70: test    esi, esi
0x5AFD72: jz      short loc_5AFD98
0x5AFD74: mov     ecx, esi
0x5AFD76: call    sub_6B7260
0x5AFD7B: test    al, al
0x5AFD7D: jnz     short loc_5AFD98
0x5AFD7F: push    0
0x5AFD81: mov     ecx, esi
0x5AFD83: call    sub_6B7190
0x5AFD88: mov     ecx, esi; this
0x5AFD8A: call    sub_6B73E0
0x5AFD8F: push    esi
0x5AFD90: call    FormHeapFree
0x5AFD95: add     esp, 4
0x5AFD98: pop     esi
0x5AFD99: retn    4
