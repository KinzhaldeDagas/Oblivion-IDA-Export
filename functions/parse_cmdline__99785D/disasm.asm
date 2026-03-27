0x99785D: push    ebp
0x99785E: mov     ebp, esp
0x997860: push    ecx
0x997861: mov     ecx, [ebp+arg_8]
0x997864: push    ebx
0x997865: xor     eax, eax
0x997867: cmp     [ebp+arg_0], eax
0x99786A: push    esi
0x99786B: mov     [edi], eax
0x99786D: mov     esi, edx
0x99786F: mov     edx, [ebp+arg_4]
0x997872: mov     dword ptr [ecx], 1
0x997878: jz      short loc_997883
0x99787A: mov     ebx, [ebp+arg_0]
0x99787D: add     [ebp+arg_0], 4
0x997881: mov     [ebx], edx
0x997883: mov     [ebp+var_4], eax
0x997886: cmp     byte ptr [esi], 22h ; '"'
0x997889: jnz     short loc_99789B
0x99788B: xor     eax, eax
0x99788D: cmp     [ebp+var_4], eax
0x997890: mov     bl, 22h ; '"'
0x997892: setz    al
0x997895: inc     esi
0x997896: mov     [ebp+var_4], eax
0x997899: jmp     short loc_9978D7
0x99789B: inc     dword ptr [edi]
0x99789D: test    edx, edx
0x99789F: jz      short loc_9978A9
0x9978A1: mov     al, [esi]
0x9978A3: mov     [edx], al
0x9978A5: inc     edx
0x9978A6: mov     [ebp+arg_4], edx
0x9978A9: mov     bl, [esi]
0x9978AB: movzx   eax, bl
0x9978AE: push    eax; unsigned int
0x9978AF: inc     esi
0x9978B0: call    __ismbblead
0x9978B5: test    eax, eax
0x9978B7: pop     ecx
0x9978B8: jz      short loc_9978CD
0x9978BA: inc     dword ptr [edi]
0x9978BC: cmp     [ebp+arg_4], 0
0x9978C0: jz      short loc_9978CC
0x9978C2: mov     ecx, [ebp+arg_4]
0x9978C5: mov     al, [esi]
0x9978C7: inc     [ebp+arg_4]
0x9978CA: mov     [ecx], al
0x9978CC: inc     esi
0x9978CD: test    bl, bl
0x9978CF: mov     edx, [ebp+arg_4]
0x9978D2: mov     ecx, [ebp+arg_8]
0x9978D5: jz      short loc_997909
0x9978D7: cmp     [ebp+var_4], 0
0x9978DB: jnz     short loc_997886
0x9978DD: cmp     bl, 20h ; ' '
0x9978E0: jz      short loc_9978E7
0x9978E2: cmp     bl, 9
0x9978E5: jnz     short loc_997886
0x9978E7: test    edx, edx
0x9978E9: jz      short loc_9978EF
0x9978EB: mov     byte ptr [edx-1], 0
0x9978EF: and     [ebp+var_4], 0
0x9978F3: cmp     byte ptr [esi], 0
0x9978F6: jz      loc_9979E5
0x9978FC: mov     al, [esi]
0x9978FE: cmp     al, 20h ; ' '
0x997900: jz      short loc_997906
0x997902: cmp     al, 9
0x997904: jnz     short loc_99790C
0x997906: inc     esi
0x997907: jmp     short loc_9978FC
0x997909: dec     esi
0x99790A: jmp     short loc_9978EF
0x99790C: cmp     byte ptr [esi], 0
0x99790F: jz      loc_9979E5
0x997915: cmp     [ebp+arg_0], 0
0x997919: jz      short loc_997924
0x99791B: mov     eax, [ebp+arg_0]
0x99791E: add     [ebp+arg_0], 4
0x997922: mov     [eax], edx
0x997924: inc     dword ptr [ecx]
0x997926: xor     ebx, ebx
0x997928: inc     ebx
0x997929: xor     ecx, ecx
0x99792B: jmp     short loc_99792F
0x99792D: inc     esi
0x99792E: inc     ecx
0x99792F: cmp     byte ptr [esi], 5Ch ; '\'
0x997932: jz      short loc_99792D
0x997934: cmp     byte ptr [esi], 22h ; '"'
0x997937: jnz     short loc_99795F
0x997939: test    cl, 1
0x99793C: jnz     short loc_99795D
0x99793E: cmp     [ebp+var_4], 0
0x997942: jz      short loc_997950
0x997944: lea     eax, [esi+1]
0x997947: cmp     byte ptr [eax], 22h ; '"'
0x99794A: jnz     short loc_997950
0x99794C: mov     esi, eax
0x99794E: jmp     short loc_99795D
0x997950: xor     eax, eax
0x997952: xor     ebx, ebx
0x997954: cmp     [ebp+var_4], eax
0x997957: setz    al
0x99795A: mov     [ebp+var_4], eax
0x99795D: shr     ecx, 1
0x99795F: test    ecx, ecx
0x997961: jz      short loc_997975
0x997963: dec     ecx
0x997964: test    edx, edx
0x997966: jz      short loc_99796C
0x997968: mov     byte ptr [edx], 5Ch ; '\'
0x99796B: inc     edx
0x99796C: inc     dword ptr [edi]
0x99796E: test    ecx, ecx
0x997970: jnz     short loc_997963
0x997972: mov     [ebp+arg_4], edx
0x997975: mov     al, [esi]
0x997977: test    al, al
0x997979: jz      short loc_9979D0
0x99797B: cmp     [ebp+var_4], 0
0x99797F: jnz     short loc_997989
0x997981: cmp     al, 20h ; ' '
0x997983: jz      short loc_9979D0
0x997985: cmp     al, 9
0x997987: jz      short loc_9979D0
0x997989: test    ebx, ebx
0x99798B: jz      short loc_9979CA
0x99798D: test    edx, edx
0x99798F: movsx   eax, al
0x997992: push    eax; unsigned int
0x997993: jz      short loc_9979B8
0x997995: call    __ismbblead
0x99799A: test    eax, eax
0x99799C: pop     ecx
0x99799D: jz      short loc_9979AC
0x99799F: mov     al, [esi]
0x9979A1: mov     ecx, [ebp+arg_4]
0x9979A4: inc     [ebp+arg_4]
0x9979A7: mov     [ecx], al
0x9979A9: inc     esi
0x9979AA: inc     dword ptr [edi]
0x9979AC: mov     ecx, [ebp+arg_4]
0x9979AF: mov     al, [esi]
0x9979B1: inc     [ebp+arg_4]
0x9979B4: mov     [ecx], al
0x9979B6: jmp     short loc_9979C5
0x9979B8: call    __ismbblead
0x9979BD: test    eax, eax
0x9979BF: pop     ecx
0x9979C0: jz      short loc_9979C5
0x9979C2: inc     esi
0x9979C3: inc     dword ptr [edi]
0x9979C5: inc     dword ptr [edi]
0x9979C7: mov     edx, [ebp+arg_4]
0x9979CA: inc     esi
0x9979CB: jmp     loc_997926
0x9979D0: test    edx, edx
0x9979D2: jz      short loc_9979DB
0x9979D4: mov     byte ptr [edx], 0
0x9979D7: inc     edx
0x9979D8: mov     [ebp+arg_4], edx
0x9979DB: inc     dword ptr [edi]
0x9979DD: mov     ecx, [ebp+arg_8]
0x9979E0: jmp     loc_9978F3
0x9979E5: mov     eax, [ebp+arg_0]
0x9979E8: test    eax, eax
0x9979EA: pop     esi
0x9979EB: pop     ebx
0x9979EC: jz      short loc_9979F1
0x9979EE: and     dword ptr [eax], 0
0x9979F1: inc     dword ptr [ecx]
0x9979F3: leave
0x9979F4: retn
