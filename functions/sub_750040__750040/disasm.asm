0x750040: push    ecx
0x750041: fldz
0x750043: mov     edx, ecx
0x750045: fld     [esp+4+arg_14]
0x750049: mov     [esp+4+var_4], edx
0x75004C: fcom    st(1)
0x75004E: fnstsw  ax
0x750050: test    ah, 41h
0x750053: jnz     loc_7501E5
0x750059: fld     [esp+4+arg_C]
0x75005D: fld     [esp+4+arg_10]
0x750061: fcom    st(1)
0x750063: fnstsw  ax
0x750065: test    ah, 41h
0x750068: jnz     loc_7501C3
0x75006E: fld     [esp+4+arg_4]
0x750072: fcom    st(2)
0x750074: fnstsw  ax
0x750076: test    ah, 41h
0x750079: jnz     loc_7501CF
0x75007F: fld     [esp+4+arg_8]
0x750083: fcom    st(2)
0x750085: fnstsw  ax
0x750087: test    ah, 5
0x75008A: jp      loc_7501DD
0x750090: fxch    st(1)
0x750092: fcom    st(2)
0x750094: fnstsw  ax
0x750096: test    ah, 41h
0x750099: jp      short loc_75009F
0x75009B: fstp    st(2)
0x75009D: jmp     short loc_7500A1
0x75009F: fstp    st
0x7500A1: fld     st(2)
0x7500A3: fsubp   st(2), st
0x7500A5: fxch    st(1)
0x7500A7: fstp    [esp+4+arg_C]
0x7500AB: fxch    st(3)
0x7500AD: fstp    [esp+4+arg_14]
0x7500B1: fcom    st(2)
0x7500B3: fnstsw  ax
0x7500B5: test    ah, 41h
0x7500B8: jp      short loc_7500C4
0x7500BA: fsubp   st(2), st
0x7500BC: fxch    st(1)
0x7500BE: fstp    [esp+4+arg_14]
0x7500C2: jmp     short loc_7500C8
0x7500C4: fstp    st
0x7500C6: fstp    st(1)
0x7500C8: fld     [esp+4+arg_14]
0x7500CC: push    ebx
0x7500CD: fnstcw  word ptr [esp+8+arg_14]
0x7500D1: push    edi
0x7500D2: movzx   eax, word ptr [esp+0Ch+arg_14]
0x7500D7: fmul    st, st(1)
0x7500D9: or      eax, 0C00h
0x7500DE: mov     [esp+0Ch+arg_10], eax
0x7500E2: fldcw   word ptr [esp+0Ch+arg_10]
0x7500E6: fistp   [esp+0Ch+arg_10]
0x7500EA: mov     ax, word ptr [esp+0Ch+arg_10]
0x7500EF: movzx   edi, ax
0x7500F2: fldcw   word ptr [esp+0Ch+arg_14]
0x7500F6: fld     [esp+0Ch+arg_C]
0x7500FA: fnstcw  word ptr [esp+0Ch+arg_14]
0x7500FE: fmul    st, st(1)
0x750100: movzx   eax, word ptr [esp+0Ch+arg_14]
0x750105: or      eax, 0C00h
0x75010A: mov     [esp+0Ch+arg_10], eax
0x75010E: fldcw   word ptr [esp+0Ch+arg_10]
0x750112: fistp   [esp+0Ch+arg_10]
0x750116: mov     cx, word ptr [esp+0Ch+arg_10]
0x75011B: sub     cx, di
0x75011E: movzx   ebx, cx
0x750121: cmp     bx, 0Fh
0x750125: fldcw   word ptr [esp+0Ch+arg_14]
0x750129: jbe     short loc_750130
0x75012B: mov     ebx, 0Fh
0x750130: test    bx, bx
0x750133: fld1
0x750135: fdivrp  st(1), st
0x750137: mov     dword ptr [edx+60h], 0
0x75013E: fstp    [esp+0Ch+arg_14]
0x750142: jbe     short loc_7501A6
0x750144: push    ebp
0x750145: push    esi
0x750146: lea     esi, [edx+58h]
0x750149: movzx   ebp, bx
0x75014C: lea     esp, [esp+0]
0x750150: fld     [esp+14h+arg_C]
0x750154: add     edi, 1
0x750157: fld     [esp+14h+arg_14]
0x75015B: movzx   eax, di
0x75015E: mov     [esp+14h+arg_10], eax
0x750162: mov     eax, [esi+4]
0x750165: cmp     [esi+8], eax
0x750168: fild    [esp+14h+arg_10]
0x75016C: fmulp   st(1), st
0x75016E: fsubp   st(1), st
0x750170: fstp    [esp+14h+arg_10]
0x750174: jnz     short loc_75018F
0x750176: test    eax, eax
0x750178: jbe     short loc_75017E
0x75017A: add     eax, eax
0x75017C: jmp     short loc_750183
0x75017E: mov     eax, 1
0x750183: push    eax
0x750184: mov     ecx, esi
0x750186: call    sub_74F9A0
0x75018B: mov     edx, [esp+14h+var_4]
0x75018F: mov     ecx, [esi+8]
0x750192: fld     [esp+14h+arg_10]
0x750196: mov     eax, [esi]
0x750198: fstp    dword ptr [eax+ecx*4]
0x75019B: add     dword ptr [esi+8], 1
0x75019F: sub     ebp, 1
0x7501A2: jnz     short loc_750150
0x7501A4: pop     esi
0x7501A5: pop     ebp
0x7501A6: mov     ecx, [edx+44h]
0x7501A9: fld     [esp+0Ch+arg_0]
0x7501AD: mov     edx, [edx+58h]
0x7501B0: mov     eax, [ecx]
0x7501B2: mov     eax, [eax+5Ch]
0x7501B5: push    edx
0x7501B6: push    ebx
0x7501B7: push    ecx
0x7501B8: fstp    [esp+18h+var_18]
0x7501BB: call    eax
0x7501BD: pop     edi
0x7501BE: pop     ebx
0x7501BF: pop     ecx
0x7501C0: retn    18h
0x7501C3: fstp    st(1)
0x7501C5: fstp    st
0x7501C7: fstp    st(1)
0x7501C9: fstp    st
0x7501CB: pop     ecx
0x7501CC: retn    18h
0x7501CF: fstp    st(2)
0x7501D1: fstp    st
0x7501D3: fstp    st
0x7501D5: fstp    st(1)
0x7501D7: fstp    st
0x7501D9: pop     ecx
0x7501DA: retn    18h
0x7501DD: fstp    st(3)
0x7501DF: fstp    st(1)
0x7501E1: fstp    st
0x7501E3: fstp    st
0x7501E5: fstp    st(1)
0x7501E7: fstp    st
0x7501E9: pop     ecx
0x7501EA: retn    18h
