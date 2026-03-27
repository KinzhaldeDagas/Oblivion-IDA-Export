0x9821F5: push    18h
0x9821F7: push    offset stru_AFF980
0x9821FC: call    __SEH_prolog4
0x982201: mov     eax, [ebp+Buf]
0x982204: mov     [ebp+var_1C], eax
0x982207: mov     [ebp+var_20], eax
0x98220A: xor     ebx, ebx
0x98220C: cmp     eax, ebx
0x98220E: jnz     short loc_982234
0x982210: cmp     [ebp+MaxCount], ebx
0x982213: jz      short loc_982234
0x982215: call    __errno
0x98221A: mov     dword ptr [eax], 16h
0x982220: push    ebx
0x982221: push    ebx
0x982222: push    ebx
0x982223: push    ebx
0x982224: push    ebx
0x982225: call    __invalid_parameter
0x98222A: add     esp, 14h
0x98222D: xor     eax, eax
0x98222F: jmp     loc_98236B
0x982234: xor     eax, eax
0x982236: cmp     [ebp+MaxCount], ebx
0x982239: setnl   al
0x98223C: cmp     eax, ebx
0x98223E: jz      short loc_982215
0x982240: xor     eax, eax
0x982242: mov     esi, [ebp+File]
0x982245: cmp     esi, ebx
0x982247: setnz   al
0x98224A: cmp     eax, ebx
0x98224C: jz      short loc_982215
0x98224E: cmp     [ebp+MaxCount], ebx
0x982251: jz      short loc_98222D
0x982253: mov     edi, esi
0x982255: mov     [ebp+var_24], edi
0x982258: push    esi
0x982259: call    __lock_file
0x98225E: pop     ecx
0x98225F: mov     [ebp+ms_exc.registration.TryLevel], ebx
0x982262: test    byte ptr [esi+0Ch], 40h
0x982266: jnz     loc_982316
0x98226C: push    esi; File
0x98226D: call    __fileno
0x982272: pop     ecx
0x982273: cmp     eax, 0FFFFFFFFh
0x982276: jz      short loc_9822A8
0x982278: push    esi; File
0x982279: call    __fileno
0x98227E: pop     ecx
0x98227F: cmp     eax, 0FFFFFFFEh
0x982282: jz      short loc_9822A8
0x982284: push    esi; File
0x982285: call    __fileno
0x98228A: sar     eax, 5
0x98228D: lea     edi, ds:0BAAAC0h[eax*4]
0x982294: push    esi; File
0x982295: call    __fileno
0x98229A: pop     ecx
0x98229B: pop     ecx
0x98229C: and     eax, 1Fh
0x98229F: imul    eax, 28h ; '('
0x9822A2: add     eax, [edi]
0x9822A4: mov     edi, esi
0x9822A6: jmp     short loc_9822AD
0x9822A8: mov     eax, offset aA_1
0x9822AD: test    byte ptr [eax+24h], 7Fh
0x9822B1: jnz     short loc_9822FB
0x9822B3: push    esi; File
0x9822B4: call    __fileno
0x9822B9: pop     ecx
0x9822BA: cmp     eax, 0FFFFFFFFh
0x9822BD: jz      short loc_9822F0
0x9822BF: push    esi; File
0x9822C0: call    __fileno
0x9822C5: pop     ecx
0x9822C6: cmp     eax, 0FFFFFFFEh
0x9822C9: jz      short loc_9822F0
0x9822CB: push    esi; File
0x9822CC: call    __fileno
0x9822D1: sar     eax, 5
0x9822D4: lea     edi, ds:0BAAAC0h[eax*4]
0x9822DB: push    esi; File
0x9822DC: call    __fileno
0x9822E1: pop     ecx
0x9822E2: pop     ecx
0x9822E3: and     eax, 1Fh
0x9822E6: imul    eax, 28h ; '('
0x9822E9: add     eax, [edi]
0x9822EB: mov     edi, [ebp+var_24]
0x9822EE: jmp     short loc_9822F5
0x9822F0: mov     eax, offset aA_1
0x9822F5: test    byte ptr [eax+24h], 80h
0x9822F9: jz      short loc_982316
0x9822FB: call    __errno
0x982300: mov     dword ptr [eax], 16h
0x982306: push    ebx
0x982307: push    ebx
0x982308: push    ebx
0x982309: push    ebx
0x98230A: push    ebx
0x98230B: call    __invalid_parameter
0x982310: add     esp, 14h
0x982313: mov     [ebp+var_20], ebx
0x982316: cmp     [ebp+var_20], ebx
0x982319: jz      short _fgets___$done$25927
0x98231B: dec     [ebp+MaxCount]
0x98231E: jz      short loc_982357
0x982320: dec     dword ptr [edi+4]
0x982323: js      short loc_98232F
0x982325: mov     ecx, [edi]
0x982327: movzx   eax, byte ptr [ecx]
0x98232A: inc     ecx
0x98232B: mov     [edi], ecx
0x98232D: jmp     short loc_982336
0x98232F: push    edi; File
0x982330: call    __filbuf
0x982335: pop     ecx
0x982336: mov     [ebp+var_28], eax
0x982339: cmp     eax, 0FFFFFFFFh
0x98233C: jnz     short loc_98234B
0x98233E: mov     eax, [ebp+var_1C]
0x982341: cmp     eax, [ebp+Buf]
0x982344: jnz     short loc_98235A
0x982346: mov     [ebp+var_20], ebx
0x982349: jmp     short _fgets___$done$25927
0x98234B: mov     ecx, [ebp+var_1C]
0x98234E: mov     [ecx], al
0x982350: inc     [ebp+var_1C]
0x982353: cmp     al, 0Ah
0x982355: jnz     short loc_98231B
0x982357: mov     eax, [ebp+var_1C]
0x98235A: mov     [eax], bl
