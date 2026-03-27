0x9039E0: push    ebp
0x9039E1: mov     ebp, esp
0x9039E3: and     esp, 0FFFFFFF0h
0x9039E6: sub     esp, 18h
0x9039E9: mov     edx, [ebp+arg_8]
0x9039EC: push    esi
0x9039ED: push    edi
0x9039EE: mov     edi, [ebp+arg_C]
0x9039F1: mov     eax, [edi+3034h]
0x9039F7: mov     esi, [edi]
0x9039F9: push    edi
0x9039FA: push    edx
0x9039FB: mov     edx, [ebp+arg_4]
0x9039FE: mov     [esp+28h+var_14], eax
0x903A02: mov     eax, [ebp+arg_0]
0x903A05: push    eax
0x903A06: push    edx
0x903A07: call    sub_903270
0x903A0C: cmp     esi, [edi]
0x903A0E: jnb     short loc_903A51
0x903A10: lea     eax, [esp+20h+var_10]
0x903A14: push    eax
0x903A15: mov     ecx, esi
0x903A17: call    sub_8F7000
0x903A1C: movaps  xmm0, xmmword ptr [eax]
0x903A1F: movaps  xmm1, xmmword ptr [esi+10h]
0x903A23: movaps  xmm2, xmm0
0x903A26: shufps  xmm2, xmm0, 0
0x903A2A: movaps  xmm0, xmmword ptr [esi]
0x903A2D: mulps   xmm2, xmm1
0x903A30: addps   xmm0, xmm2
0x903A33: movaps  xmmword ptr [esi], xmm0
0x903A36: movaps  xmm1, xmmword ptr [esi+10h]
0x903A3A: movaps  xmm0, xmmword ptr ds:0A9B570h
0x903A41: xorps   xmm1, xmm0
0x903A44: movaps  xmmword ptr [esi+10h], xmm1
0x903A48: mov     eax, [edi]
0x903A4A: add     esi, 30h ; '0'
0x903A4D: cmp     esi, eax
0x903A4F: jb      short loc_903A10
0x903A51: fld     dword ptr [edi+3034h]
0x903A57: fld     [esp+20h+var_14]
0x903A5B: fucompp
0x903A5D: fnstsw  ax
0x903A5F: test    ah, 44h
0x903A62: jnp     short loc_903A76
0x903A64: movaps  xmm0, xmmword ptr ds:0A9B570h
0x903A6B: movaps  xmm1, xmmword ptr [edi+20h]
0x903A6F: xorps   xmm1, xmm0
0x903A72: movaps  xmmword ptr [edi+20h], xmm1
0x903A76: pop     edi
0x903A77: pop     esi
0x903A78: mov     esp, ebp
0x903A7A: pop     ebp
0x903A7B: retn    10h
