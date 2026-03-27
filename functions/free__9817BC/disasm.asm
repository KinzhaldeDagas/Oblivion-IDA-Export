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
