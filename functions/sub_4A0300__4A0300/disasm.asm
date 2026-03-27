0x4A0300: sub     esp, 10h
0x4A0303: mov     eax, [esp+10h+arg_0]
0x4A0307: fld     dword ptr [eax+120h]
0x4A030D: push    esi
0x4A030E: mov     esi, ecx
0x4A0310: fstp    [esp+14h+var_10]
0x4A0314: cmp     byte ptr [esi+0ECh], 3
0x4A031B: jnz     short loc_4A0339
0x4A031D: fld     [esp+14h+var_10]
0x4A0321: fld     dword ptr ds:0B0762Ch
0x4A0327: fmul    dword ptr ds:0B075F0h
0x4A032D: fstp    [esp+14h+arg_0]
0x4A0331: fdiv    [esp+14h+arg_0]
0x4A0335: fstp    [esp+14h+var_10]
0x4A0339: fld     dword ptr [esi+88h]
0x4A033F: fsub    dword ptr [eax+88h]
0x4A0345: fstp    [esp+14h+var_C]
0x4A0349: fld     dword ptr [esi+8Ch]
0x4A034F: fsub    dword ptr [eax+8Ch]
0x4A0355: fstp    [esp+14h+var_8]
0x4A0359: fld     dword ptr [esi+90h]
0x4A035F: fsub    dword ptr [eax+90h]
0x4A0365: fstp    [esp+14h+var_4]
0x4A0369: fld     [esp+14h+var_8]
0x4A036D: fld     [esp+14h+var_C]
0x4A0371: fld     [esp+14h+var_4]
0x4A0375: fld     st(1)
0x4A0377: fmulp   st(2), st
0x4A0379: fld     st(2)
0x4A037B: fmulp   st(3), st
0x4A037D: fxch    st(1)
0x4A037F: faddp   st(2), st
0x4A0381: fmul    st, st
0x4A0383: faddp   st(1), st
0x4A0385: fstp    [esp+14h+arg_0]
0x4A0389: fld     [esp+14h+arg_0]
0x4A038D: call    __CIsqrt
0x4A0392: fstp    [esp+14h+arg_0]
0x4A0396: fld     [esp+14h+arg_0]
0x4A039A: fsub    dword ptr [esi+2Ch]
0x4A039D: fmul    [esp+14h+arg_4]
0x4A03A1: fstp    [esp+14h+arg_0]
0x4A03A5: fldz
0x4A03A7: fld     [esp+14h+arg_0]
0x4A03AB: fcom    st(1)
0x4A03AD: fnstsw  ax
0x4A03AF: test    ah, 5
0x4A03B2: jp      short loc_4A03C0
0x4A03B4: fstp    st
0x4A03B6: fstp    [esp+14h+arg_0]
0x4A03BA: fld     [esp+14h+arg_0]
0x4A03BE: jmp     short loc_4A03C2
0x4A03C0: fstp    st(1)
0x4A03C2: fld     [esp+14h+var_10]
0x4A03C6: fmul    st, st
0x4A03C8: fmul    st, st(1)
0x4A03CA: fmulp   st(1), st
0x4A03CC: fstp    [esp+14h+arg_0]
0x4A03D0: fld     [esp+14h+arg_0]
0x4A03D4: fld     dword ptr [esi+0E4h]
0x4A03DA: pop     esi
0x4A03DB: fcompp
0x4A03DD: fnstsw  ax
0x4A03DF: test    ah, 5
0x4A03E2: jp      short loc_4A03EC
0x4A03E4: xor     al, al
0x4A03E6: add     esp, 10h
0x4A03E9: retn    8
0x4A03EC: mov     al, 1
0x4A03EE: add     esp, 10h
0x4A03F1: retn    8
