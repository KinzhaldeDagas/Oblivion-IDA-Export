0x99D502: push    0Ch
0x99D504: push    offset stru_B000E8
0x99D509: call    __SEH_prolog4
0x99D50E: mov     edi, [ebp+arg_0]
0x99D511: mov     eax, edi
0x99D513: sar     eax, 5
0x99D516: mov     esi, edi
0x99D518: and     esi, 1Fh
0x99D51B: imul    esi, 28h ; '('
0x99D51E: add     esi, dword_BAAAC0[eax*4]
0x99D525: mov     [ebp+var_1C], 1
0x99D52C: xor     ebx, ebx
0x99D52E: cmp     [esi+8], ebx
0x99D531: jnz     short ___lock_fhandle___$LN12_10
0x99D533: push    0Ah
0x99D535: call    __lock
0x99D53A: pop     ecx
0x99D53B: mov     [ebp+ms_exc.registration.TryLevel], ebx
0x99D53E: cmp     [esi+8], ebx
0x99D541: jnz     short loc_99D55D
0x99D543: push    0FA0h
0x99D548: lea     eax, [esi+0Ch]
0x99D54B: push    eax
0x99D54C: call    ___crtInitCritSecAndSpinCount
0x99D551: pop     ecx
0x99D552: pop     ecx
0x99D553: test    eax, eax
0x99D555: jnz     short loc_99D55A
0x99D557: mov     [ebp+var_1C], ebx
0x99D55A: inc     dword ptr [esi+8]
0x99D55D: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x99D564: call    ___lock_fhandle___$LN11_10
