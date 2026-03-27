0x8F7EF0: push    esi
0x8F7EF1: mov     esi, ecx
0x8F7EF3: call    sub_8F7C70
0x8F7EF8: test    [esp+4+arg_0], 1
0x8F7EFD: jz      short loc_8F7F12
0x8F7EFF: movzx   edx, word ptr [esi+4]
0x8F7F03: mov     ecx, ds:0BA7D98h
0x8F7F09: mov     eax, [ecx]
0x8F7F0B: push    1Ch
0x8F7F0D: push    edx
0x8F7F0E: push    esi
0x8F7F0F: call    dword ptr [eax+14h]
0x8F7F12: mov     eax, esi
0x8F7F14: pop     esi
0x8F7F15: retn    4
