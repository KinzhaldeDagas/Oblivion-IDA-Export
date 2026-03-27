0x99D27A: push    14h
0x99D27C: push    offset stru_B000C8
0x99D281: call    __SEH_prolog4
0x99D286: or      esi, 0FFFFFFFFh
0x99D289: mov     [ebp+var_24], esi
0x99D28C: mov     [ebp+var_20], esi
0x99D28F: mov     eax, [ebp+arg_0]
0x99D292: cmp     eax, 0FFFFFFFEh
0x99D295: jnz     short loc_99D2B3
0x99D297: call    ___doserrno
0x99D29C: and     dword ptr [eax], 0
0x99D29F: call    __errno
0x99D2A4: mov     dword ptr [eax], 9
0x99D2AA: mov     eax, esi
0x99D2AC: mov     edx, esi
0x99D2AE: jmp     loc_99D383
0x99D2B3: xor     edi, edi
0x99D2B5: cmp     eax, edi
0x99D2B7: jl      short loc_99D2C1
0x99D2B9: cmp     eax, uNumber
0x99D2BF: jb      short loc_99D2E2
0x99D2C1: call    ___doserrno
0x99D2C6: mov     [eax], edi
0x99D2C8: call    __errno
0x99D2CD: mov     dword ptr [eax], 9
0x99D2D3: push    edi
0x99D2D4: push    edi
0x99D2D5: push    edi
0x99D2D6: push    edi
0x99D2D7: push    edi
0x99D2D8: call    __invalid_parameter
0x99D2DD: add     esp, 14h
0x99D2E0: jmp     short loc_99D2AA
0x99D2E2: mov     ecx, eax
0x99D2E4: sar     ecx, 5
0x99D2E7: lea     ebx, ds:0BAAAC0h[ecx*4]
0x99D2EE: mov     esi, eax
0x99D2F0: and     esi, 1Fh
0x99D2F3: imul    esi, 28h ; '('
0x99D2F6: mov     ecx, [ebx]
0x99D2F8: movzx   ecx, byte ptr [ecx+esi+4]
0x99D2FD: and     ecx, 1
0x99D300: jnz     short loc_99D328
0x99D302: call    ___doserrno
0x99D307: mov     [eax], edi
0x99D309: call    __errno
0x99D30E: mov     dword ptr [eax], 9
0x99D314: push    edi
0x99D315: push    edi
0x99D316: push    edi
0x99D317: push    edi
0x99D318: push    edi
0x99D319: call    __invalid_parameter
0x99D31E: add     esp, 14h
0x99D321: or      edx, 0FFFFFFFFh
0x99D324: mov     eax, edx
0x99D326: jmp     short loc_99D383
0x99D328: push    eax
0x99D329: call    ___lock_fhandle
0x99D32E: pop     ecx
0x99D32F: mov     [ebp+ms_exc.registration.TryLevel], edi
0x99D332: mov     eax, [ebx]
0x99D334: test    byte ptr [eax+esi+4], 1
0x99D339: jz      short loc_99D357
0x99D33B: push    [ebp+dwMoveMethod]; dwMoveMethod
0x99D33E: push    dword ptr [ebp+arg_4+4]; int
0x99D341: push    dword ptr [ebp+arg_4]; int
0x99D344: push    [ebp+arg_0]; int
0x99D347: call    __lseeki64_nolock
0x99D34C: add     esp, 10h
0x99D34F: mov     [ebp+var_24], eax
0x99D352: mov     [ebp+var_20], edx
0x99D355: jmp     short loc_99D371
0x99D357: call    __errno
0x99D35C: mov     dword ptr [eax], 9
0x99D362: call    ___doserrno
0x99D367: mov     [eax], edi
0x99D369: or      [ebp+var_24], 0FFFFFFFFh
0x99D36D: or      [ebp+var_20], 0FFFFFFFFh
0x99D371: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x99D378: call    __lseeki64___$LN14_10
