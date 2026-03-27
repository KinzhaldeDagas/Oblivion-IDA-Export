0x54B3E0: sub     esp, 8
0x54B3E3: cmp     byte ptr [ecx+1DAh], 0
0x54B3EA: jz      short loc_54B402
0x54B3EC: fldz
0x54B3EE: mov     eax, [esp+8+arg_8]
0x54B3F2: mov     ecx, [esp+8+arg_C]
0x54B3F6: fst     dword ptr [eax]
0x54B3F8: fstp    dword ptr [ecx]
0x54B3FA: mov     al, 1
0x54B3FC: add     esp, 8
0x54B3FF: retn    10h
0x54B402: fld     dword ptr [ecx+1B0h]
0x54B408: fsub    dword ptr [ecx+17Ch]
0x54B40E: fstp    [esp+8+var_8]
0x54B411: fld     dword ptr [ecx+1B4h]
0x54B417: fsub    dword ptr [ecx+180h]
0x54B41D: fstp    [esp+8+var_4]
0x54B421: fld     dword ptr [ecx+1ACh]
0x54B427: fmul    [esp+8+arg_0]
0x54B42B: fmul    qword ptr ds:0A2FAA0h
0x54B431: fstp    [esp+8+arg_0]
0x54B435: fld     [esp+8+arg_0]
0x54B439: fld     st
0x54B43B: fchs
0x54B43D: fstp    [esp+8+arg_0]
0x54B441: fld     [esp+8+arg_0]
0x54B445: fst     [esp+8+arg_0]
0x54B449: fld     [esp+8+var_8]
0x54B44C: fcom    st(2)
0x54B44E: fnstsw  ax
0x54B450: test    ah, 41h
0x54B453: jnz     short loc_54B45E
0x54B455: fstp    st
0x54B457: fxch    st(1)
0x54B459: fst     [esp+8+var_8]
0x54B45C: jmp     short loc_54B476
0x54B45E: fld     [esp+8+arg_0]
0x54B462: fcom    st(1)
0x54B464: fnstsw  ax
0x54B466: fstp    st(1)
0x54B468: test    ah, 41h
0x54B46B: jnz     short loc_54B472
0x54B46D: fstp    [esp+8+var_8]
0x54B470: jmp     short loc_54B474
0x54B472: fstp    st
0x54B474: fxch    st(1)
0x54B476: fxch    st(1)
0x54B478: fstp    [esp+8+arg_0]
0x54B47C: fld     [esp+8+var_4]
0x54B480: fcom    st(1)
0x54B482: fnstsw  ax
0x54B484: test    ah, 41h
0x54B487: jnz     short loc_54B491
0x54B489: fstp    st
0x54B48B: fstp    [esp+8+var_4]
0x54B48F: jmp     short loc_54B4AA
0x54B491: fstp    st(1)
0x54B493: fld     [esp+8+arg_0]
0x54B497: fcom    st(1)
0x54B499: fnstsw  ax
0x54B49B: fstp    st(1)
0x54B49D: test    ah, 41h
0x54B4A0: jnz     short loc_54B4A8
0x54B4A2: fstp    [esp+8+var_4]
0x54B4A6: jmp     short loc_54B4AA
0x54B4A8: fstp    st
0x54B4AA: fld     dword ptr [ecx+17Ch]
0x54B4B0: fadd    [esp+8+var_8]
0x54B4B3: fstp    dword ptr [ecx+17Ch]
0x54B4B9: fld     [esp+8+var_4]
0x54B4BD: fadd    dword ptr [ecx+180h]
0x54B4C3: fstp    dword ptr [ecx+180h]
0x54B4C9: fld     dword ptr [ecx+17Ch]
0x54B4CF: fcomp   qword ptr ds:0A4D918h
0x54B4D5: fnstsw  ax
0x54B4D7: test    ah, 41h
0x54B4DA: jnz     short loc_54B4E4
0x54B4DC: fld     dword ptr ds:0A56054h
0x54B4E2: jmp     short loc_54B4FD
0x54B4E4: fld     dword ptr [ecx+17Ch]
0x54B4EA: fcomp   qword ptr ds:0A64220h
0x54B4F0: fnstsw  ax
0x54B4F2: test    ah, 5
0x54B4F5: jp      short loc_54B503
0x54B4F7: fld     dword ptr ds:0A57264h
0x54B4FD: fstp    dword ptr [ecx+17Ch]
0x54B503: fld     dword ptr [ecx+180h]
0x54B509: fcomp   qword ptr ds:0A64218h
0x54B50F: fnstsw  ax
0x54B511: test    ah, 41h
0x54B514: jnz     short loc_54B51E
0x54B516: fld     dword ptr ds:0A64210h
0x54B51C: jmp     short loc_54B537
0x54B51E: fld     dword ptr [ecx+180h]
0x54B524: fcomp   qword ptr ds:0A64208h
0x54B52A: fnstsw  ax
0x54B52C: test    ah, 5
0x54B52F: jp      short loc_54B53D
0x54B531: fld     dword ptr ds:0A64200h
0x54B537: fstp    dword ptr [ecx+180h]
0x54B53D: fld     dword ptr [ecx+17Ch]
0x54B543: mov     edx, [esp+8+arg_8]
0x54B547: mov     eax, [esp+8+arg_C]
0x54B54B: fstp    dword ptr [edx]
0x54B54D: fld     dword ptr [ecx+180h]
0x54B553: fstp    dword ptr [eax]
0x54B555: mov     al, 1
0x54B557: add     esp, 8
0x54B55A: retn    10h
