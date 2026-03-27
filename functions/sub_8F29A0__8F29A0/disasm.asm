0x8F29A0: push    ebp
0x8F29A1: mov     ebp, esp
0x8F29A3: and     esp, 0FFFFFFF0h
0x8F29A6: sub     esp, 104h
0x8F29AC: push    ebx
0x8F29AD: push    esi
0x8F29AE: mov     esi, large fs:2Ch
0x8F29B5: push    edi
0x8F29B6: mov     edi, ds:0BA9DE4h
0x8F29BC: mov     eax, [esi+edi*4]
0x8F29BF: mov     edx, [eax+1A4h]
0x8F29C5: cmp     edx, [eax+1A8h]
0x8F29CB: jnb     short loc_8F29F2
0x8F29CD: mov     ebx, [eax+1A4h]
0x8F29D3: mov     dword ptr [ebx], offset aTtrccylinder; "TtrcCylinder"
0x8F29D9: rdtsc
0x8F29DB: mov     [esp+110h+var_100], eax
0x8F29DF: mov     eax, [esp+110h+var_100]
0x8F29E3: mov     [ebx+4], eax
0x8F29E6: mov     eax, [esi+edi*4]
0x8F29E9: add     ebx, 0Ch
0x8F29EC: mov     [eax+1A4h], ebx
0x8F29F2: movaps  xmm0, xmmword ptr [ecx+40h]
0x8F29F6: fld     dword ptr [ecx+10h]
0x8F29F9: movaps  xmm1, xmmword ptr [ecx+50h]
0x8F29FD: fadd    dword ptr [ecx+0Ch]
0x8F2A00: mov     edx, [ecx+0Ch]
0x8F2A03: mov     ebx, [ebp+arg_4]
0x8F2A06: movaps  xmm3, xmm0
0x8F2A09: fstp    [esp+110h+var_FC]
0x8F2A0D: shufps  xmm3, xmm0, 0C9h ; 'É'
0x8F2A11: movaps  xmm4, xmm1
0x8F2A14: shufps  xmm4, xmm1, 0D2h ; 'Ò'
0x8F2A18: mulps   xmm4, xmm3
0x8F2A1B: movaps  xmm3, xmm0
0x8F2A1E: shufps  xmm3, xmm0, 0D2h ; 'Ò'
0x8F2A22: movaps  xmm0, xmm1
0x8F2A25: shufps  xmm0, xmm1, 0C9h ; 'É'
0x8F2A29: mulps   xmm0, xmm3
0x8F2A2C: subps   xmm0, xmm4
0x8F2A2F: movaps  xmm1, xmm0
0x8F2A32: mov     [esp+110h+var_100], edx
0x8F2A36: movss   xmm2, [esp+110h+var_100]
0x8F2A3C: movaps  xmm0, xmm2
0x8F2A3F: shufps  xmm0, xmm2, 0
0x8F2A43: mulps   xmm0, xmm1
0x8F2A46: movaps  xmm1, xmmword ptr [ecx+20h]
0x8F2A4A: addps   xmm1, xmm0
0x8F2A4D: movaps  [esp+110h+var_D0], xmm1
0x8F2A52: movaps  xmm1, xmmword ptr [ecx+30h]
0x8F2A56: lea     eax, [esp+110h+var_90]
0x8F2A5D: push    eax
0x8F2A5E: lea     ecx, [esp+114h+var_C0]
0x8F2A62: push    ecx
0x8F2A63: lea     edx, [esp+118h+var_D0]
0x8F2A67: push    edx
0x8F2A68: subps   xmm1, xmm0
0x8F2A6B: push    ebx
0x8F2A6C: movaps  [esp+120h+var_C0], xmm1
0x8F2A71: call    sub_8F37A0
0x8F2A76: movaps  xmm2, xmmword ptr [ebx]
0x8F2A79: movaps  xmm1, [esp+120h+var_90]
0x8F2A81: movaps  xmm4, [esp+120h+var_D0]
0x8F2A86: movaps  xmm0, xmm2
0x8F2A89: subps   xmm0, xmm1
0x8F2A8C: mulps   xmm0, xmm0
0x8F2A8F: movaps  xmm1, xmm0
0x8F2A92: shufps  xmm1, xmm0, 55h ; 'U'
0x8F2A96: movaps  xmm3, xmm0
0x8F2A99: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x8F2A9D: addss   xmm1, xmm0
0x8F2AA1: movaps  xmm0, xmm3
0x8F2AA4: movaps  xmm3, [esp+120h+var_C0]
0x8F2AA9: addss   xmm0, xmm1
0x8F2AAD: movaps  [esp+120h+var_E0], xmm0
0x8F2AB2: sqrtss  xmm0, xmm0
0x8F2AB6: lea     eax, [esp+120h+var_100]
0x8F2ABA: movss   dword ptr [esp+120h+var_E0], xmm0
0x8F2AC0: movaps  xmm0, [esp+120h+var_E0]
0x8F2AC5: movss   dword ptr [eax], xmm0
0x8F2AC9: fld     [esp+120h+var_100]
0x8F2ACD: fcomp   [esp+120h+var_FC]
0x8F2AD1: add     esp, 10h
0x8F2AD4: fnstsw  ax
0x8F2AD6: test    ah, 5
0x8F2AD9: jp      loc_8F2B5F
0x8F2ADF: movaps  xmm0, xmm2
0x8F2AE2: subps   xmm0, xmm4
0x8F2AE5: movaps  xmm5, xmm0
0x8F2AE8: movaps  xmm1, xmm3
0x8F2AEB: subps   xmm1, xmm4
0x8F2AEE: movaps  xmm0, xmm1
0x8F2AF1: mulps   xmm0, xmm5
0x8F2AF4: movaps  xmm5, xmm0
0x8F2AF7: shufps  xmm5, xmm0, 55h ; 'U'
0x8F2AFB: movaps  xmm6, xmm0
0x8F2AFE: addss   xmm5, xmm0
0x8F2B02: shufps  xmm6, xmm0, 0AAh ; 'ª'
0x8F2B06: lea     ecx, [esp+110h+var_100]
0x8F2B0A: addss   xmm6, xmm5
0x8F2B0E: movss   dword ptr [ecx], xmm6
0x8F2B12: fld     [esp+110h+var_100]
0x8F2B16: fcomp   dword ptr ds:0A2FAA8h
0x8F2B1C: fnstsw  ax
0x8F2B1E: test    ah, 41h
0x8F2B21: jnz     short loc_8F2B5F
0x8F2B23: movaps  xmm0, xmm2
0x8F2B26: subps   xmm0, xmm3
0x8F2B29: mulps   xmm1, xmm0
0x8F2B2C: movaps  xmm0, xmm1
0x8F2B2F: shufps  xmm0, xmm1, 55h ; 'U'
0x8F2B33: movaps  xmm5, xmm1
0x8F2B36: addss   xmm0, xmm1
0x8F2B3A: shufps  xmm5, xmm1, 0AAh ; 'ª'
0x8F2B3E: lea     edx, [esp+110h+var_100]
0x8F2B42: addss   xmm5, xmm0
0x8F2B46: movss   dword ptr [edx], xmm5
0x8F2B4A: fld     [esp+110h+var_100]
0x8F2B4E: fcomp   dword ptr ds:0A2FAA8h
0x8F2B54: fnstsw  ax
0x8F2B56: test    ah, 5
0x8F2B59: jnp     loc_8F3135
0x8F2B5F: movaps  xmm0, xmmword ptr [ebx+10h]
0x8F2B63: lea     eax, [esp+110h+var_70]
0x8F2B6A: push    eax
0x8F2B6B: lea     ecx, [esp+114h+var_80]
0x8F2B72: push    ecx
0x8F2B73: lea     edx, [esp+118h+var_E4]
0x8F2B77: push    edx
0x8F2B78: lea     eax, [esp+11Ch+var_E8]
0x8F2B7C: push    eax
0x8F2B7D: lea     ecx, [esp+120h+var_EC]
0x8F2B81: push    ecx
0x8F2B82: lea     edx, [esp+124h+var_A0]
0x8F2B89: push    edx
0x8F2B8A: lea     eax, [esp+128h+var_D0]
0x8F2B8E: push    eax
0x8F2B8F: lea     ecx, [esp+12Ch+var_B0]
0x8F2B93: push    ecx
0x8F2B94: subps   xmm0, xmm2
0x8F2B97: subps   xmm3, xmm4
0x8F2B9A: push    ebx
0x8F2B9B: mov     [esp+134h+var_EC], 7F7FFFFFh
0x8F2BA3: movaps  [esp+134h+var_B0], xmm0
0x8F2BAB: movaps  [esp+134h+var_A0], xmm3
0x8F2BB3: call    sub_8F35D0
0x8F2BB8: fld     [esp+134h+var_FC]
0x8F2BBC: fmul    [esp+134h+var_FC]
0x8F2BC0: add     esp, 24h
0x8F2BC3: fstp    [esp+110h+var_100]
0x8F2BC7: fld     [esp+110h+var_EC]
0x8F2BCB: fcomp   [esp+110h+var_100]
0x8F2BCF: fnstsw  ax
0x8F2BD1: test    ah, 41h
0x8F2BD4: jz      loc_8F3135
0x8F2BDA: movaps  xmm3, [esp+110h+var_A0]
0x8F2BDF: movaps  xmm0, xmm3
0x8F2BE2: mulps   xmm0, xmm3
0x8F2BE5: movaps  xmm1, xmm0
0x8F2BE8: shufps  xmm1, xmm0, 55h ; 'U'
0x8F2BEC: movaps  xmm2, xmm0
0x8F2BEF: addss   xmm1, xmm0
0x8F2BF3: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8F2BF7: lea     edx, [esp+110h+var_F8]
0x8F2BFB: addss   xmm2, xmm1
0x8F2BFF: movss   dword ptr [edx], xmm2
0x8F2C03: fld     [esp+110h+var_F8]
0x8F2C07: fcomp   dword ptr ds:0A9B21Ch
0x8F2C0D: fnstsw  ax
0x8F2C0F: test    ah, 41h
0x8F2C12: jnz     loc_8F3135
0x8F2C18: movaps  xmm1, xmm0
0x8F2C1B: shufps  xmm1, xmm0, 55h ; 'U'
0x8F2C1F: addss   xmm1, xmm0
0x8F2C23: movaps  xmm2, xmm0
0x8F2C26: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8F2C2A: movaps  xmm0, xmm2
0x8F2C2D: addss   xmm0, xmm1
0x8F2C31: movaps  [esp+110h+var_E0], xmm0
0x8F2C36: rsqrtss xmm1, xmm0
0x8F2C3A: movaps  xmm2, xmm0
0x8F2C3D: movss   dword ptr [esp+110h+var_E0], xmm1
0x8F2C43: movaps  xmm1, [esp+110h+var_E0]
0x8F2C48: mulss   xmm2, xmm1
0x8F2C4C: mulss   xmm2, xmm1
0x8F2C50: mov     [esp+110h+var_F8], 40400000h
0x8F2C58: movss   xmm4, [esp+110h+var_F8]
0x8F2C5E: mov     [esp+110h+var_F8], 3F000000h
0x8F2C66: movss   xmm5, [esp+110h+var_F8]
0x8F2C6C: movaps  xmm6, xmm4
0x8F2C6F: subss   xmm6, xmm2
0x8F2C73: movaps  xmm2, xmm5
0x8F2C76: mulss   xmm2, xmm1
0x8F2C7A: movaps  xmm1, xmm2
0x8F2C7D: mulss   xmm1, xmm6
0x8F2C81: shufps  xmm1, xmm1, 0
0x8F2C85: mulss   xmm0, xmm1
0x8F2C89: lea     eax, [esp+110h+var_F8]
0x8F2C8D: movss   dword ptr [eax], xmm0
0x8F2C91: movaps  xmm0, [esp+110h+var_B0]
0x8F2C96: movaps  xmm2, xmm1
0x8F2C99: mulps   xmm2, xmm3
0x8F2C9C: movaps  xmm1, xmm0
0x8F2C9F: mulps   xmm1, xmm2
0x8F2CA2: movaps  xmm3, xmm1
0x8F2CA5: shufps  xmm3, xmm1, 55h ; 'U'
0x8F2CA9: addss   xmm3, xmm1
0x8F2CAD: movaps  xmm6, xmm1
0x8F2CB0: shufps  xmm6, xmm1, 0AAh ; 'ª'
0x8F2CB4: addss   xmm6, xmm3
0x8F2CB8: lea     ecx, [esp+110h+var_F0]
0x8F2CBC: movss   dword ptr [ecx], xmm6
0x8F2CC0: fld     [esp+110h+var_F0]
0x8F2CC4: fchs
0x8F2CC6: movaps  [esp+110h+var_50], xmm5
0x8F2CCE: fstp    [esp+110h+var_F0]
0x8F2CD2: movss   xmm3, [esp+110h+var_F0]
0x8F2CD8: fld     [esp+110h+var_100]
0x8F2CDC: movaps  xmm6, xmm3
0x8F2CDF: fsub    [esp+110h+var_EC]
0x8F2CE3: shufps  xmm6, xmm3, 0
0x8F2CE7: mulps   xmm6, xmm2
0x8F2CEA: addps   xmm0, xmm6
0x8F2CED: fsqrt
0x8F2CEF: mulps   xmm0, xmm0
0x8F2CF2: movaps  xmm3, xmm0
0x8F2CF5: shufps  xmm3, xmm0, 55h ; 'U'
0x8F2CF9: addss   xmm3, xmm0
0x8F2CFD: movaps  xmm6, xmm0
0x8F2D00: shufps  xmm6, xmm0, 0AAh ; 'ª'
0x8F2D04: movaps  xmm0, xmm6
0x8F2D07: addss   xmm0, xmm3
0x8F2D0B: movaps  [esp+110h+var_E0], xmm0
0x8F2D10: rsqrtss xmm3, xmm0
0x8F2D14: movss   dword ptr [esp+110h+var_E0], xmm3
0x8F2D1A: movaps  xmm3, [esp+110h+var_E0]
0x8F2D1F: mulss   xmm0, xmm3
0x8F2D23: movaps  [esp+110h+var_30], xmm4
0x8F2D2B: mulss   xmm0, xmm3
0x8F2D2F: subss   xmm4, xmm0
0x8F2D33: mulss   xmm5, xmm3
0x8F2D37: lea     edx, [esp+110h+var_F0]
0x8F2D3B: mulss   xmm5, xmm4
0x8F2D3F: movss   dword ptr [edx], xmm5
0x8F2D43: movaps  [esp+110h+var_10], xmm2
0x8F2D4B: fmul    [esp+110h+var_F0]
0x8F2D4F: fsubr   [esp+110h+var_E8]
0x8F2D53: fstp    [esp+110h+var_F4]
0x8F2D57: mov     ebx, [ebp+arg_8]
0x8F2D5A: fld     [esp+110h+var_F4]
0x8F2D5E: fcomp   dword ptr [ebx+14h]
0x8F2D61: fnstsw  ax
0x8F2D63: test    ah, 1
0x8F2D66: jz      loc_8F3135
0x8F2D6C: movaps  xmm5, [esp+110h+var_D0]
0x8F2D71: mov     ecx, [esp+110h+var_F4]
0x8F2D75: movaps  xmm0, xmm5
0x8F2D78: mulps   xmm0, xmm2
0x8F2D7B: movaps  xmm3, xmm0
0x8F2D7E: shufps  xmm3, xmm0, 55h ; 'U'
0x8F2D82: addss   xmm3, xmm0
0x8F2D86: movaps  xmm4, xmm0
0x8F2D89: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x8F2D8D: addss   xmm4, xmm3
0x8F2D91: lea     eax, [esp+110h+var_F0]
0x8F2D95: movss   dword ptr [eax], xmm4
0x8F2D99: mov     eax, [ebp+arg_4]
0x8F2D9C: movaps  xmm4, xmmword ptr [eax+10h]
0x8F2DA0: movaps  xmm3, xmmword ptr [eax]
0x8F2DA3: mov     [esp+110h+var_FC], ecx
0x8F2DA7: movss   xmm0, [esp+110h+var_FC]
0x8F2DAD: shufps  xmm0, xmm0, 0
0x8F2DB1: movaps  xmm6, xmm0
0x8F2DB4: mulps   xmm6, xmm4
0x8F2DB7: movaps  [esp+110h+var_20], xmm4
0x8F2DBF: movaps  xmm4, xmmword ptr ds:0A6DFE0h
0x8F2DC6: subps   xmm4, xmm0
0x8F2DC9: movaps  xmm0, xmm4
0x8F2DCC: mulps   xmm0, xmm3
0x8F2DCF: addps   xmm0, xmm6
0x8F2DD2: movaps  [esp+110h+var_40], xmm0
0x8F2DDA: mulps   xmm0, xmm2
0x8F2DDD: movaps  xmm4, xmm0
0x8F2DE0: shufps  xmm4, xmm0, 55h ; 'U'
0x8F2DE4: movaps  xmm6, xmm0
0x8F2DE7: addss   xmm4, xmm0
0x8F2DEB: shufps  xmm6, xmm0, 0AAh ; 'ª'
0x8F2DEF: lea     edx, [esp+110h+var_FC]
0x8F2DF3: addss   xmm6, xmm4
0x8F2DF7: movss   dword ptr [edx], xmm6
0x8F2DFB: fld     [esp+110h+var_FC]
0x8F2DFF: fsub    [esp+110h+var_F0]
0x8F2E03: movaps  [esp+110h+var_60], xmm3
0x8F2E0B: fstp    [esp+110h+var_FC]
0x8F2E0F: fld     [esp+110h+var_F4]
0x8F2E13: fcomp   dword ptr ds:0A2FAA8h
0x8F2E19: fnstsw  ax
0x8F2E1B: test    ah, 1
0x8F2E1E: jnz     loc_8F2F3B
0x8F2E24: fld     [esp+110h+var_FC]
0x8F2E28: fcomp   dword ptr ds:0A2FAA8h
0x8F2E2E: fnstsw  ax
0x8F2E30: test    ah, 41h
0x8F2E33: jnz     loc_8F2F3B
0x8F2E39: fld     [esp+110h+var_FC]
0x8F2E3D: fcomp   [esp+110h+var_F8]
0x8F2E41: fnstsw  ax
0x8F2E43: test    ah, 5
0x8F2E46: jp      loc_8F2F3B
0x8F2E4C: fld     [esp+110h+var_FC]
0x8F2E50: push    ecx
0x8F2E51: fdiv    [esp+114h+var_F8]
0x8F2E55: lea     ecx, [esp+114h+var_E0]
0x8F2E59: fstp    [esp+114h+var_114]
0x8F2E5C: call    sub_535AA0
0x8F2E61: movaps  xmm0, [esp+110h+var_E0]
0x8F2E66: movaps  xmm1, [esp+110h+var_C0]
0x8F2E6B: shufps  xmm0, xmm0, 0
0x8F2E6F: movaps  xmm2, xmm0
0x8F2E72: mulps   xmm2, xmm1
0x8F2E75: movaps  xmm1, xmmword ptr ds:0A6DFE0h
0x8F2E7C: subps   xmm1, xmm0
0x8F2E7F: mulps   xmm1, [esp+110h+var_D0]
0x8F2E84: mov     eax, [esp+110h+var_F4]
0x8F2E88: addps   xmm1, xmm2
0x8F2E8B: movaps  xmm0, xmm1
0x8F2E8E: movaps  xmm1, [esp+110h+var_40]
0x8F2E96: subps   xmm1, xmm0
0x8F2E99: movaps  xmm0, xmm1
0x8F2E9C: mulps   xmm0, xmm1
0x8F2E9F: movaps  xmm2, xmm0
0x8F2EA2: shufps  xmm2, xmm0, 55h ; 'U'
0x8F2EA6: addss   xmm2, xmm0
0x8F2EAA: movaps  xmm3, xmm0
0x8F2EAD: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x8F2EB1: movaps  xmm0, xmm3
0x8F2EB4: addss   xmm0, xmm2
0x8F2EB8: movaps  [esp+110h+var_E0], xmm0
0x8F2EBD: rsqrtss xmm2, xmm0
0x8F2EC1: movss   dword ptr [esp+110h+var_E0], xmm2
0x8F2EC7: movaps  xmm2, [esp+110h+var_E0]
0x8F2ECC: mulss   xmm0, xmm2
0x8F2ED0: mulss   xmm0, xmm2
0x8F2ED4: movaps  xmm3, xmm0
0x8F2ED7: movaps  xmm0, [esp+110h+var_30]
0x8F2EDF: subss   xmm0, xmm3
0x8F2EE3: movaps  xmm3, xmm0
0x8F2EE6: movaps  xmm0, [esp+110h+var_50]
0x8F2EEE: mulss   xmm0, xmm2
0x8F2EF2: mulss   xmm0, xmm3
0x8F2EF6: mov     [ebx+14h], eax
0x8F2EF9: mov     eax, [esi+edi*4]
0x8F2EFC: movaps  xmm2, xmm0
0x8F2EFF: shufps  xmm2, xmm0, 0
0x8F2F03: mulps   xmm2, xmm1
0x8F2F06: movaps  xmmword ptr [ebx], xmm2
0x8F2F09: mov     dword ptr [ebx+10h], 0FFFFFFFFh
0x8F2F10: mov     ecx, [eax+1A4h]
0x8F2F16: cmp     ecx, [eax+1A8h]
0x8F2F1C: jnb     loc_8F3124
0x8F2F22: mov     esi, eax
0x8F2F24: mov     ecx, [esi+1A4h]
0x8F2F2A: mov     dword ptr [ecx], offset aEt; "Et"
0x8F2F30: rdtsc
0x8F2F32: mov     [esp+110h+var_100], eax
0x8F2F36: jmp     loc_8F3114
0x8F2F3B: movaps  xmm0, xmm3
0x8F2F3E: mulps   xmm0, xmm2
0x8F2F41: movaps  xmm4, xmm0
0x8F2F44: shufps  xmm4, xmm0, 55h ; 'U'
0x8F2F48: movaps  xmm6, xmm0
0x8F2F4B: lea     eax, [esp+110h+var_FC]
0x8F2F4F: addss   xmm4, xmm0
0x8F2F53: shufps  xmm6, xmm0, 0AAh ; 'ª'
0x8F2F57: addss   xmm6, xmm4
0x8F2F5B: movss   dword ptr [eax], xmm6
0x8F2F5F: fld     [esp+110h+var_FC]
0x8F2F63: fcomp   [esp+110h+var_F0]
0x8F2F67: fnstsw  ax
0x8F2F69: test    ah, 5
0x8F2F6C: jp      short loc_8F2F7D
0x8F2F6E: mov     [esp+110h+var_FC], 0BF800000h
0x8F2F76: movaps  [esp+110h+var_E0], xmm5
0x8F2F7B: jmp     short loc_8F2FA6
0x8F2F7D: fld     [esp+110h+var_F0]
0x8F2F81: fadd    [esp+110h+var_F8]
0x8F2F85: fcomp   [esp+110h+var_FC]
0x8F2F89: fnstsw  ax
0x8F2F8B: test    ah, 5
0x8F2F8E: jp      loc_8F3135
0x8F2F94: movaps  xmm0, [esp+110h+var_C0]
0x8F2F99: mov     [esp+110h+var_FC], 3F800000h
0x8F2FA1: movaps  [esp+110h+var_E0], xmm0
0x8F2FA6: movaps  xmm0, [esp+110h+var_E0]
0x8F2FAB: subps   xmm0, xmm3
0x8F2FAE: mulps   xmm0, xmm2
0x8F2FB1: movaps  xmm2, xmm0
0x8F2FB4: shufps  xmm2, xmm0, 55h ; 'U'
0x8F2FB8: movaps  xmm3, xmm0
0x8F2FBB: addss   xmm2, xmm0
0x8F2FBF: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x8F2FC3: lea     ecx, [esp+110h+var_F8]
0x8F2FC7: addss   xmm3, xmm2
0x8F2FCB: movss   dword ptr [ecx], xmm3
0x8F2FCF: fld     [esp+110h+var_F8]
0x8F2FD3: fmul    [esp+110h+var_FC]
0x8F2FD7: fmul    dword ptr ds:0A30634h
0x8F2FDD: fst     [esp+110h+var_F4]
0x8F2FE1: fcomp   dword ptr ds:0A2FAA8h
0x8F2FE7: fnstsw  ax
0x8F2FE9: test    ah, 5
0x8F2FEC: jnp     loc_8F3135
0x8F2FF2: movaps  xmm0, xmm1
0x8F2FF5: shufps  xmm0, xmm1, 55h ; 'U'
0x8F2FF9: movaps  xmm2, xmm1
0x8F2FFC: addss   xmm0, xmm1
0x8F3000: shufps  xmm2, xmm1, 0AAh ; 'ª'
0x8F3004: lea     edx, [esp+110h+var_F8]
0x8F3008: addss   xmm2, xmm0
0x8F300C: movss   dword ptr [edx], xmm2
0x8F3010: fld     [esp+110h+var_F8]
0x8F3014: fmul    [esp+110h+var_FC]
0x8F3018: fmul    dword ptr ds:0A30634h
0x8F301E: fld     st
0x8F3020: fmul    dword ptr [ebx+14h]
0x8F3023: fcomp   [esp+110h+var_F4]
0x8F3027: fnstsw  ax
0x8F3029: test    ah, 41h
0x8F302C: jnp     loc_8F3133
0x8F3032: fld     [esp+110h+var_F4]
0x8F3036: lea     ecx, [esp+110h+var_50]
0x8F303D: fdiv    st, st(1)
0x8F303F: fstp    [esp+110h+var_F4]
0x8F3043: mov     eax, [esp+110h+var_F4]
0x8F3047: push    eax
0x8F3048: fstp    st
0x8F304A: call    sub_535AA0
0x8F304F: movaps  xmm0, [esp+110h+var_50]
0x8F3057: shufps  xmm0, xmm0, 0
0x8F305B: movaps  xmm1, xmm0
0x8F305E: mulps   xmm1, [esp+110h+var_20]
0x8F3066: movaps  xmm2, xmm1
0x8F3069: movaps  xmm1, xmmword ptr ds:0A6DFE0h
0x8F3070: subps   xmm1, xmm0
0x8F3073: mulps   xmm1, [esp+110h+var_60]
0x8F307B: movaps  xmm0, xmm1
0x8F307E: addps   xmm0, xmm2
0x8F3081: subps   xmm0, [esp+110h+var_E0]
0x8F3086: mulps   xmm0, xmm0
0x8F3089: movaps  xmm1, xmm0
0x8F308C: shufps  xmm1, xmm0, 55h ; 'U'
0x8F3090: movaps  xmm2, xmm0
0x8F3093: addss   xmm1, xmm0
0x8F3097: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8F309B: lea     ecx, [esp+110h+var_F8]
0x8F309F: addss   xmm2, xmm1
0x8F30A3: movss   dword ptr [ecx], xmm2
0x8F30A7: fld     [esp+110h+var_F8]
0x8F30AB: fcomp   [esp+110h+var_100]
0x8F30AF: fnstsw  ax
0x8F30B1: test    ah, 41h
0x8F30B4: jz      short loc_8F3135
0x8F30B6: mov     edx, [esp+110h+var_FC]
0x8F30BA: push    edx
0x8F30BB: lea     ecx, [esp+114h+var_60]
0x8F30C2: call    sub_535AA0
0x8F30C7: movaps  xmm0, [esp+110h+var_60]
0x8F30CF: mov     eax, [esp+110h+var_F4]
0x8F30D3: mov     [ebx+14h], eax
0x8F30D6: mov     eax, [esi+edi*4]
0x8F30D9: movaps  xmm1, xmm0
0x8F30DC: shufps  xmm1, xmm0, 0
0x8F30E0: mulps   xmm1, [esp+110h+var_10]
0x8F30E8: movaps  xmmword ptr [ebx], xmm1
0x8F30EB: mov     dword ptr [ebx+10h], 0FFFFFFFFh
0x8F30F2: mov     ecx, [eax+1A4h]
0x8F30F8: cmp     ecx, [eax+1A8h]
0x8F30FE: jnb     short loc_8F3124
0x8F3100: mov     esi, eax
0x8F3102: mov     ecx, [esi+1A4h]
0x8F3108: mov     dword ptr [ecx], offset aEt; "Et"
0x8F310E: rdtsc
0x8F3110: mov     [esp+110h+var_100], eax
0x8F3114: mov     edx, [esp+110h+var_100]
0x8F3118: mov     [ecx+4], edx
0x8F311B: add     ecx, 0Ch
0x8F311E: mov     [esi+1A4h], ecx
0x8F3124: mov     eax, [ebp+arg_0]
0x8F3127: mov     byte ptr [eax], 1
0x8F312A: pop     edi
0x8F312B: pop     esi
0x8F312C: pop     ebx
0x8F312D: mov     esp, ebp
0x8F312F: pop     ebp
0x8F3130: retn    0Ch
0x8F3133: fstp    st
0x8F3135: mov     eax, [esi+edi*4]
0x8F3138: mov     ecx, [eax+1A4h]
0x8F313E: cmp     ecx, [eax+1A8h]
0x8F3144: jnb     short loc_8F316A
0x8F3146: mov     esi, eax
0x8F3148: mov     ecx, [esi+1A4h]
0x8F314E: mov     dword ptr [ecx], offset aEt; "Et"
0x8F3154: rdtsc
0x8F3156: mov     [esp+110h+var_100], eax
0x8F315A: mov     edx, [esp+110h+var_100]
0x8F315E: mov     [ecx+4], edx
0x8F3161: add     ecx, 0Ch
0x8F3164: mov     [esi+1A4h], ecx
0x8F316A: mov     eax, [ebp+arg_0]
0x8F316D: pop     edi
0x8F316E: pop     esi
0x8F316F: mov     byte ptr [eax], 0
0x8F3172: pop     ebx
0x8F3173: mov     esp, ebp
0x8F3175: pop     ebp
0x8F3176: retn    0Ch
