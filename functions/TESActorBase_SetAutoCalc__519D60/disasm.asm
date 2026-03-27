0x519D60: cmp     byte ptr [ecx+4], 23h ; '#'
0x519D64: jnz     short locret_519D89
0x519D66: add     ecx, 24h ; '$'
0x519D69: cmp     byte ptr [esp+arg_0], 0
0x519D6E: jz      short loc_519D76
0x519D70: or      dword ptr [ecx+4], 10h
0x519D74: jmp     short loc_519D7A
0x519D76: and     dword ptr [ecx+4], 0FFFFFFEFh
0x519D7A: mov     eax, [ecx]
0x519D7C: mov     edx, [eax+50h]
0x519D7F: mov     [esp+arg_0], 10h
0x519D87: jmp     edx
0x519D89: retn    4
