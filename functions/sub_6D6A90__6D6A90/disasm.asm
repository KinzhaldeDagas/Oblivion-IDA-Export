0x6D6A90: cmp     byte ptr [ecx+1Ch], 0
0x6D6A94: fld     [esp+arg_0]
0x6D6A98: jnz     short loc_6D6AB3
0x6D6A9A: fld     dword ptr [ecx+8]
0x6D6A9D: fld     st(1)
0x6D6A9F: fucompp
0x6D6AA1: fnstsw  ax
0x6D6AA3: test    ah, 44h
0x6D6AA6: jp      short loc_6D6AB3
0x6D6AA8: xor     eax, eax
0x6D6AAA: fstp    dword ptr [ecx+8]
0x6D6AAD: mov     [ecx+1Ch], al
0x6D6AB0: retn    4
0x6D6AB3: mov     eax, 1
0x6D6AB8: fstp    dword ptr [ecx+8]
0x6D6ABB: mov     [ecx+1Ch], al
0x6D6ABE: retn    4
