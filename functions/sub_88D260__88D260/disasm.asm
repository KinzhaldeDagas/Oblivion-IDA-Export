0x88D260: push    ebp
0x88D261: mov     ebp, esp
0x88D263: and     esp, 0FFFFFFF0h
0x88D266: sub     esp, 20h
0x88D269: mov     eax, ds:0B30AACh
0x88D26E: xor     eax, esp
0x88D270: mov     [esp+20h+var_4], eax
0x88D274: mov     eax, [ebp+arg_0]
0x88D277: fld     dword ptr [eax]
0x88D279: fld     qword ptr ds:0A39088h
0x88D27F: fmul    st(1), st
0x88D281: fxch    st(1)
0x88D283: fstp    [esp+20h+var_20]
0x88D286: fld     dword ptr [eax+4]
0x88D289: fmul    st, st(1)
0x88D28B: fstp    [esp+20h+var_1C]
0x88D28F: fmul    dword ptr [eax+8]
0x88D292: lea     eax, [esp+20h+var_20]
0x88D295: push    eax
0x88D296: fstp    [esp+24h+var_18]
0x88D29A: call    sub_88C600
0x88D29F: mov     ecx, [esp+20h+var_4]
0x88D2A3: xor     ecx, esp
0x88D2A5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x88D2AA: mov     esp, ebp
0x88D2AC: pop     ebp
0x88D2AD: retn    4
