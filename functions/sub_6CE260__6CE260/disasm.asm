0x6CE260: mov     ecx, [ecx+3Ch]
0x6CE263: test    ecx, ecx
0x6CE265: jz      short locret_6CE283
0x6CE267: fld     [esp+arg_4]
0x6CE26B: mov     eax, [ecx]
0x6CE26D: mov     edx, [eax+84h]
0x6CE273: sub     esp, 8
0x6CE276: fstp    [esp+8+var_4]
0x6CE27A: fld     [esp+8+arg_0]
0x6CE27E: fstp    [esp+8+var_8]
0x6CE281: call    edx
0x6CE283: retn    8
