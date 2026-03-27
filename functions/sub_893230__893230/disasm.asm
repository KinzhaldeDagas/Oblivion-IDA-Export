0x893230: push    ebp
0x893231: mov     ebp, esp
0x893233: and     esp, 0FFFFFFF0h
0x893236: push    0FFFFFFFFh
0x893238: push    offset SEH_893230
0x89323D: mov     eax, large fs:0
0x893243: push    eax
0x893244: sub     esp, 50h
0x893247: mov     eax, ds:0B30AACh
0x89324C: xor     eax, esp
0x89324E: mov     [esp+5Ch+var_14], eax
0x893252: push    esi
0x893253: mov     eax, ds:0B30AACh
0x893258: xor     eax, esp
0x89325A: push    eax
0x89325B: lea     eax, [esp+64h+var_C]
0x89325F: mov     large fs:0, eax
0x893265: fld     [ebp+arg_8]
0x893268: mov     [esp+64h+var_58], 0
0x893270: fmul    qword ptr ds:0A39088h
0x893276: mov     [esp+64h+var_54], 0
0x89327E: mov     [esp+64h+var_50], 80000000h
0x893286: fstp    [esp+64h+var_4C]
0x89328A: push    10h
0x89328C: lea     eax, [esp+68h+var_58]
0x893290: push    12h
0x893292: push    eax
0x893293: mov     [esp+70h+var_4], 0
0x89329B: call    sub_8A6E40
0x8932A0: mov     eax, [ebp+arg_4]
0x8932A3: fld     dword ptr [eax]
0x8932A5: mov     ecx, [esp+70h+var_50]
0x8932A9: fld     qword ptr ds:0A39088h
0x8932AF: and     ecx, 3FFFFFFFh
0x8932B5: fmul    st(1), st
0x8932B7: add     esp, 0Ch
0x8932BA: cmp     [esp+64h+var_54], ecx
0x8932BE: fxch    st(1)
0x8932C0: fstp    dword ptr [esp+64h+var_40]
0x8932C4: fld     dword ptr [eax+4]
0x8932C7: fmul    st, st(1)
0x8932C9: fstp    dword ptr [esp+64h+var_40+4]
0x8932CD: fld     dword ptr [eax+8]
0x8932D0: fmul    st, st(1)
0x8932D2: fstp    dword ptr [esp+64h+var_40+8]
0x8932D6: fld     dword ptr [esp+64h+var_40+8]
0x8932DA: fld     [esp+64h+var_4C]
0x8932DE: fld     st
0x8932E0: fsubp   st(2), st
0x8932E2: fxch    st(1)
0x8932E4: fstp    dword ptr [esp+64h+var_40+8]
0x8932E8: jnz     short loc_893307
0x8932EA: lea     edx, [esp+64h+var_58]
0x8932EE: fstp    st(1)
0x8932F0: push    10h
0x8932F2: fstp    st
0x8932F4: push    edx
0x8932F5: call    sub_8A6EE0
0x8932FA: fld     qword ptr ds:0A39088h
0x893300: fld     [esp+6Ch+var_4C]
0x893304: add     esp, 8
0x893307: mov     ecx, [esp+64h+var_54]
0x89330B: fld     [ebp+arg_C]
0x89330E: fadd    qword ptr ds:0A2FC80h
0x893314: movaps  xmm0, [esp+64h+var_40]
0x893319: mov     eax, ecx
0x89331B: shl     eax, 4
0x89331E: add     eax, [esp+64h+var_58]
0x893322: fadd    dword ptr [esp+64h+var_40+8]
0x893326: add     ecx, 1
0x893329: mov     [esp+64h+var_54], ecx
0x89332D: fstp    dword ptr [esp+64h+var_40+8]
0x893331: movaps  xmmword ptr [eax], xmm0
0x893334: xor     esi, esi
0x893336: fld     dword ptr [esi+0B2E788h]
0x89333C: movaps  xmm0, [esp+64h+var_40]
0x893341: mov     eax, [esp+64h+var_50]
0x893345: fmul    st, st(1)
0x893347: movaps  [esp+64h+var_30], xmm0
0x89334C: and     eax, 3FFFFFFFh
0x893351: cmp     [esp+64h+var_54], eax
0x893355: fadd    dword ptr [esp+64h+var_30]
0x893359: fstp    dword ptr [esp+64h+var_30]
0x89335D: fld     dword ptr [esi+0B2E7A8h]
0x893363: fmul    st, st(1)
0x893365: fadd    dword ptr [esp+64h+var_30+4]
0x893369: fstp    dword ptr [esp+64h+var_30+4]
0x89336D: jnz     short loc_89338C
0x89336F: lea     ecx, [esp+64h+var_58]
0x893373: fstp    st(1)
0x893375: push    10h
0x893377: fstp    st
0x893379: push    ecx
0x89337A: call    sub_8A6EE0
0x89337F: fld     qword ptr ds:0A39088h
0x893385: fld     [esp+6Ch+var_4C]
0x893389: add     esp, 8
0x89338C: mov     ecx, [esp+64h+var_54]
0x893390: movaps  xmm0, [esp+64h+var_30]
0x893395: mov     eax, ecx
0x893397: shl     eax, 4
0x89339A: add     eax, [esp+64h+var_58]
0x89339E: add     ecx, 1
0x8933A1: add     esi, 4
0x8933A4: cmp     esi, 20h ; ' '
0x8933A7: mov     [esp+64h+var_54], ecx
0x8933AB: movaps  xmmword ptr [eax], xmm0
0x8933AE: jb      short loc_893336
0x8933B0: mov     eax, [ebp+arg_0]
0x8933B3: fld     dword ptr [eax]
0x8933B5: xor     esi, esi
0x8933B7: fmul    st, st(2)
0x8933B9: fstp    dword ptr [esp+64h+var_40]
0x8933BD: fld     dword ptr [eax+4]
0x8933C0: fmul    st, st(2)
0x8933C2: fstp    dword ptr [esp+64h+var_40+4]
0x8933C6: fld     dword ptr [eax+8]
0x8933C9: fmulp   st(2), st
0x8933CB: fxch    st(1)
0x8933CD: fstp    dword ptr [esp+64h+var_40+8]
0x8933D1: fld     qword ptr ds:0A2FAA0h
0x8933D7: fmul    st, st(1)
0x8933D9: fst     [esp+64h+var_48]
0x8933DD: fadd    dword ptr [esp+64h+var_40+8]
0x8933E1: fstp    dword ptr [esp+64h+var_40+8]
0x8933E5: fld     dword ptr [esi+0B2E788h]
0x8933EB: movaps  xmm0, [esp+64h+var_40]
0x8933F0: mov     edx, [esp+64h+var_50]
0x8933F4: fmul    st, st(1)
0x8933F6: movaps  [esp+64h+var_30], xmm0
0x8933FB: and     edx, 3FFFFFFFh
0x893401: cmp     [esp+64h+var_54], edx
0x893405: fstp    dword ptr [esp+64h+var_30]
0x893409: fld     dword ptr [esi+0B2E7A8h]
0x89340F: fmul    st, st(1)
0x893411: fstp    dword ptr [esp+64h+var_30+4]
0x893415: jnz     short loc_89342C
0x893417: lea     eax, [esp+64h+var_58]
0x89341B: fstp    st
0x89341D: push    10h
0x89341F: push    eax
0x893420: call    sub_8A6EE0
0x893425: fld     [esp+6Ch+var_4C]
0x893429: add     esp, 8
0x89342C: mov     ecx, [esp+64h+var_54]
0x893430: movaps  xmm0, [esp+64h+var_30]
0x893435: mov     eax, ecx
0x893437: shl     eax, 4
0x89343A: add     eax, [esp+64h+var_58]
0x89343E: add     ecx, 1
0x893441: add     esi, 4
0x893444: cmp     esi, 20h ; ' '
0x893447: mov     [esp+64h+var_54], ecx
0x89344B: movaps  xmmword ptr [eax], xmm0
0x89344E: jb      short loc_8933E5
0x893450: mov     ecx, [esp+64h+var_50]
0x893454: fstp    st
0x893456: fld     dword ptr [esp+64h+var_40+8]
0x89345A: and     ecx, 3FFFFFFFh
0x893460: cmp     [esp+64h+var_54], ecx
0x893464: fadd    [esp+64h+var_48]
0x893468: fstp    dword ptr [esp+64h+var_40+8]
0x89346C: jnz     short loc_89347D
0x89346E: lea     edx, [esp+64h+var_58]
0x893472: push    10h
0x893474: push    edx
0x893475: call    sub_8A6EE0
0x89347A: add     esp, 8
0x89347D: mov     ecx, [esp+64h+var_54]
0x893481: movaps  xmm0, [esp+64h+var_40]
0x893486: mov     eax, ecx
0x893488: shl     eax, 4
0x89348B: add     eax, [esp+64h+var_58]
0x89348F: add     ecx, 1
0x893492: mov     [esp+64h+var_54], ecx
0x893496: movaps  xmmword ptr [eax], xmm0
0x893499: lea     eax, [esp+64h+var_58]
0x89349D: push    eax
0x89349E: call    sub_8D2770
0x8934A3: mov     esi, eax
0x8934A5: mov     eax, [esp+68h+var_50]
0x8934A9: add     esp, 4
0x8934AC: test    eax, eax
0x8934AE: mov     [esp+64h+var_4], 0FFFFFFFFh
0x8934B6: js      short loc_8934ED
0x8934B8: mov     ecx, ds:0BA9DE4h
0x8934BE: mov     edx, large fs:2Ch
0x8934C5: mov     ecx, [edx+ecx*4]
0x8934C8: mov     ecx, [ecx+19Ch]
0x8934CE: test    ecx, ecx
0x8934D0: jnz     short loc_8934D8
0x8934D2: mov     ecx, ds:0BA7D9Ch
0x8934D8: mov     edx, [esp+64h+var_58]
0x8934DC: and     eax, 3FFFFFFFh
0x8934E1: push    14h
0x8934E3: shl     eax, 4
0x8934E6: push    eax
0x8934E7: push    edx
0x8934E8: call    sub_8A75D0
0x8934ED: mov     eax, esi
0x8934EF: mov     ecx, [esp+64h+var_C]
0x8934F3: mov     large fs:0, ecx
0x8934FA: pop     ecx
0x8934FB: pop     esi
0x8934FC: mov     ecx, [esp+5Ch+var_14]
0x893500: xor     ecx, esp
0x893502: call    @__security_check_cookie@4; __security_check_cookie(x)
0x893507: mov     esp, ebp
0x893509: pop     ebp
0x89350A: retn
