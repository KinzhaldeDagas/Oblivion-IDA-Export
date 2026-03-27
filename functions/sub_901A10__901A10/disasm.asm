0x901A10: push    esi
0x901A11: mov     esi, ecx
0x901A13: call    sub_9017B0
0x901A18: test    [esp+4+arg_0], 1
0x901A1D: jz      short loc_901A32
0x901A1F: movzx   edx, word ptr [esi+4]
0x901A23: mov     ecx, ds:0BA7D98h
0x901A29: mov     eax, [ecx]
0x901A2B: push    1Ch
0x901A2D: push    edx
0x901A2E: push    esi
0x901A2F: call    dword ptr [eax+14h]
0x901A32: mov     eax, esi
0x901A34: pop     esi
0x901A35: retn    4
