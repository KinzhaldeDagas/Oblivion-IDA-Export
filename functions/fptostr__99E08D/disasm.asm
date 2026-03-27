0x99E08D: push    ebp
0x99E08E: mov     ebp, esp
0x99E090: mov     ecx, [ebp+arg_C]
0x99E093: push    ebx
0x99E094: push    esi
0x99E095: mov     esi, [ebp+arg_0]
0x99E098: xor     ebx, ebx
0x99E09A: cmp     esi, ebx
0x99E09C: push    edi
0x99E09D: mov     edi, [ecx+0Ch]
0x99E0A0: jnz     short loc_99E0C0
0x99E0A2: call    __errno
0x99E0A7: push    16h
0x99E0A9: pop     esi
0x99E0AA: mov     [eax], esi
0x99E0AC: push    ebx
0x99E0AD: push    ebx
0x99E0AE: push    ebx
0x99E0AF: push    ebx
0x99E0B0: push    ebx
0x99E0B1: call    __invalid_parameter
0x99E0B6: add     esp, 14h
0x99E0B9: mov     eax, esi
0x99E0BB: jmp     loc_99E145
0x99E0C0: cmp     [ebp+arg_4], ebx
0x99E0C3: jbe     short loc_99E0A2
0x99E0C5: mov     edx, [ebp+arg_8]
0x99E0C8: cmp     edx, ebx
0x99E0CA: mov     [esi], bl
0x99E0CC: jle     short loc_99E0D2
0x99E0CE: mov     eax, edx
0x99E0D0: jmp     short loc_99E0D4
0x99E0D2: xor     eax, eax
0x99E0D4: inc     eax
0x99E0D5: cmp     [ebp+arg_4], eax
0x99E0D8: ja      short loc_99E0E8
0x99E0DA: call    __errno
0x99E0DF: push    22h ; '"'
0x99E0E1: pop     ecx
0x99E0E2: mov     [eax], ecx
0x99E0E4: mov     esi, ecx
0x99E0E6: jmp     short loc_99E0AC
0x99E0E8: cmp     edx, ebx
0x99E0EA: mov     byte ptr [esi], 30h ; '0'
0x99E0ED: lea     eax, [esi+1]
0x99E0F0: jle     short loc_99E10C
0x99E0F2: mov     cl, [edi]
0x99E0F4: cmp     cl, bl
0x99E0F6: jz      short loc_99E0FE
0x99E0F8: movsx   ecx, cl
0x99E0FB: inc     edi
0x99E0FC: jmp     short loc_99E101
0x99E0FE: push    30h ; '0'
0x99E100: pop     ecx
0x99E101: mov     [eax], cl
0x99E103: inc     eax
0x99E104: dec     edx
0x99E105: cmp     edx, ebx
0x99E107: jg      short loc_99E0F2
0x99E109: mov     ecx, [ebp+arg_C]
0x99E10C: cmp     edx, ebx
0x99E10E: mov     [eax], bl
0x99E110: jl      short loc_99E124
0x99E112: cmp     byte ptr [edi], 35h ; '5'
0x99E115: jl      short loc_99E124
0x99E117: jmp     short loc_99E11C
0x99E119: mov     byte ptr [eax], 30h ; '0'
0x99E11C: dec     eax
0x99E11D: cmp     byte ptr [eax], 39h ; '9'
0x99E120: jz      short loc_99E119
0x99E122: inc     byte ptr [eax]
0x99E124: cmp     byte ptr [esi], 31h ; '1'
0x99E127: jnz     short loc_99E12E
0x99E129: inc     dword ptr [ecx+4]
0x99E12C: jmp     short loc_99E143
0x99E12E: lea     edi, [esi+1]
0x99E131: push    edi; Str
0x99E132: call    _strlen
0x99E137: inc     eax
0x99E138: push    eax
0x99E139: push    edi
0x99E13A: push    esi
0x99E13B: call    unknown_libname_16
0x99E140: add     esp, 10h
0x99E143: xor     eax, eax
0x99E145: pop     edi
0x99E146: pop     esi
0x99E147: pop     ebx
0x99E148: pop     ebp
0x99E149: retn
