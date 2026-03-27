0x538EC0: push    ebp
0x538EC1: mov     ebp, esp
0x538EC3: and     esp, 0FFFFFFF0h
0x538EC6: push    0FFFFFFFFh
0x538EC8: push    offset SEH_538EC0
0x538ECD: mov     eax, large fs:0
0x538ED3: push    eax
0x538ED4: sub     esp, 568h
0x538EDA: mov     eax, ds:0B30AACh
0x538EDF: xor     eax, esp
0x538EE1: mov     [esp+574h+var_14], eax
0x538EE8: push    ebx
0x538EE9: push    esi
0x538EEA: push    edi
0x538EEB: mov     eax, ds:0B30AACh
0x538EF0: xor     eax, esp
0x538EF2: push    eax
0x538EF3: lea     eax, [esp+584h+var_C]
0x538EFA: mov     large fs:0, eax
0x538F00: mov     eax, [ebp+arg_C]
0x538F03: mov     esi, [ebp+arg_0]
0x538F06: mov     ebx, [ebp+arg_4]
0x538F09: mov     edi, ecx
0x538F0B: mov     ecx, [ebp+arg_10]
0x538F0E: mov     [esp+584h+var_54C], eax
0x538F12: xor     eax, eax
0x538F14: mov     ds:0B365A8h, eax
0x538F19: cmp     [edi+4], al
0x538F1C: mov     [esp+584h+var_520], edi
0x538F20: mov     [esp+584h+var_50C], esi
0x538F24: mov     [esp+584h+var_510], ebx
0x538F28: mov     [esp+584h+var_524], ecx
0x538F2C: mov     [esp+584h+var_564], eax
0x538F30: jz      loc_5397E5
0x538F36: fld     dword ptr ds:0A563E4h
0x538F3C: lea     edx, [esp+584h+var_340]
0x538F43: fstp    [esp+584h+var_35C]
0x538F4A: mov     [esp+584h+var_360], offset ??_7hkAllCdPointCollector@@6B@; const hkAllCdPointCollector::`vftable'
0x538F55: mov     [esp+584h+var_350], edx
0x538F5C: mov     [esp+584h+var_348], 80000008h
0x538F67: mov     [esp+584h+var_34C], eax
0x538F6E: mov     ecx, [edi]
0x538F70: cmp     ecx, eax
0x538F72: mov     [esp+584h+var_4], eax
0x538F79: mov     [esp+584h+var_51C], eax
0x538F7D: jz      short loc_538F98
0x538F7F: mov     eax, [ecx]
0x538F81: mov     edx, [eax+58h]
0x538F84: call    edx
0x538F86: test    eax, eax
0x538F88: jz      short loc_538F92
0x538F8A: mov     eax, [eax+2B0h]
0x538F90: jmp     short loc_538F94
0x538F92: xor     eax, eax
0x538F94: mov     [esp+584h+var_51C], eax
0x538F98: fld     dword ptr [ebx]
0x538F9A: mov     eax, [esp+584h+var_524]
0x538F9E: fld     [ebp+arg_8]
0x538FA1: mov     ecx, [esp+584h+var_54C]
0x538FA5: fld     st
0x538FA7: fmulp   st(2), st
0x538FA9: fxch    st(1)
0x538FAB: fstp    [esp+584h+var_55C]
0x538FAF: fld     dword ptr [ebx+4]
0x538FB2: fmul    st, st(1)
0x538FB4: fstp    [esp+584h+var_550]
0x538FB8: fmul    dword ptr [ebx+8]
0x538FBB: fstp    [esp+584h+var_560]
0x538FBF: fld     dword ptr [esi]
0x538FC1: fadd    [esp+584h+var_55C]
0x538FC5: fstp    [esp+584h+var_55C]
0x538FC9: fld     dword ptr [esi+4]
0x538FCC: fadd    [esp+584h+var_550]
0x538FD0: fstp    [esp+584h+var_550]
0x538FD4: fld     [esp+584h+var_560]
0x538FD8: fadd    dword ptr [esi+8]
0x538FDB: mov     byte ptr [eax], 0
0x538FDE: fstp    [esp+584h+var_560]
0x538FE2: fld     dword ptr ds:0A563E4h
0x538FE8: fstp    dword ptr [ecx]
0x538FEA: lea     ecx, [esp+584h+var_500]
0x538FF1: call    sub_959BC0
0x538FF6: mov     dword ptr ds:0B3A6E4h, 0DADh
0x539000: fld     dword ptr [esi]
0x539002: fld     qword ptr ds:0A39088h
0x539008: xor     bl, bl
0x53900A: fmul    st(1), st
0x53900C: mov     byte ptr [esp+584h+var_4], 1
0x539014: fxch    st(1)
0x539016: mov     byte ptr [esp+584h+var_4F0], 0
0x53901E: mov     byte ptr [esp+584h+var_4F0+1], 1
0x539026: fstp    dword ptr [esp+584h+var_4BC+0Ch]
0x53902D: fld     dword ptr [esi+4]
0x539030: fmul    st, st(1)
0x539032: fstp    dword ptr [esp+584h+var_4AC]
0x539039: fld     dword ptr [esi+8]
0x53903C: xor     esi, esi
0x53903E: cmp     [edi], esi
0x539040: fmul    st, st(1)
0x539042: fstp    dword ptr [esp+584h+var_4AC+4]
0x539049: fld     [esp+584h+var_55C]
0x53904D: fmul    st, st(1)
0x53904F: fstp    dword ptr [esp+584h+var_4AC+0Ch]
0x539056: fld     [esp+584h+var_550]
0x53905A: fmul    st, st(1)
0x53905C: fstp    [esp+584h+var_49C]
0x539063: fmul    [esp+584h+var_560]
0x539067: fstp    [esp+584h+var_498]
0x53906E: jz      loc_5390FB
0x539074: fld     dword ptr ds:0A34BA0h
0x53907A: movaps  xmm0, [esp+584h+var_4AC+0Ch]
0x539082: fst     dword ptr [esp+584h+var_4BC]
0x539089: mov     ecx, edi
0x53908B: fstp    [esp+584h+var_4C0]
0x539092: movaps  [esp+584h+var_4D0], xmm0
0x53909A: call    sub_538920
0x53909F: mov     edi, [edi]
0x5390A1: cmp     edi, esi
0x5390A3: jz      short loc_5390DF
0x5390A5: mov     esi, [edi+8]
0x5390A8: test    esi, esi
0x5390AA: jz      short loc_5390DD
0x5390AC: mov     ecx, edi
0x5390AE: call    sub_89F570
0x5390B3: mov     edx, [esi]
0x5390B5: mov     edx, [edx+30h]
0x5390B8: push    0
0x5390BA: lea     eax, [esp+588h+var_360]
0x5390C1: push    eax
0x5390C2: lea     ecx, [esp+58Ch+var_4D0]
0x5390C9: push    ecx
0x5390CA: lea     eax, [esp+590h+var_4BC+0Ch]
0x5390D1: push    eax
0x5390D2: mov     ecx, esi
0x5390D4: call    edx
0x5390D6: mov     ecx, edi
0x5390D8: call    sub_89F570
0x5390DD: xor     esi, esi
0x5390DF: cmp     [esp+584h+var_34C], esi
0x5390E6: setnle  al
0x5390E9: test    al, al
0x5390EB: jz      short loc_5390FB
0x5390ED: lea     ecx, [esp+584h+var_360]
0x5390F4: call    sub_8AF890
0x5390F9: mov     bl, 1
0x5390FB: fld     dword ptr ds:0A563E4h
0x539101: mov     al, ds:0B11908h
0x539106: fst     [esp+584h+var_554]
0x53910A: xor     edi, edi
0x53910C: test    bl, bl
0x53910E: fst     [esp+584h+var_540]
0x539112: fstp    [esp+584h+var_544]
0x539116: mov     [esp+584h+var_560], edi
0x53911A: mov     [esp+584h+var_548], esi
0x53911E: mov     [esp+584h+var_52C], esi
0x539122: mov     byte ptr [esp+584h+var_56C+3], al
0x539126: mov     [esp+584h+var_530], esi
0x53912A: mov     [esp+584h+var_534], esi
0x53912E: mov     [esp+584h+var_53C], esi
0x539132: jz      loc_539692
0x539138: cmp     [esp+584h+var_34C], esi
0x53913F: mov     [esp+584h+var_558], esi
0x539143: mov     [esp+584h+var_568], esi
0x539147: mov     [esp+584h+var_518], esi
0x53914B: mov     [esp+584h+var_550], esi
0x53914F: jle     loc_539692
0x539155: xor     ebx, ebx
0x539157: mov     [esp+584h+var_55C], ebx
0x53915B: jmp     short loc_539160
0x53915D: align 10h
0x539160: mov     eax, [esp+584h+var_350]
0x539167: mov     dword ptr ds:0B3A6E4h, 0DAFh
0x539171: mov     esi, [ebx+eax+28h]
0x539175: test    esi, esi
0x539177: movaps  xmm0, xmmword ptr [ebx+eax]
0x53917B: movaps  [esp+584h+var_390], xmm0
0x539183: jz      loc_539671
0x539189: push    esi
0x53918A: mov     dword ptr ds:0B3A6E4h, 0DB0h
0x539194: call    sub_4806E0
0x539199: add     esp, 4
0x53919C: test    eax, eax
0x53919E: mov     dword ptr ds:0B3A6E4h, 0DB1h
0x5391A8: jz      short loc_5391B7
0x5391AA: push    eax
0x5391AB: call    sub_4DC270
0x5391B0: add     esp, 4
0x5391B3: mov     [esp+584h+var_568], eax
0x5391B7: mov     eax, [esp+584h+var_568]
0x5391BB: test    eax, eax
0x5391BD: jz      loc_539671
0x5391C3: cmp     eax, ds:0B333C4h
0x5391C9: jz      loc_539671
0x5391CF: cmp     byte ptr [esi+18h], 1
0x5391D3: jnz     short loc_5391DC
0x5391D5: mov     edi, [esi+10h]
0x5391D8: add     edi, esi
0x5391DA: jmp     short loc_5391DE
0x5391DC: xor     edi, edi
0x5391DE: mov     eax, [esi+1Ch]
0x5391E1: and     eax, 3Fh
0x5391E4: xor     bl, bl
0x5391E6: cmp     eax, 1
0x5391E9: mov     [esp+584h+var_514], eax
0x5391ED: jz      short loc_5391F9
0x5391EF: add     eax, 0FFFFFFFCh
0x5391F2: cmp     eax, 2
0x5391F5: ja      short loc_53920D
0x5391F7: jmp     short loc_53920B
0x5391F9: mov     ecx, [esi]
0x5391FB: test    ecx, ecx
0x5391FD: jz      short loc_53920D
0x5391FF: mov     edx, [ecx]
0x539201: mov     eax, [edx+8]
0x539204: call    eax
0x539206: cmp     eax, 18h
0x539209: jnz     short loc_53920D
0x53920B: mov     bl, 1
0x53920D: xor     eax, eax
0x53920F: cmp     edi, eax
0x539211: jz      loc_53933A
0x539217: cmp     edi, [esp+584h+var_518]
0x53921B: jz      loc_53933A
0x539221: test    bl, bl
0x539223: jz      loc_53933A
0x539229: mov     ecx, [esp+584h+var_534]
0x53922D: cmp     ecx, ds:0B11918h
0x539233: mov     [esp+584h+var_518], edi
0x539237: jge     loc_5393A2
0x53923D: mov     edx, [esp+584h+var_520]
0x539241: mov     ecx, [edx]
0x539243: add     [esp+584h+var_534], 1
0x539248: mov     dword ptr [esp+584h+var_460], eax
0x53924F: mov     dword ptr [esp+584h+var_460+4], eax
0x539256: lea     eax, [esp+584h+var_504]
0x53925D: push    eax
0x53925E: call    sub_497340
0x539263: mov     ecx, [eax]
0x539265: mov     eax, [edi+50h]
0x539268: mov     dword ptr [esp+584h+var_460], ecx
0x53926F: movaps  xmm0, xmmword ptr [eax+10h]
0x539273: movaps  [esp+584h+var_450], xmm0
0x53927B: movaps  xmm0, xmmword ptr [eax+20h]
0x53927F: movaps  [esp+584h+var_440], xmm0
0x539287: movaps  xmm0, xmmword ptr [eax+30h]
0x53928B: movaps  [esp+584h+var_430], xmm0
0x539293: movaps  xmm0, xmmword ptr [eax+40h]
0x539297: lea     edx, [esp+584h+var_4BC+0Ch]
0x53929E: push    edx
0x53929F: lea     eax, [esp+588h+var_450]
0x5392A6: push    eax
0x5392A7: lea     ecx, [esp+58Ch+var_480]
0x5392AE: movaps  [esp+58Ch+anonymous_0], xmm0
0x5392B6: call    sub_88FD10
0x5392BB: lea     ecx, [esp+584h+var_4AC+0Ch]
0x5392C2: push    ecx
0x5392C3: lea     edx, [esp+588h+var_450]
0x5392CA: push    edx
0x5392CB: lea     ecx, [esp+58Ch+var_470]
0x5392D2: call    sub_88FD10
0x5392D7: fld1
0x5392D9: lea     edx, [esp+584h+var_4D0]
0x5392E0: fstp    dword ptr [esp+584h+var_4BC]
0x5392E7: mov     ecx, [esi]
0x5392E9: mov     eax, [ecx]
0x5392EB: mov     eax, [eax+14h]
0x5392EE: push    edx
0x5392EF: lea     edx, [esp+588h+var_480]
0x5392F6: push    edx
0x5392F7: lea     edx, [esp+58Ch+var_538+3]
0x5392FB: push    edx
0x5392FC: call    eax
0x5392FE: lea     ecx, [esp+584h+var_528+3]
0x539302: push    ecx
0x539303: lea     ecx, [esp+588h+var_4D0]
0x53930A: call    sub_538A70
0x53930F: cmp     byte ptr [eax], 0
0x539312: jz      loc_5393A2
0x539318: fld     dword ptr [esp+584h+var_4BC]
0x53931F: mov     ebx, [esp+584h+var_568]
0x539323: fld     [esp+584h+var_554]
0x539327: fcomp   st(1)
0x539329: fnstsw  ax
0x53932B: test    ah, 41h
0x53932E: jnz     short loc_5393A8
0x539330: fstp    [esp+584h+var_554]
0x539334: mov     [esp+584h+var_560], ebx
0x539338: jmp     short loc_5393AA
0x53933A: mov     esi, [esp+584h+var_568]
0x53933E: cmp     [esp+584h+var_558], esi
0x539342: mov     dword ptr ds:0B3A6E4h, 0DB2h
0x53934C: jz      short loc_5393A2
0x53934E: mov     edx, [esi]
0x539350: mov     eax, [edx+154h]
0x539356: mov     ecx, esi
0x539358: call    eax
0x53935A: test    eax, eax
0x53935C: jz      short loc_5393A2
0x53935E: mov     ecx, [esp+584h+var_53C]
0x539362: cmp     ecx, ds:0B11920h
0x539368: jge     short loc_5393A2
0x53936A: mov     edx, [esi]
0x53936C: mov     eax, [edx+154h]
0x539372: add     [esp+584h+var_53C], 1
0x539377: push    0; char
0x539379: mov     ecx, esi
0x53937B: call    eax
0x53937D: fld     [ebp+arg_8]
0x539380: mov     edx, [esp+588h+var_50C]
0x539384: push    eax; int
0x539385: push    ecx
0x539386: mov     ecx, [esp+590h+var_510]
0x53938D: fstp    [esp+590h+var_590]; float
0x539390: push    ecx; int
0x539391: push    edx; int
0x539392: lea     eax, [esp+598h+var_500]
0x539399: push    eax; int
0x53939A: call    sub_481890
0x53939F: add     esp, 18h
0x5393A2: mov     ebx, [esp+584h+var_568]
0x5393A6: jmp     short loc_5393AA
0x5393A8: fstp    st
0x5393AA: mov     eax, [esp+584h+var_514]
0x5393AE: add     eax, 0FFFFFFFFh; switch 18 cases
0x5393B1: cmp     eax, 11h
0x5393B4: ja      short def_5393BD; jumptable 005393BD default case, cases 2-5,7-12,14-16
0x5393B6: movzx   ecx, ds:byte_539818[eax]
0x5393BD: jmp     ds:jpt_5393BD[ecx*4]; switch jump
0x5393C4: test    edi, edi; jumptable 005393BD case 6
0x5393C6: jz      loc_539665; jumptable 005393BD cases 1,13,17,18
0x5393CC: cmp     byte ptr [esp+584h+var_56C+3], 0; jumptable 005393BD default case, cases 2-5,7-12,14-16
0x5393D1: jz      loc_539665; jumptable 005393BD cases 1,13,17,18
0x5393D7: mov     esi, [esp+584h+var_51C]
0x5393DB: test    esi, esi
0x5393DD: jz      loc_539665; jumptable 005393BD cases 1,13,17,18
0x5393E3: movaps  xmm0, [esp+584h+var_4BC+0Ch]
0x5393EB: movaps  xmm3, [esp+584h+var_390]
0x5393F3: movaps  xmm1, [esp+584h+var_4AC+0Ch]
0x5393FB: subps   xmm1, xmm0
0x5393FE: subps   xmm3, xmm0
0x539401: movss   xmm4, dword ptr ds:0A3D65Ch
0x539409: movss   xmm5, dword ptr ds:0A46C30h
0x539411: movaps  xmm0, xmm1
0x539414: mulps   xmm0, xmm1
0x539417: movaps  xmm2, xmm0
0x53941A: shufps  xmm2, xmm0, 55h ; 'U'
0x53941E: addss   xmm2, xmm0
0x539422: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x539426: addss   xmm0, xmm2
0x53942A: movaps  xmm2, xmm0
0x53942D: rsqrtss xmm2, xmm2
0x539431: mulss   xmm0, xmm2
0x539435: mulss   xmm0, xmm2
0x539439: subss   xmm5, xmm0
0x53943D: mulss   xmm4, xmm2
0x539441: movaps  xmm0, xmm4
0x539444: mulss   xmm0, xmm5
0x539448: shufps  xmm0, xmm0, 0
0x53944C: mulps   xmm0, xmm1
0x53944F: movaps  xmm2, xmm0
0x539452: mulps   xmm0, xmm3
0x539455: movaps  xmm1, xmm0
0x539458: shufps  xmm1, xmm0, 55h ; 'U'
0x53945C: addss   xmm1, xmm0
0x539460: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x539464: addss   xmm0, xmm1
0x539468: shufps  xmm0, xmm0, 0
0x53946C: mulps   xmm0, xmm2
0x53946F: movaps  xmm1, xmm0
0x539472: movaps  xmm0, xmm3
0x539475: subps   xmm0, xmm1
0x539478: mulps   xmm0, xmm0
0x53947B: movaps  xmm1, xmm0
0x53947E: shufps  xmm1, xmm0, 55h ; 'U'
0x539482: addss   xmm1, xmm0
0x539486: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x53948A: addss   xmm0, xmm1
0x53948E: sqrtss  xmm0, xmm0
0x539492: movss   dword ptr [esp+584h+var_4D0], xmm0
0x53949B: fld     dword ptr [esp+584h+var_4D0]
0x5394A2: fld     qword ptr ds:0A372E0h
0x5394A8: movaps  [esp+584h+var_490], xmm3
0x5394B0: fmul    st(1), st
0x5394B2: fxch    st(1)
0x5394B4: fstp    [esp+584h+var_558]
0x5394B8: fld     [esp+584h+var_558]
0x5394BC: fld     [esp+584h+var_544]
0x5394C0: fcomp   st(1)
0x5394C2: fnstsw  ax
0x5394C4: test    ah, 41h
0x5394C7: jnz     loc_539661
0x5394CD: mov     edx, [esp+584h+var_530]
0x5394D1: cmp     edx, ds:0B11910h
0x5394D7: jge     loc_539661
0x5394DD: mov     eax, [esp+584h+var_548]
0x5394E1: test    eax, eax
0x5394E3: jz      short loc_539524
0x5394E5: cmp     eax, ebx
0x5394E7: jnz     short loc_539524
0x5394E9: mulps   xmm3, xmm3
0x5394EC: movaps  xmm0, xmm3
0x5394EF: shufps  xmm0, xmm3, 55h ; 'U'
0x5394F3: addss   xmm0, xmm3
0x5394F7: shufps  xmm3, xmm3, 0AAh ; 'ª'
0x5394FB: addss   xmm3, xmm0
0x5394FF: sqrtss  xmm3, xmm3
0x539503: movss   dword ptr [esp+584h+var_4D0], xmm3
0x53950C: fld     dword ptr [esp+584h+var_4D0]
0x539513: fmulp   st(2), st
0x539515: fxch    st(1)
0x539517: fstp    [esp+584h+var_540]
0x53951B: fstp    [esp+584h+var_544]
0x53951F: jmp     loc_539665; jumptable 005393BD cases 1,13,17,18
0x539524: add     [esp+584h+var_530], 1
0x539529: fstp    st
0x53952B: lea     ecx, [esp+584h+anonymous_1]; this
0x539532: fstp    st
0x539534: call    bhkWorldRayCastData__Init
0x539539: mov     eax, [esp+584h+var_520]
0x53953D: mov     ecx, [eax]
0x53953F: lea     edx, [esp+584h+var_508]
0x539543: push    edx
0x539544: call    sub_497340
0x539549: mov     eax, [eax]
0x53954B: movaps  xmm0, [esp+584h+var_4BC+0Ch]
0x539553: movaps  xmmword ptr [esp+584h+anonymous_1.WorldRayCastInput.From.x], xmm0
0x53955B: movaps  xmm0, xmmword ptr ds:0BA7A40h
0x539562: movaps  xmmword ptr [esp+584h+anonymous_1.unk60.x], xmm0
0x53956A: movaps  xmm0, [esp+584h+var_390]
0x539572: lea     ecx, [esp+584h+var_1C0]
0x539579: mov     [esp+584h+anonymous_1.WorldRayCastInput.FilterInfo], eax
0x539580: movaps  xmmword ptr [esp+584h+anonymous_1.WorldRayCastInput.To.x], xmm0
0x539588: call    sub_538C00
0x53958D: mov     edx, [esi]
0x53958F: mov     edx, [edx+88h]
0x539595: lea     ecx, [esp+584h+var_1C0]
0x53959C: lea     eax, [esp+584h+anonymous_1]
0x5395A3: mov     [esp+584h+anonymous_1.RayHitCollector2], ecx
0x5395AA: push    eax
0x5395AB: mov     ecx, esi
0x5395AD: mov     byte ptr [esp+588h+var_4], 2
0x5395B5: mov     [esp+588h+anonymous_1.RayHitCollector1], 0
0x5395C0: call    edx
0x5395C2: cmp     [esp+584h+var_1AC], 0
0x5395CA: jle     short loc_5395F4
0x5395CC: mov     eax, [esp+584h+var_1B0]
0x5395D3: mov     ecx, [eax+20h]
0x5395D6: push    ecx
0x5395D7: call    sub_4806E0
0x5395DC: add     esp, 4
0x5395DF: test    eax, eax
0x5395E1: jz      short loc_53964B
0x5395E3: push    eax
0x5395E4: call    sub_4DC270
0x5395E9: add     esp, 4
0x5395EC: test    eax, eax
0x5395EE: jz      short loc_53964B
0x5395F0: cmp     eax, ebx
0x5395F2: jnz     short loc_53964B
0x5395F4: test    edi, edi
0x5395F6: movaps  xmm0, [esp+584h+var_490]
0x5395FE: mulps   xmm0, xmm0
0x539601: movaps  xmm1, xmm0
0x539604: shufps  xmm1, xmm0, 55h ; 'U'
0x539608: addss   xmm1, xmm0
0x53960C: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x539610: addss   xmm0, xmm1
0x539614: sqrtss  xmm0, xmm0
0x539618: movss   dword ptr [esp+584h+var_4D0], xmm0
0x539621: fld     dword ptr [esp+584h+var_4D0]
0x539628: fmul    qword ptr ds:0A372E0h
0x53962E: mov     [esp+584h+var_548], ebx
0x539632: fstp    [esp+584h+var_540]
0x539636: fld     [esp+584h+var_558]
0x53963A: fstp    [esp+584h+var_544]
0x53963E: jz      short loc_539645
0x539640: mov     edi, [edi+0Ch]
0x539643: jmp     short loc_539647
0x539645: xor     edi, edi
0x539647: mov     [esp+584h+var_52C], edi
0x53964B: lea     ecx, [esp+584h+var_1C0]
0x539652: mov     byte ptr [esp+584h+var_4], 1
0x53965A: call    sub_538C80
0x53965F: jmp     short loc_539665; jumptable 005393BD cases 1,13,17,18
0x539661: fstp    st
0x539663: fstp    st
0x539665: mov     edi, [esp+584h+var_560]; jumptable 005393BD cases 1,13,17,18
0x539669: mov     [esp+584h+var_558], ebx
0x53966D: mov     ebx, [esp+584h+var_55C]
0x539671: mov     eax, [esp+584h+var_550]
0x539675: add     eax, 1
0x539678: add     ebx, 30h ; '0'
0x53967B: cmp     eax, [esp+584h+var_34C]
0x539682: mov     [esp+584h+var_550], eax
0x539686: mov     [esp+584h+var_55C], ebx
0x53968A: jl      loc_539160
0x539690: xor     esi, esi
0x539692: cmp     [esp+584h+var_4DE], si
0x53969A: fld     [esp+584h+var_554]
0x53969E: fmul    [ebp+arg_8]
0x5396A1: fstp    [esp+584h+var_554]
0x5396A5: jbe     short loc_539712
0x5396A7: mov     edx, [esp+584h+var_4E4]
0x5396AE: mov     dword ptr ds:0B3A6E4h, 0DB6h
0x5396B8: mov     eax, [edx]
0x5396BA: mov     eax, [eax]
0x5396BC: push    eax
0x5396BD: mov     dword ptr ds:0B3A6E4h, 0DB7h
0x5396C7: call    sub_4DC270
0x5396CC: mov     esi, [esp+588h+var_54C]
0x5396D0: mov     dword ptr ds:0B3A6E4h, 0DB8h
0x5396DA: mov     [esp+588h+var_564], eax
0x5396DE: mov     eax, [esp+588h+var_4E4]
0x5396E5: mov     ecx, [eax]
0x5396E7: fld     dword ptr [ecx+14h]
0x5396EA: add     esp, 4
0x5396ED: fstp    dword ptr [esi]
0x5396EF: mov     dword ptr ds:0B3A6E4h, 0DB9h
0x5396F9: fld     dword ptr [esi]
0x5396FB: fld     [esp+584h+var_554]
0x5396FF: fcom    st(1)
0x539701: fnstsw  ax
0x539703: fstp    st(1)
0x539705: test    ah, 5
0x539708: jp      short loc_539728
0x53970A: fstp    dword ptr [esi]
0x53970C: mov     [esp+584h+var_564], edi
0x539710: jmp     short loc_539730
0x539712: cmp     edi, esi
0x539714: jz      short loc_53972C
0x539716: mov     edx, [esp+584h+var_54C]
0x53971A: fld     [esp+584h+var_554]
0x53971E: fstp    dword ptr [edx]
0x539720: mov     [esp+584h+var_564], edi
0x539724: mov     esi, edx
0x539726: jmp     short loc_539730
0x539728: fstp    st
0x53972A: jmp     short loc_539730
0x53972C: mov     esi, [esp+584h+var_54C]
0x539730: cmp     byte ptr [esp+584h+var_56C+3], 0
0x539735: mov     ebx, [esp+584h+var_564]
0x539739: mov     dword ptr ds:0B3A6E4h, 0DBAh
0x539743: jz      short loc_5397B8
0x539745: test    ebx, ebx
0x539747: jz      short loc_53978F
0x539749: mov     eax, [ebx]
0x53974B: mov     edx, [eax+170h]
0x539751: mov     ecx, ebx
0x539753: call    edx
0x539755: test    eax, eax
0x539757: jz      short loc_53978F
0x539759: mov     eax, [ebx]
0x53975B: mov     edx, [eax+170h]
0x539761: mov     ecx, ebx
0x539763: call    edx
0x539765: movzx   eax, byte ptr [eax+4]
0x539769: sub     eax, 1Ah
0x53976C: jz      short loc_53977A
0x53976E: sub     eax, 2
0x539771: jz      short loc_53978F
0x539773: sub     eax, 2
0x539776: jz      short loc_53978F
0x539778: jmp     short loc_5397B8
0x53977A: mov     eax, [ebx]
0x53977C: mov     edx, [eax+170h]
0x539782: mov     ecx, ebx
0x539784: call    edx
0x539786: mov     eax, [eax+7Ch]
0x539789: shr     eax, 1
0x53978B: test    al, 1
0x53978D: jnz     short loc_5397B8
0x53978F: mov     eax, [esp+584h+var_548]
0x539793: test    eax, eax
0x539795: jz      short loc_5397B8
0x539797: cmp     ebx, eax
0x539799: jz      short loc_5397B8
0x53979B: fld     [esp+584h+var_540]
0x53979F: mov     ecx, [esp+584h+var_524]
0x5397A3: mov     edx, [esp+584h+var_52C]
0x5397A7: fstp    dword ptr [esi]
0x5397A9: mov     byte ptr [ecx], 1
0x5397AC: mov     [esp+584h+var_564], eax
0x5397B0: mov     ds:0B365A8h, edx
0x5397B6: mov     ebx, eax
0x5397B8: lea     ecx, [esp+584h+var_500]
0x5397BF: mov     byte ptr [esp+584h+var_4], 0
0x5397C7: call    sub_959EC0
0x5397CC: lea     ecx, [esp+584h+var_360]; this
0x5397D3: mov     [esp+584h+var_4], 0FFFFFFFFh
0x5397DE: call    ??1hkAllCdPointCollector@@UAE@XZ; hkAllCdPointCollector::~hkAllCdPointCollector(void)
0x5397E3: mov     eax, ebx
0x5397E5: mov     ecx, dword ptr [esp+584h+var_C]
0x5397EC: mov     large fs:0, ecx
0x5397F3: pop     ecx
0x5397F4: pop     edi
0x5397F5: pop     esi
0x5397F6: pop     ebx
0x5397F7: mov     ecx, [esp+574h+var_14]
0x5397FE: xor     ecx, esp
0x539800: call    @__security_check_cookie@4; __security_check_cookie(x)
0x539805: mov     esp, ebp
0x539807: pop     ebp
0x539808: retn    14h
