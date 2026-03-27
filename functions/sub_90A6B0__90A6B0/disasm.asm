0x90A6B0: push    esi
0x90A6B1: mov     esi, ecx
0x90A6B3: call    sub_90A430
0x90A6B8: test    [esp+4+arg_0], 1
0x90A6BD: jz      short loc_90A6D2
0x90A6BF: movzx   edx, word ptr [esi+4]
0x90A6C3: mov     ecx, ds:0BA7D98h
0x90A6C9: mov     eax, [ecx]
0x90A6CB: push    1Ch
0x90A6CD: push    edx
0x90A6CE: push    esi
0x90A6CF: call    dword ptr [eax+14h]
0x90A6D2: mov     eax, esi
0x90A6D4: pop     esi
0x90A6D5: retn    4
