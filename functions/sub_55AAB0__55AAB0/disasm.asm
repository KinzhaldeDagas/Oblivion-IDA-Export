0x55AAB0: mov     eax, [ecx]
0x55AAB2: mov     edx, [esp+arg_10]
0x55AAB6: mov     eax, [eax+24h]
0x55AAB9: push    edx
0x55AABA: call    eax
0x55AABC: test    eax, eax
0x55AABE: jz      short locret_55AAE0
0x55AAC0: fld     [esp+arg_C]
0x55AAC4: mov     edx, [eax]
0x55AAC6: mov     edx, [edx+8]
0x55AAC9: push    ecx
0x55AACA: mov     ecx, [esp+4+arg_8]
0x55AACE: fstp    [esp+4+var_4]
0x55AAD1: push    ecx
0x55AAD2: mov     ecx, [esp+8+arg_4]
0x55AAD6: push    ecx
0x55AAD7: mov     ecx, [esp+0Ch+arg_0]
0x55AADB: push    ecx
0x55AADC: mov     ecx, eax
0x55AADE: call    edx
0x55AAE0: retn    14h
