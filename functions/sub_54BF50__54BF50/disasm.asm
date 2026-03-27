0x54BF50: mov     eax, [esp+arg_0]
0x54BF54: cmp     eax, 11h
0x54BF57: jge     short locret_54BF6D
0x54BF59: fld     [esp+arg_4]
0x54BF5D: mov     edx, [ecx+6Ch]
0x54BF60: add     ecx, 6Ch ; 'l'
0x54BF63: push    ecx
0x54BF64: fstp    [esp+4+var_4]
0x54BF67: push    eax
0x54BF68: mov     eax, [edx+4Ch]
0x54BF6B: call    eax
0x54BF6D: retn    8
