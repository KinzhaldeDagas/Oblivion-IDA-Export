0x5481C0: fild    [esp+arg_0]
0x5481C4: sub     esp, 8
0x5481C7: fld     qword ptr ds:0A309F0h
0x5481CD: fcom    st(1)
0x5481CF: fnstsw  ax
0x5481D1: test    ah, 5
0x5481D4: jp      short loc_5481DA
0x5481D6: fstp    st(1)
0x5481D8: jmp     short loc_5481DC
0x5481DA: fstp    st
0x5481DC: fld     dword ptr ds:0B375A0h
0x5481E2: fstp    [esp+8+var_8]
0x5481E5: fsubr   qword ptr ds:0A37478h
0x5481EB: call    __CIsqrt
0x5481F0: fmul    dword ptr ds:0B375B0h
0x5481F6: mov     ecx, [esp+8+arg_4]
0x5481FA: add     ecx, 0FFFFFFCEh
0x5481FD: fsubr   [esp+8+var_8]
0x548200: mov     eax, 66666667h
0x548205: imul    ecx
0x548207: sar     edx, 2
0x54820A: mov     eax, edx
0x54820C: shr     eax, 1Fh
0x54820F: add     eax, edx
0x548211: mov     [esp+8+arg_0], eax
0x548215: fild    [esp+8+arg_0]
0x548219: fmul    dword ptr ds:0B37590h
0x54821F: fsubp   st(1), st
0x548221: fstp    [esp+8+arg_0]
0x548225: fld     [esp+8+arg_0]
0x548229: fmul    qword ptr ds:0A3D8E8h
0x54822F: fstp    [esp+8+arg_0]
0x548233: fld     [esp+8+arg_0]
0x548237: add     esp, 8
0x54823A: retn
