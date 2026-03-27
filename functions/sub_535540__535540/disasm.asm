0x535540: push    ebp
0x535541: mov     ebp, esp
0x535543: and     esp, 0FFFFFFF0h
0x535546: sub     esp, 54h
0x535549: mov     eax, ds:0B30AACh
0x53554E: xor     eax, esp
0x535550: mov     [esp+54h+var_4], eax
0x535554: mov     eax, [ebp+arg_4]
0x535557: fld     [ebp+arg_8]
0x53555A: fld     st
0x53555C: push    ebx
0x53555D: fmul    dword ptr [eax]
0x53555F: push    esi
0x535560: push    edi
0x535561: mov     edi, [ebp+arg_0]
0x535564: fstp    [esp+60h+var_40]
0x535568: mov     esi, ecx
0x53556A: fld     dword ptr [eax+4]
0x53556D: fmul    st, st(1)
0x53556F: fstp    [esp+60h+var_3C]
0x535573: fmul    dword ptr [eax+8]
0x535576: fstp    [esp+60h+var_38]
0x53557A: fld     dword ptr [edi]
0x53557C: fadd    [esp+60h+var_40]
0x535580: fstp    [esp+60h+var_4C]
0x535584: fld     [esp+60h+var_3C]
0x535588: fadd    dword ptr [edi+4]
0x53558B: fstp    [esp+60h+var_48]
0x53558F: fld     dword ptr [edi+8]
0x535592: fadd    [esp+60h+var_38]
0x535596: fstp    [esp+60h+var_44]
0x53559A: call    sub_535310
0x53559F: mov     ebx, [esi+1A0h]
0x5355A5: xor     eax, eax
0x5355A7: cmp     ebx, eax
0x5355A9: jz      loc_535655
0x5355AF: fld     dword ptr ds:0A34BA0h
0x5355B5: fst     [esp+60h+var_1C]
0x5355B9: fstp    [esp+60h+var_20]
0x5355BD: fld     dword ptr [edi]
0x5355BF: fld     qword ptr ds:0A39088h
0x5355C5: fmul    st(1), st
0x5355C7: fxch    st(1)
0x5355C9: fstp    [esp+60h+var_40]
0x5355CD: fld     dword ptr [edi+4]
0x5355D0: fmul    st, st(1)
0x5355D2: fstp    [esp+60h+var_3C]
0x5355D6: fld     dword ptr [edi+8]
0x5355D9: mov     [esi+14h], eax
0x5355DC: fmul    st, st(1)
0x5355DE: fstp    [esp+60h+var_38]
0x5355E2: fld     [esp+60h+var_4C]
0x5355E6: fmul    st, st(1)
0x5355E8: fstp    [esp+60h+var_30]
0x5355EC: fld     [esp+60h+var_48]
0x5355F0: fmul    st, st(1)
0x5355F2: fstp    [esp+60h+var_2C]
0x5355F6: fmul    [esp+60h+var_44]
0x5355FA: fstp    [esp+60h+var_28]
0x5355FE: fld     dword ptr ds:0A562B0h
0x535604: fstp    dword ptr [esi+4]
0x535607: mov     edi, [ebx+8]
0x53560A: cmp     edi, eax
0x53560C: jz      short loc_535632
0x53560E: mov     ecx, ebx
0x535610: call    sub_89F570
0x535615: mov     eax, [edi]
0x535617: mov     eax, [eax+30h]
0x53561A: push    0
0x53561C: push    esi
0x53561D: lea     ecx, [esp+68h+var_30]
0x535621: push    ecx
0x535622: lea     edx, [esp+6Ch+var_40]
0x535626: push    edx
0x535627: mov     ecx, edi
0x535629: call    eax
0x53562B: mov     ecx, ebx
0x53562D: call    sub_89F570
0x535632: cmp     dword ptr [esi+14h], 0
0x535636: jle     short loc_535661
0x535638: mov     ecx, esi
0x53563A: call    sub_8AF890
0x53563F: mov     al, 1
0x535641: pop     edi
0x535642: pop     esi
0x535643: pop     ebx
0x535644: mov     ecx, [esp+54h+var_4]
0x535648: xor     ecx, esp
0x53564A: call    @__security_check_cookie@4; __security_check_cookie(x)
0x53564F: mov     esp, ebp
0x535651: pop     ebp
0x535652: retn    0Ch
0x535655: fld     dword ptr ds:0A562B0h
0x53565B: mov     [esi+14h], eax
0x53565E: fstp    dword ptr [esi+4]
0x535661: mov     ecx, [esp+60h+var_4]
0x535665: pop     edi
0x535666: pop     esi
0x535667: pop     ebx
0x535668: xor     ecx, esp
0x53566A: xor     al, al
0x53566C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x535671: mov     esp, ebp
0x535673: pop     ebp
0x535674: retn    0Ch
