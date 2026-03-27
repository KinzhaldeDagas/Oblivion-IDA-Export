0x54BFB0: mov     eax, [esp+arg_0]
0x54BFB4: cmp     eax, 10h
0x54BFB7: jge     short locret_54BFD3
0x54BFB9: fld     [esp+arg_4]
0x54BFBD: mov     edx, [ecx+0C8h]
0x54BFC3: add     ecx, 0C8h ; 'È'
0x54BFC9: push    ecx
0x54BFCA: fstp    [esp+4+var_4]
0x54BFCD: push    eax
0x54BFCE: mov     eax, [edx+4Ch]
0x54BFD1: call    eax
0x54BFD3: retn    8
