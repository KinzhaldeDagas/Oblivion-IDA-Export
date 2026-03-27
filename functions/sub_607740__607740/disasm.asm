0x607740: push    ebp
0x607741: mov     ebp, esp
0x607743: and     esp, 0FFFFFFF0h
0x607746: sub     esp, 3Ch
0x607749: mov     eax, ds:0B30AACh
0x60774E: xor     eax, esp
0x607750: mov     [esp+3Ch+var_4], eax
0x607754: mov     eax, [ebp+arg_0]
0x607757: mov     edx, [ebp+arg_4]
0x60775A: push    esi
0x60775B: lea     ecx, [eax+18h]
0x60775E: mov     esi, 3
0x607763: movaps  xmm0, xmmword ptr [edx]
0x607766: movss   [esp+40h+var_24], xmm0
0x60776C: fld     [esp+40h+var_24]
0x607770: fstp    dword ptr [ecx-18h]
0x607773: movaps  xmm1, xmm0
0x607776: shufps  xmm1, xmm0, 55h ; 'U'
0x60777A: movss   [esp+40h+var_34], xmm1
0x607780: fld     [esp+40h+var_34]
0x607784: fstp    dword ptr [ecx-0Ch]
0x607787: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x60778B: movss   [esp+40h+var_14], xmm0
0x607791: fld     [esp+40h+var_14]
0x607795: fstp    dword ptr [ecx]
0x607797: add     edx, 10h
0x60779A: add     ecx, 4
0x60779D: sub     esi, 1
0x6077A0: jnz     short loc_607763
0x6077A2: mov     ecx, [esp+40h+var_4]
0x6077A6: pop     esi
0x6077A7: xor     ecx, esp
0x6077A9: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6077AE: mov     esp, ebp
0x6077B0: pop     ebp
0x6077B1: retn
