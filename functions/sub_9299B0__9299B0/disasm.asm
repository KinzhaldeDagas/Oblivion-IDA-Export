0x9299B0: push    esi
0x9299B1: mov     esi, ecx
0x9299B3: call    sub_9299E0
0x9299B8: test    [esp+4+arg_0], 1
0x9299BD: jz      short loc_9299D2
0x9299BF: movzx   edx, word ptr [esi+4]
0x9299C3: mov     ecx, ds:0BA7D98h
0x9299C9: mov     eax, [ecx]
0x9299CB: push    24h ; '$'
0x9299CD: push    edx
0x9299CE: push    esi
0x9299CF: call    dword ptr [eax+14h]
0x9299D2: mov     eax, esi
0x9299D4: pop     esi
0x9299D5: retn    4
