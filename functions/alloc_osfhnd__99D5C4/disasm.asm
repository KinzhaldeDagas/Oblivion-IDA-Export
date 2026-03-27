0x99D5C4: push    18h
0x99D5C6: push    offset stru_B00108
0x99D5CB: call    __SEH_prolog4
0x99D5D0: or      [ebp+var_1C], 0FFFFFFFFh
0x99D5D4: xor     edi, edi
0x99D5D6: mov     [ebp+var_24], edi
0x99D5D9: push    0Bh
0x99D5DB: call    __mtinitlocknum
0x99D5E0: pop     ecx
0x99D5E1: test    eax, eax
0x99D5E3: jnz     short loc_99D5ED
0x99D5E5: or      eax, 0FFFFFFFFh
0x99D5E8: jmp     loc_99D754
0x99D5ED: push    0Bh
0x99D5EF: call    __lock
0x99D5F4: pop     ecx
0x99D5F5: mov     [ebp+ms_exc.registration.TryLevel], edi
0x99D5F8: mov     [ebp+var_28], edi
0x99D5FB: cmp     edi, 40h ; '@'
0x99D5FE: jge     loc_99D745
0x99D604: mov     esi, dword_BAAAC0[edi*4]
0x99D60B: test    esi, esi
0x99D60D: jz      loc_99D6D2
0x99D613: mov     [ebp+var_20], esi
0x99D616: mov     eax, dword_BAAAC0[edi*4]
0x99D61D: add     eax, 500h
0x99D622: cmp     esi, eax
0x99D624: jnb     loc_99D6C6
0x99D62A: test    byte ptr [esi+4], 1
0x99D62E: jnz     short loc_99D68C
0x99D630: cmp     dword ptr [esi+8], 0
0x99D634: jnz     short __alloc_osfhnd___$LN36_3
0x99D636: push    0Ah
0x99D638: call    __lock
0x99D63D: pop     ecx
0x99D63E: xor     ebx, ebx
0x99D640: inc     ebx
0x99D641: mov     [ebp+ms_exc.registration.TryLevel], ebx
0x99D644: cmp     dword ptr [esi+8], 0
0x99D648: jnz     short loc_99D666
0x99D64A: push    0FA0h
0x99D64F: lea     eax, [esi+0Ch]
0x99D652: push    eax
0x99D653: call    ___crtInitCritSecAndSpinCount
0x99D658: pop     ecx
0x99D659: pop     ecx
0x99D65A: test    eax, eax
0x99D65C: jnz     short loc_99D663
0x99D65E: mov     [ebp+var_24], ebx
0x99D661: jmp     short loc_99D666
0x99D663: inc     dword ptr [esi+8]
0x99D666: and     [ebp+ms_exc.registration.TryLevel], 0
0x99D66A: call    __alloc_osfhnd___$LN35
