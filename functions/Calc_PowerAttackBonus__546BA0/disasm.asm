0x546BA0: push    ecx
0x546BA1: mov     eax, [esp+4+arg_0]
0x546BA5: fld     dword ptr ds:0B36E20h
0x546BAB: push    eax
0x546BAC: fstp    [esp+8+var_4]
0x546BB0: call    Calc_MasteryFromSkill
0x546BB5: add     esp, 4
0x546BB8: test    eax, eax
0x546BBA: jz      short loc_546C38
0x546BBC: mov     ecx, [esp+4+arg_4]
0x546BC0: add     ecx, 0FFFFFFEAh; switch 5 cases
0x546BC3: cmp     ecx, 4
0x546BC6: ja      short Calc_PowerAttackBonus___def_546BC8
0x546BC8: jmp     ds:jpt_546BC8[ecx*4]; switch jump
0x546BCF: cmp     eax, 1; jumptable 00546BC8 case 22
0x546BD2: jl      short loc_546C38
0x546BD4: mov     ecx, offset fDamagePowerAttackStandBonus
0x546BD9: call    GameSetting_GetSafeFloatPointer
0x546BDE: fld     dword ptr [eax]
0x546BE0: fstp    [esp+4+var_4]
0x546BE3: fld     [esp+4+var_4]
0x546BE6: pop     ecx
0x546BE7: retn
0x546BE8: cmp     eax, 4; jumptable 00546BC8 case 23
0x546BEB: jl      short loc_546C38
0x546BED: mov     ecx, offset fDamagePowerAttackForwardBonus
0x546BF2: call    GameSetting_GetSafeFloatPointer
0x546BF7: fld     dword ptr [eax]
0x546BF9: fstp    [esp+4+var_4]
0x546BFC: fld     [esp+4+var_4]
0x546BFF: pop     ecx
0x546C00: retn
0x546C01: cmp     eax, 3; jumptable 00546BC8 case 24
0x546C04: jl      short loc_546C38
0x546C06: mov     ecx, offset fDamagePowerAttackBackBonus
0x546C0B: call    GameSetting_GetSafeFloatPointer
0x546C10: fld     dword ptr [eax]
0x546C12: fstp    [esp+4+var_4]
0x546C15: fld     [esp+4+var_4]
0x546C18: pop     ecx
0x546C19: retn
0x546C1A: cmp     eax, 2; jumptable 00546BC8 cases 25,26
0x546C1D: jl      short loc_546C38
0x546C1F: mov     ecx, offset fDamagePowerAttackSideBonus
0x546C24: call    GameSetting_GetSafeFloatPointer
0x546C29: fld     dword ptr [eax]
0x546C2B: fstp    [esp+4+var_4]
0x546C2E: fld     [esp+4+var_4]
0x546C31: pop     ecx
0x546C32: retn
