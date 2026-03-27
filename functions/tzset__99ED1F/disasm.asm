0x99ED1F: push    8
0x99ED21: push    offset stru_B001B0
0x99ED26: call    __SEH_prolog4
0x99ED2B: xor     esi, esi
0x99ED2D: cmp     dword_BAA874, esi
0x99ED33: jnz     short ___tzset___$LN10_10
0x99ED35: push    6
0x99ED37: call    __lock
0x99ED3C: pop     ecx
0x99ED3D: mov     [ebp+ms_exc.registration.TryLevel], esi
0x99ED40: cmp     dword_BAA874, esi
0x99ED46: jnz     short loc_99ED53
0x99ED48: call    __tzset_nolock
0x99ED4D: inc     dword_BAA874
0x99ED53: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x99ED5A: call    ___tzset___$LN9_9
