0x5E0D20: mov     eax, [ecx]
0x5E0D22: mov     edx, [eax+288h]
0x5E0D28: push    0
0x5E0D2A: call    edx
0x5E0D2C: push    ecx
0x5E0D2D: fstp    [esp+4+var_4]; float
0x5E0D30: call    Calc_ActorBaseEncumbrance
0x5E0D35: add     esp, 4
0x5E0D38: retn
