0x4A02A0: push    ecx
0x4A02A1: fild    dword ptr ds:0B07280h
0x4A02A7: fstp    [esp+4+var_4]
0x4A02AA: fld     [esp+4+arg_0]
0x4A02AE: fld     [esp+4+var_4]
0x4A02B1: fcom    st(1)
0x4A02B3: fnstsw  ax
0x4A02B5: fstp    st(1)
0x4A02B7: test    ah, 41h
0x4A02BA: jnz     short loc_4A02D9
0x4A02BC: fst     [esp+4+arg_0]
0x4A02C0: fmul    qword ptr ds:0A3FA98h
0x4A02C6: fld     [esp+4+arg_4]
0x4A02CA: fcomp   st(1)
0x4A02CC: fnstsw  ax
0x4A02CE: test    ah, 5
0x4A02D1: jp      short loc_4A02D9
0x4A02D3: fstp    [esp+4+arg_4]
0x4A02D7: jmp     short loc_4A02DB
0x4A02D9: fstp    st
0x4A02DB: fld     [esp+4+arg_0]
0x4A02DF: fmul    st, st
0x4A02E1: fstp    dword ptr [ecx+0E0h]
0x4A02E7: fld     [esp+4+arg_4]
0x4A02EB: fmul    st, st
0x4A02ED: fstp    dword ptr [ecx+0E4h]
0x4A02F3: pop     ecx
0x4A02F4: retn    8
