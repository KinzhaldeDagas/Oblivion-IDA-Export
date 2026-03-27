0x999792: push    ebp
0x999793: mov     ebp, esp
0x999795: push    esi
0x999796: mov     esi, [ebp+File]
0x999799: mov     eax, [esi+0Ch]
0x99979C: test    al, 83h
0x99979E: push    edi
0x99979F: jz      short loc_999819
0x9997A1: mov     edi, [ebp+Origin]
0x9997A4: test    edi, edi
0x9997A6: jz      short loc_9997B2
0x9997A8: cmp     edi, 1
0x9997AB: jz      short loc_9997B2
0x9997AD: cmp     edi, 2
0x9997B0: jnz     short loc_999819
0x9997B2: and     eax, 0FFFFFFEFh
0x9997B5: cmp     edi, 1
0x9997B8: mov     [esi+0Ch], eax
0x9997BB: jnz     short loc_9997CC
0x9997BD: push    esi; File
0x9997BE: call    __ftelli64_nolock
0x9997C3: add     dword ptr [ebp+Offset], eax
0x9997C6: pop     ecx
0x9997C7: adc     dword ptr [ebp+Offset+4], edx
0x9997CA: xor     edi, edi
0x9997CC: push    esi; File
0x9997CD: call    __flush
0x9997D2: mov     eax, [esi+0Ch]
0x9997D5: test    al, al
0x9997D7: pop     ecx
0x9997D8: jns     short loc_9997E2
0x9997DA: and     eax, 0FFFFFFFCh
0x9997DD: mov     [esi+0Ch], eax
0x9997E0: jmp     short loc_9997F7
0x9997E2: test    al, 1
0x9997E4: jz      short loc_9997F7
0x9997E6: test    al, 8
0x9997E8: jz      short loc_9997F7
0x9997EA: test    ax, 400h
0x9997EE: jnz     short loc_9997F7
0x9997F0: mov     dword ptr [esi+18h], 200h
0x9997F7: push    edi; int
0x9997F8: push    dword ptr [ebp+Offset+4]
0x9997FB: push    dword ptr [ebp+Offset]; __int64
0x9997FE: push    esi; File
0x9997FF: call    __fileno
0x999804: pop     ecx
0x999805: push    eax; int
0x999806: call    __lseeki64
0x99980B: and     eax, edx
0x99980D: add     esp, 10h
0x999810: cmp     eax, 0FFFFFFFFh
0x999813: jz      short loc_999824
0x999815: xor     eax, eax
0x999817: jmp     short loc_999827
0x999819: call    __errno
0x99981E: mov     dword ptr [eax], 16h
0x999824: or      eax, 0FFFFFFFFh
0x999827: pop     edi
0x999828: pop     esi
0x999829: pop     ebp
0x99982A: retn
