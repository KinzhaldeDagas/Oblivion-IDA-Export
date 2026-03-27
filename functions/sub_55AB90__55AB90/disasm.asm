0x55AB90: mov     eax, [ecx]
0x55AB92: mov     edx, [esp+arg_10]
0x55AB96: mov     eax, [eax+18h]
0x55AB99: push    edx
0x55AB9A: call    eax
0x55AB9C: test    eax, eax
0x55AB9E: jz      short locret_55ABC0
0x55ABA0: fld     [esp+arg_C]
0x55ABA4: mov     edx, [eax]
0x55ABA6: mov     edx, [edx+4]
0x55ABA9: push    ecx
0x55ABAA: mov     ecx, [esp+4+arg_8]
0x55ABAE: fstp    [esp+4+var_4]
0x55ABB1: push    ecx
0x55ABB2: mov     ecx, [esp+8+arg_4]
0x55ABB6: push    ecx
0x55ABB7: mov     ecx, [esp+0Ch+arg_0]
0x55ABBB: push    ecx
0x55ABBC: mov     ecx, eax
0x55ABBE: call    edx
0x55ABC0: retn    14h
