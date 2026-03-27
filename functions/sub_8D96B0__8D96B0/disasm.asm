0x8D96B0: push    ebp
0x8D96B1: mov     ebp, esp
0x8D96B3: and     esp, 0FFFFFFF0h
0x8D96B6: sub     esp, 14h
0x8D96B9: mov     eax, [ebp+arg_0]
0x8D96BC: push    ebx
0x8D96BD: movsx   ebx, byte ptr [eax+5]
0x8D96C1: add     ebx, eax
0x8D96C3: mov     eax, [ebx]
0x8D96C5: test    eax, eax
0x8D96C7: push    esi
0x8D96C8: push    edi
0x8D96C9: mov     edi, ecx
0x8D96CB: mov     [esp+20h+var_8], eax
0x8D96CF: jz      loc_8D983A
0x8D96D5: mov     eax, [ebp+arg_4]
0x8D96D8: mov     esi, [edi+4]
0x8D96DB: mov     ecx, [edi+8]
0x8D96DE: mov     edx, [ecx]
0x8D96E0: lea     eax, [eax+eax*2]
0x8D96E3: shl     eax, 4
0x8D96E6: push    ebx
0x8D96E7: add     esi, eax
0x8D96E9: mov     [esp+24h+var_4], eax
0x8D96ED: push    esi
0x8D96EE: lea     eax, [esp+28h+var_9]
0x8D96F2: push    eax
0x8D96F3: call    dword ptr [edx]
0x8D96F5: cmp     byte ptr [eax], 0
0x8D96F8: jz      loc_8D9858
0x8D96FE: mov     esi, [ebx+8]
0x8D9701: movaps  xmm3, xmmword ptr [esi+20h]
0x8D9705: mov     ecx, [edi+4]
0x8D9708: mov     edx, [esp+20h+var_4]
0x8D970C: movaps  xmm0, xmmword ptr [ecx+edx]
0x8D9710: movaps  xmm1, xmmword ptr [esi+30h]
0x8D9714: movaps  xmm2, xmmword ptr [esi]
0x8D9717: movaps  xmm5, xmmword ptr [esi+10h]
0x8D971B: subps   xmm0, xmm1
0x8D971E: lea     eax, [ecx+edx]
0x8D9721: movaps  xmm4, xmm3
0x8D9724: shufps  xmm4, xmm3, 44h ; 'D'
0x8D9728: movaps  xmm7, xmm3
0x8D972B: shufps  xmm7, xmm3, 0EEh ; 'î'
0x8D972F: movaps  xmm1, xmm2
0x8D9732: shufps  xmm1, xmm5, 44h ; 'D'
0x8D9736: shufps  xmm2, xmm5, 0EEh ; 'î'
0x8D973A: movaps  xmm5, xmm1
0x8D973D: mov     ecx, [esp+20h+var_8]
0x8D9741: shufps  xmm1, xmm4, 88h ; 'ˆ'
0x8D9745: shufps  xmm5, xmm4, 0DDh ; 'Ý'
0x8D9749: movaps  xmm3, xmm0
0x8D974C: shufps  xmm3, xmm0, 55h ; 'U'
0x8D9750: mulps   xmm5, xmm3
0x8D9753: shufps  xmm2, xmm7, 88h ; 'ˆ'
0x8D9757: movaps  xmm3, xmm0
0x8D975A: shufps  xmm3, xmm0, 0
0x8D975E: mulps   xmm1, xmm3
0x8D9761: addps   xmm1, xmm5
0x8D9764: movaps  xmm6, xmm0
0x8D9767: shufps  xmm6, xmm0, 0AAh ; 'ª'
0x8D976B: mulps   xmm2, xmm6
0x8D976E: addps   xmm1, xmm2
0x8D9771: movaps  xmmword ptr [edi+10h], xmm1
0x8D9775: movaps  xmm3, xmmword ptr [esi+20h]
0x8D9779: movaps  xmm0, xmmword ptr [eax+10h]
0x8D977D: movaps  xmm1, xmmword ptr [esi+30h]
0x8D9781: movaps  xmm2, xmmword ptr [esi]
0x8D9784: movaps  xmm5, xmmword ptr [esi+10h]
0x8D9788: subps   xmm0, xmm1
0x8D978B: lea     edx, [edi+10h]
0x8D978E: movaps  xmm4, xmm3
0x8D9791: shufps  xmm4, xmm3, 44h ; 'D'
0x8D9795: movaps  xmm7, xmm3
0x8D9798: movaps  xmm1, xmm2
0x8D979B: shufps  xmm1, xmm5, 44h ; 'D'
0x8D979F: shufps  xmm7, xmm3, 0EEh ; 'î'
0x8D97A3: shufps  xmm2, xmm5, 0EEh ; 'î'
0x8D97A7: movaps  xmm5, xmm1
0x8D97AA: movaps  xmm3, xmm0
0x8D97AD: shufps  xmm3, xmm0, 55h ; 'U'
0x8D97B1: shufps  xmm5, xmm4, 0DDh ; 'Ý'
0x8D97B5: mulps   xmm5, xmm3
0x8D97B8: shufps  xmm1, xmm4, 88h ; 'ˆ'
0x8D97BC: movaps  xmm3, xmm0
0x8D97BF: movaps  xmm6, xmm0
0x8D97C2: shufps  xmm3, xmm0, 0
0x8D97C6: mulps   xmm1, xmm3
0x8D97C9: shufps  xmm6, xmm0, 0AAh ; 'ª'
0x8D97CD: shufps  xmm2, xmm7, 88h ; 'ˆ'
0x8D97D1: mulps   xmm2, xmm6
0x8D97D4: addps   xmm1, xmm5
0x8D97D7: addps   xmm1, xmm2
0x8D97DA: movaps  xmmword ptr [edi+20h], xmm1
0x8D97DE: mov     eax, [eax+24h]
0x8D97E1: mov     [edi+30h], eax
0x8D97E4: mov     eax, [ecx]
0x8D97E6: mov     ecx, [edi+0Ch]
0x8D97E9: push    ecx
0x8D97EA: mov     ecx, [esp+24h+var_8]
0x8D97EE: push    edx
0x8D97EF: lea     edx, [esp+28h+var_9]
0x8D97F3: push    edx
0x8D97F4: call    dword ptr [eax+14h]
0x8D97F7: cmp     byte ptr [eax], 0
0x8D97FA: jz      short loc_8D9849
0x8D97FC: mov     eax, [edi+0Ch]
0x8D97FF: mov     [eax+20h], ebx
0x8D9802: mov     eax, [edi+0Ch]
0x8D9805: movaps  xmm0, xmmword ptr [eax]
0x8D9808: movaps  xmm2, xmmword ptr [esi+20h]
0x8D980C: movaps  xmm3, xmmword ptr [esi+10h]
0x8D9810: movaps  xmm1, xmm0
0x8D9813: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x8D9817: mulps   xmm2, xmm1
0x8D981A: movaps  xmm1, xmm0
0x8D981D: shufps  xmm1, xmm0, 55h ; 'U'
0x8D9821: mulps   xmm3, xmm1
0x8D9824: movaps  xmm1, xmm0
0x8D9827: shufps  xmm1, xmm0, 0
0x8D982B: movaps  xmm0, xmmword ptr [esi]
0x8D982E: mulps   xmm0, xmm1
0x8D9831: addps   xmm0, xmm3
0x8D9834: addps   xmm0, xmm2
0x8D9837: movaps  xmmword ptr [eax], xmm0
0x8D983A: mov     ecx, [edi+0Ch]
0x8D983D: fld     dword ptr [ecx+14h]
0x8D9840: pop     edi
0x8D9841: pop     esi
0x8D9842: pop     ebx
0x8D9843: mov     esp, ebp
0x8D9845: pop     ebp
0x8D9846: retn    8
0x8D9849: mov     edx, [edi+0Ch]
0x8D984C: fld     dword ptr [edx+14h]
0x8D984F: pop     edi
0x8D9850: pop     esi
0x8D9851: pop     ebx
0x8D9852: mov     esp, ebp
0x8D9854: pop     ebp
0x8D9855: retn    8
0x8D9858: mov     eax, [edi+0Ch]
0x8D985B: fld     dword ptr [eax+14h]
0x8D985E: pop     edi
0x8D985F: pop     esi
0x8D9860: pop     ebx
0x8D9861: mov     esp, ebp
0x8D9863: pop     ebp
0x8D9864: retn    8
