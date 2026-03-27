0x99AFA0: push    dword ptr [esi]; Str
0x99AFA2: call    _strlen
0x99AFA7: push    dword ptr [esi+4]; Str
0x99AFAA: sub     eax, 3
0x99AFAD: neg     eax
0x99AFAF: sbb     eax, eax
0x99AFB1: inc     eax
0x99AFB2: mov     [esi+10h], eax
0x99AFB5: call    _strlen
0x99AFBA: sub     eax, 3
0x99AFBD: neg     eax
0x99AFBF: sbb     eax, eax
0x99AFC1: and     dword ptr [esi+18h], 0
0x99AFC5: inc     eax
0x99AFC6: cmp     dword ptr [esi+10h], 0
0x99AFCA: pop     ecx
0x99AFCB: pop     ecx
0x99AFCC: mov     [esi+14h], eax
0x99AFCF: jz      short loc_99AFD6
0x99AFD1: push    2
0x99AFD3: pop     eax
0x99AFD4: jmp     short loc_99AFDD
0x99AFD6: mov     edx, [esi]
0x99AFD8: call    _GetPrimaryLen
0x99AFDD: push    1; dwFlags
0x99AFDF: push    offset _LangCountryEnumProc@4; lpLocaleEnumProc
0x99AFE4: mov     [esi+0Ch], eax
0x99AFE7: call    ds:EnumSystemLocalesA
0x99AFED: mov     eax, [esi+8]
0x99AFF0: test    ax, 100h
0x99AFF4: jz      short loc_99B000
0x99AFF6: test    ax, 200h
0x99AFFA: jz      short loc_99B000
0x99AFFC: test    al, 7
0x99AFFE: jnz     short locret_99B004
0x99B000: and     dword ptr [esi+8], 0
0x99B004: retn
