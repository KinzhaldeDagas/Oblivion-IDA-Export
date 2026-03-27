0x4D69A0: push    ebp
0x4D69A1: mov     ebp, esp
0x4D69A3: and     esp, 0FFFFFFF0h
0x4D69A6: sub     esp, 20h
0x4D69A9: mov     eax, ds:0B30AACh
0x4D69AE: xor     eax, esp
0x4D69B0: mov     [esp+20h+var_4], eax
0x4D69B4: mov     eax, [ebp+arg_0]
0x4D69B7: fld     dword ptr [eax]
0x4D69B9: lea     edx, [esp+20h+var_20]
0x4D69BC: fld     qword ptr ds:0A39088h
0x4D69C2: push    edx
0x4D69C3: fmul    st(1), st
0x4D69C5: fxch    st(1)
0x4D69C7: fstp    [esp+24h+var_20]
0x4D69CB: fld     dword ptr [eax+4]
0x4D69CE: fmul    st, st(1)
0x4D69D0: fstp    [esp+24h+var_1C]
0x4D69D4: fmul    dword ptr [eax+8]
0x4D69D7: mov     eax, [ecx]
0x4D69D9: mov     eax, [eax+94h]
0x4D69DF: fstp    [esp+24h+var_18]
0x4D69E3: call    eax
0x4D69E5: mov     ecx, [esp+20h+var_4]
0x4D69E9: xor     ecx, esp
0x4D69EB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4D69F0: mov     esp, ebp
0x4D69F2: pop     ebp
0x4D69F3: retn    4
