0x71B820: push    esi
0x71B821: push    edi
0x71B822: mov     edi, [esp+8+arg_0]
0x71B826: mov     esi, ecx
0x71B828: mov     eax, [esi]
0x71B82A: mov     edx, [eax+1Ch]
0x71B82D: push    edi
0x71B82E: call    edx
0x71B830: test    al, al
0x71B832: jnz     short loc_71B847
0x71B834: mov     eax, [esi]
0x71B836: mov     edx, [eax+20h]
0x71B839: push    edi
0x71B83A: mov     ecx, esi
0x71B83C: call    edx
0x71B83E: test    al, al
0x71B840: jnz     short loc_71B847
0x71B842: pop     edi
0x71B843: pop     esi
0x71B844: retn    4
0x71B847: pop     edi
0x71B848: mov     al, 1
0x71B84A: pop     esi
0x71B84B: retn    4
