0x940A30: push    ebp
0x940A31: mov     ebp, esp
0x940A33: and     esp, 0FFFFFFF0h
0x940A36: sub     esp, 68h
0x940A39: mov     al, ds:0BA9429h
0x940A3E: test    al, al
0x940A40: push    esi
0x940A41: push    edi
0x940A42: mov     esi, ecx
0x940A44: jnz     short loc_940A5D
0x940A46: push    4
0x940A48: call    sub_9246E0
0x940A4D: add     esp, 4
0x940A50: test    al, al
0x940A52: mov     ds:0BA9429h, al
0x940A57: jz      loc_940B5F
0x940A5D: mov     edi, [ebp+arg_0]
0x940A60: mov     [esi+2Ch], edi
0x940A63: mov     eax, [edi+38h]
0x940A66: mov     ecx, [eax]
0x940A68: mov     edx, [ecx+10h]
0x940A6B: mov     eax, [ebp+arg_4]
0x940A6E: mov     ecx, [ebp+arg_8]
0x940A71: mov     [esi+10h], edx
0x940A74: mov     [esi+24h], eax
0x940A77: mov     [esi+28h], ecx
0x940A7A: mov     edx, [edi+34h]
0x940A7D: mov     ecx, [edx]
0x940A7F: mov     eax, [ecx]
0x940A81: call    dword ptr [eax+8]
0x940A84: fld     dword ptr ds:0A2F948h
0x940A8A: mov     [esi+18h], eax
0x940A8D: mov     eax, 3F800000h
0x940A92: mov     [esi+1Ch], eax
0x940A95: mov     [esi+20h], eax
0x940A98: mov     eax, [esi+10h]
0x940A9B: mov     ecx, [eax+20h]
0x940A9E: xorps   xmm0, xmm0
0x940AA1: movaps  [esp+70h+var_40], xmm0
0x940AA6: fdiv    dword ptr [eax+1Ch]
0x940AA9: lea     edx, [esp+70h+var_64]
0x940AAD: fstp    dword ptr [esi+14h]
0x940AB0: fld     dword ptr [eax+1Ch]
0x940AB3: fmul    dword ptr ds:0AA1EC0h
0x940AB9: movaps  xmm1, xmmword ptr [edi+20h]
0x940ABD: fst     [esp+70h+var_18]
0x940AC1: fstp    [esp+70h+var_64]
0x940AC5: movss   xmm0, [esp+70h+var_64]
0x940ACB: movaps  xmm2, xmm0
0x940ACE: shufps  xmm2, xmm0, 0
0x940AD2: mulps   xmm2, xmm1
0x940AD5: movaps  xmm1, xmmword ptr [edi+20h]
0x940AD9: movaps  [esp+70h+var_30], xmm2
0x940ADE: movaps  xmm2, xmm1
0x940AE1: shufps  xmm2, xmm1, 55h ; 'U'
0x940AE5: addss   xmm2, xmm1
0x940AE9: movaps  xmm3, xmm1
0x940AEC: shufps  xmm3, xmm1, 0AAh ; 'ª'
0x940AF0: movaps  xmm1, xmmword ptr [edi]
0x940AF3: addss   xmm3, xmm2
0x940AF7: movaps  xmm2, xmmword ptr [edi+10h]
0x940AFB: movss   dword ptr [edx], xmm3
0x940AFF: fld     [esp+70h+var_64]
0x940B03: fmul    dword ptr ds:0A46C30h
0x940B09: fstp    [esp+70h+var_20]
0x940B0D: movaps  xmm3, xmmword ptr [eax+10h]
0x940B11: subps   xmm1, xmm3
0x940B14: subps   xmm2, xmm3
0x940B17: lea     eax, [esp+70h+var_60]
0x940B1B: push    eax
0x940B1C: push    ecx
0x940B1D: movaps  xmm3, xmm0
0x940B20: shufps  xmm3, xmm0, 0
0x940B24: mulps   xmm3, xmm1
0x940B27: lea     ecx, [esp+78h+var_40]
0x940B2B: movaps  xmm1, xmm0
0x940B2E: shufps  xmm1, xmm0, 0
0x940B32: push    ecx
0x940B33: mulps   xmm1, xmm2
0x940B36: mov     ecx, esi
0x940B38: movaps  [esp+7Ch+var_60], xmm3
0x940B3D: movaps  [esp+7Ch+var_50], xmm1
0x940B42: mov     [esp+7Ch+var_14], 0
0x940B4A: mov     [esp+7Ch+var_1C], 0
0x940B52: mov     [esp+7Ch+var_10], 0
0x940B5A: call    sub_93FB80
0x940B5F: pop     edi
0x940B60: pop     esi
0x940B61: mov     esp, ebp
0x940B63: pop     ebp
0x940B64: retn    0Ch
