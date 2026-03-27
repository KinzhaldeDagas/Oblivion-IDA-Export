0x675D00: mov     eax, [esp+arg_0]
0x675D04: mov     eax, [ecx+eax*4+28h]
0x675D08: xor     edx, edx
0x675D0A: test    eax, eax
0x675D0C: push    esi; ArgList
0x675D0D: jz      short loc_675D2D
0x675D0F: mov     si, [esp+4+arg_4]
0x675D14: mov     ecx, [eax+4]
0x675D17: test    ecx, ecx
0x675D19: jnz     short loc_675D1F
0x675D1B: cmp     [eax], ecx
0x675D1D: jz      short loc_675D2D
0x675D1F: cmp     dx, si
0x675D22: jz      short loc_675D40
0x675D24: mov     eax, ecx
0x675D26: add     edx, 1
0x675D29: test    eax, eax
0x675D2B: jnz     short loc_675D14
0x675D2D: push    offset aWhenTryingTo_4; "When trying to get a crime by its index"...
0x675D32: call    PrintError
0x675D37: add     esp, 4
0x675D3A: xor     eax, eax
0x675D3C: pop     esi
0x675D3D: retn    8
0x675D40: mov     eax, [eax]
0x675D42: pop     esi
0x675D43: retn    8
