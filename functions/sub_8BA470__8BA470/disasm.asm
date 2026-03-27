0x8BA470: push    ebp
0x8BA471: mov     ebp, esp
0x8BA473: and     esp, 0FFFFFFF0h
0x8BA476: sub     esp, 14h
0x8BA479: mov     eax, [ebp+arg_0]
0x8BA47C: push    ebx
0x8BA47D: movsx   ebx, byte ptr [eax+5]
0x8BA481: mov     edx, [ebx+eax]
0x8BA484: add     ebx, eax
0x8BA486: push    esi
0x8BA487: mov     esi, ecx
0x8BA489: mov     eax, [esi+10h]
0x8BA48C: mov     ecx, [ebp+arg_4]
0x8BA48F: imul    eax, ecx
0x8BA492: push    edi
0x8BA493: add     eax, [esi+0Ch]
0x8BA496: test    edx, edx
0x8BA498: mov     [esp+20h+var_4], edx
0x8BA49C: mov     [esp+20h+var_8], eax
0x8BA4A0: jz      loc_8BA5CE
0x8BA4A6: mov     eax, [esi+4]
0x8BA4A9: lea     edi, [ecx+ecx*2]
0x8BA4AC: mov     ecx, [esi+8]
0x8BA4AF: shl     edi, 4
0x8BA4B2: add     edi, eax
0x8BA4B4: mov     eax, [ecx]
0x8BA4B6: push    ebx
0x8BA4B7: push    edi
0x8BA4B8: lea     edx, [esp+28h+var_9]
0x8BA4BC: push    edx
0x8BA4BD: call    dword ptr [eax]
0x8BA4BF: cmp     byte ptr [eax], 0
0x8BA4C2: jz      loc_8BA5BE
0x8BA4C8: mov     eax, [ebx+8]
0x8BA4CB: movaps  xmm3, xmmword ptr [eax+20h]
0x8BA4CF: movaps  xmm1, xmmword ptr [eax+30h]
0x8BA4D3: movaps  xmm2, xmmword ptr [eax]
0x8BA4D6: movaps  xmm5, xmmword ptr [eax+10h]
0x8BA4DA: mov     ecx, [esi+4]
0x8BA4DD: movaps  xmm0, xmmword ptr [ecx]
0x8BA4E0: subps   xmm0, xmm1
0x8BA4E3: movaps  xmm4, xmm3
0x8BA4E6: shufps  xmm4, xmm3, 44h ; 'D'
0x8BA4EA: movaps  xmm7, xmm3
0x8BA4ED: shufps  xmm7, xmm3, 0EEh ; 'î'
0x8BA4F1: movaps  xmm1, xmm2
0x8BA4F4: shufps  xmm1, xmm5, 44h ; 'D'
0x8BA4F8: shufps  xmm2, xmm5, 0EEh ; 'î'
0x8BA4FC: movaps  xmm5, xmm1
0x8BA4FF: shufps  xmm1, xmm4, 88h ; 'ˆ'
0x8BA503: shufps  xmm5, xmm4, 0DDh ; 'Ý'
0x8BA507: mov     ecx, [esp+20h+var_4]
0x8BA50B: movaps  xmm3, xmm0
0x8BA50E: shufps  xmm3, xmm0, 55h ; 'U'
0x8BA512: mulps   xmm5, xmm3
0x8BA515: shufps  xmm2, xmm7, 88h ; 'ˆ'
0x8BA519: movaps  xmm3, xmm0
0x8BA51C: shufps  xmm3, xmm0, 0
0x8BA520: mulps   xmm1, xmm3
0x8BA523: addps   xmm1, xmm5
0x8BA526: movaps  xmm6, xmm0
0x8BA529: shufps  xmm6, xmm0, 0AAh ; 'ª'
0x8BA52D: mulps   xmm2, xmm6
0x8BA530: addps   xmm1, xmm2
0x8BA533: movaps  xmmword ptr [esi+20h], xmm1
0x8BA537: movaps  xmm3, xmmword ptr [eax+20h]
0x8BA53B: movaps  xmm1, xmmword ptr [eax+30h]
0x8BA53F: movaps  xmm2, xmmword ptr [eax]
0x8BA542: movaps  xmm5, xmmword ptr [eax+10h]
0x8BA546: movaps  xmm0, xmmword ptr [edi+10h]
0x8BA54A: subps   xmm0, xmm1
0x8BA54D: lea     edx, [esi+20h]
0x8BA550: movaps  xmm4, xmm3
0x8BA553: shufps  xmm4, xmm3, 44h ; 'D'
0x8BA557: movaps  xmm7, xmm3
0x8BA55A: movaps  xmm1, xmm2
0x8BA55D: shufps  xmm1, xmm5, 44h ; 'D'
0x8BA561: shufps  xmm7, xmm3, 0EEh ; 'î'
0x8BA565: shufps  xmm2, xmm5, 0EEh ; 'î'
0x8BA569: movaps  xmm5, xmm1
0x8BA56C: movaps  xmm3, xmm0
0x8BA56F: shufps  xmm3, xmm0, 55h ; 'U'
0x8BA573: shufps  xmm5, xmm4, 0DDh ; 'Ý'
0x8BA577: mulps   xmm5, xmm3
0x8BA57A: shufps  xmm1, xmm4, 88h ; 'ˆ'
0x8BA57E: movaps  xmm3, xmm0
0x8BA581: movaps  xmm6, xmm0
0x8BA584: shufps  xmm3, xmm0, 0
0x8BA588: mulps   xmm1, xmm3
0x8BA58B: shufps  xmm6, xmm0, 0AAh ; 'ª'
0x8BA58F: shufps  xmm2, xmm7, 88h ; 'ˆ'
0x8BA593: mulps   xmm2, xmm6
0x8BA596: addps   xmm1, xmm5
0x8BA599: addps   xmm1, xmm2
0x8BA59C: movaps  xmmword ptr [esi+30h], xmm1
0x8BA5A0: mov     eax, [edi+24h]
0x8BA5A3: mov     [esi+40h], eax
0x8BA5A6: mov     esi, [esp+20h+var_8]
0x8BA5AA: mov     eax, [ecx]
0x8BA5AC: push    esi
0x8BA5AD: push    ebx
0x8BA5AE: push    edx
0x8BA5AF: call    dword ptr [eax+18h]
0x8BA5B2: fld     dword ptr [esi+4]
0x8BA5B5: pop     edi
0x8BA5B6: pop     esi
0x8BA5B7: pop     ebx
0x8BA5B8: mov     esp, ebp
0x8BA5BA: pop     ebp
0x8BA5BB: retn    8
0x8BA5BE: mov     ecx, [esp+20h+var_8]
0x8BA5C2: fld     dword ptr [ecx+4]
0x8BA5C5: pop     edi
0x8BA5C6: pop     esi
0x8BA5C7: pop     ebx
0x8BA5C8: mov     esp, ebp
0x8BA5CA: pop     ebp
0x8BA5CB: retn    8
0x8BA5CE: fld     dword ptr [eax+4]
0x8BA5D1: pop     edi
0x8BA5D2: pop     esi
0x8BA5D3: pop     ebx
0x8BA5D4: mov     esp, ebp
0x8BA5D6: pop     ebp
0x8BA5D7: retn    8
