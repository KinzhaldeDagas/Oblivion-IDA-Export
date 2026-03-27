0x9246E0: sub     esp, 108h
0x9246E6: mov     eax, ds:0A95BF8h
0x9246EB: shr     eax, 1Fh
0x9246EE: and     al, 1
0x9246F0: push    ebp
0x9246F1: mov     [esp+10Ch+var_105], al
0x9246F5: xor     eax, eax
0x9246F7: push    esi
0x9246F8: mov     [esp+110h+var_104], eax
0x9246FC: push    edi
0x9246FD: lea     ecx, [ecx+0]
0x924700: mov     ebp, ds:0A9DE44h[eax*4]
0x924707: mov     eax, ds:0B2E2D0h
0x92470C: mov     edi, eax
0x92470E: mov     al, [eax]
0x924710: cmp     al, 2Eh ; '.'
0x924712: jz      short loc_924724
0x924714: test    al, al
0x924716: jz      loc_9248E8
0x92471C: mov     al, [edi+1]
0x92471F: inc     edi
0x924720: cmp     al, 2Eh ; '.'
0x924722: jnz     short loc_924714
0x924724: push    offset aPrime; "Prime"
0x924729: push    edi; Str
0x92472A: call    _strstr
0x92472F: add     esp, 8
0x924732: test    eax, eax
0x924734: jz      loc_92483C
0x92473A: mov     eax, [esp+114h+arg_0]
0x924741: test    eax, eax
0x924743: jz      loc_92483C
0x924749: mov     eax, offset aTheFollowingCo; "The following component is not enabled "...
0x92474E: mov     [esp+114h+Dest], 0
0x924753: lea     edx, [eax+1]
0x924756: mov     cl, [eax]
0x924758: inc     eax
0x924759: test    cl, cl
0x92475B: jnz     short loc_924756
0x92475D: sub     eax, edx
0x92475F: mov     edx, eax
0x924761: lea     eax, [esp+114h+Dest]
0x924765: lea     esi, [eax+1]
0x924768: mov     cl, [eax]
0x92476A: inc     eax
0x92476B: test    cl, cl
0x92476D: jnz     short loc_924768
0x92476F: sub     eax, esi
0x924771: mov     ecx, 0FEh ; 'þ'
0x924776: sub     ecx, eax
0x924778: cmp     edx, ecx
0x92477A: jnb     short loc_92478F
0x92477C: mov     eax, offset aTheFollowingCo; "The following component is not enabled "...
0x924781: lea     edx, [eax+1]
0x924784: mov     cl, [eax]
0x924786: inc     eax
0x924787: test    cl, cl
0x924789: jnz     short loc_924784
0x92478B: sub     eax, edx
0x92478D: jmp     short loc_9247A8
0x92478F: lea     eax, [esp+114h+Dest]
0x924793: lea     edx, [eax+1]
0x924796: mov     cl, [eax]
0x924798: inc     eax
0x924799: test    cl, cl
0x92479B: jnz     short loc_924796
0x92479D: sub     eax, edx
0x92479F: mov     ecx, eax
0x9247A1: mov     eax, 0FEh ; 'þ'
0x9247A6: sub     eax, ecx
0x9247A8: push    eax; Count
0x9247A9: lea     edx, [esp+118h+Dest]
0x9247AD: push    offset aTheFollowingCo; "The following component is not enabled "...
0x9247B2: push    edx; Dest
0x9247B3: call    _strncat
0x9247B8: mov     eax, offset aTheFollowingCo; "The following component is not enabled "...
0x9247BD: add     esp, 0Ch
0x9247C0: lea     edx, [eax+1]
0x9247C3: mov     cl, [eax]
0x9247C5: inc     eax
0x9247C6: test    cl, cl
0x9247C8: jnz     short loc_9247C3
0x9247CA: sub     eax, edx
0x9247CC: mov     edx, eax
0x9247CE: lea     eax, [esp+114h+Dest]
0x9247D2: lea     esi, [eax+1]
0x9247D5: mov     cl, [eax]
0x9247D7: inc     eax
0x9247D8: test    cl, cl
0x9247DA: jnz     short loc_9247D5
0x9247DC: sub     eax, esi
0x9247DE: mov     ecx, 0FEh ; 'þ'
0x9247E3: sub     ecx, eax
0x9247E5: cmp     edx, ecx
0x9247E7: jnb     short loc_9247FC
0x9247E9: mov     eax, offset aTheFollowingCo; "The following component is not enabled "...
0x9247EE: lea     edx, [eax+1]
0x9247F1: mov     cl, [eax]
0x9247F3: inc     eax
0x9247F4: test    cl, cl
0x9247F6: jnz     short loc_9247F1
0x9247F8: sub     eax, edx
0x9247FA: jmp     short loc_924815
0x9247FC: lea     eax, [esp+114h+Dest]
0x924800: lea     edx, [eax+1]
0x924803: mov     cl, [eax]
0x924805: inc     eax
0x924806: test    cl, cl
0x924808: jnz     short loc_924803
0x92480A: sub     eax, edx
0x92480C: mov     ecx, eax
0x92480E: mov     eax, 0FEh ; 'þ'
0x924813: sub     eax, ecx
0x924815: mov     edx, [esp+114h+arg_0]
0x92481C: push    eax; Count
0x92481D: mov     eax, ds:0B30124h[edx*4]
0x924824: push    eax; Source
0x924825: lea     ecx, [esp+11Ch+Dest]
0x924829: push    ecx; Dest
0x92482A: call    _strncat
0x92482F: lea     edx, [esp+120h+Dest]
0x924833: push    edx
0x924834: call    sub_8B16A0
0x924839: add     esp, 10h
0x92483C: mov     al, [edi+1]
0x92483F: cmp     al, 2Eh ; '.'
0x924841: lea     ecx, [edi+1]
0x924844: jz      short loc_924856
0x924846: test    al, al
0x924848: jz      loc_9248E8
0x92484E: mov     al, [ecx+1]
0x924851: inc     ecx
0x924852: cmp     al, 2Eh ; '.'
0x924854: jnz     short loc_924846
0x924856: mov     al, [esp+114h+var_105]
0x92485A: test    al, al
0x92485C: lea     edx, [ecx+1]
0x92485F: jz      short loc_9248AD
0x924861: mov     esi, ds:0A95BF8h
0x924867: and     esi, 7FFFFFFFh
0x92486D: xor     esi, ebp
0x92486F: call    sub_94FEE0
0x924874: cmp     esi, eax
0x924876: jle     short loc_9248D6
0x924878: sub     esi, eax
0x92487A: cmp     esi, 0ED4E00h
0x924880: jge     short loc_9248D6
0x924882: mov     eax, [esp+114h+arg_0]
0x924889: test    eax, eax
0x92488B: jz      short loc_924901
0x92488D: cmp     [esp+114h+var_104], 2
0x924892: jnz     short loc_924901
0x924894: push    offset aProductMismatc; "Product mismatch: Prime keyvalue detect"...
0x924899: call    sub_8B16A0
0x92489E: add     esp, 4
0x9248A1: pop     edi
0x9248A2: pop     esi
0x9248A3: xor     al, al
0x9248A5: pop     ebp
0x9248A6: add     esp, 108h
0x9248AC: retn
0x9248AD: mov     cl, [edx]
0x9248AF: xor     eax, eax
0x9248B1: test    cl, cl
0x9248B3: jz      short loc_9248C5
0x9248B5: mov     cl, [edx+1]
0x9248B8: imul    eax, 17h
0x9248BB: inc     edx
0x9248BC: movsx   esi, cl
0x9248BF: add     eax, esi
0x9248C1: test    cl, cl
0x9248C3: jnz     short loc_9248B5
0x9248C5: mov     ecx, ds:0A95BF8h
0x9248CB: xor     eax, ebp
0x9248CD: and     eax, 7FFFFFFFh
0x9248D2: cmp     ecx, eax
0x9248D4: jz      short loc_924882
0x9248D6: mov     eax, [esp+114h+var_104]
0x9248DA: inc     eax
0x9248DB: cmp     eax, 3
0x9248DE: mov     [esp+114h+var_104], eax
0x9248E2: jl      loc_924700
0x9248E8: push    offset aHavokPhysicsEv; "Havok Physics evaluation key has expire"...
0x9248ED: call    sub_8B16A0
0x9248F2: add     esp, 4
0x9248F5: pop     edi
0x9248F6: pop     esi
0x9248F7: xor     al, al
0x9248F9: pop     ebp
0x9248FA: add     esp, 108h
0x924900: retn
0x924901: pop     edi
0x924902: pop     esi
0x924903: mov     al, 1
0x924905: pop     ebp
0x924906: add     esp, 108h
0x92490C: retn
