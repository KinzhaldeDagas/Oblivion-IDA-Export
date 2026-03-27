0x46AA80: cmp     byte ptr [esp+arg_0], 0
0x46AA85: jz      short loc_46AA90
0x46AA87: or      dword ptr [ecx+8], 400h
0x46AA8E: jmp     short loc_46AA97
0x46AA90: and     dword ptr [ecx+8], 0FFFFFBFFh
0x46AA97: mov     eax, [ecx]
0x46AA99: mov     edx, [eax+40h]
0x46AA9C: mov     [esp+arg_0], 1
0x46AAA4: jmp     edx
