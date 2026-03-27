0x988397: push    0Ch
0x988399: push    offset stru_AFFB60
0x98839E: call    __SEH_prolog4
0x9883A3: xor     ebx, ebx
0x9883A5: mov     [ebp+var_1C], ebx
0x9883A8: xor     eax, eax
0x9883AA: mov     esi, [ebp+File]
0x9883AD: cmp     esi, ebx
0x9883AF: setnz   al
0x9883B2: cmp     eax, ebx
0x9883B4: jnz     short loc_9883D6
0x9883B6: call    __errno
0x9883BB: mov     dword ptr [eax], 16h
0x9883C1: push    ebx
0x9883C2: push    ebx
0x9883C3: push    ebx
0x9883C4: push    ebx
0x9883C5: push    ebx
0x9883C6: call    __invalid_parameter
0x9883CB: add     esp, 14h
0x9883CE: or      eax, 0FFFFFFFFh
0x9883D1: jmp     loc_9884C5
0x9883D6: push    esi
0x9883D7: call    __lock_file
0x9883DC: pop     ecx
0x9883DD: mov     [ebp+ms_exc.registration.TryLevel], ebx
0x9883E0: test    byte ptr [esi+0Ch], 40h
0x9883E4: jnz     loc_988490
0x9883EA: push    esi; File
0x9883EB: call    __fileno
0x9883F0: pop     ecx
0x9883F1: cmp     eax, 0FFFFFFFFh
0x9883F4: jz      short loc_988424
0x9883F6: push    esi; File
0x9883F7: call    __fileno
0x9883FC: pop     ecx
0x9883FD: cmp     eax, 0FFFFFFFEh
0x988400: jz      short loc_988424
0x988402: push    esi; File
0x988403: call    __fileno
0x988408: sar     eax, 5
0x98840B: lea     edi, ds:0BAAAC0h[eax*4]
0x988412: push    esi; File
0x988413: call    __fileno
0x988418: pop     ecx
0x988419: pop     ecx
0x98841A: and     eax, 1Fh
0x98841D: imul    eax, 28h ; '('
0x988420: add     eax, [edi]
0x988422: jmp     short loc_988429
0x988424: mov     eax, offset aA_1
0x988429: test    byte ptr [eax+24h], 7Fh
0x98842D: jnz     short loc_988474
0x98842F: push    esi; File
0x988430: call    __fileno
0x988435: pop     ecx
0x988436: cmp     eax, 0FFFFFFFFh
0x988439: jz      short loc_988469
0x98843B: push    esi; File
0x98843C: call    __fileno
0x988441: pop     ecx
0x988442: cmp     eax, 0FFFFFFFEh
0x988445: jz      short loc_988469
0x988447: push    esi; File
0x988448: call    __fileno
0x98844D: sar     eax, 5
0x988450: lea     edi, ds:0BAAAC0h[eax*4]
0x988457: push    esi; File
0x988458: call    __fileno
0x98845D: pop     ecx
0x98845E: pop     ecx
0x98845F: and     eax, 1Fh
0x988462: imul    eax, 28h ; '('
0x988465: add     eax, [edi]
0x988467: jmp     short loc_98846E
0x988469: mov     eax, offset aA_1
0x98846E: test    byte ptr [eax+24h], 80h
0x988472: jz      short loc_988490
0x988474: call    __errno
0x988479: mov     dword ptr [eax], 16h
0x98847F: push    ebx
0x988480: push    ebx
0x988481: push    ebx
0x988482: push    ebx
0x988483: push    ebx
0x988484: call    __invalid_parameter
0x988489: add     esp, 14h
0x98848C: or      [ebp+var_1C], 0FFFFFFFFh
0x988490: cmp     [ebp+var_1C], ebx
0x988493: jnz     short loc_9884B6
0x988495: dec     dword ptr [esi+4]
0x988498: js      short loc_9884A8
0x98849A: mov     ecx, [esi]
0x98849C: mov     al, byte ptr [ebp+arg_0]
0x98849F: mov     [ecx], al
0x9884A1: movzx   eax, al
0x9884A4: inc     dword ptr [esi]
0x9884A6: jmp     short loc_9884B3
0x9884A8: push    esi; File
0x9884A9: push    [ebp+arg_0]; Ch
0x9884AC: call    __flsbuf
0x9884B1: pop     ecx
0x9884B2: pop     ecx
0x9884B3: mov     [ebp+var_1C], eax
0x9884B6: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x9884BD: call    loc_9884CE
0x9884C2: mov     eax, [ebp+var_1C]
0x9884C5: call    __SEH_epilog4
0x9884CA: retn
0x9884CB: mov     esi, [ebp+File]
0x9884CE: push    esi
0x9884CF: call    __unlock_file
0x9884D4: pop     ecx
0x9884D5: retn
