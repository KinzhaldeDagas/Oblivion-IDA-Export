0x9966A5: cmp     dword ptr [ebp-48h], 0
0x9966A9: jz      loc_9967AA
0x9966AF: cmp     byte ptr [ebp+3], 0
0x9966B3: jnz     loc_996785
0x9966B9: cmp     dword ptr [ebp-20h], 78h ; 'x'
0x9966BD: jz      short loc_99670E
0x9966BF: cmp     dword ptr [ebp-20h], 70h ; 'p'
0x9966C3: jz      short loc_99670E
0x9966C5: movzx   eax, bl
0x9966C8: push    eax; C
0x9966C9: call    _isdigit
0x9966CE: test    eax, eax
0x9966D0: pop     ecx
0x9966D1: jz      loc_996772
0x9966D7: cmp     dword ptr [ebp-20h], 6Fh ; 'o'
0x9966DB: jnz     short loc_9966F8
0x9966DD: cmp     ebx, 38h ; '8'
0x9966E0: jge     loc_996772
0x9966E6: mov     eax, [ebp-30h]
0x9966E9: mov     esi, [ebp-34h]
0x9966EC: shld    eax, esi, 3
0x9966F0: shl     esi, 3
0x9966F3: mov     [ebp-30h], eax
0x9966F6: jmp     short loc_996743
0x9966F8: push    0
0x9966FA: push    0Ah
0x9966FC: push    dword ptr [ebp-30h]
0x9966FF: push    dword ptr [ebp-34h]
0x996702: call    __allmul
0x996707: mov     esi, eax
0x996709: mov     [ebp-30h], edx
0x99670C: jmp     short loc_996743
0x99670E: movzx   edi, bl
0x996711: push    edi; C
0x996712: call    _isxdigit
0x996717: test    eax, eax
0x996719: pop     ecx
0x99671A: jz      short loc_996772
0x99671C: mov     eax, [ebp-30h]
0x99671F: mov     esi, [ebp-34h]
0x996722: shld    eax, esi, 4
0x996726: push    edi; C
0x996727: shl     esi, 4
0x99672A: mov     [ebp-30h], eax
0x99672D: call    _isdigit
0x996732: test    eax, eax
0x996734: pop     ecx
0x996735: movsx   ebx, bl
0x996738: jnz     short loc_996740
0x99673A: and     ebx, 0FFFFFFDFh
0x99673D: sub     ebx, 7
0x996740: mov     [ebp-4], ebx
0x996743: inc     dword ptr [ebp-1Ch]
0x996746: lea     eax, [ebx-30h]
0x996749: cdq
0x99674A: add     esi, eax
0x99674C: adc     [ebp-30h], edx
0x99674F: cmp     dword ptr [ebp-2Ch], 0
0x996753: mov     [ebp-34h], esi
0x996756: jz      short loc_99675D
0x996758: dec     dword ptr [ebp-0Ch]
0x99675B: jz      short loc_996785
0x99675D: mov     edx, [ebp-14h]
0x996760: inc     dword ptr [ebp+4]
0x996763: call    __inc
0x996768: mov     ebx, eax
0x99676A: mov     [ebp-4], ebx
0x99676D: jmp     loc_9966B9
0x996772: dec     dword ptr [ebp+4]
0x996775: cmp     ebx, 0FFFFFFFFh
0x996778: jz      short loc_996785
0x99677A: push    dword ptr [ebp-14h]; File
0x99677D: push    ebx; Ch
0x99677E: call    __ungetc_nolock
0x996783: pop     ecx
0x996784: pop     ecx
0x996785: cmp     byte ptr [ebp-17h], 0
0x996789: mov     edi, [ebp-54h]
0x99678C: jz      loc_99684D
0x996792: mov     eax, [ebp-34h]
0x996795: mov     ecx, [ebp-30h]
0x996798: neg     eax
0x99679A: adc     ecx, 0
0x99679D: neg     ecx
0x99679F: mov     [ebp-34h], eax
0x9967A2: mov     [ebp-30h], ecx
0x9967A5: jmp     loc_99684D
0x9967AA: cmp     byte ptr [ebp+3], 0
0x9967AE: mov     edi, [ebp-54h]
0x9967B1: jnz     loc_996845
0x9967B7: cmp     dword ptr [ebp-20h], 78h ; 'x'
0x9967BB: jz      short loc_9967E6
0x9967BD: cmp     dword ptr [ebp-20h], 70h ; 'p'
0x9967C1: jz      short loc_9967E6
0x9967C3: movzx   eax, bl
0x9967C6: push    eax; C
0x9967C7: call    _isdigit
0x9967CC: test    eax, eax
0x9967CE: pop     ecx
0x9967CF: jz      short loc_996832
0x9967D1: cmp     dword ptr [ebp-20h], 6Fh ; 'o'
0x9967D5: jnz     short loc_9967E1
0x9967D7: cmp     ebx, 38h ; '8'
0x9967DA: jge     short loc_996832
0x9967DC: shl     edi, 3
0x9967DF: jmp     short loc_99680E
0x9967E1: imul    edi, 0Ah
0x9967E4: jmp     short loc_99680E
0x9967E6: movzx   esi, bl
0x9967E9: push    esi; C
0x9967EA: call    _isxdigit
0x9967EF: test    eax, eax
0x9967F1: pop     ecx
0x9967F2: jz      short loc_996832
0x9967F4: push    esi; C
0x9967F5: shl     edi, 4
0x9967F8: call    _isdigit
0x9967FD: test    eax, eax
0x9967FF: pop     ecx
0x996800: movsx   ebx, bl
0x996803: jnz     short loc_99680B
0x996805: and     ebx, 0FFFFFFDFh
0x996808: sub     ebx, 7
0x99680B: mov     [ebp-4], ebx
0x99680E: inc     dword ptr [ebp-1Ch]
0x996811: cmp     dword ptr [ebp-2Ch], 0
0x996815: lea     edi, [edi+ebx-30h]
0x996819: jz      short loc_996820
0x99681B: dec     dword ptr [ebp-0Ch]
0x99681E: jz      short loc_996845
0x996820: mov     edx, [ebp-14h]
0x996823: inc     dword ptr [ebp+4]
0x996826: call    __inc
0x99682B: mov     ebx, eax
0x99682D: mov     [ebp-4], ebx
0x996830: jmp     short loc_9967B7
0x996832: dec     dword ptr [ebp+4]
0x996835: cmp     ebx, 0FFFFFFFFh
0x996838: jz      short loc_996845
0x99683A: push    dword ptr [ebp-14h]; File
0x99683D: push    ebx; Ch
0x99683E: call    __ungetc_nolock
0x996843: pop     ecx
0x996844: pop     ecx
0x996845: cmp     byte ptr [ebp-17h], 0
0x996849: jz      short loc_99684D
0x99684B: neg     edi
0x99684D: cmp     dword ptr [ebp-20h], 46h ; 'F'
0x996851: jnz     short loc_996857
0x996853: and     dword ptr [ebp-1Ch], 0
0x996857: cmp     dword ptr [ebp-1Ch], 0
0x99685B: jz      __input_l___$error_return$25524
0x996861: cmp     byte ptr [ebp-0Dh], 0
0x996865: jnz     short loc_99688D
0x996867: inc     dword ptr [ebp-3Ch]
0x99686A: mov     esi, [ebp-38h]
