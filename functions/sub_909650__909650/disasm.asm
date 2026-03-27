0x909650: push    ebp
0x909651: mov     ebp, esp
0x909653: and     esp, 0FFFFFFF0h
0x909656: sub     esp, 0D4h
0x90965C: mov     edx, ds:0BA9DE4h
0x909662: push    ebx
0x909663: push    esi
0x909664: push    edi
0x909665: mov     edi, ecx
0x909667: mov     ecx, large fs:2Ch
0x90966E: mov     eax, [ecx+edx*4]
0x909671: mov     esi, [eax+1A4h]
0x909677: cmp     esi, [eax+1A8h]
0x90967D: jnb     short loc_9096A3
0x90967F: mov     esi, eax
0x909681: mov     ecx, [esi+1A4h]
0x909687: mov     dword ptr [ecx], offset aTtmultisphere; "TtMultiSphere"
0x90968D: rdtsc
0x90968F: mov     [esp+0E0h+var_D4], eax
0x909693: mov     eax, [esp+0E0h+var_D4]
0x909697: mov     [ecx+4], eax
0x90969A: add     ecx, 0Ch
0x90969D: mov     [esi+1A4h], ecx
0x9096A3: mov     ebx, [ebp+arg_0]
0x9096A6: mov     ecx, [ebx]
0x9096A8: mov     edx, [ebx+8]
0x9096AB: mov     [esp+0E0h+var_D4], ecx
0x9096AF: push    edx
0x9096B0: lea     ecx, [esp+0E4h+var_B0]
0x9096B4: call    sub_903FA0
0x9096B9: push    0
0x9096BB: lea     ecx, [esp+0E4h+var_C0]
0x9096BF: call    sub_8ED410
0x9096C4: mov     esi, [edi+0Ch]
0x9096C7: mov     edi, [edi+10h]
0x9096CA: dec     edi
0x9096CB: lea     eax, [esp+0E0h+var_B0]
0x9096CF: mov     [esp+0E0h+var_C4], ebx
0x9096D3: mov     [esp+0E0h+var_C8], eax
0x9096D7: js      loc_909783
0x9096DD: lea     ecx, [ecx+0]
0x9096E0: mov     eax, [esi]
0x9096E2: mov     edx, [esp+0E0h+var_D4]
0x9096E6: movaps  xmm2, [esp+0E0h+var_90]
0x9096EB: movaps  xmm3, [esp+0E0h+var_A0]
0x9096F0: mov     ecx, [ebx+8]
0x9096F3: inc     eax
0x9096F4: shl     eax, 4
0x9096F7: movaps  xmm0, xmmword ptr [eax+edx]
0x9096FB: add     eax, edx
0x9096FD: movaps  xmm1, xmm0
0x909700: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x909704: mulps   xmm2, xmm1
0x909707: movaps  xmm1, xmm0
0x90970A: shufps  xmm1, xmm0, 55h ; 'U'
0x90970E: mulps   xmm3, xmm1
0x909711: movaps  xmm1, xmm0
0x909714: shufps  xmm1, xmm0, 0
0x909718: movaps  xmm0, [esp+0E0h+var_B0]
0x90971D: mulps   xmm0, xmm1
0x909720: movaps  xmm1, xmmword ptr [ecx+30h]
0x909724: addps   xmm0, xmm3
0x909727: addps   xmm0, xmm2
0x90972A: addps   xmm1, xmm0
0x90972D: movaps  [esp+0E0h+var_80], xmm1
0x909732: movaps  xmm1, xmmword ptr [ecx+40h]
0x909736: addps   xmm1, xmm0
0x909739: movaps  [esp+0E0h+var_70], xmm1
0x90973E: movaps  xmm1, xmmword ptr [ecx+50h]
0x909742: addps   xmm1, xmm0
0x909745: movaps  [esp+0E0h+var_60], xmm1
0x90974D: mov     ecx, [eax+0Ch]
0x909750: lea     edx, [esp+0E0h+var_C0]
0x909754: mov     [esp+0E0h+var_D0], edx
0x909758: mov     edx, [ebp+arg_C]
0x90975B: push    edx
0x90975C: mov     edx, [ebp+arg_8]
0x90975F: push    edx
0x909760: mov     edx, [ebp+arg_4]
0x909763: mov     [esp+0E8h+var_B4], ecx
0x909767: mov     [esp+0E8h+var_CC], edi
0x90976B: mov     ecx, [esi+4]
0x90976E: mov     eax, [ecx]
0x909770: push    edx
0x909771: lea     edx, [esp+0ECh+var_D0]
0x909775: push    edx
0x909776: call    dword ptr [eax+14h]
0x909779: add     esi, 8
0x90977C: dec     edi
0x90977D: jns     loc_9096E0
0x909783: mov     ecx, large fs:2Ch
0x90978A: mov     edx, ds:0BA9DE4h
0x909790: mov     eax, [ecx+edx*4]
0x909793: mov     esi, [eax+1A4h]
0x909799: cmp     esi, [eax+1A8h]
0x90979F: jnb     short loc_9097C5
0x9097A1: mov     esi, eax
0x9097A3: mov     ecx, [esi+1A4h]
0x9097A9: mov     dword ptr [ecx], offset aEt; "Et"
0x9097AF: rdtsc
0x9097B1: mov     [esp+0E0h+var_D4], eax
0x9097B5: mov     eax, [esp+0E0h+var_D4]
0x9097B9: mov     [ecx+4], eax
0x9097BC: add     ecx, 0Ch
0x9097BF: mov     [esi+1A4h], ecx
0x9097C5: pop     edi
0x9097C6: pop     esi
0x9097C7: pop     ebx
0x9097C8: mov     esp, ebp
0x9097CA: pop     ebp
0x9097CB: retn    10h
