0x99E521: push    0Ch
0x99E523: push    offset stru_B00170
0x99E528: call    __SEH_prolog4
0x99E52D: push    7
0x99E52F: call    __lock
0x99E534: pop     ecx
0x99E535: and     [ebp+ms_exc.registration.TryLevel], 0
0x99E539: push    [ebp+NumOfElements]; NumOfElements
0x99E53C: push    [ebp+lpBuffer]; lpBuffer
0x99E53F: push    0; nBufferLength
0x99E541: call    __getdcwd_nolock
0x99E546: add     esp, 0Ch
0x99E549: mov     [ebp+var_1C], eax
0x99E54C: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x99E553: call    loc_99E561
0x99E558: mov     eax, [ebp+var_1C]
0x99E55B: call    __SEH_epilog4
0x99E560: retn
0x99E561: push    7
0x99E563: call    __unlock
0x99E568: pop     ecx
0x99E569: retn
