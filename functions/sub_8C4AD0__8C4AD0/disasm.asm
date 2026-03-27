0x8C4AD0: push    ebp
0x8C4AD1: mov     ebp, esp
0x8C4AD3: and     esp, 0FFFFFFF0h
0x8C4AD6: sub     esp, 28h
0x8C4AD9: mov     eax, ds:0B30AACh
0x8C4ADE: xor     eax, esp
0x8C4AE0: mov     [esp+28h+var_4], eax
0x8C4AE4: mov     eax, [ebp+arg_0]
0x8C4AE7: mov     edx, ecx
0x8C4AE9: mov     ecx, [ebp+arg_4]
0x8C4AEC: push    esi
0x8C4AED: mov     esi, [edx+10h]
0x8C4AF0: and     eax, 0FFFFFFh
0x8C4AF5: cmp     eax, [esi+8]
0x8C4AF8: push    edi
0x8C4AF9: jb      short loc_8C4B10
0x8C4AFB: xor     eax, eax
0x8C4AFD: pop     edi
0x8C4AFE: pop     esi
0x8C4AFF: mov     ecx, [esp+28h+var_4]
0x8C4B03: xor     ecx, esp
0x8C4B05: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8C4B0A: mov     esp, ebp
0x8C4B0C: pop     ebp
0x8C4B0D: retn    8
0x8C4B10: test    ecx, ecx
0x8C4B12: mov     esi, [esi+14h]
0x8C4B15: lea     eax, [eax+eax*4]
0x8C4B18: lea     esi, [esi+eax*4]
0x8C4B1B: jz      short loc_8C4B40
0x8C4B1D: fld     dword ptr [edx+30h]
0x8C4B20: mov     word ptr [ecx+6], 1
0x8C4B26: fstp    [esp+30h+var_24]
0x8C4B2A: mov     dword ptr [ecx+8], 0
0x8C4B31: fld     [esp+30h+var_24]
0x8C4B35: mov     dword ptr [ecx], offset ??_7hkNormalTriangleShape@@6B@; const hkNormalTriangleShape::`vftable'
0x8C4B3B: fstp    dword ptr [ecx+0Ch]
0x8C4B3E: jmp     short loc_8C4B42
0x8C4B40: xor     ecx, ecx
0x8C4B42: movzx   eax, word ptr [esi]
0x8C4B45: mov     edi, [edx+10h]
0x8C4B48: mov     edi, [edi+18h]
0x8C4B4B: lea     eax, [eax+eax*2]
0x8C4B4E: lea     eax, [edi+eax*4]
0x8C4B51: mov     edi, [eax]
0x8C4B53: mov     [esp+30h+var_20], edi
0x8C4B57: mov     edi, [eax+4]
0x8C4B5A: mov     eax, [eax+8]
0x8C4B5D: fld     [esp+30h+var_20]
0x8C4B61: mov     [esp+30h+var_20+4], edi
0x8C4B65: fstp    dword ptr [ecx+10h]
0x8C4B68: mov     [esp+30h+var_20+8], eax
0x8C4B6C: fld     [esp+30h+var_20+4]
0x8C4B70: fstp    dword ptr [ecx+14h]
0x8C4B73: fld     [esp+30h+var_20+8]
0x8C4B77: fstp    dword ptr [ecx+18h]
0x8C4B7A: movzx   eax, word ptr [esi+2]
0x8C4B7E: mov     edi, [edx+10h]
0x8C4B81: mov     edi, [edi+18h]
0x8C4B84: lea     eax, [eax+eax*2]
0x8C4B87: lea     eax, [edi+eax*4]
0x8C4B8A: mov     edi, [eax]
0x8C4B8C: mov     [esp+30h+var_20], edi
0x8C4B90: mov     edi, [eax+4]
0x8C4B93: mov     eax, [eax+8]
0x8C4B96: fld     [esp+30h+var_20]
0x8C4B9A: mov     [esp+30h+var_20+4], edi
0x8C4B9E: fstp    dword ptr [ecx+20h]
0x8C4BA1: mov     [esp+30h+var_20+8], eax
0x8C4BA5: fld     [esp+30h+var_20+4]
0x8C4BA9: fstp    dword ptr [ecx+24h]
0x8C4BAC: fld     [esp+30h+var_20+8]
0x8C4BB0: fstp    dword ptr [ecx+28h]
0x8C4BB3: movzx   eax, word ptr [esi+4]
0x8C4BB7: mov     edi, [edx+10h]
0x8C4BBA: mov     edi, [edi+18h]
0x8C4BBD: lea     eax, [eax+eax*2]
0x8C4BC0: lea     eax, [edi+eax*4]
0x8C4BC3: mov     edi, [eax]
0x8C4BC5: mov     [esp+30h+var_20], edi
0x8C4BC9: mov     edi, [eax+4]
0x8C4BCC: mov     eax, [eax+8]
0x8C4BCF: fld     [esp+30h+var_20]
0x8C4BD3: mov     [esp+30h+var_20+4], edi
0x8C4BD7: fstp    dword ptr [ecx+30h]
0x8C4BDA: mov     [esp+30h+var_20+8], eax
0x8C4BDE: fld     [esp+30h+var_20+4]
0x8C4BE2: fstp    dword ptr [ecx+34h]
0x8C4BE5: fld     [esp+30h+var_20+8]
0x8C4BE9: fstp    dword ptr [ecx+38h]
0x8C4BEC: movaps  xmm0, xmmword ptr [edx+20h]
0x8C4BF0: fld1
0x8C4BF2: movss   [esp+30h+var_20], xmm0
0x8C4BF8: fcomp   [esp+30h+var_20]
0x8C4BFC: fnstsw  ax
0x8C4BFE: test    ah, 44h
0x8C4C01: jnp     short loc_8C4C30
0x8C4C03: movaps  xmm1, xmmword ptr [ecx+10h]
0x8C4C07: movaps  xmm0, xmmword ptr [edx+20h]
0x8C4C0B: mulps   xmm0, xmm1
0x8C4C0E: movaps  xmmword ptr [ecx+10h], xmm0
0x8C4C12: movaps  xmm1, xmmword ptr [ecx+20h]
0x8C4C16: movaps  xmm0, xmmword ptr [edx+20h]
0x8C4C1A: mulps   xmm0, xmm1
0x8C4C1D: movaps  xmmword ptr [ecx+20h], xmm0
0x8C4C21: movaps  xmm0, xmmword ptr [ecx+30h]
0x8C4C25: movaps  xmm1, xmmword ptr [edx+20h]
0x8C4C29: mulps   xmm0, xmm1
0x8C4C2C: movaps  xmmword ptr [ecx+30h], xmm0
0x8C4C30: fld     dword ptr [esi+8]
0x8C4C33: mov     eax, ecx
0x8C4C35: fstp    [esp+30h+var_20]
0x8C4C39: pop     edi
0x8C4C3A: fld     dword ptr [esi+0Ch]
0x8C4C3D: fstp    [esp+2Ch+var_20+4]
0x8C4C41: fld     dword ptr [esi+10h]
0x8C4C44: pop     esi
0x8C4C45: fstp    [esp+28h+var_20+8]
0x8C4C49: movaps  xmm0, xmmword ptr [esp+28h+var_20]
0x8C4C4E: movaps  xmmword ptr [ecx+40h], xmm0
0x8C4C52: mov     ecx, [esp+28h+var_4]
0x8C4C56: xor     ecx, esp
0x8C4C58: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8C4C5D: mov     esp, ebp
0x8C4C5F: pop     ebp
0x8C4C60: retn    8
