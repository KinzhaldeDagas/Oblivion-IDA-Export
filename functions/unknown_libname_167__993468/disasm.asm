0x993468: push    ebp
0x993469: mov     ebp, esp
0x99346B: push    ecx
0x99346C: push    ebx
0x99346D: push    esi
0x99346E: mov     esi, [ebp+arg_0]
0x993471: xor     ebx, ebx
0x993473: cmp     esi, ebx
0x993475: push    edi
0x993476: jz      short loc_99347D
0x993478: cmp     [ebp+arg_4], ebx
0x99347B: ja      short loc_99349D
0x99347D: call    __errno
0x993482: push    16h
0x993484: pop     ecx
0x993485: push    ebx
0x993486: push    ebx
0x993487: push    ebx
0x993488: push    ebx
0x993489: push    ebx
0x99348A: mov     esi, ecx
0x99348C: mov     [eax], ecx
0x99348E: call    __invalid_parameter
0x993493: add     esp, 14h
0x993496: mov     eax, esi
0x993498: jmp     loc_99356A
0x99349D: mov     eax, [ebp+arg_8]
0x9934A0: xor     edi, edi
0x9934A2: cmp     eax, ebx
0x9934A4: jz      short loc_9934BF
0x9934A6: mov     al, [eax]
0x9934A8: cmp     al, bl
0x9934AA: jz      short loc_9934BF
0x9934AC: push    2
0x9934AE: pop     edi
0x9934AF: cmp     [ebp+arg_4], edi
0x9934B2: jbe     unknown_libname_167___unknown_libname_168
0x9934B8: mov     [esi], al
0x9934BA: inc     esi
0x9934BB: mov     byte ptr [esi], 3Ah ; ':'
0x9934BE: inc     esi
0x9934BF: mov     ecx, [ebp+arg_C]
0x9934C2: cmp     ecx, ebx
0x9934C4: mov     eax, ecx
0x9934C6: jz      short loc_993508
0x9934C8: cmp     [ecx], bl
0x9934CA: jz      short loc_993508
0x9934CC: jmp     short loc_9934D1
0x9934CE: mov     edi, [ebp+var_4]
0x9934D1: mov     edx, [ebp+arg_4]
0x9934D4: inc     edi
0x9934D5: cmp     edi, edx
0x9934D7: mov     [ebp+var_4], edi
0x9934DA: jnb     short unknown_libname_167___unknown_libname_168
0x9934DC: mov     dl, [eax]
0x9934DE: mov     [esi], dl
0x9934E0: inc     esi
0x9934E1: inc     eax
0x9934E2: cmp     [eax], bl
0x9934E4: jnz     short loc_9934CE
0x9934E6: push    eax; unsigned __int8 *
0x9934E7: push    ecx; unsigned __int8 *
0x9934E8: call    __mbsdec
0x9934ED: mov     al, [eax]
0x9934EF: cmp     al, 2Fh ; '/'
0x9934F1: pop     ecx
0x9934F2: pop     ecx
0x9934F3: jz      short loc_993505
0x9934F5: cmp     al, 5Ch ; '\'
0x9934F7: jz      short loc_993505
0x9934F9: inc     edi
0x9934FA: cmp     edi, [ebp+arg_4]
0x9934FD: jnb     short unknown_libname_167___unknown_libname_168
0x9934FF: mov     byte ptr [esi], 5Ch ; '\'
0x993502: inc     esi
0x993503: jmp     short loc_993508
0x993505: mov     edi, [ebp+var_4]
0x993508: mov     eax, [ebp+arg_10]
0x99350B: cmp     eax, ebx
0x99350D: jz      short loc_993521
0x99350F: jmp     short loc_99351D
0x993511: inc     edi
0x993512: cmp     edi, [ebp+arg_4]
0x993515: jnb     short unknown_libname_167___unknown_libname_168
0x993517: mov     cl, [eax]
0x993519: mov     [esi], cl
0x99351B: inc     esi
0x99351C: inc     eax
0x99351D: cmp     [eax], bl
0x99351F: jnz     short loc_993511
0x993521: mov     eax, [ebp+arg_14]
0x993524: cmp     eax, ebx
0x993526: jz      short loc_99354F
0x993528: mov     cl, [eax]
0x99352A: cmp     cl, bl
0x99352C: jz      short loc_99354F
0x99352E: cmp     cl, 2Eh ; '.'
0x993531: jz      short loc_99354B
0x993533: inc     edi
0x993534: cmp     edi, [ebp+arg_4]
0x993537: jnb     short unknown_libname_167___unknown_libname_168
0x993539: mov     byte ptr [esi], 2Eh ; '.'
0x99353C: inc     esi
0x99353D: jmp     short loc_99354B
0x99353F: inc     edi
0x993540: cmp     edi, [ebp+arg_4]
0x993543: jnb     short unknown_libname_167___unknown_libname_168
0x993545: mov     cl, [eax]
0x993547: mov     [esi], cl
0x993549: inc     esi
0x99354A: inc     eax
0x99354B: cmp     [eax], bl
0x99354D: jnz     short loc_99353F
0x99354F: inc     edi
0x993550: cmp     edi, [ebp+arg_4]
0x993553: jbe     short loc_993566
