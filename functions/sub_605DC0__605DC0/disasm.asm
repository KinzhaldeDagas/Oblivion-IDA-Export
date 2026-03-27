0x605DC0: push    ebp
0x605DC1: mov     ebp, esp
0x605DC3: and     esp, 0FFFFFFF0h
0x605DC6: sub     esp, 20h
0x605DC9: mov     eax, ds:0B30AACh
0x605DCE: xor     eax, esp
0x605DD0: mov     [esp+20h+var_4], eax
0x605DD4: test    ecx, ecx
0x605DD6: mov     eax, [ebp+arg_0]
0x605DD9: fld     dword ptr [eax]
0x605DDB: fld     qword ptr ds:0A39088h
0x605DE1: fmul    st(1), st
0x605DE3: fxch    st(1)
0x605DE5: fstp    [esp+20h+var_20]
0x605DE8: fld     dword ptr [eax+4]
0x605DEB: fmul    st, st(1)
0x605DED: fstp    [esp+20h+var_1C]
0x605DF1: fmul    dword ptr [eax+8]
0x605DF4: fstp    [esp+20h+var_18]
0x605DF8: jz      short loc_605E0A
0x605DFA: mov     ecx, [ecx+8]
0x605DFD: test    ecx, ecx
0x605DFF: jz      short loc_605E0A
0x605E01: lea     eax, [esp+20h+var_20]
0x605E04: push    eax
0x605E05: call    sub_8B8A10
0x605E0A: mov     ecx, [esp+20h+var_4]
0x605E0E: xor     ecx, esp
0x605E10: call    @__security_check_cookie@4; __security_check_cookie(x)
0x605E15: mov     esp, ebp
0x605E17: pop     ebp
0x605E18: retn    4
