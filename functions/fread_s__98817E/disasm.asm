0x98817E: push    0Ch
0x988180: push    offset stru_AFFB20
0x988185: call    __SEH_prolog4
0x98818A: xor     esi, esi
0x98818C: mov     [ebp+var_1C], esi
0x98818F: mov     ebx, [ebp+ElementSize]
0x988192: cmp     ebx, esi
0x988194: jz      short loc_9881C1
0x988196: mov     edi, [ebp+Count]
0x988199: cmp     edi, esi
0x98819B: jz      short loc_9881C1
0x98819D: xor     eax, eax
0x98819F: cmp     [ebp+DstBuf], esi
0x9881A2: setnz   al
0x9881A5: cmp     eax, esi
0x9881A7: jnz     short loc_9881C9
0x9881A9: call    __errno
0x9881AE: mov     dword ptr [eax], 16h
0x9881B4: push    esi
0x9881B5: push    esi
0x9881B6: push    esi
0x9881B7: push    esi
0x9881B8: push    esi
0x9881B9: call    __invalid_parameter
0x9881BE: add     esp, 14h
0x9881C1: xor     eax, eax
0x9881C3: call    __SEH_epilog4
0x9881C8: retn
0x9881C9: cmp     [ebp+File], esi
0x9881CC: jz      short loc_9881D9
0x9881CE: or      eax, 0FFFFFFFFh
0x9881D1: xor     edx, edx
0x9881D3: div     ebx
0x9881D5: cmp     edi, eax
0x9881D7: jbe     short loc_988208
0x9881D9: cmp     [ebp+DstSize], 0FFFFFFFFh
0x9881DD: jz      short loc_9881EE
0x9881DF: push    [ebp+DstSize]
0x9881E2: push    esi
0x9881E3: push    [ebp+DstBuf]
0x9881E6: call    __memset
0x9881EB: add     esp, 0Ch
0x9881EE: xor     eax, eax
0x9881F0: cmp     [ebp+File], esi
0x9881F3: setnz   al
0x9881F6: cmp     eax, esi
0x9881F8: jz      short loc_9881A9
0x9881FA: or      eax, 0FFFFFFFFh
0x9881FD: xor     edx, edx
0x9881FF: div     ebx
0x988201: cmp     eax, edi
0x988203: sbb     eax, eax
0x988205: inc     eax
0x988206: jz      short loc_9881A9
0x988208: push    [ebp+File]
0x98820B: call    __lock_file
0x988210: pop     ecx
0x988211: mov     [ebp+ms_exc.registration.TryLevel], esi
0x988214: push    [ebp+File]; File
0x988217: push    edi; ElementSize
0x988218: push    ebx; ElementSize
0x988219: push    [ebp+DstSize]; DstSize
0x98821C: push    [ebp+DstBuf]; DstBuf
0x98821F: call    __fread_nolock_s
0x988224: add     esp, 14h
0x988227: mov     [ebp+var_1C], eax
0x98822A: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x988231: call    _fread_s___$LN15_1
