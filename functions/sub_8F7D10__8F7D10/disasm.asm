0x8F7D10: push    ebp
0x8F7D11: mov     ebp, esp
0x8F7D13: and     esp, 0FFFFFFF0h
0x8F7D16: sub     esp, 18h
0x8F7D19: mov     edx, [ebp+arg_8]
0x8F7D1C: push    esi
0x8F7D1D: push    edi
0x8F7D1E: mov     edi, [ebp+arg_C]
0x8F7D21: mov     eax, [edi+3034h]
0x8F7D27: mov     esi, [edi]
0x8F7D29: push    edi
0x8F7D2A: push    edx
0x8F7D2B: mov     edx, [ebp+arg_4]
0x8F7D2E: mov     [esp+28h+var_14], eax
0x8F7D32: mov     eax, [ebp+arg_0]
0x8F7D35: push    eax
0x8F7D36: push    edx
0x8F7D37: call    sub_8F7970
0x8F7D3C: cmp     esi, [edi]
0x8F7D3E: jnb     short loc_8F7D81
0x8F7D40: lea     eax, [esp+20h+var_10]
0x8F7D44: push    eax
0x8F7D45: mov     ecx, esi
0x8F7D47: call    sub_8F7000
0x8F7D4C: movaps  xmm0, xmmword ptr [eax]
0x8F7D4F: movaps  xmm1, xmmword ptr [esi+10h]
0x8F7D53: movaps  xmm2, xmm0
0x8F7D56: shufps  xmm2, xmm0, 0
0x8F7D5A: movaps  xmm0, xmmword ptr [esi]
0x8F7D5D: mulps   xmm2, xmm1
0x8F7D60: addps   xmm0, xmm2
0x8F7D63: movaps  xmmword ptr [esi], xmm0
0x8F7D66: movaps  xmm1, xmmword ptr [esi+10h]
0x8F7D6A: movaps  xmm0, xmmword ptr ds:0A9B570h
0x8F7D71: xorps   xmm1, xmm0
0x8F7D74: movaps  xmmword ptr [esi+10h], xmm1
0x8F7D78: mov     eax, [edi]
0x8F7D7A: add     esi, 30h ; '0'
0x8F7D7D: cmp     esi, eax
0x8F7D7F: jb      short loc_8F7D40
0x8F7D81: fld     dword ptr [edi+3034h]
0x8F7D87: fld     [esp+20h+var_14]
0x8F7D8B: fucompp
0x8F7D8D: fnstsw  ax
0x8F7D8F: test    ah, 44h
0x8F7D92: jnp     short loc_8F7DA6
0x8F7D94: movaps  xmm0, xmmword ptr ds:0A9B570h
0x8F7D9B: movaps  xmm1, xmmword ptr [edi+20h]
0x8F7D9F: xorps   xmm1, xmm0
0x8F7DA2: movaps  xmmword ptr [edi+20h], xmm1
0x8F7DA6: pop     edi
0x8F7DA7: pop     esi
0x8F7DA8: mov     esp, ebp
0x8F7DAA: pop     ebp
0x8F7DAB: retn    10h
