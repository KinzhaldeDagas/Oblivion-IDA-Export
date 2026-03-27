0x55AC10: mov     eax, [ecx]
0x55AC12: mov     edx, [esp+arg_10]
0x55AC16: mov     eax, [eax+20h]
0x55AC19: push    edx
0x55AC1A: call    eax
0x55AC1C: test    eax, eax
0x55AC1E: jz      short locret_55AC40
0x55AC20: fld     [esp+arg_C]
0x55AC24: mov     edx, [eax]
0x55AC26: mov     edx, [edx+4]
0x55AC29: push    ecx
0x55AC2A: mov     ecx, [esp+4+arg_8]
0x55AC2E: fstp    [esp+4+var_4]
0x55AC31: push    ecx
0x55AC32: mov     ecx, [esp+8+arg_4]
0x55AC36: push    ecx
0x55AC37: mov     ecx, [esp+0Ch+arg_0]
0x55AC3B: push    ecx
0x55AC3C: mov     ecx, eax
0x55AC3E: call    edx
0x55AC40: retn    14h
