0x68A720: push    ecx
0x68A721: fldz
0x68A723: mov     ecx, [ecx+4]
0x68A726: push    esi
0x68A727: fstp    [esp+8+var_4]
0x68A72B: mov     esi, [esp+8+arg_0]
0x68A72F: test    esi, esi
0x68A731: jz      short loc_68A748
0x68A733: test    ecx, ecx
0x68A735: jz      short loc_68A748
0x68A737: call    sub_68B110
0x68A73C: push    eax
0x68A73D: mov     ecx, esi
0x68A73F: call    sub_4D7E30
0x68A744: fstp    [esp+8+var_4]
0x68A748: fld     [esp+8+var_4]
0x68A74C: pop     esi
0x68A74D: pop     ecx
0x68A74E: retn    4
