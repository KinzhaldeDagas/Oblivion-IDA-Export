0x99C8B1: push    10h
0x99C8B3: push    offset stru_B00088
0x99C8B8: call    __SEH_prolog4
0x99C8BD: xor     ebx, ebx
0x99C8BF: mov     [ebp+var_1C], ebx
0x99C8C2: push    1
0x99C8C4: call    __lock
0x99C8C9: pop     ecx
0x99C8CA: mov     [ebp+ms_exc.registration.TryLevel], ebx
0x99C8CD: push    3
0x99C8CF: pop     edi
0x99C8D0: mov     [ebp+var_20], edi
0x99C8D3: cmp     edi, dword_BABC00
0x99C8D9: jge     short loc_99C932
0x99C8DB: mov     esi, edi
0x99C8DD: shl     esi, 2
0x99C8E0: mov     eax, dword_BAABE4
0x99C8E5: add     eax, esi
0x99C8E7: cmp     [eax], ebx
0x99C8E9: jz      short loc_99C92F
0x99C8EB: mov     eax, [eax]
0x99C8ED: test    byte ptr [eax+0Ch], 83h
0x99C8F1: jz      short loc_99C902
0x99C8F3: push    eax; File
0x99C8F4: call    _fclose
0x99C8F9: pop     ecx
0x99C8FA: cmp     eax, 0FFFFFFFFh
0x99C8FD: jz      short loc_99C902
0x99C8FF: inc     [ebp+var_1C]
0x99C902: cmp     edi, 14h
0x99C905: jl      short loc_99C92F
0x99C907: mov     eax, dword_BAABE4
0x99C90C: mov     eax, [esi+eax]
0x99C90F: add     eax, 20h ; ' '
0x99C912: push    eax; lpCriticalSection
0x99C913: call    ds:DeleteCriticalSection
0x99C919: mov     eax, dword_BAABE4
0x99C91E: push    dword ptr [esi+eax]; Memory
0x99C921: call    _free
0x99C926: pop     ecx
0x99C927: mov     eax, dword_BAABE4
0x99C92C: mov     [esi+eax], ebx
0x99C92F: inc     edi
0x99C930: jmp     short loc_99C8D0
0x99C932: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x99C939: call    __fcloseall___$LN13_9
