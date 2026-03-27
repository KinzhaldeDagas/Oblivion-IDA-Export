0x714F80: sub     esp, 20h
0x714F83: mov     eax, [esp+20h+arg_10]
0x714F87: fld     [esp+20h+arg_4]
0x714F8B: mov     ecx, [esp+20h+arg_C]
0x714F8F: push    esi
0x714F90: push    eax; int
0x714F91: push    ecx; int
0x714F92: push    ecx
0x714F93: lea     edx, [esp+30h+var_20]
0x714F97: fstp    [esp+30h+var_30]; float
0x714F9A: push    edx; int
0x714F9B: call    sub_72FC00
0x714FA0: fld     [esp+34h+arg_4]
0x714FA4: mov     ecx, [esp+34h+arg_8]
0x714FA8: add     esp, 10h
0x714FAB: push    eax; int
0x714FAC: mov     eax, [esp+28h+arg_14]
0x714FB0: push    eax; int
0x714FB1: push    ecx; int
0x714FB2: push    ecx
0x714FB3: lea     edx, [esp+34h+var_10]
0x714FB7: fstp    [esp+34h+var_34]; float
0x714FBA: push    edx; int
0x714FBB: call    sub_72FC00
0x714FC0: fld     [esp+38h+arg_4]
0x714FC4: mov     esi, [esp+38h+arg_0]
0x714FC8: fld     st
0x714FCA: fld1
0x714FCC: add     esp, 10h
0x714FCF: fsubrp  st(1), st
0x714FD1: push    eax; int
0x714FD2: fxch    st(1)
0x714FD4: push    ecx
0x714FD5: fadd    st, st
0x714FD7: fmulp   st(1), st
0x714FD9: fstp    [esp+30h+arg_4]
0x714FDD: fld     [esp+30h+arg_4]
0x714FE1: fstp    [esp+30h+var_30]; float
0x714FE4: push    esi; int
0x714FE5: call    sub_72FC00
0x714FEA: add     esp, 10h
0x714FED: mov     eax, esi
0x714FEF: pop     esi
0x714FF0: add     esp, 20h
0x714FF3: retn
