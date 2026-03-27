0x8F7610: push    ebp
0x8F7611: mov     ebp, esp
0x8F7613: and     esp, 0FFFFFFF0h
0x8F7616: sub     esp, 0D4h
0x8F761C: mov     ecx, large fs:2Ch
0x8F7623: mov     edx, ds:0BA9DE4h
0x8F7629: mov     eax, [ecx+edx*4]
0x8F762C: push    ebx
0x8F762D: push    esi
0x8F762E: mov     esi, [eax+1A4h]
0x8F7634: push    edi
0x8F7635: cmp     esi, [eax+1A8h]
0x8F763B: jnb     short loc_8F7661
0x8F763D: mov     esi, eax
0x8F763F: mov     ecx, [esi+1A4h]
0x8F7645: mov     dword ptr [ecx], offset aTtmultirayCvx; "TtmultiRay-cvx"
0x8F764B: rdtsc
0x8F764D: mov     [esp+0E0h+var_D0], eax
0x8F7651: mov     eax, [esp+0E0h+var_D0]
0x8F7655: mov     [ecx+4], eax
0x8F7658: add     ecx, 0Ch
0x8F765B: mov     [esi+1A4h], ecx
0x8F7661: mov     eax, [ebp+arg_0]
0x8F7664: mov     ebx, [ebp+arg_4]
0x8F7667: mov     edx, [eax+8]
0x8F766A: mov     ecx, [ebx]
0x8F766C: mov     edi, [eax]
0x8F766E: mov     eax, [ebx+8]
0x8F7671: push    edx
0x8F7672: mov     [esp+0E4h+var_C8], ecx
0x8F7676: push    eax
0x8F7677: lea     ecx, [esp+0E8h+var_40]
0x8F767E: call    sub_8B1FF0
0x8F7683: mov     eax, [edi+10h]
0x8F7686: mov     esi, [edi+0Ch]
0x8F7689: mov     ecx, [ebp+arg_0]
0x8F768C: mov     [esp+0E0h+var_70], ecx
0x8F7690: xor     ecx, ecx
0x8F7692: cmp     eax, ecx
0x8F7694: mov     dword ptr [esp+0E0h+var_6C], ebx
0x8F7698: mov     [esp+0E0h+var_A0], ecx
0x8F769C: mov     dword ptr [esp+0E0h+var_9C], ecx
0x8F76A0: jle     loc_8F785E
0x8F76A6: mov     [esp+0E0h+var_D0], eax
0x8F76AA: lea     ebx, [ebx+0]
0x8F76B0: movaps  xmm0, xmmword ptr [esi]
0x8F76B3: movaps  xmm4, [esp+0E0h+var_10]
0x8F76BB: movaps  xmm1, xmm0
0x8F76BE: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x8F76C2: movaps  xmm2, xmm1
0x8F76C5: movaps  xmm1, [esp+0E0h+var_20]
0x8F76CD: mov     ecx, [esp+0E0h+var_C8]
0x8F76D1: movaps  xmm3, xmm1
0x8F76D4: mulps   xmm3, xmm2
0x8F76D7: addps   xmm3, xmm4
0x8F76DA: movaps  xmm5, xmm3
0x8F76DD: movaps  xmm2, xmm0
0x8F76E0: shufps  xmm2, xmm0, 55h ; 'U'
0x8F76E4: movaps  xmm3, xmm2
0x8F76E7: movaps  xmm2, [esp+0E0h+var_30]
0x8F76EF: movaps  xmm6, xmm2
0x8F76F2: mulps   xmm6, xmm3
0x8F76F5: movaps  xmm3, xmm0
0x8F76F8: shufps  xmm3, xmm0, 0
0x8F76FC: movaps  xmm0, xmm3
0x8F76FF: movaps  xmm3, [esp+0E0h+var_40]
0x8F7707: movaps  xmm7, xmm3
0x8F770A: mulps   xmm7, xmm0
0x8F770D: addps   xmm7, xmm6
0x8F7710: addps   xmm7, xmm5
0x8F7713: movaps  [esp+0E0h+var_C0], xmm7
0x8F7718: movaps  xmm0, xmmword ptr [esi+10h]
0x8F771C: movaps  xmm5, xmm0
0x8F771F: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8F7723: mulps   xmm1, xmm5
0x8F7726: addps   xmm1, xmm4
0x8F7729: movaps  xmm4, xmm0
0x8F772C: shufps  xmm4, xmm0, 55h ; 'U'
0x8F7730: mulps   xmm2, xmm4
0x8F7733: lea     eax, [esp+0E0h+var_6C+0Ch]
0x8F773A: push    eax
0x8F773B: movaps  xmm4, xmm0
0x8F773E: shufps  xmm4, xmm0, 0
0x8F7742: mulps   xmm3, xmm4
0x8F7745: lea     eax, [esp+0E4h+var_C0]
0x8F7749: push    eax
0x8F774A: addps   xmm3, xmm2
0x8F774D: addps   xmm3, xmm1
0x8F7750: lea     eax, [esp+0E8h+var_C4]
0x8F7754: movaps  [esp+0E8h+var_B0], xmm3
0x8F7759: mov     edx, [ecx]
0x8F775B: push    eax
0x8F775C: mov     [esp+0ECh+var_4C], 3F800000h
0x8F7767: call    dword ptr [edx+14h]
0x8F776A: mov     al, [esp+0E0h+var_C4]
0x8F776E: test    al, al
0x8F7770: jz      loc_8F784C
0x8F7776: mov     ecx, [esp+0E0h+var_4C]
0x8F777D: fld     [esp+0E0h+var_4C]
0x8F7784: mov     eax, [ebx+8]
0x8F7787: fsub    dword ptr ds:0A2F948h
0x8F778D: movaps  xmm1, [esp+0E0h+var_B0]
0x8F7792: movaps  xmm3, xmmword ptr ds:0A6DFE0h
0x8F7799: mov     [esp+0E0h+var_CC], ecx
0x8F779D: movss   xmm0, [esp+0E0h+var_CC]
0x8F77A3: shufps  xmm0, xmm0, 0
0x8F77A7: subps   xmm3, xmm0
0x8F77AA: movaps  xmm2, xmm0
0x8F77AD: mulps   xmm2, xmm1
0x8F77B0: movaps  xmm1, [esp+0E0h+var_C0]
0x8F77B5: movaps  xmm0, xmm3
0x8F77B8: movaps  xmm3, xmmword ptr [eax+20h]
0x8F77BC: mulps   xmm0, xmm1
0x8F77BF: movaps  xmm1, xmmword ptr [eax+30h]
0x8F77C3: addps   xmm0, xmm2
0x8F77C6: movaps  xmm2, xmm0
0x8F77C9: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8F77CD: mulps   xmm3, xmm2
0x8F77D0: movaps  xmm2, xmmword ptr [eax+10h]
0x8F77D4: addps   xmm3, xmm1
0x8F77D7: movaps  xmm1, xmm0
0x8F77DA: shufps  xmm1, xmm0, 55h ; 'U'
0x8F77DE: mulps   xmm2, xmm1
0x8F77E1: movaps  xmm1, xmm0
0x8F77E4: shufps  xmm1, xmm0, 0
0x8F77E8: movaps  xmm0, xmmword ptr [eax]
0x8F77EB: mulps   xmm0, xmm1
0x8F77EE: mov     ecx, [ebp+arg_C]
0x8F77F1: addps   xmm0, xmm2
0x8F77F4: mov     edx, [ecx]
0x8F77F6: addps   xmm0, xmm3
0x8F77F9: movaps  [esp+0E0h+var_9C+0Ch], xmm0
0x8F77FE: movaps  xmm0, [esp+0E0h+var_6C+0Ch]
0x8F7806: movaps  xmm2, xmmword ptr [eax+20h]
0x8F780A: movaps  xmm3, xmmword ptr [eax+10h]
0x8F780E: movaps  xmm1, xmm0
0x8F7811: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x8F7815: mulps   xmm2, xmm1
0x8F7818: movaps  xmm1, xmm0
0x8F781B: shufps  xmm1, xmm0, 55h ; 'U'
0x8F781F: mulps   xmm3, xmm1
0x8F7822: movaps  xmm1, xmm0
0x8F7825: shufps  xmm1, xmm0, 0
0x8F7829: movaps  xmm0, xmmword ptr [eax]
0x8F782C: mulps   xmm0, xmm1
0x8F782F: addps   xmm0, xmm3
0x8F7832: addps   xmm0, xmm2
0x8F7835: movaps  xmmword ptr [esp+0E0h+var_8C+0Ch], xmm0
0x8F783A: fmul    dword ptr [esi+0Ch]
0x8F783D: lea     eax, [esp+0E0h+var_9C+0Ch]
0x8F7841: push    eax
0x8F7842: fadd    dword ptr [edi+18h]
0x8F7845: fstp    dword ptr [esp+0E4h+var_8C+18h]
0x8F7849: call    dword ptr [edx+4]
0x8F784C: mov     eax, [esp+0E0h+var_D0]
0x8F7850: add     esi, 20h ; ' '
0x8F7853: dec     eax
0x8F7854: mov     [esp+0E0h+var_D0], eax
0x8F7858: jnz     loc_8F76B0
0x8F785E: mov     ecx, large fs:2Ch
0x8F7865: mov     edx, ds:0BA9DE4h
0x8F786B: mov     eax, [ecx+edx*4]
0x8F786E: mov     esi, [eax+1A4h]
0x8F7874: cmp     esi, [eax+1A8h]
0x8F787A: jnb     short loc_8F78A0
0x8F787C: mov     esi, eax
0x8F787E: mov     ecx, [esi+1A4h]
0x8F7884: mov     dword ptr [ecx], offset aEt; "Et"
0x8F788A: rdtsc
0x8F788C: mov     [esp+0E0h+var_CC], eax
0x8F7890: mov     edx, [esp+0E0h+var_CC]
0x8F7894: mov     [ecx+4], edx
0x8F7897: add     ecx, 0Ch
0x8F789A: mov     [esi+1A4h], ecx
0x8F78A0: pop     edi
0x8F78A1: pop     esi
0x8F78A2: pop     ebx
0x8F78A3: mov     esp, ebp
0x8F78A5: pop     ebp
0x8F78A6: retn
