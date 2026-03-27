0x919460: push    esi
0x919461: mov     esi, ecx
0x919463: call    sub_919290
0x919468: test    [esp+4+arg_0], 1
0x91946D: jz      short loc_919482
0x91946F: movzx   edx, word ptr [esi+4]
0x919473: mov     ecx, ds:0BA7D98h
0x919479: mov     eax, [ecx]
0x91947B: push    32h ; '2'
0x91947D: push    edx
0x91947E: push    esi
0x91947F: call    dword ptr [eax+14h]
0x919482: mov     eax, esi
0x919484: pop     esi
0x919485: retn    4
