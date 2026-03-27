0x936810: push    ebp
0x936811: mov     ebp, esp
0x936813: and     esp, 0FFFFFFF0h
0x936816: sub     esp, 58h
0x936819: xor     eax, eax
0x93681B: movaps  xmm0, xmmword ptr [ecx+60h]
0x93681F: push    esi
0x936820: push    edi
0x936821: mov     edi, [ebp+arg_4]
0x936824: mov     al, [edi+38h]
0x936827: mov     esi, [edi+3Ch]
0x93682A: mov     edx, [edi+38h]
0x93682D: movaps  xmm6, xmmword ptr [ecx+40h]
0x936831: and     esi, 0Fh
0x936834: fld     dword ptr [ecx+esi*4+70h]
0x936838: and     edx, 0Fh
0x93683B: fadd    st, st
0x93683D: and     eax, 70h
0x936840: add     eax, offset unk_AA1CC0
0x936845: movaps  xmm5, xmmword ptr [eax]
0x936848: fstp    [esp+60h+var_34]
0x93684C: fld     dword ptr [ecx+edx*4+60h]
0x936850: xor     eax, eax
0x936852: mov     al, [edi+3Ch]
0x936855: fmul    dword ptr ds:0A53954h
0x93685B: movaps  xmm2, xmm5
0x93685E: mulps   xmm2, xmm0
0x936861: movaps  xmm0, xmmword ptr [ecx+70h]
0x936865: fst     [esp+60h+var_48]
0x936869: movaps  [esp+60h+var_30], xmm2
0x93686E: and     eax, 70h
0x936871: add     eax, offset unk_AA1CC0
0x936876: movaps  xmm1, xmmword ptr [eax]
0x936879: mulps   xmm1, xmm0
0x93687C: movss   xmm0, [esp+60h+var_34]
0x936882: lea     eax, [esi+2]
0x936885: movaps  xmm4, xmm0
0x936888: shufps  xmm4, xmm0, 0
0x93688C: movaps  xmm0, xmm4
0x93688F: shl     eax, 4
0x936892: movaps  xmm3, xmmword ptr [eax+ecx]
0x936896: mulps   xmm0, xmm3
0x936899: movaps  xmm3, xmmword ptr [ecx+50h]
0x93689D: movaps  [esp+60h+var_20], xmm0
0x9368A2: fmul    dword ptr [esp+edx*4+60h+var_20]
0x9368A6: movaps  xmm4, xmm1
0x9368A9: shufps  xmm4, xmm1, 0AAh ; 'ª'
0x9368AD: fstp    [esp+60h+var_44]
0x9368B1: mulps   xmm6, xmm4
0x9368B4: fld     dword ptr [ecx+esi*4+70h]
0x9368B8: movaps  xmm4, xmmword ptr [ecx+30h]
0x9368BC: fld     st
0x9368BE: addps   xmm6, xmm3
0x9368C1: fmul    st, st(1)
0x9368C3: movaps  xmm3, xmm1
0x9368C6: shufps  xmm3, xmm1, 55h ; 'U'
0x9368CA: mulps   xmm4, xmm3
0x9368CD: fmul    dword ptr ds:0A46B10h
0x9368D3: movaps  xmm3, xmm1
0x9368D6: shufps  xmm3, xmm1, 0
0x9368DA: movaps  xmm1, xmmword ptr [ecx+20h]
0x9368DE: fstp    [esp+60h+var_40]
0x9368E2: mulps   xmm1, xmm3
0x9368E5: addps   xmm1, xmm4
0x9368E8: fstp    st
0x9368EA: movaps  xmm4, xmm1
0x9368ED: fld     [esp+60h+var_48]
0x9368F1: addps   xmm4, xmm6
0x9368F4: fmul    [esp+60h+var_48]
0x9368F8: subps   xmm4, xmm2
0x9368FB: movaps  xmm1, xmm0
0x9368FE: mulps   xmm1, xmm4
0x936901: movaps  xmm2, xmm1
0x936904: fmul    [esp+60h+var_40]
0x936908: fld     [esp+60h+var_44]
0x93690C: shufps  xmm2, xmm1, 55h ; 'U'
0x936910: fmul    [esp+60h+var_44]
0x936914: movaps  xmm3, xmm1
0x936917: addss   xmm2, xmm1
0x93691B: shufps  xmm3, xmm1, 0AAh ; 'ª'
0x93691F: lea     eax, [esp+60h+var_38]
0x936923: addss   xmm3, xmm2
0x936927: movaps  [esp+60h+var_10], xmm4
0x93692C: movss   dword ptr [eax], xmm3
0x936930: fsubp   st(1), st
0x936932: fabs
0x936934: fstp    [esp+60h+var_3C]
0x936938: fld     [esp+60h+var_48]
0x93693C: fmul    dword ptr [esp+edx*4+60h+var_10]
0x936940: fmul    [esp+60h+var_40]
0x936944: fld     [esp+60h+var_38]
0x936948: fmul    [esp+60h+var_44]
0x93694C: fsubp   st(1), st
0x93694E: fstp    [esp+60h+var_4C]
0x936952: fld     dword ptr ds:0B3058Ch
0x936958: fmul    [esp+60h+var_3C]
0x93695C: fcomp   [esp+60h+var_4C]
0x936960: fnstsw  ax
0x936962: test    ah, 1
0x936965: jz      loc_936B5D
0x93696B: fld     dword ptr ds:0A2F948h
0x936971: fsub    dword ptr ds:0B3058Ch
0x936977: fst     [esp+60h+var_34]
0x93697B: fmul    [esp+60h+var_3C]
0x93697F: fcomp   [esp+60h+var_4C]
0x936983: fnstsw  ax
0x936985: test    ah, 41h
0x936988: jnp     loc_936B5D
0x93698E: fld     [esp+60h+var_4C]
0x936992: fdiv    [esp+60h+var_3C]
0x936996: fst     [esp+60h+var_4C]
0x93699A: fmul    [esp+60h+var_44]
0x93699E: fsub    [esp+60h+var_38]
0x9369A2: fld     dword ptr ds:0B3058Ch
0x9369A8: fmul    [esp+60h+var_40]
0x9369AC: fld     st(1)
0x9369AE: fcompp
0x9369B0: fnstsw  ax
0x9369B2: test    ah, 41h
0x9369B5: jnp     loc_936B5B
0x9369BB: fld     [esp+60h+var_34]
0x9369BF: fmul    [esp+60h+var_40]
0x9369C3: fxch    st(1)
0x9369C5: fcompp
0x9369C7: fnstsw  ax
0x9369C9: test    ah, 1
0x9369CC: jz      loc_936B5D
0x9369D2: fld     [esp+60h+var_4C]
0x9369D6: xorps   xmm1, xmm1
0x9369D9: fmul    [esp+60h+var_48]
0x9369DD: movaps  [esp+60h+var_20], xmm1
0x9369E2: movaps  xmm1, xmm0
0x9369E5: shufps  xmm1, xmm0, 0C9h ; 'É'
0x9369E9: fadd    dword ptr [esp+edx*4+60h+var_30]
0x9369ED: movaps  xmm2, xmm1
0x9369F0: mov     [esp+60h+var_34], 40400000h
0x9369F8: movss   xmm6, [esp+60h+var_34]
0x9369FE: fstp    dword ptr [esp+edx*4+60h+var_30]
0x936A02: mov     [esp+60h+var_34], 3F000000h
0x936A0A: fld     [esp+60h+var_48]
0x936A0E: fmul    dword ptr ds:0A3D65Ch
0x936A14: fstp    dword ptr [esp+edx*4+60h+var_20]
0x936A18: movaps  xmm1, [esp+60h+var_20]
0x936A1D: movaps  xmm3, xmm1
0x936A20: shufps  xmm3, xmm1, 0D2h ; 'Ò'
0x936A24: mulps   xmm3, xmm2
0x936A27: movaps  xmm2, xmm0
0x936A2A: shufps  xmm2, xmm0, 0D2h ; 'Ò'
0x936A2E: movaps  xmm0, xmm1
0x936A31: shufps  xmm0, xmm1, 0C9h ; 'É'
0x936A35: movaps  xmm1, xmm0
0x936A38: mulps   xmm1, xmm2
0x936A3B: subps   xmm1, xmm3
0x936A3E: movaps  xmm0, xmm1
0x936A41: mulps   xmm0, xmm1
0x936A44: movaps  xmm2, xmm0
0x936A47: shufps  xmm2, xmm0, 55h ; 'U'
0x936A4B: addss   xmm2, xmm0
0x936A4F: movaps  xmm3, xmm0
0x936A52: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x936A56: movaps  xmm0, xmm3
0x936A59: addss   xmm0, xmm2
0x936A5D: movaps  [esp+60h+var_20], xmm0
0x936A62: rsqrtss xmm2, xmm0
0x936A66: movss   dword ptr [esp+60h+var_20], xmm2
0x936A6C: movaps  xmm2, [esp+60h+var_20]
0x936A71: movaps  xmm3, xmm0
0x936A74: mulss   xmm3, xmm2
0x936A78: mulss   xmm3, xmm2
0x936A7C: subss   xmm6, xmm3
0x936A80: movss   xmm3, [esp+60h+var_34]
0x936A86: mulss   xmm3, xmm2
0x936A8A: movaps  xmm2, xmm3
0x936A8D: mulss   xmm2, xmm6
0x936A91: shufps  xmm2, xmm2, 0
0x936A95: lea     edx, [esp+60h+var_34]
0x936A99: mulss   xmm0, xmm2
0x936A9D: movss   dword ptr [edx], xmm0
0x936AA1: fld     [esp+60h+var_34]
0x936AA5: fcomp   dword ptr [ecx+0B4h]
0x936AAB: movaps  xmm3, xmm2
0x936AAE: mulps   xmm3, xmm1
0x936AB1: fnstsw  ax
0x936AB3: test    ah, 5
0x936AB6: jnp     loc_936B5D
0x936ABC: movaps  xmm0, xmm3
0x936ABF: mulps   xmm0, xmm5
0x936AC2: movaps  xmm1, xmm0
0x936AC5: shufps  xmm1, xmm0, 55h ; 'U'
0x936AC9: movaps  xmm2, xmm0
0x936ACC: lea     eax, [esp+60h+var_34]
0x936AD0: addss   xmm1, xmm0
0x936AD4: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x936AD8: addss   xmm2, xmm1
0x936ADC: movss   dword ptr [eax], xmm2
0x936AE0: fld     [esp+60h+var_34]
0x936AE4: fcomp   dword ptr ds:0A2FAA8h
0x936AEA: fnstsw  ax
0x936AEC: test    ah, 5
0x936AEF: jp      short loc_936AFB
0x936AF1: movaps  xmm0, xmmword ptr ds:0A965C0h
0x936AF8: xorps   xmm3, xmm0
0x936AFB: movaps  xmm0, xmm3
0x936AFE: mulps   xmm0, xmm4
0x936B01: movaps  xmm1, xmm0
0x936B04: shufps  xmm1, xmm0, 55h ; 'U'
0x936B08: movaps  xmm2, xmm0
0x936B0B: addss   xmm1, xmm0
0x936B0F: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x936B13: lea     edx, [esp+60h+var_34]
0x936B17: addss   xmm2, xmm1
0x936B1B: movss   dword ptr [edx], xmm2
0x936B1F: fld     [esp+60h+var_34]
0x936B23: fcomp   dword ptr [ecx+0B0h]
0x936B29: fnstsw  ax
0x936B2B: test    ah, 41h
0x936B2E: jz      short loc_936B5D
0x936B30: movaps  xmm0, [esp+60h+var_30]
0x936B35: mov     eax, [esp+60h+var_34]
0x936B39: movaps  xmmword ptr [edi], xmm0
0x936B3C: movaps  xmm0, xmmword ptr ds:0A965C0h
0x936B43: mov     [edi+34h], eax
0x936B46: mov     eax, [ebp+arg_0]
0x936B49: xorps   xmm3, xmm0
0x936B4C: movaps  xmmword ptr [edi+20h], xmm3
0x936B50: mov     byte ptr [eax], 1
0x936B53: pop     edi
0x936B54: pop     esi
0x936B55: mov     esp, ebp
0x936B57: pop     ebp
0x936B58: retn    8
0x936B5B: fstp    st
0x936B5D: mov     eax, [ebp+arg_0]
0x936B60: pop     edi
0x936B61: mov     byte ptr [eax], 0
0x936B64: pop     esi
0x936B65: mov     esp, ebp
0x936B67: pop     ebp
0x936B68: retn    8
