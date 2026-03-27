0x754540: sub     esp, 28h
0x754543: movzx   eax, word ptr [esp+28h+arg_C]
0x754548: push    ebx
0x754549: push    ebp
0x75454A: push    esi
0x75454B: mov     esi, ecx
0x75454D: mov     ecx, [esp+34h+arg_8]
0x754551: lea     edx, [eax+eax*2]
0x754554: push    edi
0x754555: mov     edi, [ecx+1Ch]
0x754558: lea     edi, [edi+edx*4]
0x75455B: lea     edx, ds:0[eax*8]
0x754562: sub     edx, eax
0x754564: fld     dword ptr [edi]
0x754566: mov     eax, [ecx+5Ch]
0x754569: fsub    dword ptr [esi+3Ch]
0x75456C: lea     ebp, [eax+edx*4]
0x75456F: xor     bl, bl
0x754571: fstp    dword ptr [esp+38h+var_28]
0x754575: fld     dword ptr [edi+4]
0x754578: fsub    dword ptr [esi+40h]
0x75457B: fstp    dword ptr [esp+38h+var_28+4]
0x75457F: fld     dword ptr [edi+8]
0x754582: fsub    dword ptr [esi+44h]
0x754585: fstp    [esp+38h+var_20]
0x754589: fld     dword ptr [esp+38h+var_28]
0x75458D: fld     st
0x75458F: fld     dword ptr [esp+38h+var_28+4]
0x754593: fld     st
0x754595: fld     [esp+38h+var_20]
0x754599: fld     st
0x75459B: fld     st(2)
0x75459D: fmulp   st(3), st
0x75459F: fld     st(4)
0x7545A1: fmulp   st(5), st
0x7545A3: fxch    st(2)
0x7545A5: faddp   st(4), st
0x7545A7: fld     st(1)
0x7545A9: fmulp   st(2), st
0x7545AB: fxch    st(3)
0x7545AD: faddp   st(1), st
0x7545AF: fstp    [esp+38h+var_1C]
0x7545B3: fld     [esp+38h+var_1C]
0x7545B7: fsub    dword ptr [esi+38h]
0x7545BA: fstp    [esp+38h+var_1C]
0x7545BE: fld     [esp+38h+var_1C]
0x7545C2: fld     st
0x7545C4: fchs
0x7545C6: fld     dword ptr ds:0A8677Ch
0x7545CC: fcom    st(1)
0x7545CE: fnstsw  ax
0x7545D0: fstp    st(1)
0x7545D2: test    ah, 5
0x7545D5: fld     [esp+38h+arg_0]
0x7545D9: jp      short loc_7545E3
0x7545DB: fstp    st(2)
0x7545DD: mov     cl, 1
0x7545DF: fstp    st
0x7545E1: jmp     short loc_7545F4
0x7545E3: fxch    st(2)
0x7545E5: xor     cl, cl
0x7545E7: fcompp
0x7545E9: fnstsw  ax
0x7545EB: test    ah, 41h
0x7545EE: jnz     loc_7547DA
0x7545F4: test    cl, cl
0x7545F6: fld     dword ptr [ebp+4]
0x7545F9: fmulp   st(2), st
0x7545FB: fld     dword ptr [ebp+0]
0x7545FE: fmulp   st(4), st
0x754600: fxch    st(1)
0x754602: faddp   st(3), st
0x754604: fld     dword ptr [ebp+8]
0x754607: fmulp   st(2), st
0x754609: fxch    st(2)
0x75460B: faddp   st(1), st
0x75460D: fstp    [esp+38h+var_1C]
0x754611: fld     [esp+38h+var_1C]
0x754615: fchs
0x754617: fstp    dword ptr [esp+38h+var_28]
0x75461B: fld     dword ptr [esp+38h+var_28]
0x75461F: jnz     short loc_754630
0x754621: fldz
0x754623: fcomp   st(1)
0x754625: fnstsw  ax
0x754627: test    ah, 5
0x75462A: jp      loc_7547DE
0x754630: test    cl, cl
0x754632: fld     dword ptr [ebp+4]
0x754635: fld     dword ptr [ebp+0]
0x754638: fld     dword ptr [ebp+8]
0x75463B: fld     st(2)
0x75463D: fmulp   st(3), st
0x75463F: fld     st(1)
0x754641: fmulp   st(2), st
0x754643: fxch    st(2)
0x754645: faddp   st(1), st
0x754647: fld     st(1)
0x754649: fmulp   st(2), st
0x75464B: faddp   st(1), st
0x75464D: fstp    [esp+38h+var_1C]
0x754651: fld     [esp+38h+var_1C]
0x754655: fld     st
0x754657: fdivp   st(2), st
0x754659: fxch    st(1)
0x75465B: fstp    dword ptr [esp+38h+var_28]
0x75465F: fld     dword ptr [esp+38h+var_28]
0x754663: fld     st
0x754665: fmul    dword ptr [ebp+0]
0x754668: fstp    [esp+38h+var_18]
0x75466C: fld     dword ptr [ebp+4]
0x75466F: fmul    st, st(1)
0x754671: fstp    [esp+38h+var_14]
0x754675: fld     dword ptr [ebp+8]
0x754678: fmul    st, st(1)
0x75467A: fstp    [esp+38h+var_10]
0x75467E: fld     dword ptr [edi]
0x754680: fadd    [esp+38h+var_18]
0x754684: fstp    [esp+38h+var_C]
0x754688: fld     [esp+38h+var_14]
0x75468C: fadd    dword ptr [edi+4]
0x75468F: fstp    [esp+38h+var_8]
0x754693: fld     dword ptr [edi+8]
0x754696: fadd    [esp+38h+var_10]
0x75469A: fstp    [esp+38h+var_4]
0x75469E: fld     [esp+38h+var_C]
0x7546A2: fsub    dword ptr [esi+3Ch]
0x7546A5: fstp    [esp+38h+var_18]
0x7546A9: fld     [esp+38h+var_8]
0x7546AD: fsub    dword ptr [esi+40h]
0x7546B0: fstp    [esp+38h+var_14]
0x7546B4: fld     [esp+38h+var_4]
0x7546B8: fsub    dword ptr [esi+44h]
0x7546BB: fstp    [esp+38h+var_10]
0x7546BF: fld     [esp+38h+var_14]
0x7546C3: fld     [esp+38h+var_18]
0x7546C7: fld     [esp+38h+var_10]
0x7546CB: fld     st(1)
0x7546CD: fmulp   st(2), st
0x7546CF: fld     st(2)
0x7546D1: fmulp   st(3), st
0x7546D3: fxch    st(1)
0x7546D5: faddp   st(2), st
0x7546D7: fmul    st, st
0x7546D9: faddp   st(1), st
0x7546DB: fstp    [esp+38h+var_1C]
0x7546DF: fld     [esp+38h+var_1C]
0x7546E3: jnz     short loc_7546F5
0x7546E5: fld     dword ptr [esi+38h]
0x7546E8: fcomp   st(1)
0x7546EA: fnstsw  ax
0x7546EC: test    ah, 41h
0x7546EF: jnz     loc_7547D6
0x7546F5: test    cl, cl
0x7546F7: fstp    st(3)
0x7546F9: fld     dword ptr [esi+38h]
0x7546FC: fsubrp  st(3), st
0x7546FE: fxch    st(2)
0x754700: fstp    [esp+38h+var_1C]
0x754704: jz      short loc_754727
0x754706: fstp    st(1)
0x754708: fdivr   [esp+38h+var_1C]
0x75470C: fstp    [esp+38h+var_1C]
0x754710: fld     [esp+38h+var_1C]
0x754714: call    __CIsqrt
0x754719: fstp    [esp+38h+var_1C]
0x75471D: fld     [esp+38h+var_1C]
0x754721: fadd    dword ptr [esp+38h+var_28]
0x754725: jmp     short loc_75474A
0x754727: fxch    st(1)
0x754729: fstp    [esp+38h+var_28]
0x75472D: fdivr   [esp+38h+var_1C]
0x754731: fstp    [esp+38h+var_1C]
0x754735: fld     [esp+38h+var_1C]
0x754739: call    __CIsqrt
0x75473E: fstp    [esp+38h+var_1C]
0x754742: fld     [esp+38h+var_1C]
0x754746: fsubr   [esp+38h+var_28]
0x75474A: mov     ecx, [esp+38h+arg_4]
0x75474E: fstp    dword ptr [esp+38h+var_28]
0x754752: fld     dword ptr [esp+38h+var_28]
0x754756: fld     dword ptr [ecx]
0x754758: fld     [esp+38h+arg_0]
0x75475C: fld     st
0x75475E: fsubp   st(2), st
0x754760: fxch    st(1)
0x754762: fcomp   st(2)
0x754764: fnstsw  ax
0x754766: test    ah, 41h
0x754769: jnz     short loc_7547D2
0x75476B: fld     st(1)
0x75476D: mov     bl, 1
0x75476F: fadd    st, st(1)
0x754771: fstp    [esp+38h+arg_0]
0x754775: fld     [esp+38h+arg_0]
0x754779: fst     dword ptr [ecx]
0x75477B: fstp    dword ptr [esi+20h]
0x75477E: fld     st(1)
0x754780: fmul    dword ptr [ebp+0]
0x754783: fstp    [esp+38h+var_C]
0x754787: fld     dword ptr [ebp+4]
0x75478A: fmul    st, st(2)
0x75478C: fstp    [esp+38h+var_8]
0x754790: fld     dword ptr [ebp+8]
0x754793: fmulp   st(2), st
0x754795: fxch    st(1)
0x754797: fstp    [esp+38h+var_4]
0x75479B: fld     dword ptr [edi]
0x75479D: fadd    [esp+38h+var_C]
0x7547A1: fstp    [esp+38h+var_18]
0x7547A5: mov     edx, [esp+38h+var_18]
0x7547A9: fld     [esp+38h+var_8]
0x7547AD: fadd    dword ptr [edi+4]
0x7547B0: fstp    [esp+38h+var_14]
0x7547B4: mov     eax, [esp+38h+var_14]
0x7547B8: fld     dword ptr [edi+8]
0x7547BB: mov     [esi+14h], edx
0x7547BE: fadd    [esp+38h+var_4]
0x7547C2: mov     [esi+18h], eax
0x7547C5: fstp    [esp+38h+var_10]
0x7547C9: mov     edx, [esp+38h+var_10]
0x7547CD: mov     [esi+1Ch], edx
0x7547D0: jmp     short loc_7547E4
0x7547D2: fstp    st(1)
0x7547D4: jmp     short loc_7547E4
0x7547D6: fstp    st(1)
0x7547D8: jmp     short loc_7547DC
0x7547DA: fstp    st(3)
0x7547DC: fstp    st
0x7547DE: mov     ecx, [esp+38h+arg_4]
0x7547E2: fstp    st
0x7547E4: mov     eax, [esp+38h+arg_C]
0x7547E8: mov     edx, [esp+38h+arg_8]
0x7547EC: push    eax; int
0x7547ED: push    edx; int
0x7547EE: push    ecx; int
0x7547EF: push    ecx
0x7547F0: mov     ecx, esi
0x7547F2: fstp    [esp+48h+var_48]; float
0x7547F5: call    sub_75ED20
0x7547FA: test    eax, eax
0x7547FC: jnz     short loc_754806
0x7547FE: neg     bl
0x754800: sbb     ebx, ebx
0x754802: and     ebx, esi
0x754804: mov     eax, ebx
0x754806: pop     edi
0x754807: pop     esi
0x754808: pop     ebp
0x754809: pop     ebx
0x75480A: add     esp, 28h
0x75480D: retn    10h
