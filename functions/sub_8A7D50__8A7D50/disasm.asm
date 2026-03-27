0x8A7D50: push    ebp
0x8A7D51: mov     ebp, esp
0x8A7D53: and     esp, 0FFFFFFF0h
0x8A7D56: sub     esp, 28h
0x8A7D59: mov     eax, ds:0B30AACh
0x8A7D5E: xor     eax, esp
0x8A7D60: mov     [esp+28h+var_4], eax
0x8A7D64: mov     eax, [ebp+arg_0]
0x8A7D67: movaps  xmm1, xmmword ptr [eax]
0x8A7D6A: movaps  xmm0, xmmword ptr [ecx+50h]
0x8A7D6E: push    ebx
0x8A7D6F: movaps  xmm2, xmm1
0x8A7D72: push    esi
0x8A7D73: xor     bl, bl
0x8A7D75: subps   xmm2, xmm0
0x8A7D78: movaps  [esp+30h+var_20], xmm2
0x8A7D7D: xor     edx, edx
0x8A7D7F: lea     esi, [ecx+90h]
0x8A7D85: fld     dword ptr [esp+edx*4+30h+var_20]
0x8A7D89: fabs
0x8A7D8B: fstp    [esp+30h+var_24]
0x8A7D8F: fld     [esp+30h+var_24]
0x8A7D93: fld     dword ptr [esi]
0x8A7D95: fcompp
0x8A7D97: fnstsw  ax
0x8A7D99: test    ah, 41h
0x8A7D9C: jnp     short loc_8A7DBE
0x8A7D9E: add     edx, 1
0x8A7DA1: add     esi, 4
0x8A7DA4: cmp     edx, 3
0x8A7DA7: jb      short loc_8A7D85
0x8A7DA9: mov     al, bl
0x8A7DAB: pop     esi
0x8A7DAC: pop     ebx
0x8A7DAD: mov     ecx, [esp+28h+var_4]
0x8A7DB1: xor     ecx, esp
0x8A7DB3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8A7DB8: mov     esp, ebp
0x8A7DBA: pop     ebp
0x8A7DBB: retn    4
0x8A7DBE: lea     eax, [esp+30h+var_20]
0x8A7DC2: push    eax
0x8A7DC3: mov     bl, 1
0x8A7DC5: movaps  [esp+34h+var_20], xmm1
0x8A7DCA: call    sub_8A7BA0
0x8A7DCF: movaps  xmm1, [esp+30h+var_20]
0x8A7DD4: subps   xmm1, xmm0
0x8A7DD7: movaps  xmm0, xmmword ptr ds:0A372D0h
0x8A7DDE: andps   xmm1, xmm0
0x8A7DE1: movss   xmm0, dword ptr ds:0A3D65Ch
0x8A7DE9: shufps  xmm0, xmm0, 0
0x8A7DED: cmpltps xmm0, xmm1
0x8A7DF1: movmskps edx, xmm0
0x8A7DF4: test    dl, 7
0x8A7DF7: jnz     short loc_8A7E0E
0x8A7DF9: xor     al, al
0x8A7DFB: pop     esi
0x8A7DFC: pop     ebx
0x8A7DFD: mov     ecx, [esp+28h+var_4]
0x8A7E01: xor     ecx, esp
0x8A7E03: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8A7E08: mov     esp, ebp
0x8A7E0A: pop     ebp
0x8A7E0B: retn    4
0x8A7E0E: lea     eax, [esp+30h+var_20]
0x8A7E12: push    eax
0x8A7E13: call    sub_88C600
0x8A7E18: mov     ecx, [esp+30h+var_4]
0x8A7E1C: pop     esi
0x8A7E1D: mov     al, bl
0x8A7E1F: pop     ebx
0x8A7E20: xor     ecx, esp
0x8A7E22: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8A7E27: mov     esp, ebp
0x8A7E29: pop     ebp
0x8A7E2A: retn    4
