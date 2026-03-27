0x904B20: push    ebp
0x904B21: mov     ebp, esp
0x904B23: and     esp, 0FFFFFFF0h
0x904B26: sub     esp, 18h
0x904B29: mov     edx, [ebp+arg_8]
0x904B2C: push    esi
0x904B2D: push    edi
0x904B2E: mov     edi, [ebp+arg_C]
0x904B31: mov     eax, [edi+3034h]
0x904B37: mov     esi, [edi]
0x904B39: push    edi
0x904B3A: push    edx
0x904B3B: mov     edx, [ebp+arg_4]
0x904B3E: mov     [esp+28h+var_14], eax
0x904B42: mov     eax, [ebp+arg_0]
0x904B45: push    eax
0x904B46: push    edx
0x904B47: call    sub_904130
0x904B4C: cmp     esi, [edi]
0x904B4E: jnb     short loc_904B91
0x904B50: lea     eax, [esp+20h+var_10]
0x904B54: push    eax
0x904B55: mov     ecx, esi
0x904B57: call    sub_8F7000
0x904B5C: movaps  xmm0, xmmword ptr [eax]
0x904B5F: movaps  xmm1, xmmword ptr [esi+10h]
0x904B63: movaps  xmm2, xmm0
0x904B66: shufps  xmm2, xmm0, 0
0x904B6A: movaps  xmm0, xmmword ptr [esi]
0x904B6D: mulps   xmm2, xmm1
0x904B70: addps   xmm0, xmm2
0x904B73: movaps  xmmword ptr [esi], xmm0
0x904B76: movaps  xmm1, xmmword ptr [esi+10h]
0x904B7A: movaps  xmm0, xmmword ptr ds:0A9B570h
0x904B81: xorps   xmm1, xmm0
0x904B84: movaps  xmmword ptr [esi+10h], xmm1
0x904B88: mov     eax, [edi]
0x904B8A: add     esi, 30h ; '0'
0x904B8D: cmp     esi, eax
0x904B8F: jb      short loc_904B50
0x904B91: fld     dword ptr [edi+3034h]
0x904B97: fld     [esp+20h+var_14]
0x904B9B: fucompp
0x904B9D: fnstsw  ax
0x904B9F: test    ah, 44h
0x904BA2: jnp     short loc_904BB6
0x904BA4: movaps  xmm0, xmmword ptr ds:0A9B570h
0x904BAB: movaps  xmm1, xmmword ptr [edi+20h]
0x904BAF: xorps   xmm1, xmm0
0x904BB2: movaps  xmmword ptr [edi+20h], xmm1
0x904BB6: pop     edi
0x904BB7: pop     esi
0x904BB8: mov     esp, ebp
0x904BBA: pop     ebp
0x904BBB: retn    10h
