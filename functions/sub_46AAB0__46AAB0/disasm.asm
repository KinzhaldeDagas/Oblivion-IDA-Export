0x46AAB0: cmp     byte ptr [esp+arg_0], 0
0x46AAB5: jz      short loc_46AABD
0x46AAB7: or      dword ptr [ecx+8], 40h
0x46AABB: jmp     short loc_46AAC1
0x46AABD: and     dword ptr [ecx+8], 0FFFFFFBFh
0x46AAC1: mov     eax, [ecx]
0x46AAC3: mov     edx, [eax+40h]
0x46AAC6: mov     [esp+arg_0], 1
0x46AACE: jmp     edx
