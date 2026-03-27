0x74FC20: fld     [esp+arg_4]
0x74FC24: push    esi
0x74FC25: sub     esp, 8
0x74FC28: fstp    [esp+0Ch+var_8]; float
0x74FC2C: mov     esi, ecx
0x74FC2E: fld     [esp+0Ch+arg_0]
0x74FC32: fstp    [esp+0Ch+var_C]; float
0x74FC35: call    sub_6CE260
0x74FC3A: mov     ecx, [esi+48h]
0x74FC3D: test    ecx, ecx
0x74FC3F: pop     esi
0x74FC40: jz      short locret_74FC5E
0x74FC42: fld     [esp+arg_4]
0x74FC46: mov     eax, [ecx]
0x74FC48: mov     edx, [eax+84h]
0x74FC4E: sub     esp, 8
0x74FC51: fstp    [esp+8+var_4]
0x74FC55: fld     [esp+8+arg_0]
0x74FC59: fstp    [esp+8+var_8]
0x74FC5C: call    edx
0x74FC5E: retn    8
