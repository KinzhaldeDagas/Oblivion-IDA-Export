0x912940: push    ebp
0x912941: mov     ebp, esp
0x912943: and     esp, 0FFFFFFF0h
0x912946: sub     esp, 54h
0x912949: mov     eax, [ebp+arg_0]
0x91294C: mov     ecx, [ebp+arg_10]
0x91294F: push    ebx
0x912950: push    esi
0x912951: mov     esi, [eax]
0x912953: add     esi, 4
0x912956: mov     [eax], esi
0x912958: mov     edx, [ecx+28h]
0x91295B: mov     eax, esi
0x91295D: mov     ebx, [eax]
0x91295F: mov     eax, [ebp+arg_4]
0x912962: mov     esi, [eax]
0x912964: lea     ecx, [esi+10h]
0x912967: mov     [eax], ecx
0x912969: fld     dword ptr [esi]
0x91296B: mov     eax, [esi+8]
0x91296E: mov     [esp+5Ch+var_3C], edx
0x912972: mov     edx, [esi+4]
0x912975: push    edi
0x912976: mov     [esp+60h+var_48], ebx
0x91297A: mov     [esp+60h+var_40], edx
0x91297E: mov     [esp+60h+var_50], eax
0x912982: call    __ftol2
0x912987: mov     ecx, [ebp+arg_8]
0x91298A: mov     edx, [ecx+34h]
0x91298D: mov     eax, [edx+eax*4]
0x912990: mov     edx, [esp+60h+var_48]
0x912994: mov     ecx, ds:0B2FF9Ch[edx*4]
0x91299B: mov     edx, ds:0B2FFA0h[edx*4]
0x9129A2: mov     edi, [ebp+arg_C]
0x9129A5: mov     [esp+60h+var_4C], eax
0x9129A9: lea     eax, [ecx+5]
0x9129AC: shl     eax, 4
0x9129AF: movaps  xmm1, xmmword ptr [eax+edi]
0x9129B3: add     edx, 8
0x9129B6: add     eax, edi
0x9129B8: shl     edx, 4
0x9129BB: movaps  xmm0, xmmword ptr [edx+edi]
0x9129BF: mulps   xmm0, xmm1
0x9129C2: movaps  xmm2, xmm0
0x9129C5: shufps  xmm2, xmm0, 55h ; 'U'
0x9129C9: addss   xmm2, xmm0
0x9129CD: add     ecx, 8
0x9129D0: movaps  xmm3, xmm0
0x9129D3: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x9129D7: shl     ecx, 4
0x9129DA: movaps  xmm0, xmmword ptr [ecx+edi]
0x9129DE: mulps   xmm0, xmm1
0x9129E1: addss   xmm3, xmm2
0x9129E5: movaps  xmm1, xmm0
0x9129E8: shufps  xmm1, xmm0, 55h ; 'U'
0x9129EC: movaps  xmm2, xmm0
0x9129EF: addss   xmm1, xmm0
0x9129F3: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x9129F7: lea     ecx, [esp+60h+var_48]
0x9129FB: addss   xmm2, xmm1
0x9129FF: movss   dword ptr [ecx], xmm2
0x912A03: fld     [esp+60h+var_48]
0x912A07: fchs
0x912A09: sub     esp, 8
0x912A0C: fstp    [esp+68h+var_64]; float
0x912A10: lea     eax, [esp+68h+var_44]
0x912A14: movss   dword ptr [eax], xmm3
0x912A18: fld     [esp+68h+var_44]
0x912A1C: add     ebx, 5
0x912A1F: fchs
0x912A21: shl     ebx, 4
0x912A24: fstp    [esp+68h+var_68]; float
0x912A27: add     ebx, edi
0x912A29: call    sub_8ECBB0
0x912A2E: fadd    dword ptr ds:0A9CD64h
0x912A34: add     esp, 8
0x912A37: fst     [esp+60h+var_44]
0x912A3B: fld     [esp+60h+var_40]
0x912A3F: fsubr   st, st(1)
0x912A41: fcom    dword ptr ds:0A9CD68h
0x912A47: fnstsw  ax
0x912A49: test    ah, 5
0x912A4C: jp      short loc_912A5C
0x912A4E: fstp    st
0x912A50: fld     [esp+60h+var_50]
0x912A54: fadd    dword ptr ds:0A2F948h
0x912A5A: jmp     short loc_912A73
0x912A5C: fcomp   dword ptr ds:0A9CD64h
0x912A62: fnstsw  ax
0x912A64: test    ah, 41h
0x912A67: jnz     short loc_912A77
0x912A69: fld     [esp+60h+var_50]
0x912A6D: fsub    dword ptr ds:0A2F948h
0x912A73: fstp    [esp+60h+var_50]
0x912A77: mov     edx, [esp+60h+var_50]
0x912A7B: fstp    dword ptr [esi+4]
0x912A7E: mov     eax, [esp+60h+var_4C]
0x912A82: test    eax, eax
0x912A84: mov     [esi+8], edx
0x912A87: mov     dword ptr [esi+0Ch], 0
0x912A8E: jz      loc_912B18
0x912A94: mov     ecx, [ebp+arg_14]
0x912A97: mov     edx, [ecx]
0x912A99: mov     esi, [ebp+arg_10]
0x912A9C: lea     eax, [esp+60h+var_38]
0x912AA0: push    eax
0x912AA1: push    edx
0x912AA2: push    esi
0x912AA3: push    ebx
0x912AA4: mov     [esp+70h+var_28], 0
0x912AAC: mov     [esp+70h+var_24], 0
0x912AB4: call    sub_8F1070
0x912AB9: fld     [esp+70h+var_50]
0x912ABD: mov     ecx, [edi+0B8h]
0x912AC3: fmul    dword ptr ds:0A46B14h
0x912AC9: mov     eax, [esp+70h+var_3C]
0x912ACD: mov     [esp+70h+var_2C], esi
0x912AD1: mov     edx, [eax+ecx*8]
0x912AD4: fadd    [esp+70h+var_44]
0x912AD8: mov     [esp+70h+var_28], edx
0x912ADC: mov     eax, [eax+ecx*8+4]
0x912AE0: mov     ecx, [esp+70h+var_4C]
0x912AE4: fstp    [esp+70h+var_34]
0x912AE8: mov     edx, [ecx]
0x912AEA: mov     [esp+70h+var_24], eax
0x912AEE: add     esp, 10h
0x912AF1: lea     eax, [esp+60h+var_1C]
0x912AF5: push    eax
0x912AF6: lea     eax, [esp+64h+var_38]
0x912AFA: push    eax
0x912AFB: mov     [esp+68h+var_30], 0
0x912B03: call    dword ptr [edx+8]
0x912B06: mov     ecx, [ebp+arg_14]
0x912B09: push    ecx
0x912B0A: lea     edx, [esp+64h+var_1C]
0x912B0E: push    esi
0x912B0F: push    edx
0x912B10: call    sub_8F0FB0
0x912B15: add     esp, 0Ch
0x912B18: inc     dword ptr [edi+0B8h]
0x912B1E: pop     edi
0x912B1F: pop     esi
0x912B20: pop     ebx
0x912B21: mov     esp, ebp
0x912B23: pop     ebp
0x912B24: retn    18h
