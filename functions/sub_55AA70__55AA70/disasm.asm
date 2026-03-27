0x55AA70: mov     eax, [ecx]
0x55AA72: mov     edx, [esp+arg_10]
0x55AA76: mov     eax, [eax+20h]
0x55AA79: push    edx
0x55AA7A: call    eax
0x55AA7C: test    eax, eax
0x55AA7E: jz      short locret_55AAA0
0x55AA80: fld     [esp+arg_C]
0x55AA84: mov     edx, [eax]
0x55AA86: mov     edx, [edx+8]
0x55AA89: push    ecx
0x55AA8A: mov     ecx, [esp+4+arg_8]
0x55AA8E: fstp    [esp+4+var_4]
0x55AA91: push    ecx
0x55AA92: mov     ecx, [esp+8+arg_4]
0x55AA96: push    ecx
0x55AA97: mov     ecx, [esp+0Ch+arg_0]
0x55AA9B: push    ecx
0x55AA9C: mov     ecx, eax
0x55AA9E: call    edx
0x55AAA0: retn    14h
