0x91BF60: mov     ecx, ds:0BA7D98h
0x91BF66: mov     eax, [ecx]
0x91BF68: push    32h ; '2'
0x91BF6A: push    40h ; '@'
0x91BF6C: call    dword ptr [eax+10h]
0x91BF6F: mov     ecx, [esp+arg_0]
0x91BF73: push    ecx
0x91BF74: mov     ecx, eax
0x91BF76: mov     word ptr [eax+4], 40h ; '@'
0x91BF7C: call    sub_91BD70
0x91BF81: test    eax, eax
0x91BF83: jz      short loc_91BF89
0x91BF85: add     eax, 8
0x91BF88: retn
0x91BF89: xor     eax, eax
0x91BF8B: retn
