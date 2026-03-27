0x6F6A10: push    ebp
0x6F6A11: mov     ebp, esp
0x6F6A13: and     esp, 0FFFFFFF8h
0x6F6A16: sub     esp, 0Ch
0x6F6A19: cmp     byte ptr ds:0B3F058h, 0
0x6F6A20: push    esi
0x6F6A21: jnz     short loc_6F6A3A
0x6F6A23: push    0; Time
0x6F6A25: call    __time64
0x6F6A2A: push    eax; Seed
0x6F6A2B: call    _srand
0x6F6A30: add     esp, 8
0x6F6A33: mov     byte ptr ds:0B3F058h, 1
0x6F6A3A: fldz
0x6F6A3C: mov     esi, 4
0x6F6A41: fstp    [esp+10h+var_8]
0x6F6A45: jmp     short loc_6F6A49
0x6F6A47: fstp    st
0x6F6A49: call    _rand
0x6F6A4E: sub     esi, 1
0x6F6A51: mov     [esp+10h+var_C], eax
0x6F6A55: fild    [esp+10h+var_C]
0x6F6A59: fld     [esp+10h+var_8]
0x6F6A5D: fmul    qword ptr ds:0A47A50h
0x6F6A63: faddp   st(1), st
0x6F6A65: fst     [esp+10h+var_8]
0x6F6A69: jnz     short loc_6F6A47
0x6F6A6B: fmul    qword ptr ds:0A7CDD8h
0x6F6A71: pop     esi
0x6F6A72: mov     esp, ebp
0x6F6A74: pop     ebp
0x6F6A75: retn
