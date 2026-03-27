0x981F78: push    0Ch
0x981F7A: push    offset stru_AFF920
0x981F7F: call    __SEH_prolog4
0x981F84: call    __lockexit
0x981F89: and     [ebp+ms_exc.registration.TryLevel], 0
0x981F8D: push    [ebp+Func]
0x981F90: call    __onexit_nolock
0x981F95: pop     ecx
0x981F96: mov     [ebp+var_1C], eax
0x981F99: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x981FA0: call    __onexit___$LN7_0
