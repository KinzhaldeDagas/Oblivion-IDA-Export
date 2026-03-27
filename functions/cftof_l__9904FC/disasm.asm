0x9904FC: push    ebp
0x9904FD: mov     ebp, esp
0x9904FF: sub     esp, 2Ch
0x990502: mov     eax, ___security_cookie
0x990507: xor     eax, ebp
0x990509: mov     [ebp+var_4], eax
0x99050C: mov     eax, [ebp+arg_0]
0x99050F: push    ebx
0x990510: push    esi
0x990511: push    edi
0x990512: mov     edi, [ebp+arg_4]
0x990515: push    16h
0x990517: pop     esi
0x990518: push    esi; SizeInBytes
0x990519: lea     ecx, [ebp+var_1C]
0x99051C: push    ecx; int
0x99051D: lea     ecx, [ebp+var_2C]
0x990520: push    ecx; int
0x990521: push    dword ptr [eax+4]; int
0x990524: push    dword ptr [eax]; char
0x990526: call    __fltout2
0x99052B: xor     ebx, ebx
0x99052D: add     esp, 14h
0x990530: cmp     edi, ebx
0x990532: jnz     short loc_99054C
0x990534: call    __errno
0x990539: push    ebx
0x99053A: push    ebx
0x99053B: push    ebx
0x99053C: push    ebx
0x99053D: push    ebx
0x99053E: mov     [eax], esi
0x990540: call    __invalid_parameter
0x990545: add     esp, 14h
0x990548: mov     eax, esi
0x99054A: jmp     short loc_9905A6
0x99054C: mov     eax, [ebp+arg_8]
0x99054F: cmp     eax, ebx
0x990551: jbe     short loc_990534
0x990553: cmp     eax, 0FFFFFFFFh
0x990556: jnz     short loc_99055C
0x990558: or      eax, eax
0x99055A: jmp     short loc_990567
0x99055C: xor     ecx, ecx
0x99055E: cmp     [ebp+var_2C], 2Dh ; '-'
0x990562: setz    cl
0x990565: sub     eax, ecx
0x990567: mov     esi, [ebp+arg_C]
0x99056A: lea     ecx, [ebp+var_2C]
0x99056D: push    ecx
0x99056E: mov     ecx, [ebp+var_28]
0x990571: add     ecx, esi
0x990573: push    ecx
0x990574: push    eax
0x990575: xor     eax, eax
0x990577: cmp     [ebp+var_2C], 2Dh ; '-'
0x99057B: setz    al
0x99057E: add     eax, edi
0x990580: push    eax
0x990581: call    __fptostr
0x990586: add     esp, 10h
0x990589: cmp     eax, ebx
0x99058B: jz      short loc_990591
0x99058D: mov     [edi], bl
0x99058F: jmp     short loc_9905A6
0x990591: push    [ebp+arg_10]; struct localeinfo_struct *
0x990594: lea     eax, [ebp+var_2C]
0x990597: push    ebx; char
0x990598: push    esi; int
0x990599: push    [ebp+arg_8]; int
0x99059C: mov     ecx, edi
0x99059E: call    __cftof2_l
0x9905A3: add     esp, 10h
0x9905A6: mov     ecx, [ebp+var_4]
0x9905A9: pop     edi
0x9905AA: pop     esi
0x9905AB: xor     ecx, ebp
0x9905AD: pop     ebx
0x9905AE: call    @__security_check_cookie@4
0x9905B3: leave
0x9905B4: retn
