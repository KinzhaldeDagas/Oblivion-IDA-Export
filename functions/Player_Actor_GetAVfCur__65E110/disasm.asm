0x65E110: mov     edx, [esp+arg_0]
0x65E114: sub     esp, 8
0x65E117: cmp     edx, 0Bh
0x65E11A: jnz     short loc_65E157
0x65E11C: fld     dword ptr [ecx+230h]
0x65E122: fstp    [esp+8+arg_0]
0x65E126: fld     dword ptr [ecx+350h]
0x65E12C: fstp    [esp+8+var_8]
0x65E12F: fld     dword ptr [ecx+47Ch]
0x65E135: fstp    [esp+8+var_4]
0x65E139: call    sub_4D8FB0
0x65E13E: fadd    [esp+8+arg_0]
0x65E142: fadd    [esp+8+var_8]
0x65E145: fadd    [esp+8+var_4]
0x65E149: fstp    [esp+8+arg_0]
0x65E14D: fld     [esp+8+arg_0]
0x65E151: add     esp, 8
0x65E154: retn    4
0x65E157: fld     dword ptr [ecx+edx*4+204h]
0x65E15E: mov     eax, edx
0x65E160: sub     eax, 8
0x65E163: fstp    [esp+8+var_4]
0x65E167: fld     dword ptr [ecx+edx*4+324h]
0x65E16E: fstp    [esp+8+var_8]
0x65E171: jz      short loc_65E196
0x65E173: sub     eax, 1
0x65E176: jz      short loc_65E18E
0x65E178: sub     eax, 1
0x65E17B: jz      short loc_65E186
0x65E17D: fld     dword ptr [ecx+edx*4+450h]
0x65E184: jmp     short loc_65E19C
0x65E186: fld     dword ptr [ecx+44Ch]
0x65E18C: jmp     short loc_65E19C
0x65E18E: fld     dword ptr [ecx+448h]
0x65E194: jmp     short loc_65E19C
0x65E196: fld     dword ptr [ecx+444h]
0x65E19C: push    edx
0x65E19D: fstp    [esp+0Ch+arg_0]
0x65E1A1: call    Actor_GetBaseCalcAVf
0x65E1A6: fadd    [esp+8+var_4]
0x65E1AA: fadd    [esp+8+var_8]
0x65E1AD: fadd    [esp+8+arg_0]
0x65E1B1: fstp    [esp+8+arg_0]
0x65E1B5: fld     [esp+8+arg_0]
0x65E1B9: add     esp, 8
0x65E1BC: retn    4
