0x54BF10: mov     eax, [esp+arg_0]
0x54BF14: cmp     eax, 11h
0x54BF17: jge     short loc_54BF36
0x54BF19: mov     edx, [ecx+0A4h]
0x54BF1F: add     ecx, 0A4h ; '¤'
0x54BF25: push    eax
0x54BF26: mov     eax, [edx+48h]
0x54BF29: call    eax
0x54BF2B: fstp    [esp+arg_0]
0x54BF2F: fld     [esp+arg_0]
0x54BF33: retn    4
0x54BF36: fldz
0x54BF38: fstp    [esp+arg_0]
0x54BF3C: fld     [esp+arg_0]
0x54BF40: retn    4
