0x8A7AF0: push    esi
0x8A7AF1: mov     esi, ecx
0x8A7AF3: call    sub_8A7A10
0x8A7AF8: test    [esp+4+arg_0], 1
0x8A7AFD: jz      short loc_8A7B12
0x8A7AFF: movzx   edx, word ptr [esi+4]
0x8A7B03: mov     ecx, ds:0BA7D98h
0x8A7B09: mov     eax, [ecx]
0x8A7B0B: push    32h ; '2'
0x8A7B0D: push    edx
0x8A7B0E: push    esi
0x8A7B0F: call    dword ptr [eax+14h]
0x8A7B12: mov     eax, esi
0x8A7B14: pop     esi
0x8A7B15: retn    4
