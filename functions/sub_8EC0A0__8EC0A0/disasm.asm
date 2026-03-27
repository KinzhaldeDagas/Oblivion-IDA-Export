0x8EC0A0: push    ebp
0x8EC0A1: mov     ebp, esp
0x8EC0A3: and     esp, 0FFFFFFF0h
0x8EC0A6: sub     esp, 74h
0x8EC0A9: push    ebx
0x8EC0AA: push    esi
0x8EC0AB: push    edi
0x8EC0AC: mov     ebx, eax
0x8EC0AE: mov     esi, ecx
0x8EC0B0: mov     edi, edx
0x8EC0B2: movaps  xmm3, xmmword ptr [ebx]
0x8EC0B5: mov     ecx, [ebp+arg_0]
0x8EC0B8: movaps  xmm2, xmmword ptr [ecx]
0x8EC0BB: movaps  xmm5, xmm3
0x8EC0BE: shufps  xmm5, xmm3, 0C9h ; 'É'
0x8EC0C2: movaps  [esp+80h+var_50], xmm5
0x8EC0C7: movaps  xmm0, xmm3
0x8EC0CA: shufps  xmm0, xmm3, 0D2h ; 'Ò'
0x8EC0CE: movaps  [esp+80h+var_40], xmm0
0x8EC0D3: movaps  xmm4, xmm2
0x8EC0D6: shufps  xmm4, xmm2, 0D2h ; 'Ò'
0x8EC0DA: mulps   xmm5, xmm4
0x8EC0DD: movaps  xmm7, xmm5
0x8EC0E0: movaps  xmm1, xmm2
0x8EC0E3: shufps  xmm1, xmm2, 0C9h ; 'É'
0x8EC0E7: mulps   xmm0, xmm1
0x8EC0EA: subps   xmm7, xmm0
0x8EC0ED: movaps  xmm0, xmmword ptr [esi]
0x8EC0F0: movaps  xmm5, xmm0
0x8EC0F3: shufps  xmm5, xmm0, 0C9h ; 'É'
0x8EC0F7: mulps   xmm4, xmm5
0x8EC0FA: mulps   xmm5, [esp+80h+var_40]
0x8EC0FF: movaps  xmm6, xmm0
0x8EC102: shufps  xmm6, xmm0, 0D2h ; 'Ò'
0x8EC106: mulps   xmm1, xmm6
0x8EC109: mulps   xmm6, [esp+80h+var_50]
0x8EC10E: movaps  [esp+80h+var_60], xmm4
0x8EC113: movaps  xmm4, xmm1
0x8EC116: movaps  xmm1, [esp+80h+var_60]
0x8EC11B: subps   xmm5, xmm6
0x8EC11E: subps   xmm4, xmm1
0x8EC121: movaps  [esp+80h+var_10], xmm5
0x8EC126: movaps  xmm1, xmm7
0x8EC129: mulps   xmm1, xmm0
0x8EC12C: movaps  xmm5, xmm1
0x8EC12F: shufps  xmm5, xmm1, 55h ; 'U'
0x8EC133: movaps  xmm6, xmm1
0x8EC136: lea     eax, [esp+80h+var_70]
0x8EC13A: addss   xmm5, xmm1
0x8EC13E: shufps  xmm6, xmm1, 0AAh ; 'ª'
0x8EC142: addss   xmm6, xmm5
0x8EC146: movss   dword ptr [eax], xmm6
0x8EC14A: fld     [esp+80h+var_70]
0x8EC14E: fabs
0x8EC150: fcomp   dword ptr ds:0A9AFD8h
0x8EC156: fnstsw  ax
0x8EC158: test    ah, 5
0x8EC15B: jnp     loc_8EC265
0x8EC161: fld     dword ptr ds:0A2F948h
0x8EC167: movaps  xmm1, xmmword ptr [ecx+10h]
0x8EC16B: fdiv    [esp+80h+var_70]
0x8EC16F: mulps   xmm2, xmm1
0x8EC172: movaps  xmm1, xmm2
0x8EC175: shufps  xmm1, xmm2, 55h ; 'U'
0x8EC179: addss   xmm1, xmm2
0x8EC17D: movaps  xmm5, xmm2
0x8EC180: shufps  xmm5, xmm2, 0AAh ; 'ª'
0x8EC184: addss   xmm5, xmm1
0x8EC188: movaps  xmm1, xmmword ptr [ebx+10h]
0x8EC18C: mulps   xmm3, xmm1
0x8EC18F: movaps  xmm1, xmm3
0x8EC192: shufps  xmm1, xmm3, 55h ; 'U'
0x8EC196: addss   xmm1, xmm3
0x8EC19A: movaps  xmm2, xmm3
0x8EC19D: shufps  xmm2, xmm3, 0AAh ; 'ª'
0x8EC1A1: addss   xmm2, xmm1
0x8EC1A5: movaps  xmm1, xmmword ptr [esi+10h]
0x8EC1A9: mulps   xmm0, xmm1
0x8EC1AC: movaps  xmm1, xmm0
0x8EC1AF: shufps  xmm1, xmm0, 55h ; 'U'
0x8EC1B3: addss   xmm1, xmm0
0x8EC1B7: lea     eax, [esp+80h+var_68]
0x8EC1BB: movss   dword ptr [eax], xmm2
0x8EC1BF: movaps  xmm2, xmm0
0x8EC1C2: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8EC1C6: addss   xmm2, xmm1
0x8EC1CA: lea     edx, [esp+80h+var_68+4]
0x8EC1CE: movss   dword ptr [edx], xmm5
0x8EC1D2: lea     edx, [esp+80h+var_6C]
0x8EC1D6: movss   dword ptr [edx], xmm2
0x8EC1DA: mov     eax, [esp+80h+var_6C]
0x8EC1DE: mov     edx, dword ptr [esp+80h+var_68]
0x8EC1E2: mov     dword ptr [esp+80h+var_60], eax
0x8EC1E6: mov     eax, dword ptr [esp+80h+var_68+4]
0x8EC1EA: mov     dword ptr [esp+80h+var_60+8], eax
0x8EC1EE: mov     dword ptr [esp+80h+var_60+4], edx
0x8EC1F2: mov     edx, [edi+38h]
0x8EC1F5: mov     dword ptr [esp+80h+var_60+0Ch], 0
0x8EC1FD: movaps  xmm0, [esp+80h+var_60]
0x8EC202: fstp    dword ptr [esp+80h+var_68+4]
0x8EC206: movaps  xmm2, xmm0
0x8EC209: movss   xmm1, dword ptr [esp+80h+var_68+4]
0x8EC20F: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8EC213: movaps  xmm3, xmm2
0x8EC216: movaps  xmm2, [esp+80h+var_10]
0x8EC21B: mulps   xmm2, xmm3
0x8EC21E: movaps  xmm3, xmm0
0x8EC221: shufps  xmm3, xmm0, 55h ; 'U'
0x8EC225: mulps   xmm4, xmm3
0x8EC228: movaps  xmm3, xmm0
0x8EC22B: shufps  xmm3, xmm0, 0
0x8EC22F: mulps   xmm7, xmm3
0x8EC232: movaps  xmm0, xmm1
0x8EC235: addps   xmm7, xmm4
0x8EC238: addps   xmm7, xmm2
0x8EC23B: movaps  xmm2, xmmword ptr ds:0A372D0h
0x8EC242: shufps  xmm0, xmm1, 0
0x8EC246: movaps  xmm1, xmmword ptr [edx+20h]
0x8EC24A: mulps   xmm0, xmm7
0x8EC24D: movaps  xmm3, xmm0
0x8EC250: andps   xmm3, xmm2
0x8EC253: cmpltps xmm3, xmm1
0x8EC257: movmskps eax, xmm3
0x8EC25A: and     eax, 7
0x8EC25D: cmp     al, 7
0x8EC25F: jz      loc_8EC32B
0x8EC265: mov     eax, [ebp+arg_4]
0x8EC268: test    eax, eax
0x8EC26A: jz      short loc_8EC281
0x8EC26C: push    edi
0x8EC26D: call    sub_8EB7E0
0x8EC272: mov     ecx, [edi+1Ch]
0x8EC275: mov     esi, [edi+4]
0x8EC278: mov     ebx, [edi+10h]
0x8EC27B: add     esp, 4
0x8EC27E: mov     [ebp+arg_0], ecx
0x8EC281: mov     edx, [edi+38h]
0x8EC284: mov     eax, esi
0x8EC286: sub     eax, [edx+48h]
0x8EC289: mov     edx, [edi+3Ch]
0x8EC28C: mov     edx, [edx+24h]
0x8EC28F: sar     eax, 6
0x8EC292: shl     eax, 4
0x8EC295: mov     dword ptr [eax+edx+0Ch], 1
0x8EC29D: mov     eax, [edi+38h]
0x8EC2A0: mov     edx, ebx
0x8EC2A2: sub     edx, [eax+48h]
0x8EC2A5: mov     eax, [edi+3Ch]
0x8EC2A8: mov     eax, [eax+24h]
0x8EC2AB: sar     edx, 6
0x8EC2AE: shl     edx, 4
0x8EC2B1: mov     dword ptr [edx+eax+0Ch], 1
0x8EC2B9: mov     edx, [edi+38h]
0x8EC2BC: sub     ecx, [edx+48h]
0x8EC2BF: mov     eax, [edi+3Ch]
0x8EC2C2: mov     edx, [eax+24h]
0x8EC2C5: sar     ecx, 6
0x8EC2C8: shl     ecx, 4
0x8EC2CB: mov     dword ptr [ecx+edx+0Ch], 1
0x8EC2D3: mov     ecx, [ebp+arg_C]
0x8EC2D6: mov     edx, [ebp+arg_8]
0x8EC2D9: mov     eax, [edi+30h]
0x8EC2DC: push    ecx
0x8EC2DD: push    edx
0x8EC2DE: push    ebx
0x8EC2DF: push    esi
0x8EC2E0: mov     [esp+90h+var_70], eax
0x8EC2E4: call    sub_8EBCD0
0x8EC2E9: mov     eax, [esp+90h+var_70]
0x8EC2ED: mov     ecx, [edi+30h]
0x8EC2F0: add     esp, 10h
0x8EC2F3: cmp     eax, ecx
0x8EC2F5: jnz     short loc_8EC309
0x8EC2F7: mov     eax, [ebp+arg_C]
0x8EC2FA: mov     ecx, [ebp+arg_0]
0x8EC2FD: push    eax
0x8EC2FE: push    eax
0x8EC2FF: push    ecx
0x8EC300: push    esi
0x8EC301: call    sub_8EBCD0
0x8EC306: add     esp, 10h
0x8EC309: mov     edx, [esp+80h+var_70]
0x8EC30D: cmp     edx, [edi+30h]
0x8EC310: jnz     short loc_8EC331
0x8EC312: mov     eax, [ebp+arg_C]
0x8EC315: push    eax
0x8EC316: push    eax
0x8EC317: mov     eax, [ebp+arg_0]
0x8EC31A: push    eax
0x8EC31B: push    ebx
0x8EC31C: call    sub_8EBCD0
0x8EC321: add     esp, 10h
0x8EC324: pop     edi
0x8EC325: pop     esi
0x8EC326: pop     ebx
0x8EC327: mov     esp, ebp
0x8EC329: pop     ebp
0x8EC32A: retn
0x8EC32B: mov     ecx, [ebp+arg_C]
0x8EC32E: movaps  xmmword ptr [ecx], xmm0
0x8EC331: pop     edi
0x8EC332: pop     esi
0x8EC333: pop     ebx
0x8EC334: mov     esp, ebp
0x8EC336: pop     ebp
0x8EC337: retn
