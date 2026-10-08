0x98F825: push    0Ch
0x98F827: push    offset stru_AFFF48
0x98F82C: call    __SEH_prolog4
0x98F831: call    __getptd
0x98F836: mov     edi, eax
0x98F838: mov     eax, dword_B318B0
0x98F83D: test    [edi+70h], eax
0x98F840: jz      short loc_98F85F
0x98F842: cmp     dword ptr [edi+6Ch], 0
0x98F846: jz      short loc_98F85F
0x98F848: mov     esi, [edi+68h]
0x98F85F: push    0Dh
0x98F861: call    __lock
0x98F866: pop     ecx
0x98F867: and     [ebp+ms_exc.registration.TryLevel], 0
0x98F86B: mov     esi, [edi+68h]
0x98F86E: mov     [ebp+var_1C], esi
0x98F871: cmp     esi, lpAddend
0x98F877: jz      short loc_98F8AF
0x98F879: test    esi, esi
0x98F87B: jz      short loc_98F897
0x98F87D: push    esi; lpAddend
0x98F87E: call    ds:InterlockedDecrement
0x98F884: test    eax, eax
0x98F886: jnz     short loc_98F897
0x98F888: cmp     esi, offset dword_B31390
0x98F88E: jz      short loc_98F897
0x98F890: push    esi; Memory
0x98F891: call    _free
0x98F896: pop     ecx
0x98F897: mov     eax, lpAddend
0x98F89C: mov     [edi+68h], eax
0x98F89F: mov     esi, lpAddend
0x98F8A5: mov     [ebp+var_1C], esi
0x98F8A8: push    esi; lpAddend
0x98F8A9: call    ds:InterlockedIncrement
0x98F8AF: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x98F8B6: call    ___updatetmbcinfo___$LN13_8
0x98F8BB: jmp     short ___updatetmbcinfo___$LN14_7
0x98F8BD: mov     esi, [ebp+var_1C]
0x98F8C0: push    0Dh
0x98F8C2: call    __unlock
0x98F8C7: pop     ecx
0x98F8C8: retn
