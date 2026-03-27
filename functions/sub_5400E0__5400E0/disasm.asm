0x5400E0: mov     eax, [esp+arg_4]
0x5400E4: mov     edx, ecx
0x5400E6: movzx   ecx, byte ptr [eax]
0x5400E9: mov     [esp+arg_4], ecx
0x5400ED: movzx   ecx, byte ptr [eax+4]
0x5400F1: fild    [esp+arg_4]
0x5400F5: push    esi
0x5400F6: fmul    dword ptr [eax+10h]
0x5400F9: fldz
0x5400FB: fadd    st(1), st
0x5400FD: fxch    st(1)
0x5400FF: fstp    [esp+4+arg_4]
0x540103: fld     [esp+4+arg_4]
0x540107: mov     [esp+4+arg_4], ecx
0x54010B: fild    [esp+4+arg_4]
0x54010F: movzx   ecx, byte ptr [eax+8]
0x540113: fmul    dword ptr [eax+14h]
0x540116: faddp   st(1), st
0x540118: fstp    [esp+4+arg_4]
0x54011C: fld     [esp+4+arg_4]
0x540120: mov     [esp+4+arg_4], ecx
0x540124: fild    [esp+4+arg_4]
0x540128: movzx   ecx, byte ptr [eax+0Ch]
0x54012C: fmul    dword ptr [eax+18h]
0x54012F: faddp   st(1), st
0x540131: fstp    [esp+4+arg_4]
0x540135: fld     [esp+4+arg_4]
0x540139: mov     [esp+4+arg_4], ecx
0x54013D: fild    [esp+4+arg_4]
0x540141: mov     ecx, [esp+4+arg_0]
0x540145: fmul    dword ptr [eax+1Ch]
0x540148: faddp   st(1), st
0x54014A: fstp    [esp+4+arg_4]
0x54014E: fld     [esp+4+arg_4]
0x540152: fld     qword ptr ds:0A3F398h
0x540158: fmul    st(1), st
0x54015A: fxch    st(1)
0x54015C: fstp    dword ptr [ecx]
0x54015E: movzx   esi, byte ptr [eax+1]
0x540162: mov     [esp+4+arg_4], esi
0x540166: movzx   esi, byte ptr [eax+5]
0x54016A: fild    [esp+4+arg_4]
0x54016E: fmul    dword ptr [eax+10h]
0x540171: fadd    st, st(2)
0x540173: fstp    [esp+4+arg_4]
0x540177: fld     [esp+4+arg_4]
0x54017B: mov     [esp+4+arg_4], esi
0x54017F: fild    [esp+4+arg_4]
0x540183: movzx   esi, byte ptr [eax+9]
0x540187: fmul    dword ptr [eax+14h]
0x54018A: faddp   st(1), st
0x54018C: fstp    [esp+4+arg_4]
0x540190: fld     [esp+4+arg_4]
0x540194: mov     [esp+4+arg_4], esi
0x540198: fild    [esp+4+arg_4]
0x54019C: movzx   esi, byte ptr [eax+0Dh]
0x5401A0: fmul    dword ptr [eax+18h]
0x5401A3: faddp   st(1), st
0x5401A5: fstp    [esp+4+arg_4]
0x5401A9: fld     [esp+4+arg_4]
0x5401AD: mov     [esp+4+arg_4], esi
0x5401B1: fild    [esp+4+arg_4]
0x5401B5: fmul    dword ptr [eax+1Ch]
0x5401B8: faddp   st(1), st
0x5401BA: fstp    [esp+4+arg_4]
0x5401BE: fld     [esp+4+arg_4]
0x5401C2: fmul    st, st(1)
0x5401C4: fstp    dword ptr [ecx+4]
0x5401C7: movzx   esi, byte ptr [eax+2]
0x5401CB: mov     [esp+4+arg_4], esi
0x5401CF: movzx   esi, byte ptr [eax+6]
0x5401D3: fild    [esp+4+arg_4]
0x5401D7: fmul    dword ptr [eax+10h]
0x5401DA: fadd    st, st(2)
0x5401DC: fstp    [esp+4+arg_4]
0x5401E0: fld     [esp+4+arg_4]
0x5401E4: mov     [esp+4+arg_4], esi
0x5401E8: fild    [esp+4+arg_4]
0x5401EC: fmul    dword ptr [eax+14h]
0x5401EF: faddp   st(1), st
0x5401F1: fstp    [esp+4+arg_4]
0x5401F5: fld     [esp+4+arg_4]
0x5401F9: movzx   esi, byte ptr [eax+0Ah]
0x5401FD: mov     [esp+4+arg_4], esi
0x540201: movzx   esi, byte ptr [eax+0Eh]
0x540205: fild    [esp+4+arg_4]
0x540209: fmul    dword ptr [eax+18h]
0x54020C: faddp   st(1), st
0x54020E: fstp    [esp+4+arg_4]
0x540212: fld     [esp+4+arg_4]
0x540216: mov     [esp+4+arg_4], esi
0x54021A: fild    [esp+4+arg_4]
0x54021E: pop     esi
0x54021F: fmul    dword ptr [eax+1Ch]
0x540222: faddp   st(1), st
0x540224: fstp    [esp+arg_4]
0x540228: fld     [esp+arg_4]
0x54022C: fmul    st, st(1)
0x54022E: fstp    [esp+arg_4]
0x540232: fld     [esp+arg_4]
0x540236: fst     dword ptr [ecx+8]
0x540239: fld     [esp+arg_8]
0x54023D: fld1
0x54023F: fcom    st(1)
0x540241: fnstsw  ax
0x540243: fldz
0x540245: test    ah, 5
0x540248: jp      short loc_540258
0x54024A: fstp    st(2)
0x54024C: fld1
0x54024E: fstp    [esp+arg_8]
0x540252: fld     [esp+arg_8]
0x540256: jmp     short loc_540267
0x540258: fcom    st(2)
0x54025A: fnstsw  ax
0x54025C: test    ah, 5
0x54025F: jp      loc_540365
0x540265: fxch    st(2)
0x540267: fld     dword ptr [ecx]
0x540269: fadd    st, st(1)
0x54026B: fstp    [esp+arg_8]
0x54026F: fld     [esp+arg_8]
0x540273: fst     dword ptr [ecx]
0x540275: fld     dword ptr [ecx+4]
0x540278: fadd    st, st(2)
0x54027A: fstp    dword ptr [ecx+4]
0x54027D: fxch    st(4)
0x54027F: faddp   st(1), st
0x540281: fstp    dword ptr [ecx+8]
0x540284: mov     eax, [edx+10h]
0x540287: test    eax, eax
0x540289: jz      loc_540353
0x54028F: movzx   eax, byte ptr [eax+54h]
0x540293: fsub    st, st(4)
0x540295: mov     [esp+arg_8], eax
0x540299: fild    [esp+arg_8]
0x54029D: fmul    st, st(4)
0x54029F: fmul    st, st(1)
0x5402A1: fadd    st, st(5)
0x5402A3: fstp    [esp+arg_8]
0x5402A7: fld     [esp+arg_8]
0x5402AB: fcom    st(3)
0x5402AD: fnstsw  ax
0x5402AF: test    ah, 5
0x5402B2: jp      short loc_5402BC
0x5402B4: fstp    st(3)
0x5402B6: fxch    st(2)
0x5402B8: fstp    dword ptr [ecx]
0x5402BA: jmp     short loc_5402CB
0x5402BC: fstp    st
0x5402BE: fxch    st(2)
0x5402C0: fcomp   st(1)
0x5402C2: fnstsw  ax
0x5402C4: test    ah, 5
0x5402C7: jp      short loc_5402CB
0x5402C9: fst     dword ptr [ecx]
0x5402CB: mov     eax, [edx+10h]
0x5402CE: movzx   eax, byte ptr [eax+55h]
0x5402D2: mov     [esp+arg_8], eax
0x5402D6: fild    [esp+arg_8]
0x5402DA: fmul    st, st(3)
0x5402DC: fmul    st, st(2)
0x5402DE: fadd    st, st(4)
0x5402E0: fstp    [esp+arg_8]
0x5402E4: fld     dword ptr [ecx+4]
0x5402E7: fld     [esp+arg_8]
0x5402EB: fcom    st(1)
0x5402ED: fnstsw  ax
0x5402EF: fstp    st(1)
0x5402F1: test    ah, 5
0x5402F4: jp      short loc_5402FB
0x5402F6: fstp    dword ptr [ecx+4]
0x5402F9: jmp     short loc_54030A
0x5402FB: fstp    st
0x5402FD: fcom    dword ptr [ecx+4]
0x540300: fnstsw  ax
0x540302: test    ah, 41h
0x540305: jnz     short loc_54030A
0x540307: fst     dword ptr [ecx+4]
0x54030A: mov     edx, [edx+10h]
0x54030D: movzx   eax, byte ptr [edx+56h]
0x540311: mov     [esp+arg_8], eax
0x540315: fild    [esp+arg_8]
0x540319: fmulp   st(3), st
0x54031B: fxch    st(2)
0x54031D: fmulp   st(1), st
0x54031F: faddp   st(2), st
0x540321: fxch    st(1)
0x540323: fstp    [esp+arg_8]
0x540327: fld     dword ptr [ecx+8]
0x54032A: fld     [esp+arg_8]
0x54032E: fcom    st(1)
0x540330: fnstsw  ax
0x540332: fstp    st(1)
0x540334: test    ah, 5
0x540337: jp      short loc_540341
0x540339: fstp    st(1)
0x54033B: fstp    dword ptr [ecx+8]
0x54033E: retn    0Ch
0x540341: fstp    st
0x540343: fcom    dword ptr [ecx+8]
0x540346: fnstsw  ax
0x540348: test    ah, 41h
0x54034B: jnz     short loc_540379
0x54034D: fstp    dword ptr [ecx+8]
0x540350: retn    0Ch
0x540353: fstp    st(4)
0x540355: fstp    st(2)
0x540357: fstp    st
0x540359: fstp    st(1)
0x54035B: fstp    st
0x54035D: call    sub_709340
0x540362: retn    0Ch
0x540365: fstp    st(5)
0x540367: fstp    st(3)
0x540369: fstp    st
0x54036B: fstp    st
0x54036D: fstp    st
0x54036F: fstp    st
0x540371: call    sub_709340
0x540376: retn    0Ch
0x540379: fstp    st
0x54037B: retn    0Ch
