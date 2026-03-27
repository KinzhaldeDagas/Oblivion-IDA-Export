0x92B1C0: push    esi
0x92B1C1: mov     esi, ecx
0x92B1C3: call    sub_92B110
0x92B1C8: test    [esp+4+arg_0], 1
0x92B1CD: jz      short loc_92B1E2
0x92B1CF: movzx   edx, word ptr [esi+4]
0x92B1D3: mov     ecx, ds:0BA7D98h
0x92B1D9: mov     eax, [ecx]
0x92B1DB: push    24h ; '$'
0x92B1DD: push    edx
0x92B1DE: push    esi
0x92B1DF: call    dword ptr [eax+14h]
0x92B1E2: mov     eax, esi
0x92B1E4: pop     esi
0x92B1E5: retn    4
