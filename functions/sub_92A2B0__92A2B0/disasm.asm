0x92A2B0: push    esi
0x92A2B1: mov     esi, ecx
0x92A2B3: call    sub_90C880
0x92A2B8: test    [esp+4+arg_0], 1
0x92A2BD: jz      short loc_92A2D2
0x92A2BF: movzx   edx, word ptr [esi+4]
0x92A2C3: mov     ecx, ds:0BA7D98h
0x92A2C9: mov     eax, [ecx]
0x92A2CB: push    24h ; '$'
0x92A2CD: push    edx
0x92A2CE: push    esi
0x92A2CF: call    dword ptr [eax+14h]
0x92A2D2: mov     eax, esi
0x92A2D4: pop     esi
0x92A2D5: retn    4
