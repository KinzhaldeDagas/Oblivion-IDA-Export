0x55AC50: mov     eax, [ecx]
0x55AC52: mov     edx, [esp+arg_10]
0x55AC56: mov     eax, [eax+24h]
0x55AC59: push    edx
0x55AC5A: call    eax
0x55AC5C: test    eax, eax
0x55AC5E: jz      short locret_55AC80
0x55AC60: fld     [esp+arg_C]
0x55AC64: mov     edx, [eax]
0x55AC66: mov     edx, [edx+4]
0x55AC69: push    ecx
0x55AC6A: mov     ecx, [esp+4+arg_8]
0x55AC6E: fstp    [esp+4+var_4]
0x55AC71: push    ecx
0x55AC72: mov     ecx, [esp+8+arg_4]
0x55AC76: push    ecx
0x55AC77: mov     ecx, [esp+0Ch+arg_0]
0x55AC7B: push    ecx
0x55AC7C: mov     ecx, eax
0x55AC7E: call    edx
0x55AC80: retn    14h
