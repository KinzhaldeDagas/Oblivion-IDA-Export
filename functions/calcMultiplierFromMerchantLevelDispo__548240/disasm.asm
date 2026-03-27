0x548240: fild    [esp+merchantileLuckLevelArg]
0x548244: fld     qword ptr ds:0A309F0h
0x54824A: fcom    st(1)
0x54824C: fnstsw  ax
0x54824E: test    ah, 5
0x548251: jp      short loc_548257
0x548253: fstp    st(1)
0x548255: jmp     short loc_548259
0x548257: fstp    st
0x548259: fsubr   qword ptr ds:0A37478h
0x54825F: call    __CIsqrt
0x548264: fmul    dword ptr ds:0B375B8h
0x54826A: mov     ecx, [esp+disposition]
0x54826E: add     ecx, 0FFFFFFCEh
0x548271: fadd    dword ptr ds:0B375A8h
0x548277: mov     eax, 66666667h
0x54827C: imul    ecx
0x54827E: sar     edx, 2
0x548281: mov     eax, edx
0x548283: shr     eax, 1Fh
0x548286: add     eax, edx
0x548288: mov     [esp+merchantileLuckLevelArg], eax
0x54828C: fild    [esp+merchantileLuckLevelArg]
0x548290: fmul    dword ptr ds:0B37590h
0x548296: faddp   st(1), st
0x548298: fstp    [esp+merchantileLuckLevelArg]
0x54829C: fld     [esp+merchantileLuckLevelArg]
0x5482A0: fmul    qword ptr ds:0A3D8E8h
0x5482A6: fstp    [esp+merchantileLuckLevelArg]
0x5482AA: fld     [esp+merchantileLuckLevelArg]
0x5482AE: retn
