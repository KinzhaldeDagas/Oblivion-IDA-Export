0x6EC9E0: push    esi
0x6EC9E1: push    edi
0x6EC9E2: mov     edi, [esp+8+arg_0]
0x6EC9E6: push    edi
0x6EC9E7: mov     esi, ecx
0x6EC9E9: call    sub_715F10
0x6EC9EE: test    al, al
0x6EC9F0: jnz     short loc_6EC9F7
0x6EC9F2: pop     edi
0x6EC9F3: pop     esi
0x6EC9F4: retn    4
0x6EC9F7: mov     ecx, [esi+40h]
0x6EC9FA: mov     eax, [ecx]
0x6EC9FC: mov     edx, [eax+24h]
0x6EC9FF: push    edi
0x6ECA00: call    edx
0x6ECA02: pop     edi
0x6ECA03: mov     al, 1
0x6ECA05: pop     esi
0x6ECA06: retn    4
