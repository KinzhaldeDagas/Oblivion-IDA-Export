0x8DA1A0: push    esi
0x8DA1A1: mov     esi, ecx
0x8DA1A3: call    sub_8D9F00
0x8DA1A8: test    [esp+4+arg_0], 1
0x8DA1AD: jz      short loc_8DA1C2
0x8DA1AF: movzx   edx, word ptr [esi+4]
0x8DA1B3: mov     ecx, ds:0BA7D98h
0x8DA1B9: mov     eax, [ecx]
0x8DA1BB: push    2Ch ; ','
0x8DA1BD: push    edx
0x8DA1BE: push    esi
0x8DA1BF: call    dword ptr [eax+14h]
0x8DA1C2: mov     eax, esi
0x8DA1C4: pop     esi
0x8DA1C5: retn    4
