0x4F8840: push    ebp
0x4F8841: mov     ebp, esp
0x4F8843: and     esp, 0FFFFFFF0h
0x4F8846: sub     esp, 20h
0x4F8849: mov     eax, ds:0B30AACh
0x4F884E: xor     eax, esp
0x4F8850: mov     [esp+20h+var_4], eax
0x4F8854: mov     eax, [ebp+arg_0]
0x4F8857: fld     dword ptr [eax]
0x4F8859: fld     qword ptr ds:0A39088h
0x4F885F: fmul    st(1), st
0x4F8861: fxch    st(1)
0x4F8863: fstp    [esp+20h+var_20]
0x4F8866: fld     dword ptr [eax+4]
0x4F8869: fmul    st, st(1)
0x4F886B: fstp    [esp+20h+var_20+4]
0x4F886F: fmul    dword ptr [eax+8]
0x4F8872: fstp    [esp+20h+var_20+8]
0x4F8876: movaps  xmm0, xmmword ptr [esp+20h+var_20]
0x4F887A: movaps  xmmword ptr [ecx], xmm0
0x4F887D: mov     ecx, [esp+20h+var_4]
0x4F8881: xor     ecx, esp
0x4F8883: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4F8888: mov     esp, ebp
0x4F888A: pop     ebp
0x4F888B: retn    4
