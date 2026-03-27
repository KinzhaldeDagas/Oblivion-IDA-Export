0x9519C0: push    ebp
0x9519C1: mov     ebp, esp
0x9519C3: and     esp, 0FFFFFFF0h
0x9519C6: sub     esp, 14h
0x9519C9: push    ebx
0x9519CA: push    esi
0x9519CB: push    edi
0x9519CC: mov     edi, [ebp+arg_4]
0x9519CF: mov     esi, ecx
0x9519D1: xor     ebx, ebx
0x9519D3: mov     eax, [edi+14h]
0x9519D6: movaps  xmm0, xmmword ptr [eax]
0x9519D9: mov     ecx, [esi+68h]
0x9519DC: movaps  xmmword ptr [ecx], xmm0
0x9519DF: mov     edx, [edi+24h]
0x9519E2: movaps  xmm0, xmmword ptr [edx]
0x9519E5: mov     eax, [esi+68h]
0x9519E8: movaps  xmmword ptr [eax+10h], xmm0
0x9519EC: mov     ecx, [edi+34h]
0x9519EF: mov     edx, [esi+68h]
0x9519F2: movaps  xmm0, xmmword ptr [ecx]
0x9519F5: movaps  xmmword ptr [edx+20h], xmm0
0x9519F9: mov     eax, [esi+68h]
0x9519FC: lea     ecx, [esp+20h+var_C]
0x951A00: push    ecx
0x951A01: lea     edx, [eax+20h]
0x951A04: push    edx
0x951A05: lea     ecx, [eax+10h]
0x951A08: push    ecx
0x951A09: push    eax
0x951A0A: push    offset stru_BA7A40
0x951A0F: call    sub_8D1700
0x951A14: fld     [esp+34h+var_C]
0x951A18: fcomp   dword ptr ds:0A2FAA8h
0x951A1E: add     esp, 14h
0x951A21: fnstsw  ax
0x951A23: test    ah, 5
0x951A26: jnp     short loc_951A4A
0x951A28: fld     [esp+20h+var_8]
0x951A2C: fcomp   dword ptr ds:0A2FAA8h
0x951A32: fnstsw  ax
0x951A34: test    ah, 5
0x951A37: jnp     short loc_951A4A
0x951A39: fld     [esp+20h+var_4]
0x951A3D: fcomp   dword ptr ds:0A2FAA8h
0x951A43: fnstsw  ax
0x951A45: test    ah, 5
0x951A48: jp      short loc_951A5F
0x951A4A: mov     ecx, [ebp+arg_0]
0x951A4D: push    edi
0x951A4E: call    sub_958F40
0x951A53: inc     ebx
0x951A54: cmp     ebx, 0Ah
0x951A57: mov     edi, eax
0x951A59: jl      loc_9519D3
0x951A5F: mov     eax, [edi+14h]
0x951A62: movaps  xmm0, xmmword ptr [eax+10h]
0x951A66: mov     edx, [esi+60h]
0x951A69: movaps  xmmword ptr [edx], xmm0
0x951A6C: movaps  xmm0, xmmword ptr [eax+20h]
0x951A70: mov     ecx, [esi+64h]
0x951A73: movaps  xmmword ptr [ecx], xmm0
0x951A76: mov     eax, [edi+24h]
0x951A79: mov     edx, [esi+60h]
0x951A7C: movaps  xmm0, xmmword ptr [eax+10h]
0x951A80: movaps  xmmword ptr [edx+10h], xmm0
0x951A84: mov     ecx, [esi+64h]
0x951A87: movaps  xmm0, xmmword ptr [eax+20h]
0x951A8B: movaps  xmmword ptr [ecx+10h], xmm0
0x951A8F: mov     eax, [edi+34h]
0x951A92: mov     edx, [esi+60h]
0x951A95: movaps  xmm0, xmmword ptr [eax+10h]
0x951A99: movaps  xmmword ptr [edx+20h], xmm0
0x951A9D: mov     ecx, [esi+64h]
0x951AA0: movaps  xmm0, xmmword ptr [eax+20h]
0x951AA4: movaps  xmmword ptr [ecx+20h], xmm0
0x951AA8: mov     edx, [esi+6Ch]
0x951AAB: mov     dword ptr [edx], 3
0x951AB1: mov     eax, [esp+20h+var_C]
0x951AB5: mov     ecx, [esp+20h+var_8]
0x951AB9: mov     esi, [esi+60h]
0x951ABC: mov     edx, [esp+20h+var_4]
0x951AC0: movaps  xmm3, xmmword ptr [esi+20h]
0x951AC4: mov     [esp+20h+var_10], eax
0x951AC8: movss   xmm0, [esp+20h+var_10]
0x951ACE: mov     eax, [ebp+arg_8]
0x951AD1: mov     [esp+20h+var_10], ecx
0x951AD5: movss   xmm1, [esp+20h+var_10]
0x951ADB: mov     [esp+20h+var_10], edx
0x951ADF: movss   xmm2, [esp+20h+var_10]
0x951AE5: movaps  xmm4, xmm2
0x951AE8: shufps  xmm4, xmm2, 0
0x951AEC: movaps  xmm2, xmmword ptr [esi+10h]
0x951AF0: mulps   xmm4, xmm3
0x951AF3: movaps  xmm3, xmm1
0x951AF6: shufps  xmm3, xmm1, 0
0x951AFA: movaps  xmm1, xmmword ptr [esi]
0x951AFD: mulps   xmm3, xmm2
0x951B00: movaps  xmm2, xmm0
0x951B03: shufps  xmm2, xmm0, 0
0x951B07: mulps   xmm2, xmm1
0x951B0A: addps   xmm2, xmm3
0x951B0D: addps   xmm2, xmm4
0x951B10: movaps  xmmword ptr [eax+10h], xmm2
0x951B14: fld     dword ptr [edi+10h]
0x951B17: fchs
0x951B19: fstp    dword ptr [eax+20h]
0x951B1C: movaps  xmm1, xmmword ptr [edi]
0x951B1F: movaps  xmm0, xmmword ptr ds:0A965C0h
0x951B26: pop     edi
0x951B27: pop     esi
0x951B28: xorps   xmm1, xmm0
0x951B2B: movaps  xmmword ptr [eax], xmm1
0x951B2E: pop     ebx
0x951B2F: mov     esp, ebp
0x951B31: pop     ebp
0x951B32: retn    0Ch
