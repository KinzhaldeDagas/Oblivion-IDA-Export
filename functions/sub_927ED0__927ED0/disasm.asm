0x927ED0: push    esi
0x927ED1: mov     esi, ecx
0x927ED3: call    sub_927D80
0x927ED8: test    [esp+4+arg_0], 1
0x927EDD: jz      short loc_927EF2
0x927EDF: movzx   edx, word ptr [esi+4]
0x927EE3: mov     ecx, ds:0BA7D98h
0x927EE9: mov     eax, [ecx]
0x927EEB: push    24h ; '$'
0x927EED: push    edx
0x927EEE: push    esi
0x927EEF: call    dword ptr [eax+14h]
0x927EF2: mov     eax, esi
0x927EF4: pop     esi
0x927EF5: retn    4
