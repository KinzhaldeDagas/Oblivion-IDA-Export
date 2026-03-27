0x98EC73: push    10h
0x98EC75: push    offset stru_AFFEE8
0x98EC7A: call    __SEH_prolog4
0x98EC7F: mov     eax, [ebp+arg_0]
0x98EC82: cmp     eax, 0FFFFFFFEh
0x98EC85: jnz     short loc_98ECA2
0x98EC87: call    ___doserrno
0x98EC8C: and     dword ptr [eax], 0
0x98EC8F: call    __errno
0x98EC94: mov     dword ptr [eax], 9
0x98EC9A: or      eax, 0FFFFFFFFh
0x98EC9D: jmp     loc_98ED30
0x98ECA2: xor     edi, edi
0x98ECA4: cmp     eax, edi
0x98ECA6: jl      short loc_98ECB0
0x98ECA8: cmp     eax, uNumber
0x98ECAE: jb      short loc_98ECD1
0x98ECB0: call    ___doserrno
0x98ECB5: mov     [eax], edi
0x98ECB7: call    __errno
0x98ECBC: mov     dword ptr [eax], 9
0x98ECC2: push    edi
0x98ECC3: push    edi
0x98ECC4: push    edi
0x98ECC5: push    edi
0x98ECC6: push    edi
0x98ECC7: call    __invalid_parameter
0x98ECCC: add     esp, 14h
0x98ECCF: jmp     short loc_98EC9A
0x98ECD1: mov     ecx, eax
0x98ECD3: sar     ecx, 5
0x98ECD6: lea     ebx, ds:0BAAAC0h[ecx*4]
0x98ECDD: mov     esi, eax
0x98ECDF: and     esi, 1Fh
0x98ECE2: imul    esi, 28h ; '('
0x98ECE5: mov     ecx, [ebx]
0x98ECE7: movzx   ecx, byte ptr [ecx+esi+4]
0x98ECEC: and     ecx, 1
0x98ECEF: jz      short loc_98ECB0
0x98ECF1: push    eax
0x98ECF2: call    ___lock_fhandle
0x98ECF7: pop     ecx
0x98ECF8: mov     [ebp+ms_exc.registration.TryLevel], edi
0x98ECFB: mov     eax, [ebx]
0x98ECFD: test    byte ptr [eax+esi+4], 1
0x98ED02: jz      short loc_98ED12
0x98ED04: push    [ebp+arg_0]
0x98ED07: call    __close_nolock
0x98ED0C: pop     ecx
0x98ED0D: mov     [ebp+var_1C], eax
0x98ED10: jmp     short loc_98ED21
0x98ED12: call    __errno
0x98ED17: mov     dword ptr [eax], 9
0x98ED1D: or      [ebp+var_1C], 0FFFFFFFFh
0x98ED21: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x98ED28: call    __close___$LN14_6
