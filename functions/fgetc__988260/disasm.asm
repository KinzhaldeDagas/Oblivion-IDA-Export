0x988260: push    0Ch
0x988262: push    offset stru_AFFB40
0x988267: call    __SEH_prolog4
0x98826C: xor     ebx, ebx
0x98826E: mov     [ebp+var_1C], ebx
0x988271: xor     eax, eax
0x988273: mov     esi, [ebp+File]
0x988276: cmp     esi, ebx
0x988278: setnz   al
0x98827B: cmp     eax, ebx
0x98827D: jnz     short loc_98829F
0x98827F: call    __errno
0x988284: mov     dword ptr [eax], 16h
0x98828A: push    ebx
0x98828B: push    ebx
0x98828C: push    ebx
0x98828D: push    ebx
0x98828E: push    ebx
0x98828F: call    __invalid_parameter
0x988294: add     esp, 14h
0x988297: or      eax, 0FFFFFFFFh
0x98829A: jmp     loc_988386
0x98829F: push    esi
0x9882A0: call    __lock_file
0x9882A5: pop     ecx
0x9882A6: mov     [ebp+ms_exc.registration.TryLevel], ebx
0x9882A9: test    byte ptr [esi+0Ch], 40h
0x9882AD: jnz     loc_988359
0x9882B3: push    esi; File
0x9882B4: call    __fileno
0x9882B9: pop     ecx
0x9882BA: cmp     eax, 0FFFFFFFFh
0x9882BD: jz      short loc_9882ED
0x9882BF: push    esi; File
0x9882C0: call    __fileno
0x9882C5: pop     ecx
0x9882C6: cmp     eax, 0FFFFFFFEh
0x9882C9: jz      short loc_9882ED
0x9882CB: push    esi; File
0x9882CC: call    __fileno
0x9882D1: sar     eax, 5
0x9882D4: lea     edi, ds:0BAAAC0h[eax*4]
0x9882DB: push    esi; File
0x9882DC: call    __fileno
0x9882E1: pop     ecx
0x9882E2: pop     ecx
0x9882E3: and     eax, 1Fh
0x9882E6: imul    eax, 28h ; '('
0x9882E9: add     eax, [edi]
0x9882EB: jmp     short loc_9882F2
0x9882ED: mov     eax, offset aA_1
0x9882F2: test    byte ptr [eax+24h], 7Fh
0x9882F6: jnz     short loc_98833D
0x9882F8: push    esi; File
0x9882F9: call    __fileno
0x9882FE: pop     ecx
0x9882FF: cmp     eax, 0FFFFFFFFh
0x988302: jz      short loc_988332
0x988304: push    esi; File
0x988305: call    __fileno
0x98830A: pop     ecx
0x98830B: cmp     eax, 0FFFFFFFEh
0x98830E: jz      short loc_988332
0x988310: push    esi; File
0x988311: call    __fileno
0x988316: sar     eax, 5
0x988319: lea     edi, ds:0BAAAC0h[eax*4]
0x988320: push    esi; File
0x988321: call    __fileno
0x988326: pop     ecx
0x988327: pop     ecx
0x988328: and     eax, 1Fh
0x98832B: imul    eax, 28h ; '('
0x98832E: add     eax, [edi]
0x988330: jmp     short loc_988337
0x988332: mov     eax, offset aA_1
0x988337: test    byte ptr [eax+24h], 80h
0x98833B: jz      short loc_988359
0x98833D: call    __errno
0x988342: mov     dword ptr [eax], 16h
0x988348: push    ebx
0x988349: push    ebx
0x98834A: push    ebx
0x98834B: push    ebx
0x98834C: push    ebx
0x98834D: call    __invalid_parameter
0x988352: add     esp, 14h
0x988355: or      [ebp+var_1C], 0FFFFFFFFh
0x988359: cmp     [ebp+var_1C], ebx
0x98835C: jnz     short loc_988377
0x98835E: dec     dword ptr [esi+4]
0x988361: js      short loc_98836D
0x988363: mov     ecx, [esi]
0x988365: movzx   eax, byte ptr [ecx]
0x988368: inc     ecx
0x988369: mov     [esi], ecx
0x98836B: jmp     short loc_988374
0x98836D: push    esi; File
0x98836E: call    __filbuf
0x988373: pop     ecx
0x988374: mov     [ebp+var_1C], eax
0x988377: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x98837E: call    loc_98838F
0x988383: mov     eax, [ebp+var_1C]
0x988386: call    __SEH_epilog4
0x98838B: retn
0x98838C: mov     esi, [ebp+File]
0x98838F: push    esi
0x988390: call    __unlock_file
0x988395: pop     ecx
0x988396: retn
