0x88D5E0: push    ebp
0x88D5E1: mov     ebp, esp
0x88D5E3: and     esp, 0FFFFFFF0h
0x88D5E6: sub     esp, 28h
0x88D5E9: mov     eax, ds:0B30AACh
0x88D5EE: xor     eax, esp
0x88D5F0: mov     [esp+28h+var_4], eax
0x88D5F4: push    esi
0x88D5F5: push    edi
0x88D5F6: mov     edx, [ecx+0ACh]
0x88D5FC: mov     eax, [ebp+arg_4]
0x88D5FF: lea     eax, [eax+edx*2]
0x88D602: add     eax, edx
0x88D604: mov     edx, [ebp+arg_C]
0x88D607: lea     edx, [edx+eax*2]
0x88D60A: movaps  xmm0, xmmword ptr [ecx+80h]
0x88D611: movaps  xmm1, xmmword ptr [ecx+70h]
0x88D615: movzx   esi, ds:byte_B2E500[eax+edx]
0x88D61D: mov     eax, 55555556h
0x88D622: imul    esi
0x88D624: mov     eax, edx
0x88D626: shr     eax, 1Fh
0x88D629: add     eax, edx
0x88D62B: subps   xmm0, xmm1
0x88D62E: movaps  [esp+30h+var_20], xmm0
0x88D633: fld     dword ptr ds:0B2E548h[eax*4]
0x88D63A: lea     eax, [eax+eax*2]
0x88D63D: fld     qword ptr ds:0A96310h
0x88D643: sub     esi, eax
0x88D645: fadd    st(1), st
0x88D647: mov     [esp+30h+var_24], esi
0x88D64B: fld     dword ptr [esp+30h+var_20]
0x88D64F: mov     edx, 2
0x88D654: sub     edx, [ebp+arg_8]
0x88D657: fmulp   st(2), st
0x88D659: test    edx, edx
0x88D65B: fxch    st(1)
0x88D65D: mov     edi, [ebp+arg_0]
0x88D660: fstp    dword ptr [esp+30h+var_20]
0x88D664: fild    [esp+30h+var_24]
0x88D668: mov     [esp+30h+var_24], edx
0x88D66C: fld     qword ptr ds:0A96308h
0x88D672: fmul    st(1), st
0x88D674: fxch    st(1)
0x88D676: fadd    st, st(2)
0x88D678: fmul    dword ptr [esp+30h+var_20+4]
0x88D67C: fstp    dword ptr [esp+30h+var_20+4]
0x88D680: fild    [esp+30h+var_24]
0x88D684: jge     short loc_88D68C
0x88D686: fadd    dword ptr ds:0A2FC78h
0x88D68C: movaps  xmm0, xmmword ptr [ecx+70h]
0x88D690: fmulp   st(1), st
0x88D692: mov     ecx, [esp+30h+var_4]
0x88D696: mov     eax, edi
0x88D698: faddp   st(1), st
0x88D69A: fmul    dword ptr [esp+30h+var_20+8]
0x88D69E: fstp    dword ptr [esp+30h+var_20+8]
0x88D6A2: movaps  xmm1, [esp+30h+var_20]
0x88D6A7: addps   xmm0, xmm1
0x88D6AA: movaps  xmmword ptr [edi], xmm0
0x88D6AD: pop     edi
0x88D6AE: pop     esi
0x88D6AF: xor     ecx, esp
0x88D6B1: call    @__security_check_cookie@4; __security_check_cookie(x)
0x88D6B6: mov     esp, ebp
0x88D6B8: pop     ebp
0x88D6B9: retn    10h
