0x784070: mov     eax, [esp+arg_0]
0x784074: mov     ecx, [eax]
0x784076: cmp     byte ptr [ecx+2Dh], 0
0x78407A: jnz     short locret_78408A
0x78407C: lea     esp, [esp+0]
0x784080: mov     eax, ecx
0x784082: mov     ecx, [eax]
0x784084: cmp     byte ptr [ecx+2Dh], 0
0x784088: jz      short loc_784080
0x78408A: retn
