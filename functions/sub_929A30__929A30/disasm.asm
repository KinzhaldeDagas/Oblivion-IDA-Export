0x929A30: push    ebp
0x929A31: mov     ebp, esp
0x929A33: and     esp, 0FFFFFFF0h
0x929A36: sub     esp, 218h
0x929A3C: push    esi
0x929A3D: mov     esi, ecx
0x929A3F: push    edi
0x929A40: mov     edi, [esi+10h]
0x929A43: cmp     edi, 10h
0x929A46: lea     eax, [esp+220h+var_200]
0x929A4A: mov     [esp+220h+var_210], eax
0x929A4E: mov     [esp+220h+var_20C], 0
0x929A56: mov     [esp+220h+var_208], 80000010h
0x929A5E: jle     short loc_929A7C
0x929A60: cmp     edi, 20h ; ' '
0x929A63: mov     eax, 20h ; ' '
0x929A68: jl      short loc_929A6C
0x929A6A: mov     eax, edi
0x929A6C: push    20h ; ' '
0x929A6E: push    eax
0x929A6F: lea     ecx, [esp+228h+var_210]
0x929A73: push    ecx
0x929A74: call    sub_8A6E40
0x929A79: add     esp, 0Ch
0x929A7C: mov     ecx, [ebp+arg_0]
0x929A7F: mov     eax, [esi+10h]
0x929A82: mov     edx, [esp+220h+var_210]
0x929A86: mov     esi, [esi+0Ch]
0x929A89: movaps  xmm1, xmmword ptr [ecx]
0x929A8C: movaps  xmm2, xmmword ptr [ecx+10h]
0x929A90: movaps  xmm3, xmmword ptr [ecx+20h]
0x929A94: movaps  xmm4, xmmword ptr [ecx+30h]
0x929A98: mov     [esp+220h+var_20C], edi
0x929A9C: shl     eax, 1
0x929A9E: mov     edi, edi
0x929AA0: movaps  xmm0, xmmword ptr [esi]
0x929AA3: movaps  xmm5, xmm0
0x929AA6: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x929AAA: movaps  xmm6, xmm3
0x929AAD: mulps   xmm6, xmm5
0x929AB0: movaps  xmm5, xmm0
0x929AB3: shufps  xmm5, xmm0, 55h ; 'U'
0x929AB7: movaps  xmm7, xmm2
0x929ABA: mulps   xmm7, xmm5
0x929ABD: movaps  xmm5, xmm0
0x929AC0: shufps  xmm5, xmm0, 0
0x929AC4: movaps  xmm0, xmm1
0x929AC7: mulps   xmm0, xmm5
0x929ACA: addps   xmm6, xmm4
0x929ACD: addps   xmm0, xmm7
0x929AD0: addps   xmm0, xmm6
0x929AD3: movaps  xmmword ptr [edx], xmm0
0x929AD6: add     edx, 10h
0x929AD9: add     esi, 10h
0x929ADC: dec     eax
0x929ADD: test    eax, eax
0x929ADF: jg      short loc_929AA0
0x929AE1: mov     ecx, [esp+220h+var_20C]
0x929AE5: test    ecx, ecx
0x929AE7: mov     edx, [esp+220h+var_210]
0x929AEB: mov     [esp+220h+var_214], 7F7FFFFFh
0x929AF3: movss   xmm2, [esp+220h+var_214]
0x929AF9: mov     [esp+220h+var_214], 0FF7FFFFFh
0x929B01: movss   xmm3, [esp+220h+var_214]
0x929B07: shufps  xmm2, xmm2, 0
0x929B0B: shufps  xmm3, xmm3, 0
0x929B0F: mov     eax, edx
0x929B11: jle     short loc_929B2C
0x929B13: movaps  xmm0, xmmword ptr [eax]
0x929B16: movaps  xmm1, xmmword ptr [eax+10h]
0x929B1A: add     eax, 20h ; ' '
0x929B1D: dec     ecx
0x929B1E: minps   xmm2, xmm1
0x929B21: maxps   xmm3, xmm1
0x929B24: minps   xmm2, xmm0
0x929B27: maxps   xmm3, xmm0
0x929B2A: jnz     short loc_929B13
0x929B2C: mov     eax, [ebp+arg_8]
0x929B2F: movaps  xmmword ptr [eax], xmm2
0x929B32: movaps  xmmword ptr [eax+10h], xmm3
0x929B36: mov     eax, [esp+220h+var_208]
0x929B3A: test    eax, eax
0x929B3C: js      short loc_929B6F
0x929B3E: mov     ecx, ds:0BA9DE4h
0x929B44: mov     esi, large fs:2Ch
0x929B4B: mov     ecx, [esi+ecx*4]
0x929B4E: mov     ecx, [ecx+19Ch]
0x929B54: test    ecx, ecx
0x929B56: jnz     short loc_929B5E
0x929B58: mov     ecx, ds:0BA7D9Ch
0x929B5E: and     eax, 3FFFFFFFh
0x929B63: push    14h
0x929B65: shl     eax, 5
0x929B68: push    eax
0x929B69: push    edx
0x929B6A: call    sub_8A75D0
0x929B6F: pop     edi
0x929B70: pop     esi
0x929B71: mov     esp, ebp
0x929B73: pop     ebp
0x929B74: retn    0Ch
