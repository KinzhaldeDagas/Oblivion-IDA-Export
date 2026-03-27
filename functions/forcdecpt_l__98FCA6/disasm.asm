0x98FCA6: push    ebp
0x98FCA7: mov     ebp, esp
0x98FCA9: sub     esp, 10h
0x98FCAC: push    esi
0x98FCAD: push    [ebp+arg_4]; struct localeinfo_struct *
0x98FCB0: lea     ecx, [ebp+var_10]; this
0x98FCB3: call    ??0_LocaleUpdate@@QAE@PAUlocaleinfo_struct@@@Z
0x98FCB8: mov     esi, [ebp+arg_0]
0x98FCBB: movsx   eax, byte ptr [esi]
0x98FCBE: push    eax; C
0x98FCBF: call    _tolower
0x98FCC4: cmp     eax, 65h ; 'e'
0x98FCC7: jmp     short loc_98FCD5
0x98FCC9: inc     esi
0x98FCCA: movzx   eax, byte ptr [esi]
0x98FCCD: push    eax; C
0x98FCCE: call    _isdigit
0x98FCD3: test    eax, eax
0x98FCD5: pop     ecx
0x98FCD6: jnz     short loc_98FCC9
0x98FCD8: movsx   eax, byte ptr [esi]
0x98FCDB: push    eax; C
0x98FCDC: call    _tolower
0x98FCE1: cmp     eax, 78h ; 'x'
0x98FCE4: pop     ecx
0x98FCE5: jnz     short loc_98FCE9
0x98FCE7: inc     esi
0x98FCE8: inc     esi
0x98FCE9: mov     ecx, [ebp+var_10]
0x98FCEC: mov     ecx, [ecx+0BCh]
0x98FCF2: mov     ecx, [ecx]
0x98FCF4: mov     al, [esi]
0x98FCF6: mov     cl, [ecx]
0x98FCF8: mov     [esi], cl
0x98FCFA: inc     esi
0x98FCFB: mov     cl, [esi]
0x98FCFD: mov     [esi], al
0x98FCFF: mov     al, cl
0x98FD01: mov     cl, [esi]
0x98FD03: inc     esi
0x98FD04: test    cl, cl
0x98FD06: jnz     short loc_98FCFB
0x98FD08: cmp     [ebp+var_4], cl
0x98FD0B: pop     esi
0x98FD0C: jz      short locret_98FD15
0x98FD0E: mov     eax, [ebp+var_8]
0x98FD11: and     dword ptr [eax+70h], 0FFFFFFFDh
0x98FD15: leave
0x98FD16: retn
