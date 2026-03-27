0x8F7370: push    ebp
0x8F7371: mov     ebp, esp
0x8F7373: and     esp, 0FFFFFFF0h
0x8F7376: sub     esp, 0D4h
0x8F737C: mov     ecx, large fs:2Ch
0x8F7383: mov     edx, ds:0BA9DE4h
0x8F7389: mov     eax, [ecx+edx*4]
0x8F738C: push    ebx
0x8F738D: push    esi
0x8F738E: mov     esi, [eax+1A4h]
0x8F7394: push    edi
0x8F7395: cmp     esi, [eax+1A8h]
0x8F739B: jnb     short loc_8F73C1
0x8F739D: mov     esi, eax
0x8F739F: mov     ecx, [esi+1A4h]
0x8F73A5: mov     dword ptr [ecx], offset aTtmultirayCvx; "TtmultiRay-cvx"
0x8F73AB: rdtsc
0x8F73AD: mov     [esp+0E0h+var_D0], eax
0x8F73B1: mov     eax, [esp+0E0h+var_D0]
0x8F73B5: mov     [ecx+4], eax
0x8F73B8: add     ecx, 0Ch
0x8F73BB: mov     [esi+1A4h], ecx
0x8F73C1: mov     eax, [ebp+arg_0]
0x8F73C4: mov     ebx, [ebp+arg_4]
0x8F73C7: mov     edx, [eax+8]
0x8F73CA: mov     ecx, [ebx]
0x8F73CC: mov     edi, [eax]
0x8F73CE: mov     eax, [ebx+8]
0x8F73D1: push    edx
0x8F73D2: mov     [esp+0E4h+var_C8], ecx
0x8F73D6: push    eax
0x8F73D7: lea     ecx, [esp+0E8h+var_40]
0x8F73DE: call    sub_8B1FF0
0x8F73E3: mov     eax, [edi+10h]
0x8F73E6: mov     esi, [edi+0Ch]
0x8F73E9: mov     ecx, [ebp+arg_0]
0x8F73EC: mov     [esp+0E0h+var_70], ecx
0x8F73F0: xor     ecx, ecx
0x8F73F2: cmp     eax, ecx
0x8F73F4: mov     dword ptr [esp+0E0h+var_6C], ebx
0x8F73F8: mov     [esp+0E0h+var_A0], ecx
0x8F73FC: mov     dword ptr [esp+0E0h+var_9C], ecx
0x8F7400: jle     loc_8F75BE
0x8F7406: mov     [esp+0E0h+var_D0], eax
0x8F740A: lea     ebx, [ebx+0]
0x8F7410: movaps  xmm0, xmmword ptr [esi]
0x8F7413: movaps  xmm4, [esp+0E0h+var_10]
0x8F741B: movaps  xmm1, xmm0
0x8F741E: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x8F7422: movaps  xmm2, xmm1
0x8F7425: movaps  xmm1, [esp+0E0h+var_20]
0x8F742D: mov     ecx, [esp+0E0h+var_C8]
0x8F7431: movaps  xmm3, xmm1
0x8F7434: mulps   xmm3, xmm2
0x8F7437: addps   xmm3, xmm4
0x8F743A: movaps  xmm5, xmm3
0x8F743D: movaps  xmm2, xmm0
0x8F7440: shufps  xmm2, xmm0, 55h ; 'U'
0x8F7444: movaps  xmm3, xmm2
0x8F7447: movaps  xmm2, [esp+0E0h+var_30]
0x8F744F: movaps  xmm6, xmm2
0x8F7452: mulps   xmm6, xmm3
0x8F7455: movaps  xmm3, xmm0
0x8F7458: shufps  xmm3, xmm0, 0
0x8F745C: movaps  xmm0, xmm3
0x8F745F: movaps  xmm3, [esp+0E0h+var_40]
0x8F7467: movaps  xmm7, xmm3
0x8F746A: mulps   xmm7, xmm0
0x8F746D: addps   xmm7, xmm6
0x8F7470: addps   xmm7, xmm5
0x8F7473: movaps  [esp+0E0h+var_C0], xmm7
0x8F7478: movaps  xmm0, xmmword ptr [esi+10h]
0x8F747C: movaps  xmm5, xmm0
0x8F747F: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8F7483: mulps   xmm1, xmm5
0x8F7486: addps   xmm1, xmm4
0x8F7489: movaps  xmm4, xmm0
0x8F748C: shufps  xmm4, xmm0, 55h ; 'U'
0x8F7490: mulps   xmm2, xmm4
0x8F7493: lea     eax, [esp+0E0h+var_6C+0Ch]
0x8F749A: push    eax
0x8F749B: movaps  xmm4, xmm0
0x8F749E: shufps  xmm4, xmm0, 0
0x8F74A2: mulps   xmm3, xmm4
0x8F74A5: lea     eax, [esp+0E4h+var_C0]
0x8F74A9: push    eax
0x8F74AA: addps   xmm3, xmm2
0x8F74AD: addps   xmm3, xmm1
0x8F74B0: lea     eax, [esp+0E8h+var_C4]
0x8F74B4: movaps  [esp+0E8h+var_B0], xmm3
0x8F74B9: mov     edx, [ecx]
0x8F74BB: push    eax
0x8F74BC: mov     [esp+0ECh+var_4C], 3F800000h
0x8F74C7: call    dword ptr [edx+14h]
0x8F74CA: mov     al, [esp+0E0h+var_C4]
0x8F74CE: test    al, al
0x8F74D0: jz      loc_8F75AC
0x8F74D6: mov     ecx, [esp+0E0h+var_4C]
0x8F74DD: fld     [esp+0E0h+var_4C]
0x8F74E4: mov     eax, [ebx+8]
0x8F74E7: fsub    dword ptr ds:0A2F948h
0x8F74ED: movaps  xmm1, [esp+0E0h+var_B0]
0x8F74F2: movaps  xmm3, xmmword ptr ds:0A6DFE0h
0x8F74F9: mov     [esp+0E0h+var_CC], ecx
0x8F74FD: movss   xmm0, [esp+0E0h+var_CC]
0x8F7503: shufps  xmm0, xmm0, 0
0x8F7507: subps   xmm3, xmm0
0x8F750A: movaps  xmm2, xmm0
0x8F750D: mulps   xmm2, xmm1
0x8F7510: movaps  xmm1, [esp+0E0h+var_C0]
0x8F7515: movaps  xmm0, xmm3
0x8F7518: movaps  xmm3, xmmword ptr [eax+20h]
0x8F751C: mulps   xmm0, xmm1
0x8F751F: movaps  xmm1, xmmword ptr [eax+30h]
0x8F7523: addps   xmm0, xmm2
0x8F7526: movaps  xmm2, xmm0
0x8F7529: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8F752D: mulps   xmm3, xmm2
0x8F7530: movaps  xmm2, xmmword ptr [eax+10h]
0x8F7534: addps   xmm3, xmm1
0x8F7537: movaps  xmm1, xmm0
0x8F753A: shufps  xmm1, xmm0, 55h ; 'U'
0x8F753E: mulps   xmm2, xmm1
0x8F7541: movaps  xmm1, xmm0
0x8F7544: shufps  xmm1, xmm0, 0
0x8F7548: movaps  xmm0, xmmword ptr [eax]
0x8F754B: mulps   xmm0, xmm1
0x8F754E: mov     ecx, [ebp+arg_C]
0x8F7551: addps   xmm0, xmm2
0x8F7554: mov     edx, [ecx]
0x8F7556: addps   xmm0, xmm3
0x8F7559: movaps  [esp+0E0h+var_9C+0Ch], xmm0
0x8F755E: movaps  xmm0, [esp+0E0h+var_6C+0Ch]
0x8F7566: movaps  xmm2, xmmword ptr [eax+20h]
0x8F756A: movaps  xmm3, xmmword ptr [eax+10h]
0x8F756E: movaps  xmm1, xmm0
0x8F7571: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x8F7575: mulps   xmm2, xmm1
0x8F7578: movaps  xmm1, xmm0
0x8F757B: shufps  xmm1, xmm0, 55h ; 'U'
0x8F757F: mulps   xmm3, xmm1
0x8F7582: movaps  xmm1, xmm0
0x8F7585: shufps  xmm1, xmm0, 0
0x8F7589: movaps  xmm0, xmmword ptr [eax]
0x8F758C: mulps   xmm0, xmm1
0x8F758F: addps   xmm0, xmm3
0x8F7592: addps   xmm0, xmm2
0x8F7595: movaps  xmmword ptr [esp+0E0h+var_8C+0Ch], xmm0
0x8F759A: fmul    dword ptr [esi+0Ch]
0x8F759D: lea     eax, [esp+0E0h+var_9C+0Ch]
0x8F75A1: push    eax
0x8F75A2: fadd    dword ptr [edi+18h]
0x8F75A5: fstp    dword ptr [esp+0E4h+var_8C+18h]
0x8F75A9: call    dword ptr [edx+4]
0x8F75AC: mov     eax, [esp+0E0h+var_D0]
0x8F75B0: add     esi, 20h ; ' '
0x8F75B3: dec     eax
0x8F75B4: mov     [esp+0E0h+var_D0], eax
0x8F75B8: jnz     loc_8F7410
0x8F75BE: mov     ecx, large fs:2Ch
0x8F75C5: mov     edx, ds:0BA9DE4h
0x8F75CB: mov     eax, [ecx+edx*4]
0x8F75CE: mov     esi, [eax+1A4h]
0x8F75D4: cmp     esi, [eax+1A8h]
0x8F75DA: jnb     short loc_8F7600
0x8F75DC: mov     esi, eax
0x8F75DE: mov     ecx, [esi+1A4h]
0x8F75E4: mov     dword ptr [ecx], offset aEt; "Et"
0x8F75EA: rdtsc
0x8F75EC: mov     [esp+0E0h+var_CC], eax
0x8F75F0: mov     edx, [esp+0E0h+var_CC]
0x8F75F4: mov     [ecx+4], edx
0x8F75F7: add     ecx, 0Ch
0x8F75FA: mov     [esi+1A4h], ecx
0x8F7600: pop     edi
0x8F7601: pop     esi
0x8F7602: pop     ebx
0x8F7603: mov     esp, ebp
0x8F7605: pop     ebp
0x8F7606: retn    10h
