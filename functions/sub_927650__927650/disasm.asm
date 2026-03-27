0x927650: push    esi
0x927651: mov     esi, ecx
0x927653: call    sub_927540
0x927658: test    [esp+4+arg_0], 1
0x92765D: jz      short loc_927672
0x92765F: movzx   edx, word ptr [esi+4]
0x927663: mov     ecx, ds:0BA7D98h
0x927669: mov     eax, [ecx]
0x92766B: push    24h ; '$'
0x92766D: push    edx
0x92766E: push    esi
0x92766F: call    dword ptr [eax+14h]
0x927672: mov     eax, esi
0x927674: pop     esi
0x927675: retn    4
