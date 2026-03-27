0x998D15: push    10h
0x998D17: push    offset stru_AFFFC8
0x998D1C: call    __SEH_prolog4
0x998D21: mov     eax, [ebp+arg_0]
0x998D24: cmp     eax, 0FFFFFFFEh
0x998D27: jnz     short loc_998D44
0x998D29: call    ___doserrno
0x998D2E: and     dword ptr [eax], 0
0x998D31: call    __errno
0x998D36: mov     dword ptr [eax], 9
0x998D3C: or      eax, 0FFFFFFFFh
0x998D3F: jmp     loc_998DE1
0x998D44: xor     edi, edi
0x998D46: cmp     eax, edi
0x998D48: jl      short loc_998D52
0x998D4A: cmp     eax, uNumber
0x998D50: jb      short loc_998D73
0x998D52: call    ___doserrno
0x998D57: mov     [eax], edi
0x998D59: call    __errno
0x998D5E: mov     dword ptr [eax], 9
0x998D64: push    edi
0x998D65: push    edi
0x998D66: push    edi
0x998D67: push    edi
0x998D68: push    edi
0x998D69: call    __invalid_parameter
0x998D6E: add     esp, 14h
0x998D71: jmp     short loc_998D3C
0x998D73: mov     ecx, eax
0x998D75: sar     ecx, 5
0x998D78: lea     ebx, ds:0BAAAC0h[ecx*4]
0x998D7F: mov     esi, eax
0x998D81: and     esi, 1Fh
0x998D84: imul    esi, 28h ; '('
0x998D87: mov     ecx, [ebx]
0x998D89: movzx   ecx, byte ptr [ecx+esi+4]
0x998D8E: and     ecx, 1
0x998D91: jz      short loc_998D52
0x998D93: push    eax
0x998D94: call    ___lock_fhandle
0x998D99: pop     ecx
0x998D9A: mov     [ebp+ms_exc.registration.TryLevel], edi
0x998D9D: mov     eax, [ebx]
0x998D9F: test    byte ptr [eax+esi+4], 1
0x998DA4: jz      short loc_998DBC
0x998DA6: push    [ebp+nNumberOfBytesToWrite]; nNumberOfBytesToWrite
0x998DA9: push    [ebp+arg_4]; int
0x998DAC: push    [ebp+arg_0]; int
0x998DAF: call    __write_nolock
0x998DB4: add     esp, 0Ch
0x998DB7: mov     [ebp+var_1C], eax
0x998DBA: jmp     short loc_998DD2
0x998DBC: call    __errno
0x998DC1: mov     dword ptr [eax], 9
0x998DC7: call    ___doserrno
0x998DCC: mov     [eax], edi
0x998DCE: or      [ebp+var_1C], 0FFFFFFFFh
0x998DD2: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x998DD9: call    loc_998DE7
0x998DDE: mov     eax, [ebp+var_1C]
0x998DE1: call    __SEH_epilog4
0x998DE6: retn
0x998DE7: push    [ebp+arg_0]
0x998DEA: call    __unlock_fhandle
0x998DEF: pop     ecx
0x998DF0: retn
