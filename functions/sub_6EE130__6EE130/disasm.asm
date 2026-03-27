0x6EE130: push    ecx
0x6EE131: fld     [esp+4+arg_4]
0x6EE135: push    esi
0x6EE136: fld1
0x6EE138: mov     esi, [esp+8+arg_0]
0x6EE13C: fdivrp  st(1), st
0x6EE13E: push    ecx
0x6EE13F: mov     [esp+0Ch+var_4], 0
0x6EE147: fstp    [esp+0Ch+arg_4]
0x6EE14B: fld     [esp+0Ch+arg_4]
0x6EE14F: fstp    [esp+0Ch+var_C]; float
0x6EE152: push    esi; int
0x6EE153: call    sub_552310
0x6EE158: mov     eax, esi
0x6EE15A: pop     esi
0x6EE15B: pop     ecx
0x6EE15C: retn    8
