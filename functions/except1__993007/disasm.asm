0x993007: push    ebp
0x993008: mov     ebp, esp
0x99300A: and     esp, 0FFFFFFF0h
0x99300D: sub     esp, 80h
0x993013: mov     eax, ___security_cookie
0x993018: xor     eax, esp
0x99301A: mov     [esp+80h+var_4], eax
0x99301E: push    [ebp+arg_18]
0x993021: lea     eax, [ebp+arg_10]
0x993024: push    eax
0x993025: push    [ebp+dwExceptionCode]
0x993028: call    __handle_exc
0x99302D: add     esp, 0Ch
0x993030: test    eax, eax
0x993032: jnz     short loc_993059
0x993034: and     [esp+80h+var_40], 0FFFFFFFEh
0x993039: push    eax; int
0x99303A: lea     eax, [ebp+arg_10]
0x99303D: push    eax; int
0x99303E: lea     eax, [ebp+arg_8]
0x993041: push    eax; int
0x993042: push    [ebp+arg_4]; int
0x993045: lea     eax, [ebp+arg_18]
0x993048: push    [ebp+dwExceptionCode]; int
0x99304B: push    eax; int
0x99304C: lea     eax, [esp+98h+Arguments]
0x993050: push    eax; Arguments
0x993051: call    __raise_exc_ex
0x993056: add     esp, 1Ch
0x993059: push    [ebp+dwExceptionCode]
0x99305C: call    __errcode
0x993061: add     esp, 4
0x993064: cmp     dword_B320E8, 0
0x99306B: jnz     short loc_993098
0x99306D: test    eax, eax
0x99306F: jz      short loc_993098
0x993071: push    [ebp+arg_18]; int
0x993074: fld     qword ptr [ebp+arg_10]
0x993077: sub     esp, 18h
0x99307A: fstp    [esp+9Ch+var_8C]; double
0x99307E: fldz
0x993080: fstp    [esp+9Ch+var_94]; int
0x993084: fld     qword ptr [ebp+arg_8]
0x993087: fstp    [esp+9Ch+var_9C]; int
0x99308A: push    [ebp+arg_4]; int
0x99308D: push    eax; int
0x99308E: call    __umatherr
0x993093: add     esp, 24h
0x993096: jmp     short loc_9930B2
0x993098: push    eax
0x993099: call    unknown_libname_166
0x99309E: mov     [esp+84h+var_84], 0FFFFh
0x9930A5: push    [ebp+arg_18]
0x9930A8: call    __ctrlfp
0x9930AD: fld     qword ptr [ebp+arg_10]
0x9930B0: pop     ecx
0x9930B1: pop     ecx
0x9930B2: mov     ecx, [esp+80h+var_4]
0x9930B6: xor     ecx, esp
0x9930B8: call    @__security_check_cookie@4
0x9930BD: mov     esp, ebp
0x9930BF: pop     ebp
0x9930C0: retn
