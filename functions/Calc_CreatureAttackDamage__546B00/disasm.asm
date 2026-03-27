0x546B00: fld     [esp+arg_0]
0x546B04: push    ecx
0x546B05: fstp    [esp+4+var_4]; float
0x546B08: call    Calc_FatigueFactor
0x546B0D: fimul   [esp+4+arg_4]
0x546B11: add     esp, 4
0x546B14: fstp    [esp+arg_4]
0x546B18: fld     [esp+arg_4]
0x546B1C: retn
