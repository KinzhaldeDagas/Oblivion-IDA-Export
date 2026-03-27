0x99B005: push    dword ptr [esi]; Str
0x99B007: call    _strlen
0x99B00C: sub     eax, 3
0x99B00F: neg     eax
0x99B011: sbb     eax, eax
0x99B013: inc     eax
0x99B014: pop     ecx
0x99B015: mov     [esi+10h], eax
0x99B018: jz      short loc_99B01F
0x99B01A: push    2
0x99B01C: pop     eax
0x99B01D: jmp     short loc_99B026
0x99B01F: mov     edx, [esi]
0x99B021: call    _GetPrimaryLen
0x99B026: push    1; dwFlags
0x99B028: push    offset _LanguageEnumProc@4; lpLocaleEnumProc
0x99B02D: mov     [esi+0Ch], eax
0x99B030: call    ds:EnumSystemLocalesA
0x99B036: test    byte ptr [esi+8], 4
0x99B03A: jnz     short locret_99B040
0x99B03C: and     dword ptr [esi+8], 0
0x99B040: retn
