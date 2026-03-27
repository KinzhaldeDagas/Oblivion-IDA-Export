0x993155: push    8
0x993157: push    offset stru_AFFF88
0x99315C: call    __SEH_prolog4
0x993161: xor     eax, eax
0x993163: cmp     dword_BAABE0, eax
0x993169: jz      short loc_9931C1
0x99316B: test    byte ptr [ebp+arg_0], 40h
0x99316F: jz      short loc_9931B9
0x993171: cmp     dword_B31C68, eax
0x993177: jz      short loc_9931B9
0x993179: mov     [ebp+ms_exc.registration.TryLevel], eax
0x99317C: ldmxcsr [ebp+arg_0]
0x993180: jmp     short loc_9931B0
0x993182: mov     eax, [ebp+ms_exc.exc_ptr]
0x993185: mov     eax, [eax]
0x993187: mov     eax, [eax]
0x993189: cmp     eax, 0C0000005h
0x99318E: jz      short loc_99319A
0x993190: cmp     eax, 0C000001Dh
0x993195: jz      short loc_99319A
0x993197: xor     eax, eax
0x993199: retn
0x99319A: xor     eax, eax
0x99319C: inc     eax
0x99319D: retn
0x99319E: mov     esp, [ebp+ms_exc.old_esp]
0x9931A1: and     dword_B31C68, 0
0x9931A8: and     [ebp+arg_0], 0FFFFFFBFh
0x9931AC: ldmxcsr [ebp+arg_0]
0x9931B0: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x9931B7: jmp     short loc_9931C1
0x9931B9: and     [ebp+arg_0], 0FFFFFFBFh
0x9931BD: ldmxcsr [ebp+arg_0]
0x9931C1: call    __SEH_epilog4
0x9931C6: retn
