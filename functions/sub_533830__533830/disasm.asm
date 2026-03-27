0x533830: push    ebp
0x533831: mov     ebp, esp
0x533833: and     esp, 0FFFFFFF0h
0x533836: sub     esp, 44h
0x533839: mov     eax, ds:0B30AACh
0x53383E: xor     eax, esp
0x533840: mov     [esp+44h+var_4], eax
0x533844: fldz
0x533846: push    ebx
0x533847: fld     [ebp+arg_8]
0x53384A: push    esi
0x53384B: fucom   st(1)
0x53384D: push    edi
0x53384E: mov     ebx, ecx
0x533850: fnstsw  ax
0x533852: fstp    st(1)
0x533854: test    ah, 44h
0x533857: fld     qword ptr ds:0A39088h
0x53385D: jnp     short loc_533888
0x53385F: mov     eax, [ebx+1A0h]
0x533865: test    eax, eax
0x533867: jz      short loc_533888
0x533869: mov     eax, [eax+8]
0x53386C: test    eax, eax
0x53386E: jz      short loc_533879
0x533870: add     eax, 14h
0x533873: jz      short loc_533879
0x533875: mov     eax, [eax]
0x533877: jmp     short loc_53387B
0x533879: xor     eax, eax
0x53387B: test    eax, eax
0x53387D: jz      short loc_533888
0x53387F: fmul    st(1), st
0x533881: fxch    st(1)
0x533883: fstp    dword ptr [eax+0Ch]
0x533886: jmp     short loc_53388A
0x533888: fstp    st(1)
0x53388A: mov     esi, [ebx+1A0h]
0x533890: fld     dword ptr ds:0A5613Ch
0x533896: test    esi, esi
0x533898: fstp    dword ptr [ebx+4]
0x53389B: mov     dword ptr [ebx+14h], 0
0x5338A2: jz      short loc_533917
0x5338A4: fld     dword ptr ds:0A56138h
0x5338AA: mov     eax, [ebp+arg_0]
0x5338AD: fst     [esp+50h+var_20]
0x5338B1: fstp    [esp+50h+var_1C]
0x5338B5: fld     dword ptr [eax]
0x5338B7: fmul    st, st(1)
0x5338B9: fstp    [esp+50h+var_40]
0x5338BD: fld     dword ptr [eax+4]
0x5338C0: fmul    st, st(1)
0x5338C2: fstp    [esp+50h+var_3C]
0x5338C6: fld     dword ptr [eax+8]
0x5338C9: mov     eax, [ebp+arg_4]
0x5338CC: fmul    st, st(1)
0x5338CE: fstp    [esp+50h+var_38]
0x5338D2: fld     dword ptr [eax]
0x5338D4: fmul    st, st(1)
0x5338D6: fstp    [esp+50h+var_30]
0x5338DA: fld     dword ptr [eax+4]
0x5338DD: fmul    st, st(1)
0x5338DF: fstp    [esp+50h+var_2C]
0x5338E3: fmul    dword ptr [eax+8]
0x5338E6: fstp    [esp+50h+var_28]
0x5338EA: mov     edi, [esi+8]
0x5338ED: test    edi, edi
0x5338EF: jz      short loc_533919
0x5338F1: mov     ecx, esi
0x5338F3: call    sub_89F570
0x5338F8: mov     eax, [edi]
0x5338FA: mov     eax, [eax+30h]
0x5338FD: push    0
0x5338FF: push    ebx
0x533900: lea     ecx, [esp+58h+var_30]
0x533904: push    ecx
0x533905: lea     edx, [esp+5Ch+var_40]
0x533909: push    edx
0x53390A: mov     ecx, edi
0x53390C: call    eax
0x53390E: mov     ecx, esi
0x533910: call    sub_89F570
0x533915: jmp     short loc_533919
0x533917: fstp    st
0x533919: mov     eax, [ebx+14h]
0x53391C: mov     ecx, [esp+50h+var_4]
0x533920: pop     edi
0x533921: pop     esi
0x533922: pop     ebx
0x533923: xor     ecx, esp
0x533925: call    @__security_check_cookie@4; __security_check_cookie(x)
0x53392A: mov     esp, ebp
0x53392C: pop     ebp
0x53392D: retn    0Ch
