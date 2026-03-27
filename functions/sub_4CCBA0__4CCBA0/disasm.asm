0x4CCBA0: cmp     [esp+arg_0], 0
0x4CCBA5: mov     eax, [ecx+8]
0x4CCBA8: jz      short loc_4CCBB5
0x4CCBAA: or      eax, 400h
0x4CCBAF: mov     [ecx+8], eax
0x4CCBB2: retn    4
0x4CCBB5: and     eax, 0FFFFFBFFh
0x4CCBBA: mov     [ecx+8], eax
0x4CCBBD: retn    4
