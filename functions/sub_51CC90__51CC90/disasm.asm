0x51CC90: cmp     byte ptr [esp+arg_0], 0
0x51CC95: jz      short loc_51CCA0
0x51CC97: or      dword ptr [ecx+4], 800h
0x51CC9E: jmp     short loc_51CCA7
0x51CCA0: and     dword ptr [ecx+4], 0FFFFF7FFh
0x51CCA7: mov     eax, [ecx]
0x51CCA9: mov     edx, [eax+50h]
0x51CCAC: mov     [esp+arg_0], 10h
0x51CCB4: jmp     edx
