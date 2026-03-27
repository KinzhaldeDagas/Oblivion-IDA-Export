0x8A93E0: push    esi
0x8A93E1: mov     esi, ecx
0x8A93E3: mov     ecx, [esp+4+arg_0]
0x8A93E7: mov     eax, [esi]
0x8A93E9: mov     edx, [eax+18h]
0x8A93EC: push    ecx
0x8A93ED: mov     ecx, esi
0x8A93EF: call    edx
0x8A93F1: test    eax, eax
0x8A93F3: jz      short loc_8A9410
0x8A93F5: push    ecx
0x8A93F6: mov     ecx, esp
0x8A93F8: mov     [ecx], eax
0x8A93FA: add     eax, 4
0x8A93FD: mov     [esp+8+arg_0], esp
0x8A9401: push    eax; lpAddend
0x8A9402: call    dword ptr ds:0A28078h
0x8A9408: lea     ecx, [esi+0Ch]
0x8A940B: call    sub_8A4070
0x8A9410: pop     esi
0x8A9411: retn    4
