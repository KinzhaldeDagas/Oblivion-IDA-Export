0x9887E4: push    0Ch
0x9887E6: push    offset stru_AFFBC8
0x9887EB: call    __SEH_prolog4
0x9887F0: xor     esi, esi
0x9887F2: cmp     [ebp+File], esi
0x9887F5: jnz     short loc_988800
0x9887F7: push    esi
0x9887F8: call    _flsall
0x9887FD: pop     ecx
0x9887FE: jmp     short loc_988827
0x988800: push    [ebp+File]
0x988803: call    __lock_file
0x988808: pop     ecx
0x988809: mov     [ebp+ms_exc.registration.TryLevel], esi
0x98880C: push    [ebp+File]; File
0x98880F: call    __fflush_nolock
0x988814: pop     ecx
0x988815: mov     [ebp+var_1C], eax
0x988818: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x98881F: call    _fflush___$LN8_4
