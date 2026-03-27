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
