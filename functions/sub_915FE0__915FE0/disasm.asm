0x915FE0: push    ebp
0x915FE1: mov     ebp, esp
0x915FE3: and     esp, 0FFFFFFF0h
0x915FE6: sub     esp, 44h
0x915FE9: mov     eax, ds:0B30AACh
0x915FEE: xor     eax, esp
0x915FF0: mov     [esp+44h+var_4], eax
0x915FF4: fld     dword ptr ds:0A9D004h
0x915FFA: push    ebx
0x915FFB: push    esi
0x915FFC: mov     esi, [ebp+arg_8]
0x915FFF: fst     dword ptr [esi]
0x916001: mov     eax, [ebp+arg_0]
0x916004: fst     dword ptr [esi+4]
0x916007: mov     ebx, ecx
0x916009: fst     dword ptr [esi+8]
0x91600C: xor     ecx, ecx
0x91600E: fldz
0x916010: push    edi
0x916011: fst     dword ptr [esi+0Ch]
0x916014: mov     [esp+50h+var_3C], eax
0x916018: fld     dword ptr ds:0A3B888h
0x91601E: mov     [esp+50h+var_34], ecx
0x916022: fst     dword ptr [esi+10h]
0x916025: fst     dword ptr [esi+14h]
0x916028: fst     dword ptr [esi+18h]
0x91602B: fxch    st(1)
0x91602D: fst     dword ptr [esi+1Ch]
0x916030: fst     dword ptr [esp+50h+var_30+0Ch]
0x916034: fxch    st(2)
0x916036: fst     dword ptr [esp+50h+var_30]
0x91603A: fst     dword ptr [esp+50h+var_30+4]
0x91603E: fstp    dword ptr [esp+50h+var_30+8]
0x916042: movaps  xmm0, [esp+50h+var_30]
0x916047: movaps  xmmword ptr [esi], xmm0
0x91604A: fst     dword ptr [esp+50h+var_30]
0x91604E: fst     dword ptr [esp+50h+var_30+4]
0x916052: fstp    dword ptr [esp+50h+var_30+8]
0x916056: fstp    dword ptr [esp+50h+var_30+0Ch]
0x91605A: movaps  xmm0, [esp+50h+var_30]
0x91605F: movaps  xmmword ptr [esi+10h], xmm0
0x916063: cmp     [ebx+30h], ecx
0x916066: jle     loc_91610B
0x91606C: fld     qword ptr ds:0A39088h
0x916072: mov     edx, [ebx+28h]
0x916075: mov     eax, [edx+ecx*8]
0x916078: mov     edi, [eax+1Ch]
0x91607B: movzx   eax, word ptr [eax+8]
0x91607F: test    eax, eax
0x916081: jbe     short loc_9160F9
0x916083: add     edi, 8
0x916086: mov     [esp+50h+var_38], eax
0x91608A: lea     ebx, [ebx+0]
0x916090: fld     dword ptr [edi-8]
0x916093: mov     ecx, [esp+50h+var_3C]
0x916097: movaps  xmm0, xmmword ptr [ebx+10h]
0x91609B: fmul    st, st(1)
0x91609D: lea     eax, [esp+50h+var_30]
0x9160A1: push    eax
0x9160A2: fstp    dword ptr [esp+54h+var_30]
0x9160A6: push    ecx
0x9160A7: fld     dword ptr [edi-4]
0x9160AA: lea     ecx, [esp+58h+var_20]
0x9160AE: fmul    st, st(1)
0x9160B0: fstp    dword ptr [esp+58h+var_30+4]
0x9160B4: fmul    dword ptr [edi]
0x9160B6: fstp    dword ptr [esp+58h+var_30+8]
0x9160BA: movaps  xmm1, [esp+58h+var_30]
0x9160BF: mulps   xmm0, xmm1
0x9160C2: movaps  [esp+58h+var_30], xmm0
0x9160C7: call    sub_88FCC0
0x9160CC: fld     qword ptr ds:0A39088h
0x9160D2: movaps  xmm1, xmmword ptr [esi]
0x9160D5: movaps  xmm0, [esp+50h+var_20]
0x9160DA: minps   xmm1, xmm0
0x9160DD: movaps  xmmword ptr [esi], xmm1
0x9160E0: movaps  xmm1, xmmword ptr [esi+10h]
0x9160E4: add     edi, 0Ch
0x9160E7: sub     [esp+50h+var_38], 1
0x9160EC: maxps   xmm1, xmm0
0x9160EF: movaps  xmmword ptr [esi+10h], xmm1
0x9160F3: jnz     short loc_916090
0x9160F5: mov     ecx, [esp+50h+var_34]
0x9160F9: add     ecx, 1
0x9160FC: cmp     ecx, [ebx+30h]
0x9160FF: mov     [esp+50h+var_34], ecx
0x916103: jl      loc_916072
0x916109: fstp    st
0x91610B: fld     dword ptr [ebx+20h]
0x91610E: movaps  xmm1, xmmword ptr [esi]
0x916111: fadd    [ebp+arg_4]
0x916114: mov     ecx, [esp+50h+var_4]
0x916118: pop     edi
0x916119: fstp    [esp+4Ch+var_3C]
0x91611D: movss   xmm0, [esp+4Ch+var_3C]
0x916123: shufps  xmm0, xmm0, 0
0x916127: subps   xmm1, xmm0
0x91612A: movaps  xmmword ptr [esi], xmm1
0x91612D: movaps  xmm1, xmmword ptr [esi+10h]
0x916131: addps   xmm1, xmm0
0x916134: movaps  xmmword ptr [esi+10h], xmm1
0x916138: pop     esi
0x916139: pop     ebx
0x91613A: xor     ecx, esp
0x91613C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x916141: mov     esp, ebp
0x916143: pop     ebp
0x916144: retn    0Ch
