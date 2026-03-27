0x98AB28: push    ebp
0x98AB29: lea     ebp, [esp-74h]
0x98AB2D: sub     esp, 98h
0x98AB33: mov     eax, ___security_cookie
0x98AB38: xor     eax, ebp
0x98AB3A: mov     [ebp+74h+var_4], eax
0x98AB3D: mov     eax, [ebp+74h+arg_0]
0x98AB40: push    ebx
0x98AB41: push    esi
0x98AB42: xor     ebx, ebx
0x98AB44: cmp     eax, ebx
0x98AB46: mov     esi, edx
0x98AB48: push    edi
0x98AB49: mov     [ebp+74h+var_98], esi
0x98AB4C: jz      short loc_98AB6A
0x98AB4E: cmp     ecx, ebx
0x98AB50: jz      short loc_98AB5E
0x98AB52: push    eax; int
0x98AB53: call    __setlocale_set_cat
0x98AB58: pop     ecx
0x98AB59: jmp     loc_98ACE4
0x98AB5E: shl     eax, 4
0x98AB61: mov     eax, [eax+esi+48h]
0x98AB65: jmp     loc_98ACE4
0x98AB6A: cmp     ecx, ebx
0x98AB6C: mov     [ebp+74h+var_90], 1
0x98AB73: mov     [ebp+74h+var_8C], ebx
0x98AB76: jz      loc_98ACDF
0x98AB7C: cmp     byte ptr [ecx], 4Ch ; 'L'
0x98AB7F: jnz     loc_98AC83
0x98AB85: cmp     byte ptr [ecx+1], 43h ; 'C'
0x98AB89: jnz     loc_98AC83
0x98AB8F: cmp     byte ptr [ecx+2], 5Fh ; '_'
0x98AB93: jnz     loc_98AC83
0x98AB99: mov     edi, ecx
0x98AB9B: push    offset asc_AA492C
0x98ABA0: push    edi; Str
0x98ABA1: call    _strpbrk
0x98ABA6: mov     ebx, eax
0x98ABA8: test    ebx, ebx
0x98ABAA: pop     ecx
0x98ABAB: pop     ecx
0x98ABAC: jz      loc_98AC7F
0x98ABB2: sub     eax, edi
0x98ABB4: mov     [ebp+74h+var_90], eax
0x98ABB7: jz      loc_98AC7F
0x98ABBD: cmp     byte ptr [ebx], 3Bh ; ';'
0x98ABC0: jz      loc_98AC7F
0x98ABC6: mov     [ebp+74h+var_94], 1
0x98ABCD: mov     esi, offset off_AA486C
0x98ABD2: jmp     short loc_98ABD7
0x98ABD4: mov     eax, [ebp+74h+var_90]
0x98ABD7: push    eax; MaxCount
0x98ABD8: push    edi; Str2
0x98ABD9: push    dword ptr [esi]; Str1
0x98ABDB: call    _strncmp
0x98ABE0: add     esp, 0Ch
0x98ABE3: test    eax, eax
0x98ABE5: jnz     short loc_98ABF4
0x98ABE7: push    dword ptr [esi]; Str
0x98ABE9: call    _strlen
0x98ABEE: cmp     [ebp+74h+var_90], eax
0x98ABF1: pop     ecx
0x98ABF2: jz      short loc_98AC02
0x98ABF4: inc     [ebp+74h+var_94]
0x98ABF7: add     esi, 0Ch
0x98ABFA: cmp     esi, offset off_AA489C
0x98AC00: jle     short loc_98ABD4
0x98AC02: inc     ebx
0x98AC03: push    offset asc_A3206C
0x98AC08: push    ebx; Str
0x98AC09: call    _strcspn
0x98AC0E: mov     edi, eax
0x98AC10: xor     esi, esi
0x98AC12: cmp     edi, esi
0x98AC14: pop     ecx
0x98AC15: pop     ecx
0x98AC16: jnz     short loc_98AC1D
0x98AC18: cmp     byte ptr [ebx], 3Bh ; ';'
0x98AC1B: jnz     short loc_98AC7F
0x98AC1D: cmp     [ebp+74h+var_94], 5
0x98AC21: jg      short loc_98AC62
0x98AC23: push    edi; Src
0x98AC24: push    ebx; Src
0x98AC25: lea     eax, [ebp+74h+Dst]
0x98AC28: push    83h ; 'ƒ'; SizeInBytes
0x98AC2D: push    eax; Dst
0x98AC2E: call    _strncpy_s
0x98AC33: add     esp, 10h
0x98AC36: test    eax, eax
0x98AC38: jz      short loc_98AC47
0x98AC3A: push    esi
0x98AC3B: push    esi
0x98AC3C: push    esi
0x98AC3D: push    esi
0x98AC3E: push    esi
0x98AC3F: call    __invoke_watson
0x98AC44: add     esp, 14h
0x98AC47: push    [ebp+74h+var_94]; int
0x98AC4A: mov     esi, [ebp+74h+var_98]
0x98AC4D: lea     ecx, [ebp+74h+Dst]; Str
0x98AC50: mov     [ebp+edi+74h+Dst], 0
0x98AC55: call    __setlocale_set_cat
0x98AC5A: test    eax, eax
0x98AC5C: pop     ecx
0x98AC5D: jz      short loc_98AC62
0x98AC5F: inc     [ebp+74h+var_8C]
0x98AC62: add     edi, ebx
0x98AC64: cmp     byte ptr [edi], 0
0x98AC67: jz      short loc_98AC73
0x98AC69: inc     edi
0x98AC6A: cmp     byte ptr [edi], 0
0x98AC6D: jnz     loc_98AB9B
0x98AC73: xor     eax, eax
0x98AC75: cmp     [ebp+74h+var_8C], eax
0x98AC78: jz      short loc_98ACE4
0x98AC7A: mov     esi, [ebp+74h+var_98]
0x98AC7D: jmp     short loc_98ACDF
0x98AC7F: xor     eax, eax
0x98AC81: jmp     short loc_98ACE4
0x98AC83: push    ebx; int
0x98AC84: push    ebx; int
0x98AC85: push    ebx; int
0x98AC86: push    83h ; 'ƒ'; SizeInBytes
0x98AC8B: lea     eax, [ebp+74h+Dst]
0x98AC8E: push    eax; int
0x98AC8F: push    ecx; Str
0x98AC90: call    __expandlocale
0x98AC95: add     esp, 18h
0x98AC98: cmp     eax, ebx
0x98AC9A: jz      short loc_98ACE4
0x98AC9C: lea     edi, [esi+48h]
0x98AC9F: test    ebx, ebx
0x98ACA1: jz      short loc_98ACCA
0x98ACA3: push    dword ptr [edi]; Str2
0x98ACA5: lea     eax, [ebp+74h+Dst]
0x98ACA8: push    eax; Str1
0x98ACA9: call    _strcmp
0x98ACAE: test    eax, eax
0x98ACB0: pop     ecx
0x98ACB1: pop     ecx
0x98ACB2: jz      short loc_98ACC7
0x98ACB4: push    ebx; int
0x98ACB5: lea     ecx, [ebp+74h+Dst]; Str
0x98ACB8: call    __setlocale_set_cat
0x98ACBD: test    eax, eax
0x98ACBF: pop     ecx
0x98ACC0: jnz     short loc_98ACC7
0x98ACC2: and     [ebp+74h+var_90], eax
0x98ACC5: jmp     short loc_98ACCA
0x98ACC7: inc     [ebp+74h+var_8C]
0x98ACCA: inc     ebx
0x98ACCB: add     edi, 10h
0x98ACCE: cmp     ebx, 5
0x98ACD1: jle     short loc_98AC9F
0x98ACD3: xor     eax, eax
0x98ACD5: cmp     [ebp+74h+var_90], eax
0x98ACD8: jnz     short loc_98ACDF
0x98ACDA: cmp     [ebp+74h+var_8C], eax
0x98ACDD: jz      short loc_98ACE4
0x98ACDF: call    __setlocale_get_all
0x98ACE4: mov     ecx, [ebp+74h+var_4]
0x98ACE7: pop     edi
0x98ACE8: pop     esi
0x98ACE9: xor     ecx, ebp
0x98ACEB: pop     ebx
0x98ACEC: call    @__security_check_cookie@4
0x98ACF1: add     ebp, 74h ; 't'
0x98ACF4: leave
0x98ACF5: retn
