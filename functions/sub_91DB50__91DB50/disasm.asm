0x91DB50: lea     eax, [ecx-20h]
0x91DB53: test    eax, eax
0x91DB55: jz      short loc_91DB67
0x91DB57: lea     eax, [ecx+8]
0x91DB5A: mov     ecx, [esp+arg_0]
0x91DB5E: push    eax
0x91DB5F: call    sub_899D60
0x91DB64: retn    4
0x91DB67: mov     ecx, [esp+arg_0]
0x91DB6B: xor     eax, eax
0x91DB6D: push    eax
0x91DB6E: call    sub_899D60
0x91DB73: retn    4
