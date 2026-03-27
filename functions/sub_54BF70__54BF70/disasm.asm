0x54BF70: mov     eax, [esp+arg_0]
0x54BF74: cmp     eax, 10h
0x54BF77: jge     short loc_54BF96
0x54BF79: mov     edx, [ecx+100h]
0x54BF7F: add     ecx, 100h
0x54BF85: push    eax
0x54BF86: mov     eax, [edx+48h]
0x54BF89: call    eax
0x54BF8B: fstp    [esp+arg_0]
0x54BF8F: fld     [esp+arg_0]
0x54BF93: retn    4
0x54BF96: fldz
0x54BF98: fstp    [esp+arg_0]
0x54BF9C: fld     [esp+arg_0]
0x54BFA0: retn    4
