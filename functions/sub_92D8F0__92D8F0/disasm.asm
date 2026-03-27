0x92D8F0: push    ebp
0x92D8F1: mov     ebp, esp
0x92D8F3: and     esp, 0FFFFFFF0h
0x92D8F6: sub     esp, 20h
0x92D8F9: mov     eax, [ebp+arg_4]
0x92D8FC: mov     ecx, [ebp+arg_C]
0x92D8FF: fld     dword ptr [eax]
0x92D901: fsub    dword ptr [ecx]
0x92D903: mov     edx, [ebp+arg_0]
0x92D906: fstp    dword ptr [esp+20h+var_10]
0x92D90A: fld     dword ptr [eax+4]
0x92D90D: fsub    dword ptr [ecx+4]
0x92D910: fstp    dword ptr [esp+20h+var_10+4]
0x92D914: fld     dword ptr [eax+8]
0x92D917: fsub    dword ptr [ecx+8]
0x92D91A: fstp    dword ptr [esp+20h+var_10+8]
0x92D91E: fld     dword ptr [eax+0Ch]
0x92D921: lea     eax, [esp+20h+var_14]
0x92D925: fsub    dword ptr [ecx+0Ch]
0x92D928: fstp    dword ptr [esp+20h+var_10+0Ch]
0x92D92C: movaps  xmm5, [esp+20h+var_10]
0x92D931: movaps  xmm0, xmm5
0x92D934: mulps   xmm0, xmm5
0x92D937: movaps  xmm1, xmm0
0x92D93A: shufps  xmm1, xmm0, 55h ; 'U'
0x92D93E: movaps  xmm2, xmm0
0x92D941: addss   xmm1, xmm0
0x92D945: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x92D949: addss   xmm2, xmm1
0x92D94D: movss   dword ptr [eax], xmm2
0x92D951: fld     [esp+20h+var_14]
0x92D955: fcomp   dword ptr [edx+8]
0x92D958: fnstsw  ax
0x92D95A: test    ah, 5
0x92D95D: jp      short loc_92D969
0x92D95F: fld     dword ptr ds:0A2FAA8h
0x92D965: mov     esp, ebp
0x92D967: pop     ebp
0x92D968: retn
0x92D969: mov     eax, [ebp+arg_8]
0x92D96C: movaps  xmm1, xmm0
0x92D96F: shufps  xmm1, xmm0, 55h ; 'U'
0x92D973: addss   xmm1, xmm0
0x92D977: movaps  xmm2, xmm0
0x92D97A: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x92D97E: movaps  xmm0, xmm2
0x92D981: addss   xmm0, xmm1
0x92D985: movaps  [esp+20h+var_10], xmm0
0x92D98A: rsqrtss xmm1, xmm0
0x92D98E: movss   dword ptr [esp+20h+var_10], xmm1
0x92D994: movaps  xmm1, [esp+20h+var_10]
0x92D999: mulss   xmm0, xmm1
0x92D99D: mulss   xmm0, xmm1
0x92D9A1: mov     [esp+20h+var_14], 40400000h
0x92D9A9: movss   xmm2, [esp+20h+var_14]
0x92D9AF: mov     [esp+20h+var_14], 3F000000h
0x92D9B7: movss   xmm3, [esp+20h+var_14]
0x92D9BD: movaps  xmm4, xmm2
0x92D9C0: subss   xmm4, xmm0
0x92D9C4: movaps  xmm0, xmm3
0x92D9C7: mulss   xmm0, xmm1
0x92D9CB: mulss   xmm0, xmm4
0x92D9CF: movaps  xmm1, xmm0
0x92D9D2: shufps  xmm1, xmm0, 0
0x92D9D6: movaps  xmm4, xmm1
0x92D9D9: movaps  xmm1, xmmword ptr [eax]
0x92D9DC: mulps   xmm4, xmm5
0x92D9DF: movaps  xmm0, xmm1
0x92D9E2: mulps   xmm0, xmm4
0x92D9E5: movaps  xmm5, xmm0
0x92D9E8: shufps  xmm5, xmm0, 55h ; 'U'
0x92D9EC: addss   xmm5, xmm0
0x92D9F0: movaps  xmm6, xmm0
0x92D9F3: shufps  xmm6, xmm0, 0AAh ; 'ª'
0x92D9F7: addss   xmm6, xmm5
0x92D9FB: lea     eax, [esp+20h+var_14]
0x92D9FF: movss   dword ptr [eax], xmm6
0x92DA03: fld     [esp+20h+var_14]
0x92DA07: mov     eax, [ebp+arg_10]
0x92DA0A: fchs
0x92DA0C: fstp    [esp+20h+var_1C]
0x92DA10: movaps  xmm0, xmm1
0x92DA13: fld     dword ptr [ecx]
0x92DA15: shufps  xmm0, xmm1, 0C9h ; 'É'
0x92DA19: fsub    dword ptr [eax]
0x92DA1B: movaps  xmm5, xmm0
0x92DA1E: fstp    dword ptr [esp+20h+var_10]
0x92DA22: fld     dword ptr [ecx+4]
0x92DA25: fsub    dword ptr [eax+4]
0x92DA28: fstp    dword ptr [esp+20h+var_10+4]
0x92DA2C: fld     dword ptr [ecx+8]
0x92DA2F: fsub    dword ptr [eax+8]
0x92DA32: fstp    dword ptr [esp+20h+var_10+8]
0x92DA36: fld     dword ptr [ecx+0Ch]
0x92DA39: fsub    dword ptr [eax+0Ch]
0x92DA3C: fstp    dword ptr [esp+20h+var_10+0Ch]
0x92DA40: movaps  xmm0, [esp+20h+var_10]
0x92DA45: movaps  xmm6, xmm0
0x92DA48: shufps  xmm6, xmm0, 0D2h ; 'Ò'
0x92DA4C: mulps   xmm6, xmm5
0x92DA4F: movaps  xmm5, xmm1
0x92DA52: shufps  xmm5, xmm1, 0D2h ; 'Ò'
0x92DA56: movaps  xmm1, xmm0
0x92DA59: shufps  xmm1, xmm0, 0C9h ; 'É'
0x92DA5D: mulps   xmm1, xmm5
0x92DA60: subps   xmm1, xmm6
0x92DA63: movaps  xmm0, xmm1
0x92DA66: mulps   xmm0, xmm1
0x92DA69: movaps  xmm5, xmm0
0x92DA6C: shufps  xmm5, xmm0, 55h ; 'U'
0x92DA70: addss   xmm5, xmm0
0x92DA74: movaps  xmm6, xmm0
0x92DA77: shufps  xmm6, xmm0, 0AAh ; 'ª'
0x92DA7B: movaps  xmm0, xmm6
0x92DA7E: addss   xmm0, xmm5
0x92DA82: movaps  [esp+20h+var_10], xmm0
0x92DA87: rsqrtss xmm5, xmm0
0x92DA8B: movss   dword ptr [esp+20h+var_10], xmm5
0x92DA91: movaps  xmm5, [esp+20h+var_10]
0x92DA96: mulss   xmm0, xmm5
0x92DA9A: mulss   xmm0, xmm5
0x92DA9E: subss   xmm2, xmm0
0x92DAA2: mulss   xmm3, xmm5
0x92DAA6: mulss   xmm3, xmm2
0x92DAAA: movaps  xmm0, xmm3
0x92DAAD: shufps  xmm0, xmm3, 0
0x92DAB1: mulps   xmm0, xmm1
0x92DAB4: mulps   xmm0, xmm4
0x92DAB7: movaps  xmm1, xmm0
0x92DABA: shufps  xmm1, xmm0, 55h ; 'U'
0x92DABE: movaps  xmm2, xmm0
0x92DAC1: addss   xmm1, xmm0
0x92DAC5: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x92DAC9: lea     ecx, [esp+20h+var_20]
0x92DACC: addss   xmm2, xmm1
0x92DAD0: movss   dword ptr [ecx], xmm2
0x92DAD4: fld     [esp+20h+var_20]
0x92DAD7: fmul    [esp+20h+var_20]
0x92DADA: fld     [esp+20h+var_1C]
0x92DADE: fmul    [esp+20h+var_1C]
0x92DAE2: faddp   st(1), st
0x92DAE4: fcomp   dword ptr [edx+8]
0x92DAE7: fnstsw  ax
0x92DAE9: test    ah, 5
0x92DAEC: jp      short loc_92DAF8
0x92DAEE: fld     dword ptr ds:0AA1C50h
0x92DAF4: mov     esp, ebp
0x92DAF6: pop     ebp
0x92DAF7: retn
0x92DAF8: fld     [esp+20h+var_1C]
0x92DAFC: mov     edx, [edx+30h]
0x92DAFF: fabs
0x92DB01: mov     [esp+20h+var_14], edx
0x92DB05: fst     [esp+20h+var_18]
0x92DB09: fcomp   dword ptr ds:0A372CCh
0x92DB0F: fnstsw  ax
0x92DB11: test    ah, 5
0x92DB14: jp      short loc_92DB47
0x92DB16: fld     [esp+20h+var_20]
0x92DB19: fabs
0x92DB1B: fcomp   dword ptr ds:0AA1C44h
0x92DB21: fnstsw  ax
0x92DB23: test    ah, 5
0x92DB26: jp      short loc_92DB47
0x92DB28: fld     [esp+20h+var_20]
0x92DB2B: fcomp   dword ptr ds:0A2FAA8h
0x92DB31: fnstsw  ax
0x92DB33: test    ah, 5
0x92DB36: jp      loc_92DBE7
0x92DB3C: fld     dword ptr ds:0A46B10h
0x92DB42: jmp     loc_92DC20
0x92DB47: fld     [esp+20h+var_20]
0x92DB4A: fabs
0x92DB4C: fcomp   [esp+20h+var_18]
0x92DB50: fnstsw  ax
0x92DB52: test    ah, 5
0x92DB55: jp      short loc_92DB84
0x92DB57: fld     [esp+20h+var_20]
0x92DB5A: fdiv    [esp+20h+var_1C]
0x92DB5E: fsubr   dword ptr ds:0A379B4h
0x92DB64: fld     [esp+20h+var_1C]
0x92DB68: fcomp   dword ptr ds:0AA1C4Ch
0x92DB6E: fnstsw  ax
0x92DB70: test    ah, 5
0x92DB73: jp      loc_92DC18
0x92DB79: fld     dword ptr ds:0A46B10h
0x92DB7F: jmp     loc_92DC1E
0x92DB84: fld     [esp+20h+var_1C]
0x92DB88: fdiv    [esp+20h+var_20]
0x92DB8B: fld     [esp+20h+var_20]
0x92DB8E: fcomp   dword ptr ds:0AA1C48h
0x92DB94: fnstsw  ax
0x92DB96: test    ah, 5
0x92DB99: jp      short loc_92DBB6
0x92DB9B: fld     [esp+20h+var_18]
0x92DB9F: fcomp   dword ptr ds:0A372CCh
0x92DBA5: fnstsw  ax
0x92DBA7: test    ah, 5
0x92DBAA: jp      short loc_92DBB6
0x92DBAC: fstp    st
0x92DBAE: fld     dword ptr ds:0A46B10h
0x92DBB4: jmp     short loc_92DBD6
0x92DBB6: fld     [esp+20h+var_20]
0x92DBB9: fcomp   dword ptr ds:0AA1C4Ch
0x92DBBF: fnstsw  ax
0x92DBC1: test    ah, 5
0x92DBC4: jp      short loc_92DBCE
0x92DBC6: fld     dword ptr ds:0A46B10h
0x92DBCC: jmp     short loc_92DBD4
0x92DBCE: fld     dword ptr ds:0A2FAA8h
0x92DBD4: faddp   st(1), st
0x92DBD6: fld     st
0x92DBD8: fabs
0x92DBDA: fcomp   [esp+20h+var_14]
0x92DBDE: fnstsw  ax
0x92DBE0: test    ah, 5
0x92DBE3: jp      short loc_92DBEF
0x92DBE5: fstp    st
0x92DBE7: fld     dword ptr ds:0A2FAA8h
0x92DBED: jmp     short loc_92DC20
0x92DBEF: fld     [esp+20h+var_20]
0x92DBF2: fcomp   dword ptr ds:0A372CCh
0x92DBF8: fnstsw  ax
0x92DBFA: test    ah, 41h
0x92DBFD: jnz     short loc_92DC18
0x92DBFF: fld     [esp+20h+var_18]
0x92DC03: fcomp   dword ptr ds:0AA1C44h
0x92DC09: fnstsw  ax
0x92DC0B: test    ah, 5
0x92DC0E: jp      short loc_92DC18
0x92DC10: fld     dword ptr ds:0A58E1Ch
0x92DC16: jmp     short loc_92DC1E
0x92DC18: fld     dword ptr ds:0A2FAA8h
0x92DC1E: faddp   st(1), st
0x92DC20: fld     [esp+20h+var_14]
0x92DC24: fchs
0x92DC26: fld     st(1)
0x92DC28: fcompp
0x92DC2A: fnstsw  ax
0x92DC2C: test    ah, 5
0x92DC2F: jp      short loc_92DC37
0x92DC31: fadd    dword ptr ds:0A58E1Ch
0x92DC37: fcom    dword ptr ds:0A58E1Ch
0x92DC3D: fnstsw  ax
0x92DC3F: test    ah, 41h
0x92DC42: jnz     short loc_92DC4C
0x92DC44: fstp    st
0x92DC46: fld     dword ptr ds:0A2FAA8h
0x92DC4C: mov     esp, ebp
0x92DC4E: pop     ebp
0x92DC4F: retn
