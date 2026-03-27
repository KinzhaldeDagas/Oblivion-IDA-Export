0x64B1F0: push    esi
0x64B1F1: mov     esi, ecx
0x64B1F3: mov     ecx, ds:0B333C4h
0x64B1F9: push    1
0x64B1FB: call    sub_6600D0
0x64B200: cmp     [esp+4+arg_0], eax
0x64B204: mov     eax, ds:0B3BA98h
0x64B209: jz      short loc_64B211
0x64B20B: mov     eax, [esi+110h]
0x64B211: pop     esi
0x64B212: retn    4
