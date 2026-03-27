0x8ABF70: push    ebp
0x8ABF71: mov     ebp, esp
0x8ABF73: and     esp, 0FFFFFFF0h
0x8ABF76: sub     esp, 2Ch
0x8ABF79: mov     eax, [ebp+arg_0]
0x8ABF7C: fld     dword ptr ds:0A2F948h
0x8ABF82: movaps  xmm0, xmmword ptr [eax+10h]
0x8ABF86: push    esi
0x8ABF87: mov     esi, [ebp+arg_4]
0x8ABF8A: movaps  xmm1, xmmword ptr [esi+10h]
0x8ABF8E: mulps   xmm0, xmm1
0x8ABF91: movaps  xmm1, xmm0
0x8ABF94: shufps  xmm1, xmm0, 55h ; 'U'
0x8ABF98: addss   xmm1, xmm0
0x8ABF9C: movaps  xmm2, xmm0
0x8ABF9F: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8ABFA3: lea     edx, [esp+30h+var_2C]
0x8ABFA7: addss   xmm2, xmm1
0x8ABFAB: movss   dword ptr [edx], xmm2
0x8ABFAF: fsub    [esp+30h+var_2C]
0x8ABFB3: mov     edx, [eax+28h]
0x8ABFB6: xorps   xmm1, xmm1
0x8ABFB9: fmul    dword ptr [ecx+60h]
0x8ABFBC: movaps  xmm0, xmm1
0x8ABFBF: movaps  [esp+30h+var_10], xmm1
0x8ABFC4: fmul    dword ptr [ecx+60h]
0x8ABFC7: mov     cl, [edx+18h]
0x8ABFCA: cmp     cl, 1
0x8ABFCD: movaps  [esp+30h+var_20], xmm0
0x8ABFD2: fstp    [esp+30h+var_28]
0x8ABFD6: fld     dword ptr [eax+1Ch]
0x8ABFD9: fsub    dword ptr [esi+1Ch]
0x8ABFDC: fld     st
0x8ABFDE: fmul    st, st(1)
0x8ABFE0: fstp    [esp+30h+var_24]
0x8ABFE4: fstp    st
0x8ABFE6: jnz     short loc_8AC004
0x8ABFE8: mov     ecx, [edx+10h]
0x8ABFEB: add     ecx, edx
0x8ABFED: jz      short loc_8AC004
0x8ABFEF: lea     edx, [esp+30h+var_20]
0x8ABFF3: push    edx
0x8ABFF4: push    eax
0x8ABFF5: call    sub_8ABCE0
0x8ABFFA: movaps  xmm0, [esp+30h+var_20]
0x8ABFFF: movaps  xmm1, [esp+30h+var_10]
0x8AC004: mov     eax, [esi+28h]
0x8AC007: cmp     byte ptr [eax+18h], 1
0x8AC00B: movaps  [esp+30h+var_10], xmm1
0x8AC010: jnz     short loc_8AC029
0x8AC012: mov     ecx, [eax+10h]
0x8AC015: add     ecx, eax
0x8AC017: jz      short loc_8AC029
0x8AC019: lea     eax, [esp+30h+var_10]
0x8AC01D: push    eax
0x8AC01E: push    esi
0x8AC01F: call    sub_8ABCE0
0x8AC024: movaps  xmm0, [esp+30h+var_20]
0x8AC029: subps   xmm0, [esp+30h+var_10]
0x8AC02E: mulps   xmm0, xmm0
0x8AC031: movaps  xmm1, xmm0
0x8AC034: shufps  xmm1, xmm0, 55h ; 'U'
0x8AC038: movaps  xmm2, xmm0
0x8AC03B: addss   xmm1, xmm0
0x8AC03F: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8AC043: lea     ecx, [esp+30h+var_2C]
0x8AC047: addss   xmm2, xmm1
0x8AC04B: movss   dword ptr [ecx], xmm2
0x8AC04F: fld     [esp+30h+var_2C]
0x8AC053: fmul    dword ptr ds:0A2FAACh
0x8AC059: pop     esi
0x8AC05A: fld     [esp+2Ch+var_28]
0x8AC05E: fmul    dword ptr ds:0A31C80h
0x8AC064: faddp   st(1), st
0x8AC066: fadd    [esp+2Ch+var_24]
0x8AC06A: mov     esp, ebp
0x8AC06C: pop     ebp
0x8AC06D: retn    8
