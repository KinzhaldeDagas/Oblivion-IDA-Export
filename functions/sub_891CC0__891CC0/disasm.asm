0x891CC0: push    ebp
0x891CC1: mov     ebp, esp
0x891CC3: and     esp, 0FFFFFFF0h
0x891CC6: sub     esp, 3E4h
0x891CCC: mov     eax, ds:0B30AACh
0x891CD1: xor     eax, esp
0x891CD3: mov     [esp+3E4h+var_4], eax
0x891CDA: mov     eax, [ebp+arg_0]
0x891CDD: push    ebx
0x891CDE: push    esi
0x891CDF: push    edi
0x891CE0: mov     edi, ecx
0x891CE2: cmp     dword ptr [edi+36Ch], 1
0x891CE9: mov     [esp+3F0h+var_3D0], eax
0x891CED: jnz     short loc_891D0C
0x891CEF: push    eax
0x891CF0: call    sub_8919A0
0x891CF5: pop     edi
0x891CF6: pop     esi
0x891CF7: pop     ebx
0x891CF8: mov     ecx, [esp+3E4h+var_4]
0x891CFF: xor     ecx, esp
0x891D01: call    @__security_check_cookie@4; __security_check_cookie(x)
0x891D06: mov     esp, ebp
0x891D08: pop     ebp
0x891D09: retn    4
0x891D0C: mov     ecx, [eax+20h]
0x891D0F: cmp     byte ptr [ecx+18h], 2
0x891D13: jnz     short loc_891D20
0x891D15: mov     edx, [ecx+10h]
0x891D18: add     edx, ecx
0x891D1A: mov     [esp+3F0h+var_3D4], edx
0x891D1E: jmp     short loc_891D2C
0x891D20: mov     [esp+3F0h+var_3D4], 0
0x891D28: mov     edx, [esp+3F0h+var_3D4]
0x891D2C: mov     eax, [eax+28h]
0x891D2F: cmp     byte ptr [eax+18h], 1
0x891D33: jnz     short loc_891D40
0x891D35: mov     esi, [eax+10h]
0x891D38: add     esi, eax
0x891D3A: mov     [esp+3F0h+var_3C8], esi
0x891D3E: jmp     short loc_891D4C
0x891D40: mov     [esp+3F0h+var_3C8], 0
0x891D48: mov     esi, [esp+3F0h+var_3C8]
0x891D4C: test    edx, edx
0x891D4E: mov     [esp+3F0h+var_3D6], 1
0x891D53: jz      loc_892551
0x891D59: test    esi, esi
0x891D5B: jz      loc_892551
0x891D61: mov     ebx, [eax]
0x891D63: mov     ecx, [ecx]
0x891D65: mov     eax, [ecx]
0x891D67: mov     edx, [eax+8]
0x891D6A: mov     [esp+3F0h+var_3D6], 0
0x891D6F: mov     [esp+3F0h+var_3BC], ebx
0x891D73: call    edx
0x891D75: cmp     eax, 8
0x891D78: jnz     short loc_891D8E
0x891D7A: mov     eax, [esp+3F0h+var_3D0]
0x891D7E: mov     ecx, [eax+20h]
0x891D81: mov     eax, [ecx]
0x891D83: fld     dword ptr [eax+0Ch]
0x891D86: mov     [esp+3F0h+var_3B8], eax
0x891D8A: xor     ecx, ecx
0x891D8C: jmp     short loc_891D9A
0x891D8E: fld     dword ptr [edi+3A0h]
0x891D94: xor     ecx, ecx
0x891D96: mov     [esp+3F0h+var_3B8], ecx
0x891D9A: mov     eax, [esi+50h]
0x891D9D: fstp    [esp+3F0h+var_3C4]
0x891DA1: movaps  xmm0, xmmword ptr [eax+10h]
0x891DA5: fld1
0x891DA7: mov     edx, [esp+3F0h+var_3D0]
0x891DAB: add     eax, 10h
0x891DAE: movaps  [esp+3F0h+var_310], xmm0
0x891DB6: movaps  xmm0, xmmword ptr [eax+10h]
0x891DBA: movaps  [esp+3F0h+var_300], xmm0
0x891DC2: movaps  xmm0, xmmword ptr [eax+20h]
0x891DC6: movaps  [esp+3F0h+var_2F0], xmm0
0x891DCE: movaps  xmm0, xmmword ptr [eax+30h]
0x891DD2: fstp    [esp+3F0h+var_31C]
0x891DD9: movaps  [esp+3F0h+var_2E0], xmm0
0x891DE1: movaps  xmm0, xmmword ptr [edx]
0x891DE4: lea     eax, [esp+3F0h+var_380]
0x891DE8: mov     [esp+3F0h+var_2B0], ecx
0x891DEF: mov     [esp+3F0h+var_2AC], ecx
0x891DF6: movaps  [esp+3F0h+var_340], xmm0
0x891DFE: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x891E02: push    eax
0x891E03: mov     ecx, edi
0x891E05: movss   dword ptr [esp+3F4h+var_390], xmm0
0x891E0B: call    sub_8914C0
0x891E10: fldz
0x891E12: xor     esi, esi
0x891E14: test    byte ptr [edi+1F4h], 1
0x891E1B: mov     [esp+3F0h+var_3CC], esi
0x891E1F: jnz     loc_891F42
0x891E25: movaps  xmm0, [esp+3F0h+var_380]
0x891E2A: subps   xmm0, [esp+3F0h+var_340]
0x891E32: movss   xmm4, dword ptr ds:0A46C30h
0x891E3A: movaps  [esp+3F0h+var_3A0], xmm0
0x891E3F: fst     dword ptr [esp+3F0h+var_3A0+8]
0x891E43: movaps  xmm2, [esp+3F0h+var_3A0]
0x891E48: fld     dword ptr [edi+248h]
0x891E4E: fld     dword ptr [esp+3F0h+var_380+8]
0x891E52: movaps  xmm0, xmm2
0x891E55: mulps   xmm0, xmm2
0x891E58: fadd    st, st(1)
0x891E5A: movaps  xmm1, xmm0
0x891E5D: shufps  xmm1, xmm0, 55h ; 'U'
0x891E61: addss   xmm1, xmm0
0x891E65: fstp    dword ptr [esp+3F0h+var_380+8]
0x891E69: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x891E6D: addss   xmm0, xmm1
0x891E71: movaps  xmm1, xmm0
0x891E74: rsqrtss xmm1, xmm1
0x891E78: mulss   xmm0, xmm1
0x891E7C: mulss   xmm0, xmm1
0x891E80: xorps   xmm3, xmm3
0x891E83: movss   xmm3, xmm4
0x891E87: movss   xmm4, dword ptr ds:0A3D65Ch
0x891E8F: subss   xmm3, xmm0
0x891E93: xorps   xmm0, xmm0
0x891E96: movss   xmm0, xmm4
0x891E9A: mulss   xmm0, xmm1
0x891E9E: mulss   xmm0, xmm3
0x891EA2: shufps  xmm0, xmm0, 0
0x891EA6: mulps   xmm0, xmm2
0x891EA9: movaps  xmm2, [esp+3F0h+var_380]
0x891EAE: movaps  xmm1, xmm2
0x891EB1: shufps  xmm1, xmm2, 0AAh ; 'ª'
0x891EB5: movss   [esp+3F0h+var_3B4], xmm1
0x891EBB: fld     [esp+3F0h+var_3B4]
0x891EBF: fstp    dword ptr [esp+3F0h+var_340+8]
0x891EC6: movss   [esp+3F0h+var_3B4], xmm1
0x891ECC: fld     dword ptr [esp+3F0h+var_390]
0x891ED0: movaps  [esp+3F0h+var_3A0], xmm0
0x891ED5: fld     [esp+3F0h+var_3B4]
0x891ED9: mov     [esp+3F0h+var_3D5], 0
0x891EDE: fsubr   st, st(1)
0x891EE0: fstp    [esp+3F0h+var_3D4]
0x891EE4: fld     [esp+3F0h+var_3D4]
0x891EE8: fcom    st(3)
0x891EEA: fnstsw  ax
0x891EEC: test    ah, 41h
0x891EEF: jnz     loc_8920E9
0x891EF5: fld     st(2)
0x891EF7: fdiv    qword ptr ds:0A30E48h
0x891EFD: fcom    st(1)
0x891EFF: fnstsw  ax
0x891F01: fstp    st(1)
0x891F03: test    ah, 5
0x891F06: jp      loc_8920E4
0x891F0C: test    byte ptr [edi+1F4h], 1
0x891F13: jnz     loc_8920A7
0x891F19: fstp    st(2)
0x891F1B: fstp    st
0x891F1D: fstp    st(1)
0x891F1F: fstp    st
0x891F21: mov     al, 1
0x891F23: pop     edi
0x891F24: pop     esi
0x891F25: pop     ebx
0x891F26: mov     ecx, [esp+3E4h+var_4]
0x891F2D: xor     ecx, esp
0x891F2F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x891F34: mov     esp, ebp
0x891F36: pop     ebp
0x891F37: retn    4
0x891F3A: align 10h
0x891F40: fldz
0x891F42: mov     eax, [esp+3F0h+var_3B8]
0x891F46: test    eax, eax
0x891F48: jz      short loc_891F5D
0x891F4A: lea     ecx, [esi+1]
0x891F4D: fstp    st
0x891F4F: shl     ecx, 4
0x891F52: movaps  xmm0, xmmword ptr [ecx+eax]
0x891F56: movaps  [esp+3F0h+var_3A0], xmm0
0x891F5B: jmp     short loc_891F90
0x891F5D: cmp     esi, 1
0x891F60: fst     dword ptr [esp+3F0h+var_3A0]
0x891F64: fld     dword ptr [edi+3A4h]
0x891F6A: fmul    qword ptr ds:0A2FAA0h
0x891F70: fstp    dword ptr [esp+3F0h+var_3A0+4]
0x891F74: fld     [esp+3F0h+var_3C4]
0x891F78: fstp    dword ptr [esp+3F0h+var_3A0+8]
0x891F7C: fstp    dword ptr [esp+3F0h+var_3A0+0Ch]
0x891F80: jnz     short loc_891F90
0x891F82: fld     dword ptr [esp+3F0h+var_3A0+4]
0x891F86: fmul    qword ptr ds:0A3D360h
0x891F8C: fstp    dword ptr [esp+3F0h+var_3A0+4]
0x891F90: lea     eax, [esp+3F0h+var_3A0]
0x891F94: push    eax
0x891F95: mov     eax, [esp+3F4h+var_3D4]
0x891F99: lea     edx, [esi+38h]
0x891F9C: shl     edx, 4
0x891F9F: lea     ebx, [edx+edi]
0x891FA2: add     eax, 70h ; 'p'
0x891FA5: push    eax
0x891FA6: mov     ecx, ebx
0x891FA8: call    sub_88FCC0
0x891FAD: fld     dword ptr [edi+248h]
0x891FB3: movaps  xmm1, [esp+3F0h+var_340]
0x891FBB: mov     eax, esi
0x891FBD: shl     eax, 4
0x891FC0: fadd    dword ptr [edi+eax+388h]
0x891FC7: add     esi, 1
0x891FCA: cmp     esi, 2
0x891FCD: movaps  xmm0, xmm1
0x891FD0: fstp    dword ptr [edi+eax+388h]
0x891FD7: movaps  xmm2, xmmword ptr [ebx]
0x891FDA: subps   xmm0, xmm2
0x891FDD: movaps  xmmword ptr [esp+eax+3F0h+var_360], xmm0
0x891FE5: jb      loc_891F40
0x891FEB: movaps  xmm0, xmmword ptr [esp+3F0h+var_360]
0x891FF3: mulps   xmm0, xmm0
0x891FF6: movaps  xmm2, xmm0
0x891FF9: shufps  xmm2, xmm0, 55h ; 'U'
0x891FFD: addss   xmm2, xmm0
0x892001: movaps  xmm3, xmm0
0x892004: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x892008: movaps  xmm0, xmmword ptr [esp+3F0h+var_358+8]
0x892010: addss   xmm3, xmm2
0x892014: mulps   xmm0, xmm0
0x892017: movss   dword ptr [esp+3F0h+var_3A0], xmm3
0x89201D: fld     dword ptr [esp+3F0h+var_3A0]
0x892021: movaps  xmm2, xmm0
0x892024: shufps  xmm2, xmm0, 55h ; 'U'
0x892028: movaps  xmm3, xmm0
0x89202B: addss   xmm2, xmm0
0x89202F: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x892033: addss   xmm3, xmm2
0x892037: movss   [esp+3F0h+var_3B4], xmm3
0x89203D: fld     [esp+3F0h+var_3B4]
0x892041: fcompp
0x892043: mov     [esp+3F0h+var_3CC], 0
0x89204B: fnstsw  ax
0x89204D: test    ah, 41h
0x892050: jz      short loc_89205A
0x892052: mov     [esp+3F0h+var_3CC], 1
0x89205A: mov     ecx, [esp+3F0h+var_3CC]
0x89205E: mov     edx, [esp+3F0h+var_3D4]
0x892062: mov     ebx, [esp+3F0h+var_3BC]
0x892066: add     ecx, 38h ; '8'
0x892069: shl     ecx, 4
0x89206C: movaps  xmm0, xmmword ptr [ecx+edi]
0x892070: movss   [esp+3F0h+var_3B4], xmm0
0x892076: fld     [esp+3F0h+var_3B4]
0x89207A: lea     eax, [ecx+edi]
0x89207D: fstp    dword ptr [esp+3F0h+var_380]
0x892081: movaps  xmm0, xmmword ptr [eax]
0x892084: shufps  xmm0, xmm0, 55h ; 'U'
0x892088: movss   [esp+3F0h+var_3B4], xmm0
0x89208E: fld     [esp+3F0h+var_3B4]
0x892092: movaps  xmm0, xmmword ptr [edx+0A0h]
0x892099: fstp    dword ptr [esp+3F0h+var_380+4]
0x89209D: fldz
0x89209F: subps   xmm0, xmm1
0x8920A2: jmp     loc_891E32
0x8920A7: mov     eax, [esp+3F0h+var_3CC]
0x8920AB: shl     eax, 4
0x8920AE: fld     dword ptr [eax+edi+388h]
0x8920B5: fsubp   st(2), st
0x8920B7: fxch    st(1)
0x8920B9: faddp   st(2), st
0x8920BB: fxch    st(1)
0x8920BD: fstp    [esp+3F0h+var_3D4]
0x8920C1: fld     [esp+3F0h+var_3D4]
0x8920C5: fcom    st(2)
0x8920C7: fnstsw  ax
0x8920C9: fstp    st(2)
0x8920CB: test    ah, 41h
0x8920CE: jnz     short loc_8920ED
0x8920D0: fcompp
0x8920D2: fnstsw  ax
0x8920D4: test    ah, 5
0x8920D7: jnp     loc_891F21
0x8920DD: mov     [esp+3F0h+var_3D5], 1
0x8920E2: jmp     short loc_8920F1
0x8920E4: mov     [esp+3F0h+var_3D5], 1
0x8920E9: fstp    st(2)
0x8920EB: fstp    st
0x8920ED: fstp    st(1)
0x8920EF: fstp    st
0x8920F1: mov     ecx, [esp+3F0h+var_3D0]
0x8920F5: cmp     dword ptr [ecx+2Ch], 0FFFFFFFFh
0x8920F9: jz      loc_892345
0x8920FF: mov     edx, [ebx]
0x892101: mov     eax, [edx+8]
0x892104: mov     ecx, ebx
0x892106: call    eax
0x892108: cmp     eax, 18h
0x89210B: mov     esi, ebx
0x89210D: jnz     short loc_89211B
0x89210F: mov     esi, [ebx+0Ch]
0x892112: mov     edx, [esi]
0x892114: mov     eax, [edx+8]
0x892117: mov     ecx, esi
0x892119: call    eax
0x89211B: cmp     eax, 10h
0x89211E: jnz     loc_89233B
0x892124: mov     ecx, [esp+3F0h+var_3D0]
0x892128: mov     edx, [esi]
0x89212A: mov     edx, [edx+28h]
0x89212D: lea     eax, [esp+3F0h+var_210]
0x892134: push    eax
0x892135: mov     eax, [ecx+2Ch]
0x892138: push    eax
0x892139: mov     ecx, esi
0x89213B: call    edx
0x89213D: mov     ebx, eax
0x89213F: mov     eax, [esp+3F0h+var_3C8]
0x892143: mov     eax, [eax+50h]
0x892146: movaps  xmm1, xmmword ptr [eax+10h]
0x89214A: movaps  xmm2, xmmword ptr [eax+20h]
0x89214E: movaps  xmm3, xmmword ptr [eax+30h]
0x892152: movaps  xmm4, xmmword ptr [eax+40h]
0x892156: add     eax, 10h
0x892159: lea     ecx, [ebx+10h]
0x89215C: lea     eax, [esp+3F0h+var_2A0]
0x892163: mov     edx, 3
0x892168: sub     eax, ecx
0x89216A: lea     ebx, [ebx+0]
0x892170: movaps  xmm0, xmmword ptr [ecx]
0x892173: movaps  xmm5, xmm0
0x892176: shufps  xmm5, xmm0, 55h ; 'U'
0x89217A: movaps  xmm6, xmm0
0x89217D: shufps  xmm6, xmm0, 0
0x892181: mulps   xmm6, xmm1
0x892184: mulps   xmm5, xmm2
0x892187: addps   xmm5, xmm6
0x89218A: movaps  xmm6, xmm0
0x89218D: shufps  xmm6, xmm0, 0AAh ; 'ª'
0x892191: mulps   xmm6, xmm3
0x892194: addps   xmm6, xmm4
0x892197: addps   xmm5, xmm6
0x89219A: movaps  xmmword ptr [ecx+eax], xmm5
0x89219E: sub     edx, 1
0x8921A1: add     ecx, 10h
0x8921A4: test    edx, edx
0x8921A6: jg      short loc_892170
0x8921A8: lea     ecx, [esp+3F0h+var_3B4]
0x8921AC: push    ecx
0x8921AD: lea     edx, [esp+3F4h+var_2A0]
0x8921B4: push    edx
0x8921B5: call    sub_8D1EF0
0x8921BA: fld     dword ptr [edi+24Ch]
0x8921C0: movaps  xmm0, [esp+3F8h+var_340]
0x8921C8: movaps  xmmword ptr [esp+3F8h+var_358+8], xmm0
0x8921D0: fld     dword ptr [esp+3F8h+var_358+8]
0x8921D7: movaps  xmmword ptr [esp+3F8h+var_360], xmm0
0x8921DF: movaps  xmm0, [esp+3F8h+var_3A0]
0x8921E4: movss   dword ptr [esp+3F8h+var_390], xmm0
0x8921EA: fld     dword ptr [esp+3F8h+var_390]
0x8921EE: fmul    st, st(2)
0x8921F0: shufps  xmm0, xmm0, 55h ; 'U'
0x8921F4: movss   dword ptr [esp+3F8h+var_390], xmm0
0x8921FA: add     esp, 8
0x8921FD: fsubp   st(1), st
0x8921FF: lea     eax, [esp+3F0h+var_270]
0x892206: push    eax; int
0x892207: push    0; int
0x892209: fstp    dword ptr [esp+3F8h+var_358+8]
0x892210: push    ecx
0x892211: fld     dword ptr [esp+3FCh+var_390]
0x892215: lea     ecx, [esp+3FCh+var_3B4]
0x892219: fmulp   st(1), st
0x89221B: lea     edx, [esp+3FCh+var_2A0]
0x892222: lea     eax, [esp+3FCh+var_360]
0x892229: fsubr   dword ptr [esp+3FCh+var_358+0Ch]
0x892230: fstp    dword ptr [esp+3FCh+var_358+0Ch]
0x892237: fldz
0x892239: fstp    [esp+3FCh+var_3FC]; float
0x89223C: fld     dword ptr [ebx+0Ch]
0x89223F: push    ecx; int
0x892240: push    ecx
0x892241: fstp    [esp+404h+var_404]; float
0x892244: fld     dword ptr ds:0A3D65Ch
0x89224A: push    edx; int
0x89224B: push    ecx
0x89224C: fstp    [esp+40Ch+var_40C]; float
0x89224F: push    eax; int
0x892250: call    sub_8D0CA0
0x892255: fldz
0x892257: fcom    [esp+410h+var_254]
0x89225E: add     esp, 20h
0x892261: fnstsw  ax
0x892263: test    ah, 41h
0x892266: jz      loc_892307
0x89226C: fcomp   [esp+3F0h+var_234]
0x892273: fnstsw  ax
0x892275: test    ah, 41h
0x892278: jz      loc_892309
0x89227E: xor     bl, bl
0x892280: cmp     [esp+3F0h+var_3D5], bl
0x892284: jz      short loc_892288
0x892286: mov     bl, 1
0x892288: test    byte ptr [edi+1F4h], 1
0x89228F: jz      short loc_8922BE
0x892291: test    bl, bl
0x892293: jnz     short loc_8922BE
0x892295: mov     eax, [esp+3F0h+var_3D0]
0x892299: movaps  xmm0, xmmword ptr [eax]
0x89229C: push    ecx
0x89229D: mov     ecx, [esp+3F4h+var_3CC]
0x8922A1: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x8922A5: movss   dword ptr [esp+3F4h+var_390], xmm0
0x8922AB: fld     dword ptr [esp+3F4h+var_390]
0x8922AF: fstp    [esp+3F4h+var_3F4]; float
0x8922B2: push    ecx; int
0x8922B3: lea     ecx, [edi+1F0h]
0x8922B9: call    sub_88FEE0
0x8922BE: mov     dl, bl
0x8922C0: neg     dl
0x8922C2: push    0
0x8922C4: lea     eax, [esp+3F4h+var_358+8]
0x8922CB: lea     ecx, [esp+3F4h+var_360]
0x8922D2: sbb     edx, edx
0x8922D4: and     edx, 0FF898888h
0x8922DA: add     edx, 0FFFF0000h
0x8922E0: push    edx
0x8922E1: push    eax
0x8922E2: push    ecx
0x8922E3: mov     ecx, ds:0BA7DA0h
0x8922E9: call    sub_8A78E0
0x8922EE: mov     al, bl
0x8922F0: pop     edi
0x8922F1: pop     esi
0x8922F2: pop     ebx
0x8922F3: mov     ecx, [esp+3E4h+var_4]
0x8922FA: xor     ecx, esp
0x8922FC: call    @__security_check_cookie@4; __security_check_cookie(x)
0x892301: mov     esp, ebp
0x892303: pop     ebp
0x892304: retn    4
0x892307: fstp    st
0x892309: mov     ecx, [esi+8]
0x89230C: test    ecx, ecx
0x89230E: mov     bl, 1
0x892310: jz      loc_892288
0x892316: mov     eax, [esp+3F0h+var_3D0]
0x89231A: mov     edx, [ecx]
0x89231C: mov     eax, [eax+2Ch]
0x89231F: mov     edx, [edx+9Ch]
0x892325: push    eax
0x892326: call    edx
0x892328: add     eax, 0FFFFFFF1h
0x89232B: cmp     eax, 0Eh
0x89232E: ja      loc_892288
0x892334: xor     bl, bl
0x892336: jmp     loc_892288
0x89233B: movaps  xmm2, [esp+3F0h+var_380]
0x892340: movaps  xmm0, [esp+3F0h+var_3A0]
0x892345: fld     dword ptr [edi+24Ch]
0x89234B: movaps  [esp+3F0h+var_370], xmm2
0x892353: fadd    [esp+3F0h+var_3C4]
0x892357: movss   dword ptr [esp+3F0h+var_390], xmm0
0x89235D: movaps  xmm1, xmm0
0x892360: shufps  xmm1, xmm0, 55h ; 'U'
0x892364: fstp    [esp+3F0h+var_3BC]
0x892368: lea     edx, [esp+3F0h+var_380]
0x89236C: fld     [esp+3F0h+var_3BC]
0x892370: push    edx
0x892371: fld     dword ptr [esp+3F4h+var_370]
0x892378: lea     eax, [esp+3F4h+var_310]
0x89237F: fld     dword ptr [esp+3F4h+var_390]
0x892383: movss   dword ptr [esp+3F4h+var_390], xmm1
0x892389: fmul    st, st(2)
0x89238B: push    eax
0x89238C: lea     ecx, [esp+3F8h+var_2D0]
0x892393: fsubp   st(1), st
0x892395: fstp    dword ptr [esp+3F8h+var_370]
0x89239C: fld     dword ptr [esp+3F8h+var_370+4]
0x8923A3: fld     dword ptr [esp+3F8h+var_390]
0x8923A7: movss   dword ptr [esp+3F8h+var_390], xmm0
0x8923AD: fmul    st, st(2)
0x8923AF: fsubp   st(1), st
0x8923B1: fstp    dword ptr [esp+3F8h+var_370+4]
0x8923B8: fld     dword ptr [esp+3F8h+var_390]
0x8923BC: movss   dword ptr [esp+3F8h+var_390], xmm1
0x8923C2: fmul    st, st(1)
0x8923C4: fadd    dword ptr [esp+3F8h+var_380]
0x8923C8: fstp    dword ptr [esp+3F8h+var_380]
0x8923CC: fmul    dword ptr [esp+3F8h+var_390]
0x8923D0: fadd    dword ptr [esp+3F8h+var_380+4]
0x8923D4: fstp    dword ptr [esp+3F8h+var_380+4]
0x8923D8: call    sub_88FD10
0x8923DD: lea     ecx, [esp+3F0h+var_370]
0x8923E4: push    ecx
0x8923E5: lea     edx, [esp+3F4h+var_310]
0x8923EC: push    edx
0x8923ED: lea     ecx, [esp+3F8h+var_2C0]
0x8923F4: call    sub_88FD10
0x8923F9: mov     eax, [ebx]
0x8923FB: lea     ecx, [esp+3F0h+var_330]
0x892402: push    ecx
0x892403: lea     edx, [esp+3F4h+var_2D0]
0x89240A: push    edx
0x89240B: mov     edx, [eax+14h]
0x89240E: lea     ecx, [esp+3F8h+var_3BD]
0x892412: push    ecx
0x892413: mov     ecx, ebx
0x892415: call    edx
0x892417: fld1
0x892419: fcomp   [esp+3F0h+var_31C]
0x892420: fnstsw  ax
0x892422: test    ah, 41h
0x892425: jnz     loc_8924ED
0x89242B: mov     eax, [esp+3F0h+var_3D0]
0x89242F: mov     ecx, [esp+3F0h+var_320]
0x892436: cmp     ecx, [eax+2Ch]
0x892439: jz      short loc_89247F
0x89243B: lea     edx, [esp+3F0h+var_330]
0x892442: push    edx
0x892443: lea     eax, [esp+3F4h+var_310]
0x89244A: push    eax
0x89244B: lea     ecx, [esp+3F8h+var_390]
0x89244F: call    sub_88FE00
0x892454: movaps  xmm1, [esp+3F0h+var_390]
0x892459: movaps  xmm0, xmmword ptr ds:0A372D0h
0x892460: subps   xmm1, [esp+3F0h+var_3A0]
0x892465: andps   xmm1, xmm0
0x892468: movss   xmm0, dword ptr ds:0A34BA0h
0x892470: shufps  xmm0, xmm0, 0
0x892474: cmpltps xmm0, xmm1
0x892478: movmskps ecx, xmm0
0x89247B: test    ecx, ecx
0x89247D: jnz     short loc_8924CD
0x89247F: mov     esi, [ebx+8]
0x892482: test    esi, esi
0x892484: mov     [esp+3F0h+var_3D6], 1
0x892489: jz      short loc_8924D9
0x89248B: cmp     [esp+3F0h+var_320], 0FFFFFFFFh
0x892493: jz      short loc_8924BB
0x892495: mov     edx, [esi]
0x892497: mov     eax, [edx+88h]
0x89249D: mov     ecx, esi
0x89249F: call    eax
0x8924A1: test    eax, eax
0x8924A3: jz      short loc_8924BB
0x8924A5: mov     ecx, [esp+3F0h+var_320]
0x8924AC: mov     edx, [eax]
0x8924AE: mov     edx, [edx+9Ch]
0x8924B4: push    ecx
0x8924B5: mov     ecx, eax
0x8924B7: call    edx
0x8924B9: jmp     short loc_8924BE
0x8924BB: mov     eax, [esi+10h]
0x8924BE: add     eax, 0FFFFFFF1h
0x8924C1: cmp     eax, 0Dh
0x8924C4: ja      short loc_8924D9
0x8924C6: mov     [esp+3F0h+var_3D6], 0
0x8924CB: jmp     short loc_8924D9
0x8924CD: cmp     [esp+3F0h+var_3D5], 0
0x8924D2: jz      short loc_8924D9
0x8924D4: mov     [esp+3F0h+var_3D6], 1
0x8924D9: fld1
0x8924DB: fcomp   [esp+3F0h+var_31C]
0x8924E2: fnstsw  ax
0x8924E4: test    ah, 41h
0x8924E7: jnz     short loc_8924ED
0x8924E9: mov     al, 1
0x8924EB: jmp     short loc_8924EF
0x8924ED: xor     al, al
0x8924EF: neg     al
0x8924F1: push    0
0x8924F3: lea     ecx, [esp+3F4h+var_380]
0x8924F7: sbb     eax, eax
0x8924F9: and     eax, 0FF898888h
0x8924FE: add     eax, 0FFFF0000h
0x892503: push    eax
0x892504: lea     eax, [esp+3F8h+var_370]
0x89250B: push    eax
0x89250C: push    ecx
0x89250D: mov     ecx, ds:0BA7DA0h
0x892513: call    sub_8A78E0
0x892518: test    byte ptr [edi+1F4h], 1
0x89251F: jz      short loc_892551
0x892521: cmp     [esp+3F0h+var_3D6], 0
0x892526: jnz     short loc_892551
0x892528: mov     edx, [esp+3F0h+var_3D0]
0x89252C: movaps  xmm0, xmmword ptr [edx]
0x89252F: mov     eax, [esp+3F0h+var_3CC]
0x892533: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x892537: push    ecx
0x892538: movss   dword ptr [esp+3F4h+var_390], xmm0
0x89253E: fld     dword ptr [esp+3F4h+var_390]
0x892542: fstp    [esp+3F4h+var_3F4]; float
0x892545: push    eax; int
0x892546: lea     ecx, [edi+1F0h]
0x89254C: call    sub_88FEE0
0x892551: mov     ecx, [esp+3F0h+var_4]
0x892558: mov     al, [esp+3F0h+var_3D6]
0x89255C: pop     edi
0x89255D: pop     esi
0x89255E: pop     ebx
0x89255F: xor     ecx, esp
0x892561: call    @__security_check_cookie@4; __security_check_cookie(x)
0x892566: mov     esp, ebp
0x892568: pop     ebp
0x892569: retn    4
