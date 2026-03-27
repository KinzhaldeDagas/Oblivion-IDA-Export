0x8C2D80: push    ebp
0x8C2D81: mov     ebp, esp
0x8C2D83: and     esp, 0FFFFFFF0h
0x8C2D86: push    0FFFFFFFFh
0x8C2D88: push    offset SEH_8C2D80
0x8C2D8D: mov     eax, large fs:0
0x8C2D93: push    eax
0x8C2D94: sub     esp, 8
0x8C2D97: push    ebx
0x8C2D98: push    esi
0x8C2D99: push    edi
0x8C2D9A: mov     eax, ds:0B30AACh
0x8C2D9F: xor     eax, esp
0x8C2DA1: push    eax
0x8C2DA2: lea     eax, [esp+24h+var_C]
0x8C2DA6: mov     large fs:0, eax
0x8C2DAC: mov     ebx, [ebp+arg_4]
0x8C2DAF: mov     esi, ecx
0x8C2DB1: mov     ecx, [ebp+arg_0]
0x8C2DB4: test    ecx, ecx
0x8C2DB6: mov     edi, [esi+4]
0x8C2DB9: jnz     short loc_8C2DEF
0x8C2DBB: mov     ecx, ds:0BA7D98h
0x8C2DC1: mov     eax, [ecx]
0x8C2DC3: mov     edx, [eax+10h]
0x8C2DC6: push    29h ; ')'
0x8C2DC8: push    30h ; '0'
0x8C2DCA: call    edx
0x8C2DCC: mov     word ptr [eax+4], 30h ; '0'
0x8C2DD2: mov     [esp+24h+var_14], eax
0x8C2DD6: mov     ecx, eax
0x8C2DD8: mov     [esp+24h+var_4], 0
0x8C2DE0: call    sub_913C30
0x8C2DE5: mov     [esp+24h+var_4], 0FFFFFFFFh
0x8C2DED: mov     ecx, eax
0x8C2DEF: movaps  xmm0, xmmword ptr [edi+10h]
0x8C2DF3: movaps  xmmword ptr [ecx+10h], xmm0
0x8C2DF7: movaps  xmm0, xmmword ptr [edi+20h]
0x8C2DFB: movaps  xmmword ptr [ecx+20h], xmm0
0x8C2DFF: fld     dword ptr [ebx+10h]
0x8C2E02: fstp    [esp+24h+var_14]
0x8C2E06: fld1
0x8C2E08: fcomp   [esp+24h+var_14]
0x8C2E0C: fnstsw  ax
0x8C2E0E: test    ah, 44h
0x8C2E11: jnp     short loc_8C2E44
0x8C2E13: movss   xmm1, [esp+24h+var_14]
0x8C2E19: movaps  xmm2, xmmword ptr [ecx+10h]
0x8C2E1D: xorps   xmm0, xmm0
0x8C2E20: movss   xmm0, xmm1
0x8C2E24: movaps  xmm1, xmm0
0x8C2E27: shufps  xmm1, xmm0, 0
0x8C2E2B: mulps   xmm1, xmm2
0x8C2E2E: movaps  xmmword ptr [ecx+10h], xmm1
0x8C2E32: movaps  xmm1, xmm0
0x8C2E35: shufps  xmm1, xmm0, 0
0x8C2E39: movaps  xmm0, xmmword ptr [ecx+20h]
0x8C2E3D: mulps   xmm1, xmm0
0x8C2E40: movaps  xmmword ptr [ecx+20h], xmm1
0x8C2E44: push    ebx
0x8C2E45: push    ecx
0x8C2E46: mov     ecx, esi
0x8C2E48: call    sub_8A07B0
0x8C2E4D: mov     ecx, [esp+24h+var_C]
0x8C2E51: mov     large fs:0, ecx
0x8C2E58: pop     ecx
0x8C2E59: pop     edi
0x8C2E5A: pop     esi
0x8C2E5B: pop     ebx
0x8C2E5C: mov     esp, ebp
0x8C2E5E: pop     ebp
0x8C2E5F: retn    8
