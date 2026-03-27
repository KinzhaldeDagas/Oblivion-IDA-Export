0x8A3900: push    ebp
0x8A3901: mov     ebp, esp
0x8A3903: and     esp, 0FFFFFFF0h
0x8A3906: sub     esp, 0C8h
0x8A390C: mov     eax, ds:0B30AACh
0x8A3911: xor     eax, esp
0x8A3913: mov     [esp+0C8h+var_4], eax
0x8A391A: push    esi
0x8A391B: mov     esi, ecx
0x8A391D: mov     eax, [esi]
0x8A391F: mov     edx, [eax+58h]
0x8A3922: push    edi
0x8A3923: call    edx
0x8A3925: test    eax, eax
0x8A3927: jz      loc_8A3D0B
0x8A392D: cmp     dword ptr [eax+2B0h], 0
0x8A3934: jz      loc_8A3D0B
0x8A393A: mov     eax, [ebp+arg_0]
0x8A393D: fld     dword ptr [eax]
0x8A393F: lea     ecx, [esp+0D0h+var_C0]
0x8A3943: fld     qword ptr ds:0A39088h
0x8A3949: push    ecx
0x8A394A: fmul    st(1), st
0x8A394C: mov     ecx, esi
0x8A394E: fxch    st(1)
0x8A3950: fstp    dword ptr [esp+0D4h+var_80]
0x8A3954: fld     dword ptr [eax+4]
0x8A3957: fmul    st, st(1)
0x8A3959: fstp    dword ptr [esp+0D4h+var_80+4]
0x8A395D: fmul    dword ptr [eax+8]
0x8A3960: mov     eax, [ebp+arg_4]
0x8A3963: fstp    dword ptr [esp+0D4h+var_80+8]
0x8A3967: fld     dword ptr [eax+4]
0x8A396A: fstp    dword ptr [esp+0D4h+var_A0]
0x8A396E: fld     dword ptr [eax+8]
0x8A3971: fstp    dword ptr [esp+0D4h+var_A0+4]
0x8A3975: fld     dword ptr [eax+0Ch]
0x8A3978: fstp    dword ptr [esp+0D4h+var_A0+8]
0x8A397C: fld     dword ptr [eax]
0x8A397E: mov     eax, [esi]
0x8A3980: mov     edx, [eax+8Ch]
0x8A3986: fstp    dword ptr [esp+0D4h+var_A0+0Ch]
0x8A398A: call    edx
0x8A398C: mov     eax, [esi]
0x8A398E: mov     edx, [eax+90h]
0x8A3994: lea     ecx, [esp+0D0h+var_90]
0x8A3998: push    ecx
0x8A3999: mov     ecx, esi
0x8A399B: call    edx
0x8A399D: fld     dword ptr ds:0A97450h
0x8A39A3: movaps  xmm1, [esp+0D0h+var_C0]
0x8A39A8: movaps  xmm0, [esp+0D0h+var_80]
0x8A39AD: subps   xmm0, xmm1
0x8A39B0: mulps   xmm0, xmm0
0x8A39B3: movaps  xmm1, xmm0
0x8A39B6: shufps  xmm1, xmm0, 55h ; 'U'
0x8A39BA: movaps  xmm2, xmm0
0x8A39BD: addss   xmm1, xmm0
0x8A39C1: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8A39C5: addss   xmm2, xmm1
0x8A39C9: movss   dword ptr [esp+0D0h+var_B0], xmm2
0x8A39CF: fcomp   dword ptr [esp+0D0h+var_B0]
0x8A39D3: fnstsw  ax
0x8A39D5: test    ah, 5
0x8A39D8: jp      short loc_8A39DE
0x8A39DA: mov     cl, 1
0x8A39DC: jmp     short loc_8A39E0
0x8A39DE: xor     cl, cl
0x8A39E0: movaps  xmm0, [esp+0D0h+var_90]
0x8A39E5: movaps  xmm1, [esp+0D0h+var_A0]
0x8A39EA: mulps   xmm1, xmm0
0x8A39ED: movaps  xmm0, xmm1
0x8A39F0: shufps  xmm0, xmm1, 4Eh ; 'N'
0x8A39F4: addps   xmm0, xmm1
0x8A39F7: movaps  xmm1, xmm0
0x8A39FA: shufps  xmm1, xmm0, 0B1h ; '±'
0x8A39FE: addps   xmm1, xmm0
0x8A3A01: movss   dword ptr [esp+0D0h+var_B0], xmm1
0x8A3A07: fld     dword ptr [esp+0D0h+var_B0]
0x8A3A0B: fld1
0x8A3A0D: fsub    st(1), st
0x8A3A0F: fxch    st(1)
0x8A3A11: fstp    dword ptr [esp+0D0h+var_D0+8]
0x8A3A15: fld     dword ptr [esp+0D0h+var_D0+8]
0x8A3A19: fabs
0x8A3A1B: fstp    dword ptr [esp+0D0h+var_D0+8]
0x8A3A1F: fld     dword ptr [esp+0D0h+var_D0+8]
0x8A3A23: fcomp   dword ptr ds:0A37080h
0x8A3A29: fnstsw  ax
0x8A3A2B: test    ah, 41h
0x8A3A2E: jnz     short loc_8A3A34
0x8A3A30: mov     al, 1
0x8A3A32: jmp     short loc_8A3A36
0x8A3A34: xor     al, al
0x8A3A36: test    cl, cl
0x8A3A38: jnz     short loc_8A3AB0
0x8A3A3A: test    al, al
0x8A3A3C: jnz     short loc_8A3AB0
0x8A3A3E: mov     edi, [esi+8]
0x8A3A41: fstp    st
0x8A3A43: test    edi, edi
0x8A3A45: jz      short loc_8A3A6B
0x8A3A47: mov     ecx, esi
0x8A3A49: call    sub_89F570
0x8A3A4E: mov     ecx, edi
0x8A3A50: call    sub_8A6410
0x8A3A55: mov     ecx, [edi+50h]
0x8A3A58: mov     eax, [ecx]
0x8A3A5A: mov     edx, [eax+54h]
0x8A3A5D: push    offset stru_BA7A40
0x8A3A62: call    edx
0x8A3A64: mov     ecx, esi
0x8A3A66: call    sub_89F570
0x8A3A6B: mov     edi, [esi+8]
0x8A3A6E: test    edi, edi
0x8A3A70: jz      loc_8A3D0B
0x8A3A76: mov     ecx, esi
0x8A3A78: call    sub_89F570
0x8A3A7D: mov     ecx, edi
0x8A3A7F: call    sub_8A6410
0x8A3A84: mov     ecx, [edi+50h]
0x8A3A87: mov     eax, [ecx]
0x8A3A89: mov     edx, [eax+58h]
0x8A3A8C: push    offset stru_BA7A40
0x8A3A91: call    edx
0x8A3A93: mov     ecx, esi
0x8A3A95: call    sub_89F570
0x8A3A9A: pop     edi
0x8A3A9B: pop     esi
0x8A3A9C: mov     ecx, [esp+0C8h+var_4]
0x8A3AA3: xor     ecx, esp
0x8A3AA5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8A3AAA: mov     esp, ebp
0x8A3AAC: pop     ebp
0x8A3AAD: retn    8
0x8A3AB0: fld     dword ptr ds:0B2E2E0h
0x8A3AB6: fstp    dword ptr [esp+0D0h+var_D0+0Ch]
0x8A3ABA: fldz
0x8A3ABC: fld     dword ptr [esp+0D0h+var_D0+0Ch]
0x8A3AC0: fucom   st(1)
0x8A3AC2: fnstsw  ax
0x8A3AC4: fstp    st(1)
0x8A3AC6: test    ah, 44h
0x8A3AC9: jnp     loc_8A3D07
0x8A3ACF: fdivp   st(1), st
0x8A3AD1: mov     eax, [esi]
0x8A3AD3: mov     edx, [eax+0A4h]
0x8A3AD9: lea     ecx, [esp+0D0h+var_30]
0x8A3AE0: push    ecx
0x8A3AE1: mov     ecx, esi
0x8A3AE3: fstp    dword ptr [esp+0D4h+var_D0+0Ch]
0x8A3AE7: call    edx
0x8A3AE9: fld     dword ptr [esp+0D0h+var_A0+0Ch]
0x8A3AED: movaps  xmm1, xmmword ptr [eax]
0x8A3AF0: fld     st
0x8A3AF2: fld     qword ptr ds:0A3D0C0h
0x8A3AF8: mov     eax, [esi]
0x8A3AFA: fmul    st(1), st
0x8A3AFC: xorps   xmm0, xmm0
0x8A3AFF: fxch    st(2)
0x8A3B01: mov     edx, [eax+0A8h]
0x8A3B07: movaps  [esp+0D0h+anonymous_2], xmm1
0x8A3B0F: lea     ecx, [esp+0D0h+var_30]
0x8A3B16: fmul    st, st(1)
0x8A3B18: push    ecx
0x8A3B19: mov     ecx, esi
0x8A3B1B: fsub    qword ptr ds:0A2F928h
0x8A3B21: fstp    dword ptr [esp+0D4h+var_D0+8]
0x8A3B25: movss   xmm2, dword ptr [esp+0D4h+var_D0+8]
0x8A3B2B: fldz
0x8A3B2D: movss   xmm0, xmm2
0x8A3B31: movaps  [esp+0D4h+anonymous_0], xmm0
0x8A3B36: movaps  xmm0, [esp+0D4h+var_A0]
0x8A3B3B: movaps  [esp+0D4h+var_C0], xmm0
0x8A3B40: fstp    dword ptr [esp+0D4h+var_C0+0Ch]
0x8A3B44: movaps  xmm0, [esp+0D4h+var_C0]
0x8A3B49: mulps   xmm0, xmm1
0x8A3B4C: movaps  xmm1, xmm0
0x8A3B4F: shufps  xmm1, xmm0, 55h ; 'U'
0x8A3B53: addss   xmm1, xmm0
0x8A3B57: movaps  xmm2, xmm0
0x8A3B5A: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8A3B5E: addss   xmm2, xmm1
0x8A3B62: movss   dword ptr [esp+0D4h+var_90], xmm2
0x8A3B68: fld     dword ptr [esp+0D4h+var_90]
0x8A3B6C: fmulp   st(2), st
0x8A3B6E: xorps   xmm0, xmm0
0x8A3B71: fxch    st(1)
0x8A3B73: fstp    dword ptr [esp+0D4h+var_D0+8]
0x8A3B77: movss   xmm1, dword ptr [esp+0D4h+var_D0+8]
0x8A3B7D: movss   xmm0, xmm1
0x8A3B81: fstp    dword ptr [esp+0D4h+var_D0+8]
0x8A3B85: movss   xmm1, dword ptr [esp+0D4h+var_D0+8]
0x8A3B8B: movaps  [esp+0D4h+anonymous_1], xmm0
0x8A3B90: xorps   xmm0, xmm0
0x8A3B93: movss   xmm0, xmm1
0x8A3B97: movaps  [esp+0D4h+var_90], xmm0
0x8A3B9C: call    edx
0x8A3B9E: movaps  xmm1, [esp+0D0h+var_C0]
0x8A3BA3: movss   xmm0, dword ptr [esp+0D0h+var_D0+0Ch]
0x8A3BA9: xorps   xmm2, xmm2
0x8A3BAC: movss   xmm2, xmm0
0x8A3BB0: movaps  xmm0, [esp+0D0h+anonymous_2]
0x8A3BB8: movaps  xmm3, xmm0
0x8A3BBB: shufps  xmm3, xmm0, 0D2h ; 'Ò'
0x8A3BBF: movaps  xmm4, xmm1
0x8A3BC2: shufps  xmm4, xmm1, 0C9h ; 'É'
0x8A3BC6: mulps   xmm4, xmm3
0x8A3BC9: movaps  xmm5, xmm0
0x8A3BCC: shufps  xmm5, xmm0, 0C9h ; 'É'
0x8A3BD0: movaps  xmm3, xmm1
0x8A3BD3: shufps  xmm3, xmm1, 0D2h ; 'Ò'
0x8A3BD7: mulps   xmm3, xmm5
0x8A3BDA: subps   xmm4, xmm3
0x8A3BDD: movaps  xmm3, [esp+0D0h+var_90]
0x8A3BE2: shufps  xmm3, xmm3, 0
0x8A3BE6: mulps   xmm4, xmm3
0x8A3BE9: movaps  xmm3, [esp+0D0h+anonymous_0]
0x8A3BEE: movaps  xmm5, xmm3
0x8A3BF1: shufps  xmm5, xmm3, 0
0x8A3BF5: mulps   xmm5, xmm0
0x8A3BF8: movaps  xmm0, [esp+0D0h+anonymous_1]
0x8A3BFD: movaps  xmm3, xmm0
0x8A3C00: shufps  xmm3, xmm0, 0
0x8A3C04: mulps   xmm3, xmm1
0x8A3C07: movaps  xmm0, xmmword ptr [eax]
0x8A3C0A: addps   xmm5, xmm3
0x8A3C0D: addps   xmm4, xmm5
0x8A3C10: addps   xmm4, [esp+0D0h+var_80]
0x8A3C15: lea     eax, [esp+0D0h+var_40]
0x8A3C1C: subps   xmm4, xmm0
0x8A3C1F: shufps  xmm2, xmm2, 0
0x8A3C23: mulps   xmm4, xmm2
0x8A3C26: push    eax
0x8A3C27: mov     ecx, esi
0x8A3C29: movaps  [esp+0D4h+var_40], xmm4
0x8A3C31: call    sub_4D6AF0
0x8A3C36: mov     edx, [esi]
0x8A3C38: mov     edx, [edx+90h]
0x8A3C3E: lea     eax, [esp+0D0h+var_20]
0x8A3C45: push    eax
0x8A3C46: mov     ecx, esi
0x8A3C48: call    edx
0x8A3C4A: push    eax
0x8A3C4B: lea     eax, [esp+0D4h+var_A0]
0x8A3C4F: push    eax
0x8A3C50: lea     ecx, [esp+0D8h+var_C0]
0x8A3C54: call    sub_8A2B40
0x8A3C59: lea     ecx, [esp+0D0h+var_C0]
0x8A3C5D: call    sub_4D6830
0x8A3C62: lea     ecx, [esp+0D0h+var_C0]
0x8A3C66: call    sub_8A2C00
0x8A3C6B: fstp    dword ptr [esp+0D0h+var_D0+8]
0x8A3C6F: fld     dword ptr ds:0A37080h
0x8A3C75: fcomp   dword ptr [esp+0D0h+var_D0+8]
0x8A3C79: fnstsw  ax
0x8A3C7B: test    ah, 41h
0x8A3C7E: jnz     short loc_8A3CAA
0x8A3C80: lea     edx, [esp+0D0h+var_B0]
0x8A3C84: xorps   xmm0, xmm0
0x8A3C87: push    edx
0x8A3C88: mov     ecx, esi
0x8A3C8A: movaps  [esp+0D4h+var_B0], xmm0
0x8A3C8F: call    sub_4D6B30
0x8A3C94: pop     edi
0x8A3C95: pop     esi
0x8A3C96: mov     ecx, [esp+0C8h+var_4]
0x8A3C9D: xor     ecx, esp
0x8A3C9F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8A3CA4: mov     esp, ebp
0x8A3CA6: pop     ebp
0x8A3CA7: retn    8
0x8A3CAA: lea     ecx, [esp+0D0h+var_B0]
0x8A3CAE: push    ecx
0x8A3CAF: lea     ecx, [esp+0D4h+var_C0]
0x8A3CB3: call    sub_8A2C70
0x8A3CB8: fld     dword ptr [esp+0D0h+var_D0+8]
0x8A3CBC: fmul    dword ptr [esp+0D0h+var_D0+0Ch]
0x8A3CC0: xorps   xmm0, xmm0
0x8A3CC3: lea     edx, [esp+0D0h+var_B0]
0x8A3CC7: push    edx
0x8A3CC8: fstp    dword ptr [esp+0D4h+var_D0+8]
0x8A3CCC: mov     ecx, esi
0x8A3CCE: movss   xmm1, dword ptr [esp+0D4h+var_D0+8]
0x8A3CD4: movss   xmm0, xmm1
0x8A3CD8: movaps  xmm1, xmm0
0x8A3CDB: shufps  xmm1, xmm0, 0
0x8A3CDF: movaps  xmm0, [esp+0D4h+var_B0]
0x8A3CE4: mulps   xmm1, xmm0
0x8A3CE7: movaps  [esp+0D4h+var_B0], xmm1
0x8A3CEC: call    sub_4D6B30
0x8A3CF1: pop     edi
0x8A3CF2: pop     esi
0x8A3CF3: mov     ecx, [esp+0C8h+var_4]
0x8A3CFA: xor     ecx, esp
0x8A3CFC: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8A3D01: mov     esp, ebp
0x8A3D03: pop     ebp
0x8A3D04: retn    8
0x8A3D07: fstp    st
0x8A3D09: fstp    st
0x8A3D0B: mov     ecx, [esp+0D0h+var_4]
0x8A3D12: pop     edi
0x8A3D13: pop     esi
0x8A3D14: xor     ecx, esp
0x8A3D16: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8A3D1B: mov     esp, ebp
0x8A3D1D: pop     ebp
0x8A3D1E: retn    8
