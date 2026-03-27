0x4CA2F0: push    ebp
0x4CA2F1: mov     ebp, esp
0x4CA2F3: and     esp, 0FFFFFFF0h
0x4CA2F6: sub     esp, 20h
0x4CA2F9: mov     eax, ds:0B30AACh
0x4CA2FE: xor     eax, esp
0x4CA300: mov     [esp+20h+var_4], eax
0x4CA304: mov     eax, [ebp+arg_0]
0x4CA307: fld     dword ptr [eax]
0x4CA309: fld     qword ptr ds:0A39088h
0x4CA30F: fmul    st(1), st
0x4CA311: fxch    st(1)
0x4CA313: fstp    [esp+20h+var_20]
0x4CA316: fld     dword ptr [eax+4]
0x4CA319: fmul    st, st(1)
0x4CA31B: fstp    [esp+20h+var_1C]
0x4CA31F: fmul    dword ptr [eax+8]
0x4CA322: lea     eax, [esp+20h+var_20]
0x4CA325: push    eax
0x4CA326: fstp    [esp+24h+var_18]
0x4CA32A: call    sub_8A7D50
0x4CA32F: mov     ecx, [esp+20h+var_4]
0x4CA333: xor     ecx, esp
0x4CA335: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4CA33A: mov     esp, ebp
0x4CA33C: pop     ebp
0x4CA33D: retn    4
