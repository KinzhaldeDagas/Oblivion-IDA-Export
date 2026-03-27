0x8BC2B0: push    esi
0x8BC2B1: mov     esi, ecx
0x8BC2B3: call    sub_8BC2E0
0x8BC2B8: test    [esp+4+arg_0], 1
0x8BC2BD: jz      short loc_8BC2D2
0x8BC2BF: movzx   edx, word ptr [esi+4]
0x8BC2C3: mov     ecx, ds:0BA7D98h
0x8BC2C9: mov     eax, [ecx]
0x8BC2CB: push    17h
0x8BC2CD: push    edx
0x8BC2CE: push    esi
0x8BC2CF: call    dword ptr [eax+14h]
0x8BC2D2: mov     eax, esi
0x8BC2D4: pop     esi
0x8BC2D5: retn    4
