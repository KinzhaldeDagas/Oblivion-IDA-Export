0x913A20: push    ebp
0x913A21: mov     ebp, esp
0x913A23: and     esp, 0FFFFFFF0h
0x913A26: sub     esp, 84h
0x913A2C: push    ebx
0x913A2D: push    esi
0x913A2E: mov     esi, [ebp+arg_0]
0x913A31: mov     eax, [esi+28h]
0x913A34: push    edi
0x913A35: push    8
0x913A37: mov     edi, ecx
0x913A39: mov     ecx, [ebp+arg_4]
0x913A3C: push    eax
0x913A3D: push    ecx
0x913A3E: push    esi
0x913A3F: call    sub_8F0F70
0x913A44: mov     ecx, [esi+1Ch]
0x913A47: movaps  xmm1, xmmword ptr [ecx]
0x913A4A: movaps  xmm2, xmmword ptr [ecx+10h]
0x913A4E: movaps  xmm3, xmmword ptr [ecx+20h]
0x913A52: lea     eax, [edi+10h]
0x913A55: lea     edx, [esp+0A0h+var_30]
0x913A59: add     esp, 10h
0x913A5C: sub     edx, eax
0x913A5E: mov     ebx, 3
0x913A63: movaps  xmm0, xmmword ptr [eax]
0x913A66: movaps  xmm4, xmm0
0x913A69: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x913A6D: movaps  xmm5, xmm3
0x913A70: mulps   xmm5, xmm4
0x913A73: movaps  xmm4, xmm0
0x913A76: shufps  xmm4, xmm0, 55h ; 'U'
0x913A7A: movaps  xmm6, xmm2
0x913A7D: mulps   xmm6, xmm4
0x913A80: movaps  xmm4, xmm0
0x913A83: shufps  xmm4, xmm0, 0
0x913A87: movaps  xmm0, xmm1
0x913A8A: mulps   xmm0, xmm4
0x913A8D: addps   xmm0, xmm6
0x913A90: addps   xmm0, xmm5
0x913A93: movaps  xmmword ptr [edx+eax], xmm0
0x913A97: add     eax, 10h
0x913A9A: dec     ebx
0x913A9B: jnz     short loc_913A63
0x913A9D: movaps  xmm0, xmmword ptr [ecx+30h]
0x913AA1: movaps  xmm1, [esp+90h+var_30]
0x913AA6: mov     ecx, [esi+20h]
0x913AA9: addps   xmm1, xmm0
0x913AAC: movaps  [esp+90h+var_30], xmm1
0x913AB1: movaps  xmm1, xmmword ptr [ecx]
0x913AB4: movaps  xmm2, xmmword ptr [ecx+10h]
0x913AB8: movaps  xmm3, xmmword ptr [ecx+20h]
0x913ABC: lea     eax, [edi+40h]
0x913ABF: lea     edx, [esp+90h+var_80]
0x913AC3: sub     edx, eax
0x913AC5: mov     edi, 2
0x913ACA: lea     ebx, [ebx+0]
0x913AD0: movaps  xmm0, xmmword ptr [eax]
0x913AD3: movaps  xmm4, xmm0
0x913AD6: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x913ADA: movaps  xmm5, xmm3
0x913ADD: mulps   xmm5, xmm4
0x913AE0: movaps  xmm4, xmm0
0x913AE3: shufps  xmm4, xmm0, 55h ; 'U'
0x913AE7: movaps  xmm6, xmm2
0x913AEA: mulps   xmm6, xmm4
0x913AED: movaps  xmm4, xmm0
0x913AF0: shufps  xmm4, xmm0, 0
0x913AF4: movaps  xmm0, xmm1
0x913AF7: mulps   xmm0, xmm4
0x913AFA: addps   xmm0, xmm6
0x913AFD: addps   xmm0, xmm5
0x913B00: movaps  xmmword ptr [edx+eax], xmm0
0x913B04: add     eax, 10h
0x913B07: dec     edi
0x913B08: jnz     short loc_913AD0
0x913B0A: movaps  xmm0, xmmword ptr [ecx+30h]
0x913B0E: movaps  xmm1, [esp+90h+var_80]
0x913B13: mov     edi, [ebp+arg_4]
0x913B16: addps   xmm1, xmm0
0x913B19: movaps  xmm0, [esp+90h+var_20]
0x913B1E: movaps  [esp+90h+var_50], xmm0
0x913B23: movaps  xmm0, [esp+90h+var_10]
0x913B2B: push    edi
0x913B2C: lea     edx, [esp+94h+var_60]
0x913B30: movaps  [esp+94h+var_60], xmm0
0x913B35: movaps  xmm0, [esp+94h+var_70]
0x913B3A: push    esi
0x913B3B: push    edx
0x913B3C: movaps  [esp+9Ch+var_80], xmm1
0x913B41: movaps  [esp+9Ch+var_40], xmm0
0x913B46: call    sub_8F1310
0x913B4B: movaps  xmm0, [esp+9Ch+var_10]
0x913B53: movaps  xmm1, [esp+9Ch+var_70]
0x913B58: movaps  [esp+9Ch+var_50], xmm0
0x913B5D: movaps  xmm0, [esp+9Ch+var_20]
0x913B62: push    edi
0x913B63: movaps  [esp+0A0h+var_60], xmm0
0x913B68: movaps  xmm0, xmmword ptr ds:0A965C0h
0x913B6F: lea     eax, [esp+0A0h+var_60]
0x913B73: push    esi
0x913B74: xorps   xmm1, xmm0
0x913B77: push    eax
0x913B78: movaps  [esp+0A8h+var_40], xmm1
0x913B7D: call    sub_8F1310
0x913B82: push    edi
0x913B83: push    esi
0x913B84: lea     ecx, [esp+0B0h+var_80]
0x913B88: push    ecx
0x913B89: lea     edx, [esp+0B4h+var_30]
0x913B90: push    edx
0x913B91: call    sub_8F1CC0
0x913B96: add     esp, 28h
0x913B99: pop     edi
0x913B9A: pop     esi
0x913B9B: pop     ebx
0x913B9C: mov     esp, ebp
0x913B9E: pop     ebp
0x913B9F: retn    8
