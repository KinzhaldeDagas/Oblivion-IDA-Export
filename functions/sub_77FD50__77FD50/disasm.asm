0x77FD50: mov     edx, [esp+arg_0]
0x77FD54: movzx   edx, byte ptr [edx+18h]
0x77FD58: mov     eax, [ecx]
0x77FD5A: mov     eax, [eax+64h]
0x77FD5D: not     dl
0x77FD5F: push    0
0x77FD61: and     edx, 1
0x77FD64: or      edx, 2
0x77FD67: push    edx
0x77FD68: push    8
0x77FD6A: call    eax
0x77FD6C: retn    4
