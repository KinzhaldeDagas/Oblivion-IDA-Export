0x54BEF0: mov     eax, [esp+arg_0]
0x54BEF4: cmp     eax, 0Dh
0x54BEF7: jge     short locret_54BF0D
0x54BEF9: fld     [esp+arg_4]
0x54BEFD: mov     edx, [ecx+10h]
0x54BF00: add     ecx, 10h
0x54BF03: push    ecx
0x54BF04: fstp    [esp+4+var_4]
0x54BF07: push    eax
0x54BF08: mov     eax, [edx+4Ch]
0x54BF0B: call    eax
0x54BF0D: retn    8
