0x716F40: push    ebp
0x716F41: mov     ebp, esp
0x716F43: movzx   eax, word ptr [ebp+arg_0]
0x716F47: push    ebx
0x716F48: mov     [ebp+arg_0], eax
0x716F4B: mov     edx, [ebp+arg_0]
0x716F4E: cmp     edx, 0
0x716F51: jnz     short loc_716F55
0x716F53: jmp     short loc_716FBB
0x716F55: mov     eax, [ebp+arg_4]
0x716F58: mov     ebx, [ebp+arg_8]
0x716F5B: mov     ecx, [ebp+arg_C]
0x716F5E: fld     dword ptr [eax]
0x716F60: fmul    dword ptr [ecx]
0x716F62: fld     dword ptr [eax+4]
0x716F65: fmul    dword ptr [ecx+4]
0x716F68: fld     dword ptr [eax+8]
0x716F6B: fmul    dword ptr [ecx+8]
0x716F6E: fxch    st(1)
0x716F70: faddp   st(2), st
0x716F72: fld     dword ptr [eax]
0x716F74: fmul    dword ptr [ecx+0Ch]
0x716F77: fxch    st(2)
0x716F79: faddp   st(1), st
0x716F7B: fxch    st(1)
0x716F7D: fld     dword ptr [eax+4]
0x716F80: fmul    dword ptr [ecx+10h]
0x716F83: fld     dword ptr [eax+8]
0x716F86: fmul    dword ptr [ecx+14h]
0x716F89: fxch    st(3)
0x716F8B: fstp    dword ptr [ebx]
0x716F8D: faddp   st(1), st
0x716F8F: fld     dword ptr [eax]
0x716F91: fmul    dword ptr [ecx+18h]
0x716F94: fxch    st(2)
0x716F96: faddp   st(1), st
0x716F98: fld     dword ptr [eax+4]
0x716F9B: fmul    dword ptr [ecx+1Ch]
0x716F9E: fld     dword ptr [eax+8]
0x716FA1: fmul    dword ptr [ecx+20h]
0x716FA4: fxch    st(1)
0x716FA6: faddp   st(3), st
0x716FA8: fxch    st(1)
0x716FAA: fstp    dword ptr [ebx+4]
0x716FAD: faddp   st(1), st
0x716FAF: add     eax, 0Ch
0x716FB2: add     ebx, 0Ch
0x716FB5: fstp    dword ptr [ebx-4]
0x716FB8: dec     edx
0x716FB9: jnz     short loc_716F5E
0x716FBB: pop     ebx
0x716FBC: pop     ebp
0x716FBD: retn
