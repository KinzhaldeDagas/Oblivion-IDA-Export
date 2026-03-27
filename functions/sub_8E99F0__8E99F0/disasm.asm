0x8E99F0: push    ebp
0x8E99F1: mov     ebp, esp
0x8E99F3: and     esp, 0FFFFFFF0h
0x8E99F6: sub     esp, 34h
0x8E99F9: mov     eax, [ebp+arg_4]
0x8E99FC: push    ebx
0x8E99FD: mov     ebx, [ebp+arg_8]
0x8E9A00: movaps  xmm1, xmmword ptr [ebx+40h]
0x8E9A04: mov     [esp+38h+var_28], eax
0x8E9A08: movss   xmm0, [esp+38h+var_28]
0x8E9A0E: push    esi
0x8E9A0F: movaps  xmm2, xmm0
0x8E9A12: shufps  xmm2, xmm0, 0
0x8E9A16: mulps   xmm2, xmm1
0x8E9A19: push    edi
0x8E9A1A: mov     edi, ecx
0x8E9A1C: movaps  xmmword ptr [edi+0D0h], xmm2
0x8E9A23: movaps  xmm1, xmmword ptr [ebx+50h]
0x8E9A27: movaps  xmm2, xmm0
0x8E9A2A: shufps  xmm2, xmm0, 0
0x8E9A2E: mulps   xmm2, xmm1
0x8E9A31: movaps  xmmword ptr [edi+0E0h], xmm2
0x8E9A38: mov     cx, [ebx+4]
0x8E9A3C: mov     [edi+0BEh], cx
0x8E9A43: movaps  xmm0, xmmword ptr [edi+60h]
0x8E9A47: mov     ecx, [ebp+arg_0]
0x8E9A4A: lea     esi, [edi+10h]
0x8E9A4D: movaps  xmmword ptr [esi+40h], xmm0
0x8E9A51: mov     edx, [ecx]
0x8E9A53: mov     [esi+4Ch], edx
0x8E9A56: fld     dword ptr [esi+0A4h]
0x8E9A5C: movaps  xmm1, xmmword ptr [edi+0D0h]
0x8E9A63: fld     st
0x8E9A65: movaps  xmm0, xmm1
0x8E9A68: fmul    st, st(1)
0x8E9A6A: mulps   xmm0, xmm1
0x8E9A6D: movaps  xmm2, xmm0
0x8E9A70: shufps  xmm2, xmm0, 55h ; 'U'
0x8E9A74: movaps  xmm3, xmm0
0x8E9A77: lea     eax, [esp+40h+var_2C]
0x8E9A7B: addss   xmm2, xmm0
0x8E9A7F: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x8E9A83: addss   xmm3, xmm2
0x8E9A87: movss   dword ptr [eax], xmm3
0x8E9A8B: fld     [esp+40h+var_2C]
0x8E9A8F: fcompp
0x8E9A91: fnstsw  ax
0x8E9A93: fstp    st
0x8E9A95: test    ah, 41h
0x8E9A98: jnz     short loc_8E9AC1
0x8E9A9A: fld     [esp+40h+var_2C]
0x8E9A9E: fsqrt
0x8E9AA0: fdivr   dword ptr [esi+0A4h]
0x8E9AA6: fstp    [esp+40h+var_28]
0x8E9AAA: movss   xmm0, [esp+40h+var_28]
0x8E9AB0: movaps  xmm2, xmm0
0x8E9AB3: shufps  xmm2, xmm0, 0
0x8E9AB7: mulps   xmm2, xmm1
0x8E9ABA: movaps  xmmword ptr [edi+0D0h], xmm2
0x8E9AC1: mov     edx, [ecx+8]
0x8E9AC4: movaps  xmm1, xmmword ptr [edi+0D0h]
0x8E9ACB: mov     [esp+40h+var_28], edx
0x8E9ACF: movss   xmm0, [esp+40h+var_28]
0x8E9AD5: movaps  xmm2, xmm0
0x8E9AD8: shufps  xmm2, xmm0, 0
0x8E9ADC: movaps  xmm0, xmmword ptr [esi+50h]
0x8E9AE0: mulps   xmm2, xmm1
0x8E9AE3: addps   xmm0, xmm2
0x8E9AE6: movaps  xmmword ptr [esi+50h], xmm0
0x8E9AEA: mov     eax, [ecx+0Ch]
0x8E9AED: mov     [esi+5Ch], eax
0x8E9AF0: lea     eax, [esi+70h]
0x8E9AF3: mov     edx, [eax]
0x8E9AF5: mov     dword ptr [esp+40h+var_20], edx
0x8E9AF9: mov     edx, [eax+4]
0x8E9AFC: mov     dword ptr [esp+40h+var_20+4], edx
0x8E9B00: mov     edx, [eax+8]
0x8E9B03: mov     eax, [eax+0Ch]
0x8E9B06: mov     dword ptr [esp+40h+var_20+8], edx
0x8E9B0A: mov     dword ptr [esp+40h+var_20+0Ch], eax
0x8E9B0E: movaps  xmm0, [esp+40h+var_20]
0x8E9B13: movaps  xmmword ptr [esi+60h], xmm0
0x8E9B17: fld     dword ptr [ecx+8]
0x8E9B1A: fmul    dword ptr ds:0A3D65Ch
0x8E9B20: movaps  xmm2, xmmword ptr [edi+0E0h]
0x8E9B27: lea     edx, [esp+40h+var_28]
0x8E9B2B: fstp    [esp+40h+var_28]
0x8E9B2F: movss   xmm0, [esp+40h+var_28]
0x8E9B35: movaps  xmm1, xmm0
0x8E9B38: shufps  xmm1, xmm0, 0
0x8E9B3C: mulps   xmm1, xmm2
0x8E9B3F: movaps  xmm0, xmm1
0x8E9B42: mulps   xmm0, xmm1
0x8E9B45: movaps  xmm3, xmm0
0x8E9B48: shufps  xmm3, xmm0, 55h ; 'U'
0x8E9B4C: movaps  xmm4, xmm0
0x8E9B4F: addss   xmm3, xmm0
0x8E9B53: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x8E9B57: addss   xmm4, xmm3
0x8E9B5B: movss   dword ptr [edx], xmm4
0x8E9B5F: fld     [esp+40h+var_28]
0x8E9B63: fmul    dword ptr ds:0A96F74h
0x8E9B69: movaps  [esp+40h+var_10], xmm1
0x8E9B6E: fstp    [esp+40h+var_2C]
0x8E9B72: fld     dword ptr [esi+0A8h]
0x8E9B78: fmul    dword ptr [ecx+8]
0x8E9B7B: fld     dword ptr ds:0A37450h
0x8E9B81: fcomp   st(1)
0x8E9B83: fnstsw  ax
0x8E9B85: test    ah, 5
0x8E9B88: jp      short loc_8E9B92
0x8E9B8A: fstp    st
0x8E9B8C: fld     dword ptr ds:0A37450h
0x8E9B92: fld     st
0x8E9B94: fmul    st, st(1)
0x8E9B96: fstp    [esp+40h+var_28]
0x8E9B9A: fld     [esp+40h+var_2C]
0x8E9B9E: fcomp   [esp+40h+var_28]
0x8E9BA2: fnstsw  ax
0x8E9BA4: test    ah, 41h
0x8E9BA7: jp      short loc_8E9BAD
0x8E9BA9: fstp    st
0x8E9BAB: jmp     short loc_8E9BE7
0x8E9BAD: fld     [esp+40h+var_2C]
0x8E9BB1: mov     eax, [esp+40h+var_28]
0x8E9BB5: fsqrt
0x8E9BB7: mov     [esp+40h+var_2C], eax
0x8E9BBB: fdivp   st(1), st
0x8E9BBD: fstp    [esp+40h+var_24]
0x8E9BC1: movss   xmm0, [esp+40h+var_24]
0x8E9BC7: movaps  xmm3, xmm0
0x8E9BCA: shufps  xmm3, xmm0, 0
0x8E9BCE: mulps   xmm3, xmm2
0x8E9BD1: movaps  xmm2, xmm0
0x8E9BD4: shufps  xmm2, xmm0, 0
0x8E9BD8: mulps   xmm2, xmm1
0x8E9BDB: movaps  xmmword ptr [edi+0E0h], xmm3
0x8E9BE2: movaps  [esp+40h+var_10], xmm2
0x8E9BE7: fld     [esp+40h+var_2C]
0x8E9BEB: lea     ecx, [esp+40h+var_20]
0x8E9BEF: fmul    [esp+40h+var_2C]
0x8E9BF3: push    ecx
0x8E9BF4: fld     [esp+44h+var_2C]
0x8E9BF8: lea     edx, [esp+44h+var_10]
0x8E9BFC: fmul    dword ptr ds:0A96F70h
0x8E9C02: push    edx
0x8E9C03: lea     ecx, [esp+48h+var_20]
0x8E9C07: fsubr   dword ptr ds:0A2F948h
0x8E9C0D: fld     st(1)
0x8E9C0F: fmul    dword ptr ds:0A96F6Ch
0x8E9C15: fsubp   st(1), st
0x8E9C17: fxch    st(1)
0x8E9C19: fmul    [esp+48h+var_2C]
0x8E9C1D: fmul    dword ptr ds:0A96F68h
0x8E9C23: fsubp   st(1), st
0x8E9C25: fstp    dword ptr [esp+48h+var_10+0Ch]
0x8E9C29: call    sub_889470
0x8E9C2E: lea     ecx, [esp+40h+var_20]
0x8E9C32: call    sub_4D6830
0x8E9C37: fld     [esp+40h+var_2C]
0x8E9C3B: fsqrt
0x8E9C3D: movaps  xmm0, [esp+40h+var_10]
0x8E9C42: movaps  xmm1, xmm0
0x8E9C45: addps   xmm1, xmm0
0x8E9C48: movaps  xmm0, [esp+40h+var_20]
0x8E9C4D: lea     eax, [esi+70h]
0x8E9C50: movaps  xmmword ptr [esi+90h], xmm1
0x8E9C57: push    eax
0x8E9C58: mov     ecx, esi
0x8E9C5A: fmul    dword ptr ds:0A9AD28h
0x8E9C60: fstp    dword ptr [esi+9Ch]
0x8E9C66: movaps  xmmword ptr [esi+70h], xmm0
0x8E9C6A: call    sub_8B1DD0
0x8E9C6F: movaps  xmm0, xmmword ptr [esi+80h]
0x8E9C76: movaps  xmm2, xmmword ptr [esi+20h]
0x8E9C7A: movaps  xmm3, xmmword ptr [esi+10h]
0x8E9C7E: movaps  xmm1, xmm0
0x8E9C81: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x8E9C85: mulps   xmm2, xmm1
0x8E9C88: movaps  xmm1, xmm0
0x8E9C8B: shufps  xmm1, xmm0, 55h ; 'U'
0x8E9C8F: mulps   xmm3, xmm1
0x8E9C92: movaps  xmm1, xmm0
0x8E9C95: shufps  xmm1, xmm0, 0
0x8E9C99: movaps  xmm0, xmmword ptr [esi]
0x8E9C9C: mulps   xmm0, xmm1
0x8E9C9F: movaps  xmm1, xmmword ptr [esi+50h]
0x8E9CA3: addps   xmm0, xmm3
0x8E9CA6: addps   xmm0, xmm2
0x8E9CA9: subps   xmm1, xmm0
0x8E9CAC: movaps  xmmword ptr [esi+30h], xmm1
0x8E9CB0: movaps  xmm0, xmmword ptr [ebx+10h]
0x8E9CB4: movaps  xmmword ptr [edi+0D0h], xmm0
0x8E9CBB: movaps  xmm0, xmmword ptr [ebx+20h]
0x8E9CBF: movaps  xmmword ptr [edi+0E0h], xmm0
0x8E9CC6: pop     edi
0x8E9CC7: pop     esi
0x8E9CC8: lea     eax, [ebx+80h]
0x8E9CCE: pop     ebx
0x8E9CCF: mov     esp, ebp
0x8E9CD1: pop     ebp
0x8E9CD2: retn    0Ch
