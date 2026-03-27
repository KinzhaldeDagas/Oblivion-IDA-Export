0x919F80: mov     ecx, ds:0BA7D98h
0x919F86: mov     eax, [ecx]
0x919F88: push    32h ; '2'
0x919F8A: push    48h ; 'H'
0x919F8C: call    dword ptr [eax+10h]
0x919F8F: mov     ecx, [esp+arg_0]
0x919F93: push    ecx
0x919F94: mov     ecx, eax
0x919F96: mov     word ptr [eax+4], 48h ; 'H'
0x919F9C: call    sub_919D90
0x919FA1: test    eax, eax
0x919FA3: jz      short loc_919FA9
0x919FA5: add     eax, 8
0x919FA8: retn
0x919FA9: xor     eax, eax
0x919FAB: retn
