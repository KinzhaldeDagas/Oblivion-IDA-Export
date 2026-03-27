0x8DB130: push    ebp
0x8DB131: mov     ebp, esp
0x8DB133: and     esp, 0FFFFFFF0h
0x8DB136: sub     esp, 34h
0x8DB139: mov     edx, [ebp+arg_C]
0x8DB13C: movaps  xmm1, xmmword ptr [edx]
0x8DB13F: push    ebx
0x8DB140: movaps  xmm0, xmm1
0x8DB143: push    esi
0x8DB144: mov     esi, ecx
0x8DB146: mov     ebx, [esi+10h]
0x8DB149: mov     ecx, [ebx+50h]
0x8DB14C: movaps  xmm3, xmmword ptr [ecx+0E0h]
0x8DB153: movaps  xmm4, xmmword ptr [edx+10h]
0x8DB157: push    edi
0x8DB158: mov     edi, [esi+0Ch]
0x8DB15B: mov     eax, [edi+50h]
0x8DB15E: movaps  xmm2, xmmword ptr [eax+60h]
0x8DB162: movaps  xmm5, xmmword ptr [eax+0D0h]
0x8DB169: subps   xmm0, xmm2
0x8DB16C: movaps  xmm2, xmmword ptr [ecx+60h]
0x8DB170: subps   xmm1, xmm2
0x8DB173: movaps  xmm2, xmmword ptr [eax+0E0h]
0x8DB17A: movaps  xmm6, xmm0
0x8DB17D: shufps  xmm6, xmm0, 0C9h ; 'É'
0x8DB181: movaps  xmm7, xmm2
0x8DB184: shufps  xmm7, xmm2, 0D2h ; 'Ò'
0x8DB188: mulps   xmm7, xmm6
0x8DB18B: movaps  xmm6, xmm0
0x8DB18E: shufps  xmm6, xmm0, 0D2h ; 'Ò'
0x8DB192: movaps  xmm0, xmm2
0x8DB195: shufps  xmm0, xmm2, 0C9h ; 'É'
0x8DB199: movaps  xmm2, xmmword ptr [ecx+0D0h]
0x8DB1A0: mov     ecx, [ebp+arg_0]
0x8DB1A3: mulps   xmm0, xmm6
0x8DB1A6: subps   xmm0, xmm7
0x8DB1A9: addps   xmm0, xmm5
0x8DB1AC: movaps  xmm5, xmm1
0x8DB1AF: shufps  xmm5, xmm1, 0C9h ; 'É'
0x8DB1B3: movaps  xmm6, xmm3
0x8DB1B6: shufps  xmm6, xmm3, 0D2h ; 'Ò'
0x8DB1BA: mulps   xmm6, xmm5
0x8DB1BD: movaps  xmm5, xmm1
0x8DB1C0: shufps  xmm5, xmm1, 0D2h ; 'Ò'
0x8DB1C4: movaps  xmm1, xmm3
0x8DB1C7: shufps  xmm1, xmm3, 0C9h ; 'É'
0x8DB1CB: mulps   xmm1, xmm5
0x8DB1CE: subps   xmm1, xmm6
0x8DB1D1: addps   xmm1, xmm2
0x8DB1D4: subps   xmm1, xmm0
0x8DB1D7: movaps  xmm0, xmm1
0x8DB1DA: mulps   xmm0, xmm4
0x8DB1DD: movaps  xmm1, xmm0
0x8DB1E0: shufps  xmm1, xmm0, 55h ; 'U'
0x8DB1E4: movaps  xmm2, xmm0
0x8DB1E7: addss   xmm1, xmm0
0x8DB1EB: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8DB1EF: lea     eax, [esp+40h+var_2C]
0x8DB1F3: addss   xmm2, xmm1
0x8DB1F7: movss   dword ptr [eax], xmm2
0x8DB1FB: mov     eax, [ebp+arg_4]
0x8DB1FE: mov     [esp+40h+var_24], eax
0x8DB202: xor     eax, eax
0x8DB204: mov     [esp+40h+var_18], edx
0x8DB208: lea     edx, [esp+40h+var_28]
0x8DB20C: mov     [esp+40h+var_14], eax
0x8DB210: mov     [esp+40h+var_C], eax
0x8DB214: mov     [esp+40h+var_4], ax
0x8DB219: mov     [esp+40h+var_2], ax
0x8DB21E: mov     eax, [esi+8]
0x8DB221: mov     [esp+40h+var_28], ecx
0x8DB225: mov     ecx, [esp+40h+var_2C]
0x8DB229: push    edx
0x8DB22A: push    eax
0x8DB22B: mov     [esp+48h+var_20], 1
0x8DB233: mov     [esp+48h+var_10], ecx
0x8DB237: mov     [esp+48h+var_8], esi
0x8DB23B: call    sub_8DC800
0x8DB240: mov     eax, [edi+98h]
0x8DB246: add     esp, 8
0x8DB249: test    eax, eax
0x8DB24B: jz      short loc_8DB25B
0x8DB24D: lea     ecx, [esp+40h+var_28]
0x8DB251: push    ecx
0x8DB252: push    edi
0x8DB253: call    sub_8DBF80
0x8DB258: add     esp, 8
0x8DB25B: mov     eax, [ebx+98h]
0x8DB261: test    eax, eax
0x8DB263: jz      short loc_8DB273
0x8DB265: lea     edx, [esp+40h+var_28]
0x8DB269: push    edx
0x8DB26A: push    ebx
0x8DB26B: call    sub_8DBF80
0x8DB270: add     esp, 8
0x8DB273: mov     eax, [esp+40h+var_C]
0x8DB277: test    eax, eax
0x8DB279: jnz     short loc_8DB290
0x8DB27B: mov     ax, [esp+40h+var_2]
0x8DB280: mov     [esi+14h], ax
0x8DB284: xor     ax, ax
0x8DB287: pop     edi
0x8DB288: pop     esi
0x8DB289: pop     ebx
0x8DB28A: mov     esp, ebp
0x8DB28C: pop     ebp
0x8DB28D: retn    10h
0x8DB290: pop     edi
0x8DB291: pop     esi
0x8DB292: or      ax, 0FFFFh
0x8DB296: pop     ebx
0x8DB297: mov     esp, ebp
0x8DB299: pop     ebp
0x8DB29A: retn    10h
