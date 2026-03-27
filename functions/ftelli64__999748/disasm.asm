0x999748: push    10h
0x99974A: push    offset stru_B00028
0x99974F: call    __SEH_prolog4
0x999754: push    [ebp+File]
0x999757: call    __lock_file
0x99975C: pop     ecx
0x99975D: and     [ebp+ms_exc.registration.TryLevel], 0
0x999761: push    [ebp+File]; File
0x999764: call    __ftelli64_nolock
0x999769: pop     ecx
0x99976A: mov     [ebp+var_20], eax
0x99976D: mov     [ebp+var_1C], edx
0x999770: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x999777: call    __ftelli64___$LN7_6
