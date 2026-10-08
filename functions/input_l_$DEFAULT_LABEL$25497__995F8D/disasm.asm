0x995F8D: inc     byte ptr [ebp+3]
0x995F90: jmp     short loc_995FA8
0x995F92: lea     eax, [edi+1]
0x995F95: cmp     byte ptr [eax], 6Ch ; 'l'
0x995F98: jz      short loc_995F40
0x995F9A: inc     byte ptr [ebp-0Eh]
0x995F9D: inc     byte ptr [ebp-5]
0x995FA0: jmp     short loc_995FA8
0x995FA2: dec     byte ptr [ebp-0Eh]
0x995FA5: dec     byte ptr [ebp-5]
0x995FA8: cmp     byte ptr [ebp+3], 0
0x995FAC: jz      loc_995EE1
0x995FB2: cmp     byte ptr [ebp-0Dh], 0
0x995FB6: mov     [ebp-28h], edi
0x995FB9: jnz     short loc_995FC9
0x995FBB: mov     eax, [ebp-58h]
0x995FBE: mov     esi, [eax]
0x995FC0: mov     [ebp-70h], eax
0x995FC3: add     eax, 4
0x995FC6: mov     [ebp-58h], eax
0x995FC9: cmp     byte ptr [ebp-5], 0
0x995FCD: mov     [ebp-38h], esi
0x995FD0: mov     byte ptr [ebp+3], 0
0x995FD4: jnz     short loc_995FE8
0x995FD6: mov     al, [edi]
0x995FD8: cmp     al, 53h ; 'S'
0x995FDA: jz      short loc_995FE4
0x995FDC: cmp     al, 43h ; 'C'
0x995FDE: mov     byte ptr [ebp-5], 0FFh
0x995FE2: jnz     short loc_995FE8
0x995FE4: mov     byte ptr [ebp-5], 1
0x995FE8: movzx   ebx, byte ptr [edi]
0x995FEB: or      ebx, 20h
0x995FEE: cmp     ebx, 6Eh ; 'n'
0x995FF1: mov     [ebp-20h], ebx
0x995FF4: jz      short loc_99602B
0x995FF6: cmp     ebx, 63h ; 'c'
0x995FF9: jz      short loc_99600E
0x995FFB: cmp     ebx, 7Bh ; '{'
0x995FFE: jz      short loc_99600E
0x996000: push    dword ptr [ebp-14h]
0x996003: lea     esi, [ebp+4]
0x996006: call    __whiteout
0x99600B: pop     ecx
0x99600C: jmp     short loc_996019
0x99600E: mov     edx, [ebp-14h]
0x996011: inc     dword ptr [ebp+4]
0x996014: call    __inc
0x996019: cmp     eax, 0FFFFFFFFh
0x99601C: mov     [ebp-4], eax
0x99601F: jz      __input_l___$error_return$25524
0x996025: mov     esi, [ebp-38h]
0x996028: mov     edi, [ebp-28h]
0x99602B: mov     ecx, [ebp-2Ch]
0x99602E: test    ecx, ecx
0x996030: jz      short loc_99603C
0x996032: cmp     dword ptr [ebp-0Ch], 0
0x996036: jz      loc_9968FD
0x99603C: cmp     ebx, 6Fh ; 'o'
0x99603F: jg      loc_996448
0x996045: jz      loc_996673
0x99604B: cmp     ebx, 63h ; 'c'
0x99604E: jz      loc_99633A
0x996054: push    64h ; 'd'
0x996056: pop     eax
0x996057: cmp     ebx, eax
0x996059: jz      loc_996673
0x99605F: jle     loc_996472
0x996065: cmp     ebx, 67h ; 'g'
0x996068: jle     short loc_9960A2
0x99606A: cmp     ebx, 69h ; 'i'
0x99606D: jz      short loc_99608A
0x99606F: cmp     ebx, 6Eh ; 'n'
0x996072: jnz     loc_996472
0x996078: cmp     byte ptr [ebp-0Dh], 0
0x99607C: mov     edi, [ebp+4]
0x99607F: jz      __input_l___$assign_num$25677
0x996085: jmp     loc_99688D
0x99608A: mov     [ebp-20h], eax
0x99608D: mov     ebx, [ebp-4]
0x996090: cmp     ebx, 2Dh ; '-'
0x996093: jnz     loc_99655B
0x996099: mov     byte ptr [ebp-17h], 1
0x99609D: jmp     __input_l___$x_incwidth$25598
0x9960A2: xor     ebx, ebx
0x9960A4: cmp     dword ptr [ebp-4], 2Dh ; '-'
0x9960A8: jnz     short loc_9960B3
0x9960AA: mov     eax, [ebp-24h]
0x9960AD: mov     byte ptr [eax], 2Dh ; '-'
0x9960B0: inc     ebx
0x9960B1: jmp     short __input_l___$f_incwidth$25695
0x9960B3: cmp     dword ptr [ebp-4], 2Bh ; '+'
0x9960B7: jnz     short loc_9960CA
0x99633A: test    ecx, ecx
0x99633C: jnz     short loc_996348
0x99633E: inc     dword ptr [ebp-0Ch]
0x996341: mov     dword ptr [ebp-2Ch], 1
0x996348: cmp     byte ptr [ebp-5], 0
0x99634C: jle     short __input_l___$scanit$25535
0x99634E: mov     byte ptr [ebp-16h], 1
0x996448: mov     eax, ebx
0x99644A: sub     eax, 70h ; 'p'
0x99644D: jz      loc_99666F
0x996453: sub     eax, 3
0x996456: jz      loc_996348
0x99645C: dec     eax
0x99645D: dec     eax
0x99645E: jz      loc_996673
0x996464: sub     eax, 3
0x996467: jz      loc_99608D
0x99646D: sub     eax, 3
0x996470: jz      short loc_996496
0x996472: movzx   eax, byte ptr [edi]
0x996475: cmp     eax, [ebp-4]
0x996478: jnz     loc_9968FD
0x99647E: dec     byte ptr [ebp-15h]
0x996481: cmp     byte ptr [ebp-0Dh], 0
0x996485: jnz     loc_99688D
0x99648B: mov     eax, [ebp-70h]
0x99648E: mov     [ebp-58h], eax
0x996491: jmp     loc_99688D
0x996496: cmp     byte ptr [ebp-5], 0
0x99649A: jle     short loc_9964A0
0x99649C: mov     byte ptr [ebp-16h], 1
0x9964A0: inc     edi
0x9964A1: cmp     byte ptr [edi], 5Eh ; '^'
0x9964A4: mov     esi, edi
0x9964A6: jnz     short loc_9964AF
0x9964A8: lea     esi, [edi+1]
0x9964AB: mov     byte ptr [ebp-18h], 0FFh
0x9964AF: push    20h ; ' '
0x9964B1: lea     eax, [ebp+168h]
0x9964B7: push    0
0x9964B9: push    eax
0x9964BA: call    __memset
0x9964BF: add     esp, 0Ch
0x9964C2: cmp     byte ptr [esi], 5Dh ; ']'
0x9964C5: jnz     short loc_9964D3
0x9964C7: mov     dl, 5Dh ; ']'
0x9964C9: inc     esi
0x9964CA: mov     byte ptr [ebp+173h], 20h ; ' '
0x9964D1: jmp     short loc_996542
0x9964D3: mov     dl, [ebp-3Dh]
0x9964D6: jmp     short loc_996542
0x9964D8: inc     esi
0x9964D9: cmp     al, 2Dh ; '-'
0x9964DB: jnz     short loc_996525
0x9964DD: test    dl, dl
0x9964DF: jz      short loc_996525
0x9964E1: mov     cl, [esi]
0x9964E3: cmp     cl, 5Dh ; ']'
0x9964E6: jz      short loc_996525
0x9964E8: inc     esi
0x9964E9: cmp     dl, cl
0x9964EB: jnb     short loc_9964F1
0x9964ED: mov     al, cl
0x9964EF: jmp     short loc_9964F5
0x9964F1: mov     al, dl
0x9964F3: mov     dl, cl
0x9964F5: cmp     dl, al
0x9964F7: ja      short loc_996521
0x9964F9: sub     al, dl
0x9964FB: inc     al
0x9964FD: movzx   edi, dl
0x996500: movzx   edx, al
0x996503: mov     ecx, edi
0x996505: and     ecx, 7
0x996508: mov     eax, edi
0x99650A: mov     bl, 1
0x99650C: shl     bl, cl
0x99650E: shr     eax, 3
0x996511: lea     eax, [ebp+eax+168h]
0x996518: or      [eax], bl
0x99651A: inc     edi
0x99651B: dec     edx
0x99651C: jnz     short loc_996503
0x99651E: mov     ebx, [ebp-20h]
0x996521: xor     dl, dl
0x996523: jmp     short loc_996542
0x996525: movzx   ecx, al
0x996528: mov     dl, al
0x99652A: mov     eax, ecx
0x99652C: and     ecx, 7
0x99652F: mov     bl, 1
0x996531: shl     bl, cl
0x996533: shr     eax, 3
0x996536: lea     eax, [ebp+eax+168h]
0x99653D: or      [eax], bl
0x99653F: mov     ebx, [ebp-20h]
0x996542: mov     al, [esi]
0x996544: cmp     al, 5Dh ; ']'
0x996546: jnz     short loc_9964D8
0x996548: test    al, al
0x99654A: jz      __input_l___$error_return$25524
0x996550: mov     [ebp-28h], esi
0x996553: mov     esi, [ebp-38h]
0x996556: jmp     __input_l___$scanit$25535
0x99655B: cmp     ebx, 2Bh ; '+'
0x99655E: jnz     short loc_99657F
0x99666F: mov     byte ptr [ebp-0Eh], 1
0x996673: mov     ebx, [ebp-4]
0x996676: cmp     ebx, 2Dh ; '-'
0x996679: jnz     short loc_996681
0x99667B: mov     byte ptr [ebp-17h], 1
0x99667F: jmp     short __input_l___$d_incwidth$25620
0x996681: cmp     ebx, 2Bh ; '+'
0x996684: jnz     short __input_l___$getnum$25615
0x9968FD: cmp     dword ptr [ebp-4], 0FFFFFFFFh
0x996901: jmp     short loc_996916
