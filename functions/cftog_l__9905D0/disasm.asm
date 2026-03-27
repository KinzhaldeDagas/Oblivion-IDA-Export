0x9905D0: push    ebp
0x9905D1: mov     ebp, esp
0x9905D3: sub     esp, 30h
0x9905D6: mov     eax, ___security_cookie
0x9905DB: xor     eax, ebp
0x9905DD: mov     [ebp+var_4], eax
0x9905E0: mov     eax, [ebp+arg_0]
0x9905E3: push    ebx
0x9905E4: push    esi
0x9905E5: mov     esi, [ebp+arg_4]
0x9905E8: push    edi
0x9905E9: push    16h
0x9905EB: pop     edi
0x9905EC: push    edi; SizeInBytes
0x9905ED: lea     ecx, [ebp+var_1C]
0x9905F0: push    ecx; int
0x9905F1: lea     ecx, [ebp+var_30]
0x9905F4: push    ecx; int
0x9905F5: push    dword ptr [eax+4]; int
0x9905F8: push    dword ptr [eax]; char
0x9905FA: call    __fltout2
0x9905FF: xor     ebx, ebx
0x990601: add     esp, 14h
0x990604: cmp     esi, ebx
0x990606: jnz     short loc_990623
0x990608: call    __errno
0x99060D: push    ebx
0x99060E: push    ebx
0x99060F: push    ebx
0x990610: push    ebx
0x990611: push    ebx
0x990612: mov     [eax], edi
0x990614: call    __invalid_parameter
0x990619: add     esp, 14h
0x99061C: mov     eax, edi
0x99061E: jmp     loc_9906B9
0x990623: mov     ecx, [ebp+arg_8]
0x990626: cmp     ecx, ebx
0x990628: jbe     short loc_990608
0x99062A: mov     eax, [ebp+var_2C]
0x99062D: dec     eax
0x99062E: mov     [ebp+var_20], eax
0x990631: xor     eax, eax
0x990633: cmp     [ebp+var_30], 2Dh ; '-'
0x990637: setz    al
0x99063A: cmp     ecx, 0FFFFFFFFh
0x99063D: lea     edi, [eax+esi]
0x990640: jnz     short loc_990646
0x990642: or      ecx, ecx
0x990644: jmp     short loc_990648
0x990646: sub     ecx, eax
0x990648: lea     eax, [ebp+var_30]
0x99064B: push    eax
0x99064C: push    [ebp+arg_C]
0x99064F: push    ecx
0x990650: push    edi
0x990651: call    __fptostr
0x990656: add     esp, 10h
0x990659: cmp     eax, ebx
0x99065B: jz      short loc_990661
0x99065D: mov     [esi], bl
0x99065F: jmp     short loc_9906B9
0x990661: mov     eax, [ebp+var_2C]
0x990664: dec     eax
0x990665: cmp     [ebp+var_20], eax
0x990668: setl    cl
0x99066B: cmp     eax, 0FFFFFFFCh
0x99066E: jl      short loc_99069D
0x990670: cmp     eax, [ebp+arg_C]
0x990673: jge     short loc_99069D
0x990675: cmp     cl, bl
0x990677: jz      short loc_990683
0x990679: mov     al, [edi]
0x99067B: inc     edi
0x99067C: test    al, al
0x99067E: jnz     short loc_990679
0x990680: mov     [edi-2], bl
0x990683: push    [ebp+arg_14]; struct localeinfo_struct *
0x990686: lea     eax, [ebp+var_30]
0x990689: push    1; char
0x99068B: push    [ebp+arg_C]; int
0x99068E: mov     ecx, esi
0x990690: push    [ebp+arg_8]; int
0x990693: call    __cftof2_l
0x990698: add     esp, 10h
0x99069B: jmp     short loc_9906B9
0x99069D: push    [ebp+arg_14]; struct localeinfo_struct *
0x9906A0: lea     eax, [ebp+var_30]
0x9906A3: push    1; char
0x9906A5: push    eax; int
0x9906A6: push    [ebp+arg_10]; int
0x9906A9: mov     eax, esi
0x9906AB: push    [ebp+arg_C]; int
0x9906AE: push    [ebp+arg_8]; int
0x9906B1: call    __cftoe2_l
0x9906B6: add     esp, 18h
0x9906B9: mov     ecx, [ebp+var_4]
0x9906BC: pop     edi
0x9906BD: pop     esi
0x9906BE: xor     ecx, ebp
0x9906C0: pop     ebx
0x9906C1: call    @__security_check_cookie@4
0x9906C6: leave
0x9906C7: retn
