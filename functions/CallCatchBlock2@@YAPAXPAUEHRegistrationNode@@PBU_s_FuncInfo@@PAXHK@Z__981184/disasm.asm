0x981184: push    ebp
0x981185: mov     ebp, esp
0x981187: sub     esp, 18h
0x98118A: mov     eax, ds:0B30AACh
0x98118F: and     [ebp+var_18], 0
0x981193: lea     ecx, [ebp+var_18]
0x981196: xor     eax, ecx
0x981198: mov     ecx, [ebp+arg_0]
0x98119B: mov     [ebp+var_10], eax
0x98119E: mov     eax, [ebp+arg_4]
0x9811A1: mov     [ebp+var_C], eax
0x9811A4: mov     eax, [ebp+arg_C]
0x9811A7: inc     eax
0x9811A8: mov     [ebp+var_14], offset ?CatchGuardHandler@@YA?AW4_EXCEPTION_DISPOSITION@@PAUEHExceptionRecord@@PAUCatchGuardRN@@PAX2@Z
0x9811AF: mov     [ebp+var_8], ecx
0x9811B2: mov     [ebp+var_4], eax
0x9811B5: mov     eax, large fs:0
0x9811BB: mov     [ebp+var_18], eax
0x9811BE: lea     eax, [ebp+var_18]
0x9811C1: mov     large fs:0, eax
0x9811C7: push    [ebp+arg_10]
0x9811CA: push    ecx
0x9811CB: push    [ebp+arg_8]
0x9811CE: call    unknown_libname_88
0x9811D3: mov     ecx, eax
0x9811D5: mov     eax, [ebp+var_18]
0x9811D8: mov     large fs:0, eax
0x9811DE: mov     eax, ecx
0x9811E0: leave
0x9811E1: retn
