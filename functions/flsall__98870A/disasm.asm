0x98870A: push    14h
0x98870C: push    offset stru_AFFBA0
0x988711: call    __SEH_prolog4
0x988716: xor     edi, edi
0x988718: mov     [ebp+var_1C], edi
0x98871B: mov     [ebp+var_24], edi
0x98871E: push    1
0x988720: call    __lock
0x988725: pop     ecx
0x988726: mov     [ebp+ms_exc.registration.TryLevel], edi
0x988729: xor     esi, esi
0x98872B: mov     [ebp+var_20], esi
0x98872E: cmp     esi, dword_BABC00
0x988734: jge     loc_9887BD
0x98873A: mov     eax, dword_BAABE4
0x98873F: lea     eax, [eax+esi*4]
0x988742: cmp     [eax], edi
0x988744: jz      short _flsall___$LN25
0x988746: mov     eax, [eax]
0x988748: test    byte ptr [eax+0Ch], 83h
0x98874C: jz      short _flsall___$LN25
0x98874E: push    eax
0x98874F: push    esi
0x988750: call    __lock_file2
0x988755: pop     ecx
0x988756: pop     ecx
0x988757: xor     edx, edx
0x988759: inc     edx
0x98875A: mov     [ebp+ms_exc.registration.TryLevel], edx
0x98875D: mov     eax, dword_BAABE4
0x988762: mov     eax, [eax+esi*4]
0x988765: mov     ecx, [eax+0Ch]
0x988768: test    cl, 83h
0x98876B: jz      short loc_98879C
0x98876D: cmp     [ebp+arg_0], edx
0x988770: jnz     short loc_988783
0x988772: push    eax; File
0x988773: call    __fflush_nolock
0x988778: pop     ecx
0x988779: cmp     eax, 0FFFFFFFFh
0x98877C: jz      short loc_98879C
0x98877E: inc     [ebp+var_1C]
0x988781: jmp     short loc_98879C
0x988783: cmp     [ebp+arg_0], edi
0x988786: jnz     short loc_98879C
0x988788: test    cl, 2
0x98878B: jz      short loc_98879C
0x98878D: push    eax; File
0x98878E: call    __fflush_nolock
0x988793: pop     ecx
0x988794: cmp     eax, 0FFFFFFFFh
0x988797: jnz     short loc_98879C
0x988799: or      [ebp+var_24], eax
0x98879C: mov     [ebp+ms_exc.registration.TryLevel], edi
0x98879F: call    _flsall___$LN24_0
