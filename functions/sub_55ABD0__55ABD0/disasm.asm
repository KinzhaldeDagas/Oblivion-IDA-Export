0x55ABD0: mov     eax, [ecx]
0x55ABD2: mov     edx, [esp+arg_10]
0x55ABD6: mov     eax, [eax+1Ch]
0x55ABD9: push    edx
0x55ABDA: call    eax
0x55ABDC: test    eax, eax
0x55ABDE: jz      short locret_55AC00
0x55ABE0: fld     [esp+arg_C]
0x55ABE4: mov     edx, [eax]
0x55ABE6: mov     edx, [edx+4]
0x55ABE9: push    ecx
0x55ABEA: mov     ecx, [esp+4+arg_8]
0x55ABEE: fstp    [esp+4+var_4]
0x55ABF1: push    ecx
0x55ABF2: mov     ecx, [esp+8+arg_4]
0x55ABF6: push    ecx
0x55ABF7: mov     ecx, [esp+0Ch+arg_0]
0x55ABFB: push    ecx
0x55ABFC: mov     ecx, eax
0x55ABFE: call    edx
0x55AC00: retn    14h
