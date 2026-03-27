0x6EB360: push    ebx
0x6EB361: mov     ebx, [esp+4+arg_0]
0x6EB365: push    esi
0x6EB366: push    edi
0x6EB367: push    ebx
0x6EB368: mov     esi, ecx
0x6EB36A: call    sub_6CD720
0x6EB36F: lea     edi, [esi+30h]
0x6EB372: push    ebx
0x6EB373: mov     ecx, edi
0x6EB375: call    sub_715420
0x6EB37A: push    offset dword_B24FD4
0x6EB37F: mov     ecx, edi
0x6EB381: call    sub_632310
0x6EB386: test    al, al
0x6EB388: jz      short loc_6EB38E
0x6EB38A: mov     byte ptr [esi+40h], 1
0x6EB38E: pop     edi
0x6EB38F: pop     esi
0x6EB390: pop     ebx
0x6EB391: retn    4
