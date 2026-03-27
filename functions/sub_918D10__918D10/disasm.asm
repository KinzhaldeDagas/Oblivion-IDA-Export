0x918D10: mov     ecx, ds:0BA7D98h
0x918D16: mov     eax, [ecx]
0x918D18: push    esi
0x918D19: push    edi
0x918D1A: push    32h ; '2'
0x918D1C: push    50h ; 'P'
0x918D1E: call    dword ptr [eax+10h]
0x918D21: mov     ecx, [esp+8+arg_0]
0x918D25: mov     esi, eax
0x918D27: push    ecx
0x918D28: mov     ecx, esi
0x918D2A: mov     word ptr [esi+4], 50h ; 'P'
0x918D30: call    sub_9491F0
0x918D35: lea     edi, [esi+8]
0x918D38: push    7A120h
0x918D3D: lea     ecx, [esi+28h]
0x918D40: mov     dword ptr [esi], offset off_A9D270
0x918D46: mov     dword ptr [edi], offset off_A9D258
0x918D4C: mov     dword ptr [esi+20h], offset off_A9D250
0x918D53: call    sub_948D00
0x918D58: mov     eax, edi
0x918D5A: pop     edi
0x918D5B: pop     esi
0x918D5C: retn
