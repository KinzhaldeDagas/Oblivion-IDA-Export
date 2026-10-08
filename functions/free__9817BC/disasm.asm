0x9817BC: push    0Ch
0x9817BE: push    offset stru_AFF8A0
0x9817C3: call    __SEH_prolog4
0x9817C8: mov     esi, [ebp+Memory]
0x9817CB: test    esi, esi
0x9817CD: jz      short loc_981844
0x9817CF: cmp     dword ptr ds:0BAABC0h, 3
0x9817D6: jnz     short loc_98181B
0x9817D8: push    4
0x9817DA: call    __lock
0x9817DF: pop     ecx
0x9817E0: and     [ebp+ms_exc.registration.TryLevel], 0
0x9817E4: push    esi
0x9817E5: call    ___sbh_find_block
0x9817EA: pop     ecx
0x9817EB: mov     [ebp+var_1C], eax
0x9817EE: test    eax, eax
0x9817F0: jz      short loc_9817FB
0x9817F2: push    esi
0x9817F3: push    eax
0x9817F4: call    ___sbh_free_block
0x9817F9: pop     ecx
0x9817FA: pop     ecx
0x9817FB: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x981802: call    _free___$LN14
0x981812: push    4
0x981814: call    __unlock
0x981819: pop     ecx
0x98181A: retn
0x98181B: push    esi; lpMem
0x98181C: push    0; dwFlags
0x98181E: push    dword ptr ds:0BAA2ACh; hHeap
0x981824: call    dword ptr ds:0A28198h
0x98182A: test    eax, eax
0x98182C: jnz     short loc_981844
0x98182E: call    __errno
0x981833: mov     esi, eax
0x981835: call    dword ptr ds:0A281ECh
0x98183B: push    eax
0x98183C: call    __get_errno_from_oserr
0x981841: mov     [esi], eax
0x981843: pop     ecx
0x981844: call    __SEH_epilog4
0x981849: retn
