0x43F3E0: push    ebp
0x43F3E1: mov     ebp, esp
0x43F3E3: and     esp, 0FFFFFFF0h
0x43F3E6: sub     esp, 20h
0x43F3E9: mov     eax, ds:0B30AACh
0x43F3EE: xor     eax, esp
0x43F3F0: mov     [esp+20h+var_4], eax
0x43F3F4: mov     ecx, [ebp+arg_4]
0x43F3F7: movaps  xmm0, xmmword ptr [ecx]
0x43F3FA: mov     eax, [ebp+arg_0]
0x43F3FD: movss   [esp+20h+var_14], xmm0
0x43F403: fld     [esp+20h+var_14]
0x43F407: fld     qword ptr ds:0A372E0h
0x43F40D: fmul    st(1), st
0x43F40F: fxch    st(1)
0x43F411: fstp    dword ptr [eax]
0x43F413: movaps  xmm0, xmmword ptr [ecx]
0x43F416: shufps  xmm0, xmm0, 55h ; 'U'
0x43F41A: movss   [esp+20h+var_14], xmm0
0x43F420: fld     [esp+20h+var_14]
0x43F424: fmul    st, st(1)
0x43F426: fstp    dword ptr [eax+4]
0x43F429: movaps  xmm0, xmmword ptr [ecx]
0x43F42C: mov     ecx, [esp+20h+var_4]
0x43F430: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x43F434: movss   [esp+20h+var_14], xmm0
0x43F43A: fmul    [esp+20h+var_14]
0x43F43E: xor     ecx, esp
0x43F440: fstp    dword ptr [eax+8]
0x43F443: call    @__security_check_cookie@4; __security_check_cookie(x)
0x43F448: mov     esp, ebp
0x43F44A: pop     ebp
0x43F44B: retn
