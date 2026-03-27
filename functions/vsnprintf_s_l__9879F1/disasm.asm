0x9879F1: push    ebp
0x9879F2: mov     ebp, esp
0x9879F4: push    ecx
0x9879F5: push    ebx
0x9879F6: xor     ebx, ebx
0x9879F8: cmp     [ebp+Format], ebx
0x9879FB: jnz     short loc_987A1D
0x9879FD: call    __errno
0x987A02: push    ebx
0x987A03: push    ebx
0x987A04: push    ebx
0x987A05: push    ebx
0x987A06: push    ebx
0x987A07: mov     dword ptr [eax], 16h
0x987A0D: call    __invalid_parameter
0x987A12: add     esp, 14h
0x987A15: or      eax, 0FFFFFFFFh
0x987A18: jmp     loc_987AF3
0x987A1D: cmp     [ebp+MaxCount], ebx
0x987A20: push    esi
0x987A21: mov     esi, [ebp+DstBuf]
0x987A24: push    edi
0x987A25: jnz     short loc_987A37
0x987A27: cmp     esi, ebx
0x987A29: jnz     short loc_987A3B
0x987A2B: cmp     [ebp+DstSize], ebx
0x987A2E: jnz     short loc_987A42
0x987A30: xor     eax, eax
0x987A32: jmp     loc_987AF1
0x987A37: cmp     esi, ebx
0x987A39: jz      short loc_987A42
0x987A3B: mov     edi, [ebp+DstSize]
0x987A3E: cmp     edi, ebx
0x987A40: ja      short loc_987A52
0x987A42: call    __errno
0x987A47: mov     dword ptr [eax], 16h
0x987A4D: jmp     loc_987AE1
0x987A52: call    __errno
0x987A57: cmp     edi, [ebp+MaxCount]
0x987A5A: push    [ebp+ArgList]
0x987A5D: push    [ebp+Locale]
0x987A60: push    [ebp+Format]
0x987A63: jbe     short loc_987A92
0x987A65: mov     edi, [eax]
0x987A67: mov     eax, [ebp+MaxCount]
0x987A6A: inc     eax
0x987A6B: push    eax
0x987A6C: push    esi
0x987A6D: push    offset __output_s_l
0x987A72: call    __vsnprintf_helper
0x987A77: add     esp, 18h
0x987A7A: cmp     eax, 0FFFFFFFEh
0x987A7D: jnz     short loc_987ACB
0x987A7F: call    __errno
0x987A84: cmp     dword ptr [eax], 22h ; '"'
0x987A87: jnz     short loc_987AEE
0x987A89: call    __errno
0x987A8E: mov     [eax], edi
0x987A90: jmp     short loc_987AEE
0x987A92: mov     eax, [eax]
0x987A94: push    edi
0x987A95: push    esi
0x987A96: push    offset __output_s_l
0x987A9B: mov     [ebp+var_4], eax
0x987A9E: call    __vsnprintf_helper
0x987AA3: add     esp, 18h
0x987AA6: cmp     eax, 0FFFFFFFEh
0x987AA9: mov     [esi+edi-1], bl
0x987AAD: jnz     short loc_987ACB
0x987AAF: cmp     [ebp+MaxCount], 0FFFFFFFFh
0x987AB3: jnz     short loc_987ACF
0x987AB5: call    __errno
0x987ABA: cmp     dword ptr [eax], 22h ; '"'
0x987ABD: jnz     short loc_987AEE
0x987ABF: call    __errno
0x987AC4: mov     ecx, [ebp+var_4]
0x987AC7: mov     [eax], ecx
0x987AC9: jmp     short loc_987AEE
0x987ACB: cmp     eax, ebx
0x987ACD: jge     short loc_987AF1
0x987ACF: cmp     eax, 0FFFFFFFEh
0x987AD2: mov     [esi], bl
0x987AD4: jnz     short loc_987AEE
0x987AD6: call    __errno
0x987ADB: mov     dword ptr [eax], 22h ; '"'
0x987AE1: push    ebx
0x987AE2: push    ebx
0x987AE3: push    ebx
0x987AE4: push    ebx
0x987AE5: push    ebx
0x987AE6: call    __invalid_parameter
0x987AEB: add     esp, 14h
0x987AEE: or      eax, 0FFFFFFFFh
0x987AF1: pop     edi
0x987AF2: pop     esi
0x987AF3: pop     ebx
0x987AF4: leave
0x987AF5: retn
