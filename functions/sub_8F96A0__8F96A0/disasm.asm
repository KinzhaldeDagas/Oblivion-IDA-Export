0x8F96A0: push    ebp
0x8F96A1: mov     ebp, esp
0x8F96A3: and     esp, 0FFFFFFF0h
0x8F96A6: sub     esp, 0F4h
0x8F96AC: mov     edx, ds:0BA9DE4h
0x8F96B2: push    ebx
0x8F96B3: mov     [esp+0F8h+var_E8], ecx
0x8F96B7: mov     ecx, large fs:2Ch
0x8F96BE: mov     eax, [ecx+edx*4]
0x8F96C1: push    esi
0x8F96C2: mov     esi, [eax+1A4h]
0x8F96C8: push    edi
0x8F96C9: cmp     esi, [eax+1A8h]
0x8F96CF: jnb     short loc_8F96F5
0x8F96D1: mov     edi, eax
0x8F96D3: mov     esi, [edi+1A4h]
0x8F96D9: mov     dword ptr [esi], offset aTtcapstriangle; "TtCapsTriangle"
0x8F96DF: rdtsc
0x8F96E1: mov     [esp+100h+var_E4], eax
0x8F96E5: mov     eax, [esp+100h+var_E4]
0x8F96E9: mov     [esi+4], eax
0x8F96EC: add     esi, 0Ch
0x8F96EF: mov     [edi+1A4h], esi
0x8F96F5: mov     eax, [ebp+arg_0]
0x8F96F8: mov     ebx, [eax]
0x8F96FA: mov     esi, [ebp+arg_4]
0x8F96FD: mov     ecx, [esi]
0x8F96FF: mov     [esp+100h+var_C0], eax
0x8F9703: mov     eax, [eax+8]
0x8F9706: mov     [esp+100h+var_BC], esi
0x8F970A: movaps  xmm1, xmmword ptr [eax]
0x8F970D: movaps  xmm2, xmmword ptr [eax+10h]
0x8F9711: movaps  xmm3, xmmword ptr [eax+20h]
0x8F9715: movaps  xmm4, xmmword ptr [eax+30h]
0x8F9719: lea     edx, [ebx+10h]
0x8F971C: lea     eax, [esp+100h+var_50]
0x8F9723: sub     eax, edx
0x8F9725: mov     edi, 2
0x8F972A: lea     ebx, [ebx+0]
0x8F9730: movaps  xmm0, xmmword ptr [edx]
0x8F9733: movaps  xmm5, xmm0
0x8F9736: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8F973A: movaps  xmm6, xmm3
0x8F973D: mulps   xmm6, xmm5
0x8F9740: movaps  xmm5, xmm0
0x8F9743: shufps  xmm5, xmm0, 55h ; 'U'
0x8F9747: movaps  xmm7, xmm2
0x8F974A: mulps   xmm7, xmm5
0x8F974D: movaps  xmm5, xmm0
0x8F9750: shufps  xmm5, xmm0, 0
0x8F9754: movaps  xmm0, xmm1
0x8F9757: mulps   xmm0, xmm5
0x8F975A: addps   xmm6, xmm4
0x8F975D: addps   xmm0, xmm7
0x8F9760: addps   xmm0, xmm6
0x8F9763: movaps  xmmword ptr [eax+edx], xmm0
0x8F9767: add     edx, 10h
0x8F976A: dec     edi
0x8F976B: jnz     short loc_8F9730
0x8F976D: mov     edx, [esi+8]
0x8F9770: movaps  xmm1, xmmword ptr [edx]
0x8F9773: movaps  xmm2, xmmword ptr [edx+10h]
0x8F9777: movaps  xmm3, xmmword ptr [edx+20h]
0x8F977B: movaps  xmm4, xmmword ptr [edx+30h]
0x8F977F: lea     eax, [ecx+10h]
0x8F9782: lea     edx, [esp+100h+var_30]
0x8F9789: sub     edx, eax
0x8F978B: mov     esi, 3
0x8F9790: movaps  xmm0, xmmword ptr [eax]
0x8F9793: movaps  xmm5, xmm0
0x8F9796: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8F979A: movaps  xmm6, xmm3
0x8F979D: mulps   xmm6, xmm5
0x8F97A0: movaps  xmm5, xmm0
0x8F97A3: shufps  xmm5, xmm0, 55h ; 'U'
0x8F97A7: movaps  xmm7, xmm2
0x8F97AA: mulps   xmm7, xmm5
0x8F97AD: movaps  xmm5, xmm0
0x8F97B0: shufps  xmm5, xmm0, 0
0x8F97B4: movaps  xmm0, xmm1
0x8F97B7: mulps   xmm0, xmm5
0x8F97BA: addps   xmm6, xmm4
0x8F97BD: addps   xmm0, xmm7
0x8F97C0: addps   xmm0, xmm6
0x8F97C3: movaps  xmmword ptr [edx+eax], xmm0
0x8F97C7: add     eax, 10h
0x8F97CA: dec     esi
0x8F97CB: jnz     short loc_8F9790
0x8F97CD: mov     esi, [ebp+arg_8]
0x8F97D0: mov     eax, [esi+8]
0x8F97D3: lea     edx, [esp+100h+var_B0]
0x8F97D7: push    edx; int
0x8F97D8: mov     edx, [esp+104h+var_E8]
0x8F97DC: push    0; int
0x8F97DE: push    eax; float
0x8F97DF: mov     eax, [ecx+0Ch]
0x8F97E2: add     edx, 14h
0x8F97E5: push    edx; int
0x8F97E6: mov     edx, [ebx+0Ch]
0x8F97E9: push    eax; float
0x8F97EA: lea     ecx, [esp+114h+var_30]
0x8F97F1: push    ecx; int
0x8F97F2: push    edx; float
0x8F97F3: lea     eax, [esp+11Ch+var_50]
0x8F97FA: push    eax; int
0x8F97FB: call    sub_8D0CA0
0x8F9800: fld     dword ptr [esp+120h+anonymous_0+0Ch]
0x8F9807: fcomp   dword ptr [esp+120h+anonymous_1+0Ch]
0x8F980E: add     esp, 20h
0x8F9811: fnstsw  ax
0x8F9813: test    ah, 5
0x8F9816: jp      short loc_8F9837
0x8F9818: fld     dword ptr [esp+100h+anonymous_0+0Ch]
0x8F981C: fcomp   dword ptr [esi+8]
0x8F981F: fnstsw  ax
0x8F9821: test    ah, 5
0x8F9824: jp      short loc_8F986C
0x8F9826: movaps  xmm0, [esp+100h+var_B0]
0x8F982B: movaps  [esp+100h+var_E0], xmm0
0x8F9830: movaps  xmm0, [esp+100h+anonymous_0]
0x8F9835: jmp     short loc_8F985A
0x8F9837: fld     dword ptr [esp+100h+anonymous_1+0Ch]
0x8F983E: fcomp   dword ptr [esi+8]
0x8F9841: fnstsw  ax
0x8F9843: test    ah, 5
0x8F9846: jp      short loc_8F986C
0x8F9848: movaps  xmm0, [esp+100h+var_90]
0x8F984D: movaps  [esp+100h+var_E0], xmm0
0x8F9852: movaps  xmm0, [esp+100h+anonymous_1]
0x8F985A: mov     ecx, [ebp+arg_C]
0x8F985D: mov     edx, [ecx]
0x8F985F: lea     eax, [esp+100h+var_E0]
0x8F9863: push    eax
0x8F9864: movaps  [esp+104h+var_D0], xmm0
0x8F9869: call    dword ptr [edx+4]
0x8F986C: mov     ecx, large fs:2Ch
0x8F9873: mov     edx, ds:0BA9DE4h
0x8F9879: mov     eax, [ecx+edx*4]
0x8F987C: mov     esi, [eax+1A4h]
0x8F9882: cmp     esi, [eax+1A8h]
0x8F9888: jnb     short loc_8F98AE
0x8F988A: mov     esi, eax
0x8F988C: mov     ecx, [esi+1A4h]
0x8F9892: mov     dword ptr [ecx], offset aEt; "Et"
0x8F9898: rdtsc
0x8F989A: mov     [esp+100h+var_E8], eax
0x8F989E: mov     edx, [esp+100h+var_E8]
0x8F98A2: mov     [ecx+4], edx
0x8F98A5: add     ecx, 0Ch
0x8F98A8: mov     [esi+1A4h], ecx
0x8F98AE: pop     edi
0x8F98AF: pop     esi
0x8F98B0: pop     ebx
0x8F98B1: mov     esp, ebp
0x8F98B3: pop     ebp
0x8F98B4: retn    10h
