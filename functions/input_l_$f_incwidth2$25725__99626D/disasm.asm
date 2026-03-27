0x99626D: mov     eax, [ebp-0Ch]
0x996270: dec     dword ptr [ebp-0Ch]
0x996273: test    eax, eax
0x996275: jnz     short loc_99627C
0x996277: and     [ebp-0Ch], eax
0x99627A: jmp     short loc_99628A
0x99627C: mov     edx, [ebp-14h]
0x99627F: inc     dword ptr [ebp+4]
0x996282: call    __inc
0x996287: mov     [ebp-4], eax
0x99628A: movzx   eax, byte ptr [ebp-4]
0x99628E: jmp     short loc_9962D7
0x996290: mov     eax, [ebp-0Ch]
0x996293: dec     dword ptr [ebp-0Ch]
0x996296: test    eax, eax
0x996298: jz      short loc_9962E2
0x99629A: mov     eax, [ebp-24h]
0x99629D: mov     cl, [ebp-4]
0x9962A0: inc     dword ptr [ebp-1Ch]
0x9962A3: mov     [ebx+eax], cl
0x9962A6: lea     eax, [ebp-44h]
0x9962A9: push    eax; int
0x9962AA: lea     eax, [ebp+8]
0x9962AD: push    eax; Src
0x9962AE: inc     ebx
0x9962AF: push    ebx; int
0x9962B0: lea     edi, [ebp-24h]
0x9962B3: lea     esi, [ebp-4Ch]
0x9962B6: call    ___check_float_string
0x9962BB: add     esp, 0Ch
0x9962BE: test    eax, eax
0x9962C0: jz      __input_l___$error_return$25524
0x9962C6: mov     edx, [ebp-14h]
0x9962C9: inc     dword ptr [ebp+4]
0x9962CC: call    __inc
0x9962D1: mov     [ebp-4], eax
0x9962D4: movzx   eax, al
0x9962D7: push    eax; C
0x9962D8: call    _isdigit
0x9962DD: test    eax, eax
0x9962DF: pop     ecx
0x9962E0: jnz     short loc_996290
0x9962E2: dec     dword ptr [ebp+4]
0x9962E5: cmp     dword ptr [ebp-4], 0FFFFFFFFh
0x9962E9: jz      short loc_9962F8
0x9962EB: push    dword ptr [ebp-14h]; File
0x9962EE: push    dword ptr [ebp-4]; Ch
0x9962F1: call    __ungetc_nolock
0x9962F6: pop     ecx
0x9962F7: pop     ecx
0x9962F8: cmp     dword ptr [ebp-1Ch], 0
0x9962FC: jz      __input_l___$error_return$25524
0x996302: cmp     byte ptr [ebp-0Dh], 0
0x996306: jnz     loc_99688D
0x99630C: mov     eax, [ebp-24h]
0x99630F: inc     dword ptr [ebp-3Ch]
0x996312: lea     ecx, [ebp-6Ch]
0x996315: push    ecx
0x996316: push    eax
0x996317: push    dword ptr [ebp-38h]
0x99631A: mov     byte ptr [ebx+eax], 0
0x99631E: movsx   eax, byte ptr [ebp-0Eh]
0x996322: dec     eax
0x996323: push    eax
0x996324: push    off_B312BC
0x99632A: call    __decode_pointer
0x99632F: pop     ecx
0x996330: call    eax
0x996332: add     esp, 10h
0x996335: jmp     loc_99688D
