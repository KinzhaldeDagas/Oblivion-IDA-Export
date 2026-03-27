0x915D00: push    ebp
0x915D01: mov     ebp, esp
0x915D03: and     esp, 0FFFFFFF0h
0x915D06: sub     esp, 54h
0x915D09: mov     eax, ds:0B30AACh
0x915D0E: xor     eax, esp
0x915D10: mov     [esp+54h+var_4], eax
0x915D14: mov     eax, ecx
0x915D16: mov     ecx, [ebp+arg_4]
0x915D19: mov     [esp+54h+var_38], ecx
0x915D1D: mov     ecx, [ebp+arg_0]
0x915D20: mov     [esp+54h+var_50], eax
0x915D24: mov     eax, [eax+28h]
0x915D27: mov     edx, ecx
0x915D29: shr     edx, 14h
0x915D2C: mov     eax, [eax+edx*8]
0x915D2F: mov     edx, [eax+48h]
0x915D32: push    ebx
0x915D33: movzx   ebx, word ptr [eax+44h]
0x915D37: push    esi
0x915D38: mov     esi, [eax+4Ch]
0x915D3B: push    edi
0x915D3C: mov     edi, [eax+1Ch]
0x915D3F: mov     eax, [eax+20h]
0x915D42: mov     [esp+60h+var_34], edx
0x915D46: and     ecx, 0FFFFFh
0x915D4C: xor     edx, edx
0x915D4E: test    bx, bx
0x915D51: mov     [esp+60h+var_40], ebx
0x915D55: mov     [esp+60h+var_3C], eax
0x915D59: mov     [esp+60h+var_54], ecx
0x915D5D: jbe     short loc_915DA1
0x915D5F: nop
0x915D60: mov     ebx, [esp+60h+var_34]
0x915D64: movzx   ecx, dx
0x915D67: lea     ecx, [ebx+ecx*2]
0x915D6A: movzx   ebx, word ptr [ecx]
0x915D6D: mov     [esp+60h+var_24], ecx
0x915D71: mov     ecx, [esp+60h+var_54]
0x915D75: sub     ebx, 2
0x915D78: cmp     ecx, ebx
0x915D7A: jb      short loc_915DA1
0x915D7C: mov     eax, [esp+60h+var_24]
0x915D80: movzx   eax, word ptr [eax]
0x915D83: mov     ebx, 2
0x915D88: sub     ebx, eax
0x915D8A: add     ecx, ebx
0x915D8C: add     edx, 1
0x915D8F: cmp     dx, word ptr [esp+60h+var_40]
0x915D94: lea     esi, [esi+eax*2]
0x915D97: mov     eax, [esp+60h+var_3C]
0x915D9B: mov     [esp+60h+var_54], ecx
0x915D9F: jb      short loc_915D60
0x915DA1: lea     esi, [esi+ecx*2]
0x915DA4: movzx   ecx, word ptr [esi]
0x915DA7: movzx   edx, word ptr [esi+2]
0x915DAB: add     esi, 2
0x915DAE: cmp     cx, dx
0x915DB1: movzx   esi, word ptr [esi+2]
0x915DB5: jz      loc_915F9E
0x915DBB: cmp     cx, si
0x915DBE: jz      loc_915F9E
0x915DC4: cmp     dx, si
0x915DC7: jz      loc_915F9E
0x915DCD: movzx   ecx, cx
0x915DD0: movzx   edx, dx
0x915DD3: movzx   esi, si
0x915DD6: lea     ecx, [ecx+ecx*2]
0x915DD9: lea     edx, [edx+edx*2]
0x915DDC: lea     esi, [esi+esi*2]
0x915DDF: add     ecx, ecx
0x915DE1: add     edx, edx
0x915DE3: add     esi, esi
0x915DE5: add     ecx, ecx
0x915DE7: add     edx, edx
0x915DE9: add     esi, esi
0x915DEB: cmp     [esp+60h+var_38], 0
0x915DF0: jz      short loc_915E21
0x915DF2: mov     ebx, [esp+60h+var_50]
0x915DF6: fld     dword ptr [ebx+20h]
0x915DF9: mov     ebx, [esp+60h+var_38]
0x915DFD: fstp    [esp+60h+var_40]
0x915E01: mov     word ptr [ebx+6], 1
0x915E07: fld     [esp+60h+var_40]
0x915E0B: mov     dword ptr [ebx+8], 0
0x915E12: fstp    dword ptr [ebx+0Ch]
0x915E15: mov     dword ptr [ebx], offset ??_7hkNormalTriangleShape@@6B@; const hkNormalTriangleShape::`vftable'
0x915E1B: mov     [esp+60h+var_54], ebx
0x915E1F: jmp     short loc_915E29
0x915E21: mov     [esp+60h+var_54], 0
0x915E29: test    eax, eax
0x915E2B: fld     dword ptr [ecx+edi]
0x915E2E: fld     qword ptr ds:0A39088h
0x915E34: mov     ebx, [esp+60h+var_50]
0x915E38: fmul    st(1), st
0x915E3A: movaps  xmm0, xmmword ptr [ebx+10h]
0x915E3E: mov     ebx, [esp+60h+var_54]
0x915E42: fxch    st(1)
0x915E44: fstp    dword ptr [esp+60h+var_20]
0x915E48: fld     dword ptr [ecx+edi+4]
0x915E4C: fmul    st, st(1)
0x915E4E: fstp    dword ptr [esp+60h+var_20+4]
0x915E52: fld     dword ptr [ecx+edi+8]
0x915E56: fmul    st, st(1)
0x915E58: fstp    dword ptr [esp+60h+var_20+8]
0x915E5C: movaps  xmm1, [esp+60h+var_20]
0x915E61: mulps   xmm0, xmm1
0x915E64: movaps  xmmword ptr [ebx+10h], xmm0
0x915E68: fld     dword ptr [edx+edi]
0x915E6B: mov     ebx, [esp+60h+var_50]
0x915E6F: fmul    st, st(1)
0x915E71: movaps  [esp+60h+var_20], xmm0
0x915E76: movaps  xmm0, xmmword ptr [ebx+10h]
0x915E7A: mov     ebx, [esp+60h+var_54]
0x915E7E: fstp    dword ptr [esp+60h+var_20]
0x915E82: fld     dword ptr [edx+edi+4]
0x915E86: fmul    st, st(1)
0x915E88: fstp    dword ptr [esp+60h+var_20+4]
0x915E8C: fld     dword ptr [edx+edi+8]
0x915E90: fmul    st, st(1)
0x915E92: fstp    dword ptr [esp+60h+var_20+8]
0x915E96: movaps  xmm1, [esp+60h+var_20]
0x915E9B: mulps   xmm0, xmm1
0x915E9E: movaps  xmmword ptr [ebx+20h], xmm0
0x915EA2: fld     dword ptr [esi+edi]
0x915EA5: fmul    st, st(1)
0x915EA7: movaps  [esp+60h+var_20], xmm0
0x915EAC: fstp    dword ptr [esp+60h+var_20]
0x915EB0: fld     dword ptr [esi+edi+4]
0x915EB4: fmul    st, st(1)
0x915EB6: fstp    dword ptr [esp+60h+var_20+4]
0x915EBA: fmul    dword ptr [esi+edi+8]
0x915EBE: mov     edi, [esp+60h+var_50]
0x915EC2: movaps  xmm0, xmmword ptr [edi+10h]
0x915EC6: fstp    dword ptr [esp+60h+var_20+8]
0x915ECA: movaps  xmm1, [esp+60h+var_20]
0x915ECF: mulps   xmm0, xmm1
0x915ED2: movaps  [esp+60h+var_20], xmm0
0x915ED7: movaps  xmmword ptr [ebx+30h], xmm0
0x915EDB: jz      loc_915F81
0x915EE1: fld     dword ptr [edx+eax]
0x915EE4: fadd    dword ptr [ecx+eax]
0x915EE7: fstp    [esp+60h+var_30]
0x915EEB: fld     dword ptr [edx+eax+4]
0x915EEF: fadd    dword ptr [ecx+eax+4]
0x915EF3: fstp    [esp+60h+var_2C]
0x915EF7: fld     dword ptr [edx+eax+8]
0x915EFB: fadd    dword ptr [ecx+eax+8]
0x915EFF: fstp    [esp+60h+var_28]
0x915F03: fld     dword ptr [esi+eax]
0x915F06: fadd    [esp+60h+var_30]
0x915F0A: fstp    [esp+60h+var_4C]
0x915F0E: fld     dword ptr [esi+eax+4]
0x915F12: fadd    [esp+60h+var_2C]
0x915F16: fstp    [esp+60h+var_48]
0x915F1A: fld     dword ptr [esi+eax+8]
0x915F1E: mov     eax, ebx
0x915F20: fadd    [esp+60h+var_28]
0x915F24: fstp    [esp+60h+var_44]
0x915F28: fld     [esp+60h+var_4C]
0x915F2C: fld     qword ptr ds:0A99440h
0x915F32: fmul    st(1), st
0x915F34: fxch    st(1)
0x915F36: fstp    [esp+60h+var_4C]
0x915F3A: fld     [esp+60h+var_48]
0x915F3E: fmul    st, st(1)
0x915F40: fstp    [esp+60h+var_48]
0x915F44: fmul    [esp+60h+var_44]
0x915F48: fstp    [esp+60h+var_44]
0x915F4C: fld     [esp+60h+var_4C]
0x915F50: fstp    dword ptr [esp+60h+var_20]
0x915F54: fld     [esp+60h+var_48]
0x915F58: fstp    dword ptr [esp+60h+var_20+4]
0x915F5C: fld     [esp+60h+var_44]
0x915F60: fstp    dword ptr [esp+60h+var_20+8]
0x915F64: movaps  xmm0, [esp+60h+var_20]
0x915F69: movaps  xmmword ptr [ebx+40h], xmm0
0x915F6D: pop     edi
0x915F6E: pop     esi
0x915F6F: pop     ebx
0x915F70: mov     ecx, [esp+54h+var_4]
0x915F74: xor     ecx, esp
0x915F76: call    @__security_check_cookie@4; __security_check_cookie(x)
0x915F7B: mov     esp, ebp
0x915F7D: pop     ebp
0x915F7E: retn    8
0x915F81: mov     ecx, ebx
0x915F83: call    sub_9155C0
0x915F88: mov     eax, ebx
0x915F8A: pop     edi
0x915F8B: pop     esi
0x915F8C: pop     ebx
0x915F8D: mov     ecx, [esp+54h+var_4]
0x915F91: xor     ecx, esp
0x915F93: call    @__security_check_cookie@4; __security_check_cookie(x)
0x915F98: mov     esp, ebp
0x915F9A: pop     ebp
0x915F9B: retn    8
0x915F9E: mov     ecx, [esp+60h+var_4]
0x915FA2: pop     edi
0x915FA3: pop     esi
0x915FA4: pop     ebx
0x915FA5: xor     ecx, esp
0x915FA7: xor     eax, eax
0x915FA9: call    @__security_check_cookie@4; __security_check_cookie(x)
0x915FAE: mov     esp, ebp
0x915FB0: pop     ebp
0x915FB1: retn    8
