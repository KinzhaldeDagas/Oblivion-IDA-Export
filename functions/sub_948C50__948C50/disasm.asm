0x948C50: push    esi
0x948C51: mov     esi, ecx
0x948C53: call    sub_8BC000
0x948C58: test    [esp+4+arg_0], 1
0x948C5D: jz      short loc_948C72
0x948C5F: movzx   edx, word ptr [esi+4]
0x948C63: mov     ecx, ds:0BA7D98h
0x948C69: mov     eax, [ecx]
0x948C6B: push    17h
0x948C6D: push    edx
0x948C6E: push    esi
0x948C6F: call    dword ptr [eax+14h]
0x948C72: mov     eax, esi
0x948C74: pop     esi
0x948C75: retn    4
