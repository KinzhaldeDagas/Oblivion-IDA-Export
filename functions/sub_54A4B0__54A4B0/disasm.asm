0x54A4B0: push    ecx
0x54A4B1: fld     dword ptr ds:0B39B00h
0x54A4B7: mov     ecx, [esp+4+arg_0]
0x54A4BB: fld     qword ptr ds:0A31C78h
0x54A4C1: fmul    st(1), st
0x54A4C3: fxch    st(1)
0x54A4C5: fstp    [esp+4+var_4]
0x54A4C8: fld     [esp+4+var_4]
0x54A4CB: fst     dword ptr [ecx]
0x54A4CD: fldz
0x54A4CF: fcom    st(1)
0x54A4D1: fnstsw  ax
0x54A4D3: fstp    st(1)
0x54A4D5: test    ah, 5
0x54A4D8: jp      short loc_54A4DC
0x54A4DA: fst     dword ptr [ecx]
0x54A4DC: fld     dword ptr [ecx]
0x54A4DE: fcomp   qword ptr ds:0A641E8h
0x54A4E4: fnstsw  ax
0x54A4E6: test    ah, 5
0x54A4E9: jp      short loc_54A4F3
0x54A4EB: fld     dword ptr ds:0A3721Ch
0x54A4F1: fstp    dword ptr [ecx]
0x54A4F3: fld     dword ptr ds:0B39B08h
0x54A4F9: mov     ecx, [esp+4+arg_4]
0x54A4FD: fmulp   st(2), st
0x54A4FF: fxch    st(1)
0x54A501: fstp    [esp+4+arg_0]
0x54A505: fld     [esp+4+arg_0]
0x54A509: fst     dword ptr [ecx]
0x54A50B: fcomp   st(1)
0x54A50D: fnstsw  ax
0x54A50F: test    ah, 5
0x54A512: jp      short loc_54A518
0x54A514: fstp    dword ptr [ecx]
0x54A516: jmp     short loc_54A51A
0x54A518: fstp    st
0x54A51A: fld     dword ptr [ecx]
0x54A51C: fcomp   qword ptr ds:0A641E0h
0x54A522: fnstsw  ax
0x54A524: test    ah, 41h
0x54A527: jnz     short loc_54A531
0x54A529: fld     dword ptr ds:0A3F3E0h
0x54A52F: fstp    dword ptr [ecx]
0x54A531: pop     ecx
0x54A532: retn
