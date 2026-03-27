0x452A10: push    ebp
0x452A11: mov     ebp, esp
0x452A13: and     esp, 0FFFFFFF0h
0x452A16: sub     esp, 20h
0x452A19: mov     eax, ds:0B30AACh
0x452A1E: xor     eax, esp
0x452A20: mov     [esp+20h+var_4], eax
0x452A24: mov     eax, [ebp+a2]
0x452A27: fld     dword ptr [eax]
0x452A29: fld     qword ptr ds:0A39088h
0x452A2F: fmul    st(1), st
0x452A31: fxch    st(1)
0x452A33: fstp    [esp+20h+var_20]
0x452A36: fld     dword ptr [eax+4]
0x452A39: fmul    st, st(1)
0x452A3B: fstp    [esp+20h+var_1C]
0x452A3F: fmul    dword ptr [eax+8]
0x452A42: lea     eax, [esp+20h+var_20]
0x452A45: push    eax; a2
0x452A46: fstp    [esp+24h+var_18]
0x452A4A: call    sub_891560
0x452A4F: mov     ecx, [esp+20h+var_4]
0x452A53: xor     ecx, esp
0x452A55: call    @__security_check_cookie@4; __security_check_cookie(x)
0x452A5A: mov     esp, ebp
0x452A5C: pop     ebp
0x452A5D: retn    4
