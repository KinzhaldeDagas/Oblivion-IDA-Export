0x75ED20: mov     ecx, [ecx+28h]
0x75ED23: test    ecx, ecx
0x75ED25: jz      short loc_75ED49
0x75ED27: mov     edx, [esp+arg_C]
0x75ED2B: fld     [esp+arg_0]
0x75ED2F: mov     eax, [ecx]
0x75ED31: mov     eax, [eax+4Ch]
0x75ED34: push    edx
0x75ED35: mov     edx, [esp+4+arg_8]
0x75ED39: push    edx
0x75ED3A: mov     edx, [esp+8+arg_4]
0x75ED3E: push    edx
0x75ED3F: push    ecx
0x75ED40: fstp    [esp+10h+var_10]
0x75ED43: call    eax
0x75ED45: test    eax, eax
0x75ED47: jnz     short locret_75ED4B
0x75ED49: xor     eax, eax
0x75ED4B: retn    10h
