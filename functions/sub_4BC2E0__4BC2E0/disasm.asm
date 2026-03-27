0x4BC2E0: sub     esp, 44h
0x4BC2E3: push    ebx
0x4BC2E4: push    esi
0x4BC2E5: mov     esi, [esp+4Ch+arg_4]
0x4BC2E9: xor     bl, bl
0x4BC2EB: test    esi, esi
0x4BC2ED: jz      loc_4BC497
0x4BC2F3: mov     eax, [esi+8]
0x4BC2F6: shr     eax, 5
0x4BC2F9: test    al, 1
0x4BC2FB: jnz     loc_4BC497
0x4BC301: mov     edx, [esi]
0x4BC303: mov     eax, [edx+170h]
0x4BC309: mov     ecx, esi
0x4BC30B: call    eax
0x4BC30D: cmp     byte ptr [eax+4], 29h ; ')'
0x4BC311: jnz     loc_4BC497
0x4BC317: mov     edx, [esi]
0x4BC319: mov     eax, [edx+170h]
0x4BC31F: push    edi
0x4BC320: mov     ecx, esi
0x4BC322: call    eax
0x4BC324: mov     edi, eax
0x4BC326: test    edi, edi
0x4BC328: jz      loc_4BC496
0x4BC32E: mov     edx, [esi]
0x4BC330: mov     eax, [edx+0ECh]
0x4BC336: mov     ecx, esi
0x4BC338: call    eax
0x4BC33A: fstp    [esp+50h+arg_4]
0x4BC33E: mov     edx, [esi]
0x4BC340: mov     eax, [edx+174h]
0x4BC346: mov     ecx, esi
0x4BC348: call    eax
0x4BC34A: mov     ecx, [esp+50h+arg_0]
0x4BC34E: fld     dword ptr [ecx+4]
0x4BC351: fsub    dword ptr [eax+4]
0x4BC354: fstp    [esp+50h+var_44]
0x4BC358: fld     dword ptr [ecx+8]
0x4BC35B: fsub    dword ptr [eax+8]
0x4BC35E: fstp    [esp+50h+var_40]
0x4BC362: fld     dword ptr [ecx]
0x4BC364: fsub    dword ptr [eax]
0x4BC366: fstp    [esp+50h+var_3C]
0x4BC36A: fld     [esp+50h+var_44]
0x4BC36E: fst     [esp+50h+var_38]
0x4BC372: fld     [esp+50h+var_40]
0x4BC376: fst     [esp+50h+var_34]
0x4BC37A: fld     [esp+50h+var_3C]
0x4BC37E: fmul    st, st
0x4BC380: fld     st(2)
0x4BC382: fmulp   st(3), st
0x4BC384: faddp   st(2), st
0x4BC386: fmul    st, st
0x4BC388: faddp   st(1), st
0x4BC38A: fstp    [esp+50h+var_40]
0x4BC38E: fld     [esp+50h+var_40]
0x4BC392: call    __CIsqrt
0x4BC397: fstp    [esp+50h+var_40]
0x4BC39B: fld     [esp+50h+var_40]
0x4BC39F: fld     dword ptr [edi+2Ch]
0x4BC3A2: fmul    [esp+50h+arg_4]
0x4BC3A6: fcompp
0x4BC3A8: fnstsw  ax
0x4BC3AA: test    ah, 41h
0x4BC3AD: jnz     loc_4BC496
0x4BC3B3: lea     ecx, [esp+50h+var_24]
0x4BC3B7: push    ecx
0x4BC3B8: mov     ecx, esi
0x4BC3BA: call    sub_4D7AF0
0x4BC3BF: push    eax
0x4BC3C0: lea     edx, [esp+54h+var_3C]
0x4BC3C4: push    edx
0x4BC3C5: lea     eax, [esp+58h+var_30]
0x4BC3C9: push    eax
0x4BC3CA: call    sub_710250
0x4BC3CF: mov     ecx, [eax]
0x4BC3D1: mov     [esp+5Ch+var_3C], ecx
0x4BC3D5: mov     edx, [eax+4]
0x4BC3D8: add     esp, 0Ch
0x4BC3DB: lea     ecx, [esp+50h+var_30]
0x4BC3DF: mov     [esp+50h+var_38], edx
0x4BC3E3: mov     eax, [eax+8]
0x4BC3E6: push    ecx
0x4BC3E7: mov     ecx, edi
0x4BC3E9: mov     [esp+54h+var_34], eax
0x4BC3ED: call    sub_4BC290
0x4BC3F2: fld     [esp+50h+var_30]
0x4BC3F6: fld     [esp+50h+arg_4]
0x4BC3FA: fld     st
0x4BC3FC: fmulp   st(2), st
0x4BC3FE: fxch    st(1)
0x4BC400: fstp    [esp+50h+var_30]
0x4BC404: fld     [esp+50h+var_2C]
0x4BC408: fmul    st, st(1)
0x4BC40A: fstp    [esp+50h+var_2C]
0x4BC40E: fmul    [esp+50h+var_28]
0x4BC412: fstp    [esp+50h+var_28]
0x4BC416: fld     [esp+50h+var_3C]
0x4BC41A: fld     [esp+50h+var_30]
0x4BC41E: fcom    st(1)
0x4BC420: fnstsw  ax
0x4BC422: test    ah, 41h
0x4BC425: jnz     short loc_4BC492
0x4BC427: fld     [esp+50h+var_38]
0x4BC42B: fld     [esp+50h+var_2C]
0x4BC42F: fcom    st(1)
0x4BC431: fnstsw  ax
0x4BC433: test    ah, 41h
0x4BC436: jnz     short loc_4BC479
0x4BC438: fld     [esp+50h+var_34]
0x4BC43C: fld     [esp+50h+var_28]
0x4BC440: fcom    st(1)
0x4BC442: fnstsw  ax
0x4BC444: test    ah, 41h
0x4BC447: jnz     short loc_4BC48A
0x4BC449: fxch    st(4)
0x4BC44B: fchs
0x4BC44D: fcomp   st(5)
0x4BC44F: fnstsw  ax
0x4BC451: fstp    st(4)
0x4BC453: test    ah, 5
0x4BC456: jp      short loc_4BC479
0x4BC458: fchs
0x4BC45A: fcompp
0x4BC45C: fnstsw  ax
0x4BC45E: test    ah, 5
0x4BC461: jp      short loc_4BC492
0x4BC463: fchs
0x4BC465: fcompp
0x4BC467: fnstsw  ax
0x4BC469: test    ah, 5
0x4BC46C: jp      short loc_4BC496
0x4BC46E: pop     edi
0x4BC46F: mov     bl, 1
0x4BC471: pop     esi
0x4BC472: mov     al, bl
0x4BC474: pop     ebx
0x4BC475: add     esp, 44h
0x4BC478: retn
0x4BC479: fstp    st(3)
0x4BC47B: pop     edi
0x4BC47C: fstp    st(1)
0x4BC47E: pop     esi
0x4BC47F: fstp    st
0x4BC481: mov     al, bl
0x4BC483: fstp    st
0x4BC485: pop     ebx
0x4BC486: add     esp, 44h
0x4BC489: retn
0x4BC48A: fstp    st(5)
0x4BC48C: fstp    st(3)
0x4BC48E: fstp    st(2)
0x4BC490: fstp    st(2)
0x4BC492: fstp    st(1)
0x4BC494: fstp    st
0x4BC496: pop     edi
0x4BC497: pop     esi
0x4BC498: mov     al, bl
0x4BC49A: pop     ebx
0x4BC49B: add     esp, 44h
0x4BC49E: retn
