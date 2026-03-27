0x8F85C0: push    ebp
0x8F85C1: mov     ebp, esp
0x8F85C3: and     esp, 0FFFFFFF0h
0x8F85C6: sub     esp, 124h
0x8F85CC: mov     ecx, large fs:2Ch
0x8F85D3: mov     edx, ds:0BA9DE4h
0x8F85D9: mov     eax, [ecx+edx*4]
0x8F85DC: push    ebx
0x8F85DD: push    esi
0x8F85DE: mov     esi, [eax+1A4h]
0x8F85E4: push    edi
0x8F85E5: cmp     esi, [eax+1A8h]
0x8F85EB: jnb     short loc_8F8611
0x8F85ED: mov     esi, eax
0x8F85EF: mov     ecx, [esi+1A4h]
0x8F85F5: mov     dword ptr [ecx], offset aTtmultispher_0; "TtMultiSphereTriangle"
0x8F85FB: rdtsc
0x8F85FD: mov     [esp+130h+var_120], eax
0x8F8601: mov     eax, [esp+130h+var_120]
0x8F8605: mov     [ecx+4], eax
0x8F8608: add     ecx, 0Ch
0x8F860B: mov     [esi+1A4h], ecx
0x8F8611: mov     ecx, [ebp+arg_0]
0x8F8614: mov     eax, [ebp+arg_4]
0x8F8617: mov     edx, [ecx]
0x8F8619: mov     ecx, [eax]
0x8F861B: mov     eax, [eax+8]
0x8F861E: movaps  xmm1, xmmword ptr [eax]
0x8F8621: movaps  xmm2, xmmword ptr [eax+10h]
0x8F8625: movaps  xmm3, xmmword ptr [eax+20h]
0x8F8629: movaps  xmm4, xmmword ptr [eax+30h]
0x8F862D: lea     esi, [ecx+10h]
0x8F8630: lea     eax, [esp+130h+var_B0]
0x8F8637: mov     [esp+130h+var_114], ecx
0x8F863B: mov     ecx, esi
0x8F863D: sub     eax, esi
0x8F863F: mov     edi, 3
0x8F8644: movaps  xmm0, xmmword ptr [ecx]
0x8F8647: movaps  xmm5, xmm0
0x8F864A: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8F864E: movaps  xmm6, xmm3
0x8F8651: mulps   xmm6, xmm5
0x8F8654: movaps  xmm5, xmm0
0x8F8657: shufps  xmm5, xmm0, 55h ; 'U'
0x8F865B: movaps  xmm7, xmm2
0x8F865E: mulps   xmm7, xmm5
0x8F8661: movaps  xmm5, xmm0
0x8F8664: shufps  xmm5, xmm0, 0
0x8F8668: movaps  xmm0, xmm1
0x8F866B: mulps   xmm0, xmm5
0x8F866E: addps   xmm6, xmm4
0x8F8671: addps   xmm0, xmm7
0x8F8674: addps   xmm0, xmm6
0x8F8677: movaps  xmmword ptr [eax+ecx], xmm0
0x8F867B: add     ecx, 10h
0x8F867E: dec     edi
0x8F867F: jnz     short loc_8F8644
0x8F8681: mov     ebx, [edx+0Ch]
0x8F8684: lea     edi, [edx+10h]
0x8F8687: mov     edx, [ebp+arg_0]
0x8F868A: mov     eax, [edx+8]
0x8F868D: movaps  xmm1, xmmword ptr [eax]
0x8F8690: movaps  xmm2, xmmword ptr [eax+10h]
0x8F8694: movaps  xmm3, xmmword ptr [eax+20h]
0x8F8698: movaps  xmm4, xmmword ptr [eax+30h]
0x8F869C: lea     eax, [esp+130h+var_80]
0x8F86A3: mov     edx, ebx
0x8F86A5: mov     ecx, edi
0x8F86A7: sub     eax, edi
0x8F86A9: lea     esp, [esp+0]
0x8F86B0: movaps  xmm0, xmmword ptr [ecx]
0x8F86B3: movaps  xmm5, xmm0
0x8F86B6: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8F86BA: movaps  xmm6, xmm3
0x8F86BD: mulps   xmm6, xmm5
0x8F86C0: movaps  xmm5, xmm0
0x8F86C3: shufps  xmm5, xmm0, 55h ; 'U'
0x8F86C7: movaps  xmm7, xmm2
0x8F86CA: mulps   xmm7, xmm5
0x8F86CD: movaps  xmm5, xmm0
0x8F86D0: shufps  xmm5, xmm0, 0
0x8F86D4: movaps  xmm0, xmm1
0x8F86D7: mulps   xmm0, xmm5
0x8F86DA: addps   xmm6, xmm4
0x8F86DD: addps   xmm0, xmm7
0x8F86E0: addps   xmm0, xmm6
0x8F86E3: movaps  xmmword ptr [eax+ecx], xmm0
0x8F86E7: add     ecx, 10h
0x8F86EA: dec     edx
0x8F86EB: test    edx, edx
0x8F86ED: jg      short loc_8F86B0
0x8F86EF: mov     eax, [ebp+arg_0]
0x8F86F2: mov     ecx, [ebp+arg_4]
0x8F86F5: lea     edx, [esp+130h+var_110]
0x8F86F9: push    edx
0x8F86FA: push    esi
0x8F86FB: mov     [esp+138h+var_E0], eax
0x8F86FF: mov     [esp+138h+var_DC], ecx
0x8F8703: call    sub_8D1DB0
0x8F8708: add     esp, 8
0x8F870B: test    ebx, ebx
0x8F870D: jle     loc_8F87BC
0x8F8713: lea     esi, [esp+130h+var_80]
0x8F871A: add     edi, 0Ch
0x8F871D: mov     [esp+130h+var_120], ebx
0x8F8721: fld     dword ptr [edi]
0x8F8723: mov     ebx, [esp+130h+var_114]
0x8F8727: fadd    dword ptr [ebx+0Ch]
0x8F872A: lea     eax, [esp+130h+var_D0]
0x8F872E: push    eax
0x8F872F: lea     ecx, [esp+134h+var_110]
0x8F8733: push    ecx
0x8F8734: fstp    [esp+138h+var_118]
0x8F8738: lea     edx, [esp+138h+var_B0]
0x8F873F: push    edx
0x8F8740: push    esi
0x8F8741: call    sub_8D20C0
0x8F8746: fld     [esp+140h+var_118]
0x8F874A: mov     eax, [ebp+arg_8]
0x8F874D: fadd    dword ptr [eax+8]
0x8F8750: add     esp, 10h
0x8F8753: fcomp   [esp+130h+var_C0]
0x8F8757: fnstsw  ax
0x8F8759: test    ah, 41h
0x8F875C: jnz     short loc_8F87A7
0x8F875E: fld     dword ptr [ebx+0Ch]
0x8F8761: movaps  xmm1, [esp+130h+var_D0]
0x8F8766: fsub    [esp+130h+var_C0]
0x8F876A: mov     ecx, [ebp+arg_C]
0x8F876D: mov     edx, [ecx]
0x8F876F: lea     eax, [esp+130h+var_100]
0x8F8773: fstp    [esp+130h+var_11C]
0x8F8777: movss   xmm0, [esp+130h+var_11C]
0x8F877D: fld     [esp+130h+var_C0]
0x8F8781: movaps  xmm2, xmm0
0x8F8784: fsub    [esp+130h+var_118]
0x8F8788: shufps  xmm2, xmm0, 0
0x8F878C: movaps  xmm0, xmmword ptr [esi]
0x8F878F: mulps   xmm2, xmm1
0x8F8792: addps   xmm0, xmm2
0x8F8795: movaps  [esp+130h+var_F0], xmm1
0x8F879A: fstp    dword ptr [esp+130h+var_F0+0Ch]
0x8F879E: push    eax
0x8F879F: movaps  [esp+134h+var_100], xmm0
0x8F87A4: call    dword ptr [edx+4]
0x8F87A7: mov     eax, [esp+130h+var_120]
0x8F87AB: add     esi, 10h
0x8F87AE: add     edi, 10h
0x8F87B1: dec     eax
0x8F87B2: mov     [esp+130h+var_120], eax
0x8F87B6: jnz     loc_8F8721
0x8F87BC: mov     ecx, large fs:2Ch
0x8F87C3: mov     edx, ds:0BA9DE4h
0x8F87C9: mov     eax, [ecx+edx*4]
0x8F87CC: mov     esi, [eax+1A4h]
0x8F87D2: cmp     esi, [eax+1A8h]
0x8F87D8: jnb     short loc_8F87FE
0x8F87DA: mov     esi, eax
0x8F87DC: mov     ecx, [esi+1A4h]
0x8F87E2: mov     dword ptr [ecx], offset aEt; "Et"
0x8F87E8: rdtsc
0x8F87EA: mov     [esp+130h+var_11C], eax
0x8F87EE: mov     edx, [esp+130h+var_11C]
0x8F87F2: mov     [ecx+4], edx
0x8F87F5: add     ecx, 0Ch
0x8F87F8: mov     [esi+1A4h], ecx
0x8F87FE: pop     edi
0x8F87FF: pop     esi
0x8F8800: pop     ebx
0x8F8801: mov     esp, ebp
0x8F8803: pop     ebp
0x8F8804: retn
