0x983192: push    ebp
0x983193: mov     ebp, esp
0x983195: sub     esp, 24h
0x983198: mov     eax, [eax+10h]
0x98319B: mov     ecx, [eax+0Ch]
0x98319E: or      [ebp+var_C], 0FFFFFFFFh
0x9831A2: or      [ebp+var_18], 0FFFFFFFFh
0x9831A6: push    ebx
0x9831A7: mov     ebx, [eax+8]
0x9831AA: push    esi
0x9831AB: push    edi; struct PMD *
0x9831AC: xor     edi, edi
0x9831AE: cmp     ebx, edi
0x9831B0: mov     [ebp+var_14], edi
0x9831B3: mov     [ebp+var_1C], edi
0x9831B6: mov     [ebp+var_20], edi
0x9831B9: mov     [ebp+var_24], ecx
0x9831BC: mov     [ebp+var_10], edi
0x9831BF: mov     [ebp+var_1], 1
0x9831C3: mov     [ebp+var_8], edi
0x9831C6: jbe     loc_9832DF
0x9831CC: mov     eax, [ebp+var_8]
0x9831CF: mov     ecx, [ebp+var_24]
0x9831D2: mov     esi, [ecx+eax*4]
0x9831D5: sub     eax, [ebp+var_C]
0x9831D8: cmp     eax, [ebp+var_10]
0x9831DB: jbe     short loc_983210
0x9831DD: mov     eax, [esi]
0x9831DF: mov     ecx, [ebp+arg_C]
0x9831E2: cmp     eax, ecx
0x9831E4: jz      short loc_9831F9
0x9831E6: add     ecx, 8
0x9831E9: push    ecx; Str2
0x9831EA: add     eax, 8
0x9831ED: push    eax; Str1
0x9831EE: call    _strcmp
0x9831F3: test    eax, eax
0x9831F5: pop     ecx
0x9831F6: pop     ecx
0x9831F7: jnz     short loc_983210
0x9831F9: test    byte ptr [esi+14h], 3
0x9831FD: jnz     short loc_983202
0x9831FF: mov     [ebp+var_20], esi
0x983202: mov     eax, [ebp+var_8]
0x983205: mov     [ebp+var_C], eax
0x983208: mov     eax, [esi+4]
0x98320B: mov     edi, esi
0x98320D: mov     [ebp+var_10], eax
0x983210: mov     eax, [esi]
0x983212: mov     ecx, [ebp+arg_4]
0x983215: cmp     eax, ecx
0x983217: jz      short loc_983230
0x983219: add     ecx, 8
0x98321C: push    ecx; Str2
0x98321D: add     eax, 8
0x983220: push    eax; Str1
0x983221: call    _strcmp
0x983226: test    eax, eax
0x983228: pop     ecx
0x983229: pop     ecx
0x98322A: jnz     loc_9832B9
0x983230: push    [ebp+arg_0]; void *
0x983233: lea     eax, [esi+8]
0x983236: call    ?PMDtoOffset@@YAHPAXABUPMD@@@Z
0x98323B: cmp     eax, [ebp+arg_8]
0x98323E: pop     ecx
0x98323F: jnz     short loc_9832B9
0x983241: mov     eax, [ebp+var_8]
0x983244: sub     eax, [ebp+var_C]
0x983247: cmp     eax, [ebp+var_10]
0x98324A: ja      short loc_9832B0
0x98324C: cmp     [ebp+var_1], 0
0x983250: jz      short loc_9832B9
0x983252: test    byte ptr [edi+14h], 40h
0x983256: jnz     short loc_98326C
0x983258: cmp     [ebp+var_C], 0
0x98325C: jnz     short loc_983268
0x98325E: test    byte ptr [esi+14h], 1
0x983262: jz      short loc_983268
0x983264: mov     [ebp+var_1], 0
0x983268: mov     al, 1
0x98326A: jmp     short loc_983287
0x98326C: mov     ecx, [edi+18h]
0x98326F: mov     ecx, [ecx+0Ch]
0x983272: mov     eax, [ecx+eax*4]
0x983275: mov     eax, [eax+14h]
0x983278: test    al, 1
0x98327A: jz      short loc_983280
0x98327C: mov     [ebp+var_1], 0
0x983280: shr     eax, 2
0x983283: not     al
0x983285: and     al, 1
0x983287: cmp     [ebp+var_1], 0
0x98328B: jz      short loc_9832B9
0x98328D: test    al, al
0x98328F: jz      short loc_9832B9
0x983291: push    [ebp+arg_0]; void *
0x983294: lea     eax, [edi+8]
0x983297: call    ?PMDtoOffset@@YAHPAXABUPMD@@@Z
0x98329C: cmp     [ebp+var_14], 0
0x9832A0: pop     ecx
0x9832A1: jz      short loc_9832A8
0x9832A3: cmp     [ebp+var_18], eax
0x9832A6: jnz     short loc_9832DF
0x9832A8: mov     [ebp+var_14], edi
0x9832AB: mov     [ebp+var_18], eax
0x9832AE: jmp     short loc_9832B9
0x9832B0: test    byte ptr [esi+14h], 5
0x9832B4: jnz     short loc_9832B9
0x9832B6: mov     [ebp+var_1C], esi
0x9832B9: inc     [ebp+var_8]
0x9832BC: cmp     [ebp+var_8], ebx
0x9832BF: jb      loc_9831CC
0x9832C5: cmp     [ebp+var_1], 0
0x9832C9: jz      short loc_9832D2
0x9832CB: mov     eax, [ebp+var_14]
0x9832CE: test    eax, eax
0x9832D0: jnz     short loc_9832E1
0x9832D2: cmp     [ebp+var_1C], 0
0x9832D6: jz      short loc_9832DF
0x9832D8: mov     eax, [ebp+var_20]
0x9832DB: test    eax, eax
0x9832DD: jnz     short loc_9832E1
0x9832DF: xor     eax, eax
0x9832E1: pop     edi
0x9832E2: pop     esi
0x9832E3: pop     ebx
0x9832E4: leave
0x9832E5: retn
