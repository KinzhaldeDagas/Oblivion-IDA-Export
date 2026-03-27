0x906360: push    esi
0x906361: mov     esi, ecx
0x906363: call    sub_906210
0x906368: test    [esp+4+arg_0], 1
0x90636D: jz      short loc_906382
0x90636F: movzx   edx, word ptr [esi+4]
0x906373: mov     ecx, ds:0BA7D98h
0x906379: mov     eax, [ecx]
0x90637B: push    1Ch
0x90637D: push    edx
0x90637E: push    esi
0x90637F: call    dword ptr [eax+14h]
0x906382: mov     eax, esi
0x906384: pop     esi
0x906385: retn    4
