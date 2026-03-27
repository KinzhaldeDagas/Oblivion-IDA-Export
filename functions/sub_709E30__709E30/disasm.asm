0x709E30: movzx   eax, word ptr [ecx+18h]
0x709E34: mov     dl, al
0x709E36: shr     dl, 1
0x709E38: test    dl, 1
0x709E3B: jz      short locret_709E5B
0x709E3D: fld     [esp+arg_0]
0x709E41: shr     al, 4
0x709E44: push    ecx
0x709E45: test    al, 1
0x709E47: fstp    [esp+4+var_4]
0x709E4A: mov     eax, [ecx]
0x709E4C: jz      short loc_709E56
0x709E4E: mov     edx, [eax+68h]
0x709E51: call    edx
0x709E53: retn    4
0x709E56: mov     edx, [eax+64h]
0x709E59: call    edx
0x709E5B: retn    4
