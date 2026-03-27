0x55A9F0: mov     eax, [ecx]
0x55A9F2: mov     edx, [esp+arg_10]
0x55A9F6: mov     eax, [eax+18h]
0x55A9F9: push    edx
0x55A9FA: call    eax
0x55A9FC: test    eax, eax
0x55A9FE: jz      short locret_55AA20
0x55AA00: fld     [esp+arg_C]
0x55AA04: mov     edx, [eax]
0x55AA06: mov     edx, [edx+8]
0x55AA09: push    ecx
0x55AA0A: mov     ecx, [esp+4+arg_8]
0x55AA0E: fstp    [esp+4+var_4]
0x55AA11: push    ecx
0x55AA12: mov     ecx, [esp+8+arg_4]
0x55AA16: push    ecx
0x55AA17: mov     ecx, [esp+0Ch+arg_0]
0x55AA1B: push    ecx
0x55AA1C: mov     ecx, eax
0x55AA1E: call    edx
0x55AA20: retn    14h
