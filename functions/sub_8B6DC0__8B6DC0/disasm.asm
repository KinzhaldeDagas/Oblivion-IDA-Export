0x8B6DC0: push    ebp
0x8B6DC1: mov     ebp, esp
0x8B6DC3: and     esp, 0FFFFFFF0h
0x8B6DC6: sub     esp, 94h
0x8B6DCC: mov     eax, ds:0B30AACh
0x8B6DD1: xor     eax, esp
0x8B6DD3: mov     [esp+94h+var_4], eax
0x8B6DDA: test    ecx, ecx
0x8B6DDC: mov     edx, [ebp+arg_4]
0x8B6DDF: push    ebx
0x8B6DE0: push    esi
0x8B6DE1: mov     esi, [ebp+arg_8]
0x8B6DE4: push    edi
0x8B6DE5: mov     edi, [ebp+arg_0]
0x8B6DE8: mov     [esp+0A0h+var_7C], edi
0x8B6DEC: jz      short loc_8B6DF3
0x8B6DEE: mov     ebx, [ecx+8]
0x8B6DF1: jmp     short loc_8B6DF5
0x8B6DF3: xor     ebx, ebx
0x8B6DF5: movaps  xmm1, xmmword ptr [edx]
0x8B6DF8: movaps  xmm2, xmmword ptr [edx+10h]
0x8B6DFC: movaps  xmm3, xmmword ptr [edx+20h]
0x8B6E00: movaps  xmm4, xmmword ptr [edx+30h]
0x8B6E04: lea     eax, [ebx+10h]
0x8B6E07: lea     edx, [esp+0A0h+var_50]
0x8B6E0B: mov     ecx, 2
0x8B6E10: sub     edx, eax
0x8B6E12: movaps  xmm0, xmmword ptr [eax]
0x8B6E15: movaps  xmm5, xmm0
0x8B6E18: shufps  xmm5, xmm0, 55h ; 'U'
0x8B6E1C: movaps  xmm6, xmm0
0x8B6E1F: shufps  xmm6, xmm0, 0
0x8B6E23: mulps   xmm6, xmm1
0x8B6E26: mulps   xmm5, xmm2
0x8B6E29: addps   xmm5, xmm6
0x8B6E2C: movaps  xmm6, xmm0
0x8B6E2F: shufps  xmm6, xmm0, 0AAh ; 'ª'
0x8B6E33: mulps   xmm6, xmm3
0x8B6E36: addps   xmm6, xmm4
0x8B6E39: addps   xmm5, xmm6
0x8B6E3C: movaps  xmmword ptr [edx+eax], xmm5
0x8B6E40: sub     ecx, 1
0x8B6E43: add     eax, 10h
0x8B6E46: test    ecx, ecx
0x8B6E48: jg      short loc_8B6E12
0x8B6E4A: lea     eax, [esp+0A0h+var_30]
0x8B6E4E: push    eax
0x8B6E4F: lea     ecx, [esp+0A4h+var_40]
0x8B6E53: push    ecx
0x8B6E54: lea     edx, [esp+0A8h+var_50]
0x8B6E58: push    edx
0x8B6E59: push    edi
0x8B6E5A: call    sub_8D1CD0
0x8B6E5F: fld     dword ptr [edi+0Ch]
0x8B6E62: fadd    dword ptr [ebx+0Ch]
0x8B6E65: movaps  xmm1, [esp+0B0h+var_30]
0x8B6E6D: movaps  xmm0, xmmword ptr [edi]
0x8B6E70: subps   xmm0, xmm1
0x8B6E73: fstp    [esp+0B0h+var_88]
0x8B6E77: movaps  [esp+0B0h+var_20], xmm0
0x8B6E7F: mulps   xmm0, xmm0
0x8B6E82: movaps  xmm1, xmm0
0x8B6E85: shufps  xmm1, xmm0, 55h ; 'U'
0x8B6E89: movaps  xmm2, xmm0
0x8B6E8C: addss   xmm1, xmm0
0x8B6E90: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8B6E94: addss   xmm2, xmm1
0x8B6E98: movss   dword ptr [esp+0B0h+var_70], xmm2
0x8B6E9E: fld     dword ptr [esp+0B0h+var_70]
0x8B6EA2: fld     st
0x8B6EA4: add     esp, 10h
0x8B6EA7: fld     [esp+0A0h+var_88]
0x8B6EAB: movaps  [esp+0A0h+var_60], xmm0
0x8B6EB0: fst     [esp+0A0h+var_78]
0x8B6EB4: fld     st
0x8B6EB6: fmul    st, st(1)
0x8B6EB8: fstp    [esp+0A0h+var_88]
0x8B6EBC: fld     [esp+0A0h+var_88]
0x8B6EC0: fcomp   st(2)
0x8B6EC2: fnstsw  ax
0x8B6EC4: test    ah, 41h
0x8B6EC7: jp      short loc_8B6EE8
0x8B6EC9: fstp    st(1)
0x8B6ECB: xor     al, al
0x8B6ECD: fstp    st
0x8B6ECF: fstp    st
0x8B6ED1: pop     edi
0x8B6ED2: pop     esi
0x8B6ED3: pop     ebx
0x8B6ED4: mov     ecx, [esp+94h+var_4]
0x8B6EDB: xor     ecx, esp
0x8B6EDD: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8B6EE2: mov     esp, ebp
0x8B6EE4: pop     ebp
0x8B6EE5: retn    0Ch
0x8B6EE8: fldz
0x8B6EEA: fcom    st(3)
0x8B6EEC: fnstsw  ax
0x8B6EEE: fstp    st(3)
0x8B6EF0: test    ah, 5
0x8B6EF3: jp      loc_8B6F89
0x8B6EF9: fstp    st
0x8B6EFB: fstp    st(1)
0x8B6EFD: call    __CIsqrt
0x8B6F02: fstp    [esp+0A0h+var_88]
0x8B6F06: movaps  xmm0, [esp+0A0h+var_60]
0x8B6F0B: fld     [esp+0A0h+var_88]
0x8B6F0F: movss   xmm3, dword ptr ds:0A46C30h
0x8B6F17: fstp    [esp+0A0h+var_88]
0x8B6F1B: fld     dword ptr [esi+1Ch]
0x8B6F1E: movaps  xmm1, xmm0
0x8B6F21: shufps  xmm1, xmm0, 55h ; 'U'
0x8B6F25: fstp    [esp+0A0h+var_84]
0x8B6F29: fld     [esp+0A0h+var_84]
0x8B6F2D: addss   xmm1, xmm0
0x8B6F31: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x8B6F35: addss   xmm0, xmm1
0x8B6F39: movaps  xmm1, xmm0
0x8B6F3C: rsqrtss xmm1, xmm1
0x8B6F40: mulss   xmm0, xmm1
0x8B6F44: mulss   xmm0, xmm1
0x8B6F48: xorps   xmm2, xmm2
0x8B6F4B: movss   xmm2, xmm3
0x8B6F4F: movss   xmm3, dword ptr ds:0A3D65Ch
0x8B6F57: subss   xmm2, xmm0
0x8B6F5B: xorps   xmm0, xmm0
0x8B6F5E: movss   xmm0, xmm3
0x8B6F62: mulss   xmm0, xmm1
0x8B6F66: mulss   xmm0, xmm2
0x8B6F6A: movaps  xmm1, xmm0
0x8B6F6D: shufps  xmm1, xmm0, 0
0x8B6F71: mulps   xmm1, [esp+0A0h+var_20]
0x8B6F79: movaps  xmmword ptr [esi+10h], xmm1
0x8B6F7D: fstp    dword ptr [esi+1Ch]
0x8B6F80: fld     [esp+0A0h+var_78]
0x8B6F84: jmp     loc_8B70B4
0x8B6F89: movaps  xmm0, [esp+0A0h+var_40]
0x8B6F8E: fstp    st(1)
0x8B6F90: movaps  xmm1, [esp+0A0h+var_50]
0x8B6F95: fxch    st(1)
0x8B6F97: fst     [esp+0A0h+var_88]
0x8B6F9B: subps   xmm0, xmm1
0x8B6F9E: movaps  [esp+0A0h+var_60], xmm0
0x8B6FA3: fld     dword ptr [esp+0A0h+var_60]
0x8B6FA7: fabs
0x8B6FA9: movaps  xmm0, xmmword ptr [esi+10h]
0x8B6FAD: fstp    [esp+0A0h+var_84]
0x8B6FB1: xor     ecx, ecx
0x8B6FB3: fld     [esp+0A0h+var_84]
0x8B6FB7: movaps  [esp+0A0h+var_70], xmm0
0x8B6FBC: fstp    [esp+0A0h+var_84]
0x8B6FC0: mov     edx, 1
0x8B6FC5: fld     dword ptr [esp+0A0h+var_60+4]
0x8B6FC9: mov     edi, 2
0x8B6FCE: fabs
0x8B6FD0: fstp    [esp+0A0h+var_80]
0x8B6FD4: fld     [esp+0A0h+var_80]
0x8B6FD8: fstp    dword ptr [esp+0A0h+var_78]
0x8B6FDC: fld     dword ptr [esp+0A0h+var_60+8]
0x8B6FE0: fabs
0x8B6FE2: fstp    [esp+0A0h+var_80]
0x8B6FE6: fld     [esp+0A0h+var_80]
0x8B6FEA: fstp    [esp+0A0h+var_80]
0x8B6FEE: fld     dword ptr [esp+0A0h+var_78]
0x8B6FF2: fld     [esp+0A0h+var_84]
0x8B6FF6: fcomp   st(1)
0x8B6FF8: fnstsw  ax
0x8B6FFA: test    ah, 41h
0x8B6FFD: jnz     short loc_8B700C
0x8B6FFF: fstp    [esp+0A0h+var_84]
0x8B7003: xor     edx, edx
0x8B7005: mov     ecx, 1
0x8B700A: jmp     short loc_8B700E
0x8B700C: fstp    st
0x8B700E: fld     [esp+0A0h+var_80]
0x8B7012: fld     [esp+0A0h+var_84]
0x8B7016: fcompp
0x8B7018: fnstsw  ax
0x8B701A: test    ah, 41h
0x8B701D: jnz     short loc_8B7026
0x8B701F: mov     edi, ecx
0x8B7021: mov     ecx, 2
0x8B7026: movss   xmm4, dword ptr ds:0A46C30h
0x8B702E: fst     dword ptr [esp+ecx*4+0A0h+var_70]
0x8B7032: fstp    dword ptr [esp+0A0h+var_70+0Ch]
0x8B7036: xorps   xmm3, xmm3
0x8B7039: fld     dword ptr [esp+edi*4+0A0h+var_60]
0x8B703D: movss   xmm3, xmm4
0x8B7041: movss   xmm4, dword ptr ds:0A3D65Ch
0x8B7049: fstp    dword ptr [esp+edx*4+0A0h+var_70]
0x8B704D: fld     dword ptr [esp+edx*4+0A0h+var_60]
0x8B7051: fchs
0x8B7053: fstp    dword ptr [esp+edi*4+0A0h+var_70]
0x8B7057: movaps  xmm2, [esp+0A0h+var_70]
0x8B705C: fld     dword ptr [esi+1Ch]
0x8B705F: mov     edi, [esp+0A0h+var_7C]
0x8B7063: movaps  xmm0, xmm2
0x8B7066: fstp    dword ptr [esp+0A0h+var_78]
0x8B706A: fld     dword ptr [esp+0A0h+var_78]
0x8B706E: mulps   xmm0, xmm2
0x8B7071: movaps  xmm1, xmm0
0x8B7074: shufps  xmm1, xmm0, 55h ; 'U'
0x8B7078: addss   xmm1, xmm0
0x8B707C: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x8B7080: addss   xmm0, xmm1
0x8B7084: movaps  xmm1, xmm0
0x8B7087: rsqrtss xmm1, xmm1
0x8B708B: mulss   xmm0, xmm1
0x8B708F: mulss   xmm0, xmm1
0x8B7093: subss   xmm3, xmm0
0x8B7097: xorps   xmm0, xmm0
0x8B709A: movss   xmm0, xmm4
0x8B709E: mulss   xmm0, xmm1
0x8B70A2: mulss   xmm0, xmm3
0x8B70A6: shufps  xmm0, xmm0, 0
0x8B70AA: mulps   xmm0, xmm2
0x8B70AD: movaps  xmmword ptr [esi+10h], xmm0
0x8B70B1: fstp    dword ptr [esi+1Ch]
0x8B70B4: fld     [esp+0A0h+var_88]
0x8B70B8: mov     ecx, [esp+0A0h+var_4]
0x8B70BF: fld     dword ptr [ebx+0Ch]
0x8B70C2: xorps   xmm0, xmm0
0x8B70C5: fsub    st, st(1)
0x8B70C7: mov     al, 1
0x8B70C9: fstp    [esp+0A0h+var_7C]
0x8B70CD: movss   xmm1, [esp+0A0h+var_7C]
0x8B70D3: movss   xmm0, xmm1
0x8B70D7: fsubrp  st(1), st
0x8B70D9: movaps  xmm1, xmm0
0x8B70DC: shufps  xmm1, xmm0, 0
0x8B70E0: movaps  xmm0, xmmword ptr [esi+10h]
0x8B70E4: mulps   xmm1, xmm0
0x8B70E7: movaps  xmm0, xmmword ptr [edi]
0x8B70EA: fstp    dword ptr [esi+1Ch]
0x8B70ED: pop     edi
0x8B70EE: addps   xmm1, xmm0
0x8B70F1: movaps  xmmword ptr [esi], xmm1
0x8B70F4: pop     esi
0x8B70F5: pop     ebx
0x8B70F6: xor     ecx, esp
0x8B70F8: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8B70FD: mov     esp, ebp
0x8B70FF: pop     ebp
0x8B7100: retn    0Ch
