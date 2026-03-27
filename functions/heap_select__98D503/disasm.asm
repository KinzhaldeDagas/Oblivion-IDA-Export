0x98D503: push    ebp
0x98D504: mov     ebp, esp
0x98D506: push    ecx
0x98D507: push    ecx
0x98D508: push    esi
0x98D509: lea     eax, [ebp+var_4]
0x98D50C: xor     esi, esi
0x98D50E: push    eax
0x98D50F: mov     [ebp+var_4], esi
0x98D512: mov     [ebp+var_8], esi
0x98D515: call    sub_981BF8
0x98D51A: test    eax, eax
0x98D51C: pop     ecx
0x98D51D: jz      short loc_98D52C
0x98D51F: push    esi
0x98D520: push    esi
0x98D521: push    esi
0x98D522: push    esi
0x98D523: push    esi
0x98D524: call    __invoke_watson
0x98D529: add     esp, 14h
0x98D52C: lea     eax, [ebp+var_8]
0x98D52F: push    eax
0x98D530: call    sub_981C2F
0x98D535: test    eax, eax
0x98D537: pop     ecx
0x98D538: jz      short loc_98D547
0x98D53A: push    esi
0x98D53B: push    esi
0x98D53C: push    esi
0x98D53D: push    esi
0x98D53E: push    esi
0x98D53F: call    __invoke_watson
0x98D544: add     esp, 14h
0x98D547: cmp     [ebp+var_4], 2
0x98D54B: pop     esi
0x98D54C: jnz     short loc_98D559
0x98D54E: cmp     [ebp+var_8], 5
0x98D552: jb      short loc_98D559
0x98D554: xor     eax, eax
0x98D556: inc     eax
0x98D557: leave
0x98D558: retn
0x98D559: push    3
0x98D55B: pop     eax
0x98D55C: leave
0x98D55D: retn
