0x68EA10: cmp     [esp+arg_0], 0
0x68EA15: mov     byte ptr [ecx+11h], 1
0x68EA19: jz      short locret_68EA26
0x68EA1B: fldz
0x68EA1D: push    ecx
0x68EA1E: fstp    [esp+4+var_4]
0x68EA21: call    ActiveEffect_Base_ProcessEffect
0x68EA26: retn    4
