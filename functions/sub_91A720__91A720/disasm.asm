0x91A720: push    ebp
0x91A721: mov     ebp, esp
0x91A723: and     esp, 0FFFFFFF0h
0x91A726: sub     esp, 94h
0x91A72C: push    ebx
0x91A72D: mov     ebx, ds:0BA9DE4h
0x91A733: push    esi
0x91A734: push    edi
0x91A735: mov     edi, large fs:2Ch
0x91A73C: mov     eax, [edi+ebx*4]
0x91A73F: mov     edx, [eax+1A8h]
0x91A745: mov     [esp+0A0h+var_88], ecx
0x91A749: mov     ecx, [eax+1A4h]
0x91A74F: cmp     ecx, edx
0x91A751: jnb     short loc_91A777
0x91A753: mov     esi, eax
0x91A755: mov     ecx, [esi+1A4h]
0x91A75B: mov     dword ptr [ecx], offset aTthkswepttrans; "TthkSweptTransformDisplayViewer"
0x91A761: rdtsc
0x91A763: mov     [esp+0A0h+var_8C], eax
0x91A767: mov     edx, [esp+0A0h+var_8C]
0x91A76B: mov     [ecx+4], edx
0x91A76E: add     ecx, 0Ch
0x91A771: mov     [esi+1A4h], ecx
0x91A777: mov     edx, [ebp+arg_0]
0x91A77A: mov     eax, [edx+3Ch]
0x91A77D: xor     ecx, ecx
0x91A77F: test    eax, eax
0x91A781: mov     [esp+0A0h+var_8C], ecx
0x91A785: jle     loc_91A8D1
0x91A78B: jmp     short loc_91A790
0x91A78D: align 10h
0x91A790: mov     eax, [edx+38h]
0x91A793: mov     eax, [eax+ecx*4]
0x91A796: mov     esi, [eax+38h]
0x91A799: add     eax, 34h ; '4'
0x91A79C: xor     ebx, ebx
0x91A79E: test    esi, esi
0x91A7A0: mov     [esp+0A0h+var_84], eax
0x91A7A4: jle     loc_91A8BB
0x91A7AA: jmp     short loc_91A7B0
0x91A7AC: mov     eax, [esp+0A0h+var_84]
0x91A7B0: mov     ecx, [eax]
0x91A7B2: mov     edi, [ecx+ebx*4]
0x91A7B5: mov     esi, [edi+50h]
0x91A7B8: add     esi, 50h ; 'P'
0x91A7BB: lea     edx, [esi+20h]
0x91A7BE: push    edx
0x91A7BF: lea     ecx, [esp+0A4h+var_80]
0x91A7C3: call    sub_8B1DD0
0x91A7C8: movaps  xmm0, xmmword ptr [esi+40h]
0x91A7CC: movaps  xmm2, [esp+0A0h+var_60]
0x91A7D1: mov     eax, [esp+0A0h+var_88]
0x91A7D5: mov     ecx, [eax-14h]
0x91A7D8: movaps  xmm3, [esp+0A0h+var_70]
0x91A7DD: mov     eax, ds:0BA8420h
0x91A7E2: movaps  xmm1, xmm0
0x91A7E5: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x91A7E9: mulps   xmm2, xmm1
0x91A7EC: movaps  xmm1, xmm0
0x91A7EF: shufps  xmm1, xmm0, 55h ; 'U'
0x91A7F3: mulps   xmm3, xmm1
0x91A7F6: movaps  xmm1, xmm0
0x91A7F9: shufps  xmm1, xmm0, 0
0x91A7FD: movaps  xmm0, [esp+0A0h+var_80]
0x91A802: push    eax
0x91A803: mulps   xmm0, xmm1
0x91A806: movaps  xmm1, xmmword ptr [esi]
0x91A809: lea     eax, [edi+15h]
0x91A80C: addps   xmm0, xmm3
0x91A80F: push    eax
0x91A810: addps   xmm0, xmm2
0x91A813: subps   xmm1, xmm0
0x91A816: lea     eax, [esp+0A8h+var_80]
0x91A81A: movaps  [esp+0A8h+var_50], xmm1
0x91A81F: mov     edx, [ecx]
0x91A821: push    eax
0x91A822: call    dword ptr [edx+0Ch]
0x91A825: mov     esi, [edi+50h]
0x91A828: add     esi, 50h ; 'P'
0x91A82B: lea     ecx, [esi+30h]
0x91A82E: push    ecx
0x91A82F: lea     ecx, [esp+0A4h+var_40]
0x91A833: call    sub_8B1DD0
0x91A838: movaps  xmm0, xmmword ptr [esi+40h]
0x91A83C: movaps  xmm2, [esp+0A0h+anonymous_1]
0x91A844: movaps  xmm3, [esp+0A0h+anonymous_0]
0x91A849: mov     edx, [esp+0A0h+var_88]
0x91A84D: mov     ecx, [edx-14h]
0x91A850: mov     edx, ds:0BA8420h
0x91A856: movaps  xmm1, xmm0
0x91A859: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x91A85D: mulps   xmm2, xmm1
0x91A860: movaps  xmm1, xmm0
0x91A863: shufps  xmm1, xmm0, 55h ; 'U'
0x91A867: mulps   xmm3, xmm1
0x91A86A: movaps  xmm1, xmm0
0x91A86D: shufps  xmm1, xmm0, 0
0x91A871: movaps  xmm0, [esp+0A0h+var_40]
0x91A876: mulps   xmm0, xmm1
0x91A879: movaps  xmm1, xmmword ptr [esi+10h]
0x91A87D: push    edx
0x91A87E: addps   xmm0, xmm3
0x91A881: addps   xmm0, xmm2
0x91A884: add     edi, 16h
0x91A887: subps   xmm1, xmm0
0x91A88A: push    edi
0x91A88B: lea     edx, [esp+0A8h+var_40]
0x91A88F: movaps  [esp+0A8h+anonymous_2], xmm1
0x91A897: mov     eax, [ecx]
0x91A899: push    edx
0x91A89A: call    dword ptr [eax+0Ch]
0x91A89D: mov     eax, [esp+0A0h+var_84]
0x91A8A1: mov     ecx, [eax+4]
0x91A8A4: inc     ebx
0x91A8A5: cmp     ebx, ecx
0x91A8A7: jl      loc_91A7AC
0x91A8AD: mov     edi, large fs:2Ch
0x91A8B4: mov     ecx, [esp+0A0h+var_8C]
0x91A8B8: mov     edx, [ebp+arg_0]
0x91A8BB: mov     eax, [edx+3Ch]
0x91A8BE: inc     ecx
0x91A8BF: cmp     ecx, eax
0x91A8C1: mov     [esp+0A0h+var_8C], ecx
0x91A8C5: jl      loc_91A790
0x91A8CB: mov     ebx, ds:0BA9DE4h
0x91A8D1: mov     eax, [edi+ebx*4]
0x91A8D4: mov     ecx, [eax+1A4h]
0x91A8DA: cmp     ecx, [eax+1A8h]
0x91A8E0: jnb     short loc_91A906
0x91A8E2: mov     esi, eax
0x91A8E4: mov     ecx, [esi+1A4h]
0x91A8EA: mov     dword ptr [ecx], offset aEt; "Et"
0x91A8F0: rdtsc
0x91A8F2: mov     [esp+0A0h+var_8C], eax
0x91A8F6: mov     edx, [esp+0A0h+var_8C]
0x91A8FA: mov     [ecx+4], edx
0x91A8FD: add     ecx, 0Ch
0x91A900: mov     [esi+1A4h], ecx
0x91A906: pop     edi
0x91A907: pop     esi
0x91A908: pop     ebx
0x91A909: mov     esp, ebp
0x91A90B: pop     ebp
0x91A90C: retn    8
