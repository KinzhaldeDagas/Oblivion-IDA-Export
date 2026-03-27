0x52F480: push    ebp
0x52F481: mov     ebp, esp
0x52F483: push    ecx
0x52F484: mov     eax, ds:0B30AACh
0x52F489: xor     eax, ebp
0x52F48B: mov     [ebp+var_4], eax
0x52F48E: push    ebx
0x52F48F: push    esi
0x52F490: push    edi
0x52F491: mov     edi, [ebp+arg_0]
0x52F494: mov     eax, edi
0x52F496: mov     ebx, ecx
0x52F498: lea     edx, [eax+1]
0x52F49B: jmp     short loc_52F4A0
0x52F49D: align 10h
0x52F4A0: mov     cl, [eax]
0x52F4A2: add     eax, 1
0x52F4A5: test    cl, cl
0x52F4A7: jnz     short loc_52F4A0
0x52F4A9: sub     eax, edx
0x52F4AB: add     eax, 1
0x52F4AE: call    __alloca?
0x52F4B3: mov     esi, esp
0x52F4B5: mov     edx, esi
0x52F4B7: mov     eax, edi
0x52F4B9: sub     edx, edi
0x52F4BB: jmp     short loc_52F4C0
0x52F4BD: align 10h
0x52F4C0: mov     cl, [eax]
0x52F4C2: mov     [edx+eax], cl
0x52F4C5: add     eax, 1
0x52F4C8: test    cl, cl
0x52F4CA: jnz     short loc_52F4C0
0x52F4CC: test    esi, esi
0x52F4CE: lea     edi, [ebx+34h]
0x52F4D1: jz      short loc_52F4E5
0x52F4D3: mov     eax, [edi]
0x52F4D5: test    eax, eax
0x52F4D7: jz      short loc_52F4E5
0x52F4D9: push    esi; Str2
0x52F4DA: push    eax; Str1
0x52F4DB: call    __strcmp
0x52F4E0: add     esp, 8
0x52F4E3: jmp     short loc_52F4F0
0x52F4E5: xor     eax, eax
0x52F4E7: test    esi, esi
0x52F4E9: setz    al
0x52F4EC: lea     eax, [eax+eax-1]
0x52F4F0: test    eax, eax
0x52F4F2: jnz     short loc_52F4F8
0x52F4F4: xor     al, al
0x52F4F6: jmp     short loc_52F504
0x52F4F8: push    0; a3
0x52F4FA: push    esi; a2
0x52F4FB: mov     ecx, edi; this
0x52F4FD: call    BSStringT_Set
0x52F502: mov     al, 1
0x52F504: lea     esp, [ebp-10h]
0x52F507: pop     edi
0x52F508: pop     esi
0x52F509: pop     ebx
0x52F50A: mov     ecx, [ebp+var_4]
0x52F50D: xor     ecx, ebp
0x52F50F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x52F514: mov     esp, ebp
0x52F516: pop     ebp
0x52F517: retn    4
