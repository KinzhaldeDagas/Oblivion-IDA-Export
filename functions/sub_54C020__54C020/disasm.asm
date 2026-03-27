0x54C020: mov     eax, [esp+arg_0]
0x54C024: cmp     eax, 1
0x54C027: jge     short locret_54C043
0x54C029: fld     [esp+arg_4]
0x54C02D: mov     edx, [ecx+124h]
0x54C033: add     ecx, 124h
0x54C039: push    ecx
0x54C03A: fstp    [esp+4+var_4]
0x54C03D: push    eax
0x54C03E: mov     eax, [edx+4Ch]
0x54C041: call    eax
0x54C043: retn    8
