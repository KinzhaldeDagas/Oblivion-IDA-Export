0x99ED6E: push    0Ch
0x99ED70: push    offset stru_B001D0
0x99ED75: call    __SEH_prolog4
0x99ED7A: push    6
0x99ED7C: call    __lock
0x99ED81: pop     ecx
0x99ED82: and     [ebp+ms_exc.registration.TryLevel], 0
0x99ED86: mov     edi, [ebp+arg_0]
0x99ED89: call    __isindst_nolock
0x99ED8E: mov     [ebp+var_1C], eax
0x99ED91: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x99ED98: call    __isindst___$LN7_8
