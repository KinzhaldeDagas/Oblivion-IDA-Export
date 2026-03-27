0x8A6E10: push    esi
0x8A6E11: mov     esi, ecx
0x8A6E13: call    sub_8A6900
0x8A6E18: test    [esp+4+arg_0], 1
0x8A6E1D: jz      short loc_8A6E32
0x8A6E1F: movzx   edx, word ptr [esi+4]
0x8A6E23: mov     ecx, ds:0BA7D98h
0x8A6E29: mov     eax, [ecx]
0x8A6E2B: push    2Ah ; '*'
0x8A6E2D: push    edx
0x8A6E2E: push    esi
0x8A6E2F: call    dword ptr [eax+14h]
0x8A6E32: mov     eax, esi
0x8A6E34: pop     esi
0x8A6E35: retn    4
