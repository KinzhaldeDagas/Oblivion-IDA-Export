0x8B2DD0: push    ebp
0x8B2DD1: mov     ebp, esp
0x8B2DD3: and     esp, 0FFFFFFF0h
0x8B2DD6: push    0FFFFFFFFh
0x8B2DD8: push    offset SEH_8C2D80
0x8B2DDD: mov     eax, large fs:0
0x8B2DE3: push    eax
0x8B2DE4: sub     esp, 8
0x8B2DE7: push    ebx
0x8B2DE8: push    esi
0x8B2DE9: push    edi
0x8B2DEA: mov     eax, ds:0B30AACh
0x8B2DEF: xor     eax, esp
0x8B2DF1: push    eax
0x8B2DF2: lea     eax, [esp+24h+var_C]
0x8B2DF6: mov     large fs:0, eax
0x8B2DFC: mov     ebx, [ebp+arg_4]
0x8B2DFF: mov     edi, ecx
0x8B2E01: mov     ecx, [ebp+arg_0]
0x8B2E04: test    ecx, ecx
0x8B2E06: mov     esi, [edi+4]
0x8B2E09: jnz     short loc_8B2E42
0x8B2E0B: mov     ecx, ds:0BA7D98h
0x8B2E11: mov     eax, [ecx]
0x8B2E13: mov     edx, [eax+10h]
0x8B2E16: push    29h ; ')'
0x8B2E18: push    90h
0x8B2E1D: call    edx
0x8B2E1F: mov     word ptr [eax+4], 90h
0x8B2E25: mov     [esp+24h+var_14], eax
0x8B2E29: mov     ecx, eax
0x8B2E2B: mov     [esp+24h+var_4], 0
0x8B2E33: call    sub_8B2390
0x8B2E38: mov     [esp+24h+var_4], 0FFFFFFFFh
0x8B2E40: mov     ecx, eax
0x8B2E42: movaps  xmm0, xmmword ptr [esi+20h]
0x8B2E46: movaps  xmmword ptr [ecx+20h], xmm0
0x8B2E4A: movaps  xmm0, xmmword ptr [esi+30h]
0x8B2E4E: movaps  xmmword ptr [ecx+30h], xmm0
0x8B2E52: movaps  xmm0, xmmword ptr [esi+40h]
0x8B2E56: movaps  xmmword ptr [ecx+40h], xmm0
0x8B2E5A: movaps  xmm0, xmmword ptr [esi+50h]
0x8B2E5E: movaps  xmmword ptr [ecx+50h], xmm0
0x8B2E62: movaps  xmm0, xmmword ptr [esi+60h]
0x8B2E66: movaps  xmmword ptr [ecx+60h], xmm0
0x8B2E6A: movaps  xmm0, xmmword ptr [esi+70h]
0x8B2E6E: movaps  xmmword ptr [ecx+70h], xmm0
0x8B2E72: movaps  xmm0, xmmword ptr [esi+80h]
0x8B2E79: movaps  xmmword ptr [ecx+80h], xmm0
0x8B2E80: fld     dword ptr [esi+14h]
0x8B2E83: fstp    dword ptr [ecx+14h]
0x8B2E86: fld     dword ptr [esi+0Ch]
0x8B2E89: fstp    dword ptr [ecx+0Ch]
0x8B2E8C: fld     dword ptr [esi+10h]
0x8B2E8F: fstp    dword ptr [ecx+10h]
0x8B2E92: fld     dword ptr [ebx+10h]
0x8B2E95: fstp    [esp+24h+var_14]
0x8B2E99: fld1
0x8B2E9B: fcomp   [esp+24h+var_14]
0x8B2E9F: fnstsw  ax
0x8B2EA1: test    ah, 44h
0x8B2EA4: jnp     short loc_8B2ED7
0x8B2EA6: movss   xmm1, [esp+24h+var_14]
0x8B2EAC: movaps  xmm2, xmmword ptr [ecx+20h]
0x8B2EB0: xorps   xmm0, xmm0
0x8B2EB3: movss   xmm0, xmm1
0x8B2EB7: movaps  xmm1, xmm0
0x8B2EBA: shufps  xmm1, xmm0, 0
0x8B2EBE: mulps   xmm1, xmm2
0x8B2EC1: movaps  xmmword ptr [ecx+20h], xmm1
0x8B2EC5: movaps  xmm1, xmm0
0x8B2EC8: shufps  xmm1, xmm0, 0
0x8B2ECC: movaps  xmm0, xmmword ptr [ecx+60h]
0x8B2ED0: mulps   xmm1, xmm0
0x8B2ED3: movaps  xmmword ptr [ecx+60h], xmm1
0x8B2ED7: push    ebx
0x8B2ED8: push    ecx
0x8B2ED9: mov     ecx, edi
0x8B2EDB: call    sub_8A07B0
0x8B2EE0: mov     ecx, [esp+24h+var_C]
0x8B2EE4: mov     large fs:0, ecx
0x8B2EEB: pop     ecx
0x8B2EEC: pop     edi
0x8B2EED: pop     esi
0x8B2EEE: pop     ebx
0x8B2EEF: mov     esp, ebp
0x8B2EF1: pop     ebp
0x8B2EF2: retn    8
