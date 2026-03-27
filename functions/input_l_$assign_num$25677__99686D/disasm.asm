0x99686D: cmp     dword ptr [ebp-48h], 0
0x996871: jz      short loc_996880
0x996873: mov     eax, [ebp-34h]
0x996876: mov     [esi], eax
0x996878: mov     eax, [ebp-30h]
0x99687B: mov     [esi+4], eax
0x99687E: jmp     short loc_99688D
0x996880: cmp     byte ptr [ebp-0Eh], 0
0x996884: jz      short loc_99688A
0x996886: mov     [esi], edi
0x996888: jmp     short loc_99688D
0x99688A: mov     [esi], di
0x99688D: mov     edi, [ebp-28h]
0x996890: inc     byte ptr [ebp-15h]
0x996893: inc     edi
0x996894: mov     [ebp-28h], edi
0x996897: jmp     short loc_9968DB
0x996899: mov     edx, [ebp-14h]
0x99689C: inc     dword ptr [ebp+4]
0x99689F: call    __inc
0x9968A4: mov     ebx, eax
0x9968A6: movzx   eax, byte ptr [edi]
0x9968A9: inc     edi
0x9968AA: cmp     eax, ebx
0x9968AC: mov     [ebp-4], ebx
0x9968AF: mov     [ebp-28h], edi
0x9968B2: jnz     short loc_996913
0x9968B4: movzx   eax, bl
0x9968B7: push    eax; C
0x9968B8: call    _isleadbyte
0x9968BD: test    eax, eax
0x9968BF: pop     ecx
0x9968C0: jz      short loc_9968DB
0x9968C2: mov     edx, [ebp-14h]
0x9968C5: inc     dword ptr [ebp+4]
0x9968C8: call    __inc
0x9968CD: movzx   ecx, byte ptr [edi]
0x9968D0: inc     edi
0x9968D1: cmp     ecx, eax
0x9968D3: mov     [ebp-28h], edi
0x9968D6: jnz     short loc_996903
0x9968D8: dec     dword ptr [ebp+4]
0x9968DB: cmp     dword ptr [ebp-4], 0FFFFFFFFh
0x9968DF: jnz     short loc_9968F1
0x9968E1: cmp     byte ptr [edi], 25h ; '%'
0x9968E4: jnz     short __input_l___$error_return$25524
0x9968E6: mov     eax, [ebp-28h]
0x9968E9: cmp     byte ptr [eax+1], 6Eh ; 'n'
0x9968ED: jnz     short __input_l___$error_return$25524
0x9968EF: mov     edi, eax
0x9968F1: mov     al, [edi]
0x9968F3: test    al, al
0x9968F5: jnz     loc_995E6B
0x9968FB: jmp     short __input_l___$error_return$25524
