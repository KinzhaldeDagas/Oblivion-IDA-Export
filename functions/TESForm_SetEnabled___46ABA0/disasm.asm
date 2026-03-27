0x46ABA0: cmp     [esp+arg_0], 0
0x46ABA5: jz      short loc_46ABB0
0x46ABA7: or      dword ptr [ecx+8], 800h
0x46ABAE: jmp     short loc_46ABB7
0x46ABB0: and     dword ptr [ecx+8], 0FFFFF7FFh
0x46ABB7: mov     eax, [ecx]
0x46ABB9: mov     edx, [eax+40h]
0x46ABBC: mov     dword ptr [esp+arg_0], 40000001h
0x46ABC4: jmp     edx
