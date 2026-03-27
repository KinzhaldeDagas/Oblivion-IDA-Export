0x8E8750: push    esi
0x8E8751: mov     esi, ecx
0x8E8753: call    sub_8E8A10
0x8E8758: test    [esp+4+arg_0], 1
0x8E875D: jz      short loc_8E8772
0x8E875F: movzx   edx, word ptr [esi+4]
0x8E8763: mov     ecx, ds:0BA7D98h
0x8E8769: mov     eax, [ecx]
0x8E876B: push    24h ; '$'
0x8E876D: push    edx
0x8E876E: push    esi
0x8E876F: call    dword ptr [eax+14h]
0x8E8772: mov     eax, esi
0x8E8774: pop     esi
0x8E8775: retn    4
