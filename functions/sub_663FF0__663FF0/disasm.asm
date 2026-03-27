0x663FF0: push    ebp
0x663FF1: mov     ebp, esp
0x663FF3: and     esp, 0FFFFFFF0h
0x663FF6: sub     esp, 20h
0x663FF9: mov     eax, ds:0B30AACh
0x663FFE: xor     eax, esp
0x664000: mov     [esp+20h+var_4], eax
0x664004: mov     eax, [ebp+arg_0]
0x664007: fld     dword ptr [eax]
0x664009: fld     qword ptr ds:0A39088h
0x66400F: fmul    st(1), st
0x664011: fxch    st(1)
0x664013: fstp    [esp+20h+var_20]
0x664016: fld     dword ptr [eax+4]
0x664019: fmul    st, st(1)
0x66401B: fstp    [esp+20h+var_20+4]
0x66401F: fmul    dword ptr [eax+8]
0x664022: fstp    [esp+20h+var_20+8]
0x664026: movaps  xmm0, xmmword ptr [esp+20h+var_20]
0x66402A: movaps  xmmword ptr [ecx+60h], xmm0
0x66402E: mov     ecx, [esp+20h+var_4]
0x664032: xor     ecx, esp
0x664034: call    @__security_check_cookie@4; __security_check_cookie(x)
0x664039: mov     esp, ebp
0x66403B: pop     ebp
0x66403C: retn    4
