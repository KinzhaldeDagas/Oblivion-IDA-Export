0x6C1C60: fld1
0x6C1C62: mov     edx, [esp+arg_C]
0x6C1C66: fcomp   [esp+arg_0]
0x6C1C6A: fnstsw  ax
0x6C1C6C: test    ah, 41h
0x6C1C6F: mov     eax, [esp+arg_4]
0x6C1C73: jz      short loc_6C1C79
0x6C1C75: mov     eax, [esp+arg_8]
0x6C1C79: mov     cl, [eax+4]
0x6C1C7C: mov     [edx], cl
0x6C1C7E: retn
