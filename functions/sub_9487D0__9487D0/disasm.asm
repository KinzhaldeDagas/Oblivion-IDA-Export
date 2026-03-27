0x9487D0: push    esi
0x9487D1: mov     esi, ecx
0x9487D3: call    sub_918180
0x9487D8: test    [esp+4+arg_0], 1
0x9487DD: jz      short loc_9487F2
0x9487DF: movzx   edx, word ptr [esi+4]
0x9487E3: mov     ecx, ds:0BA7D98h
0x9487E9: mov     eax, [ecx]
0x9487EB: push    17h
0x9487ED: push    edx
0x9487EE: push    esi
0x9487EF: call    dword ptr [eax+14h]
0x9487F2: mov     eax, esi
0x9487F4: pop     esi
0x9487F5: retn    4
