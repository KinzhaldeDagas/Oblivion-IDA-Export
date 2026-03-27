0x99AC09: push    ebp
0x99AC0A: mov     ebp, esp
0x99AC0C: sub     esp, 7Ch
0x99AC0F: mov     eax, ___security_cookie
0x99AC14: xor     eax, ebp
0x99AC16: mov     [ebp+var_4], eax
0x99AC19: push    esi
0x99AC1A: push    edi
0x99AC1B: mov     edi, [ebp+arg_0]
0x99AC1E: call    __getptd
0x99AC23: mov     esi, eax
0x99AC25: mov     edx, edi
0x99AC27: add     esi, 9Ch ; 'œ'
0x99AC2D: call    _LcidFromHexString
0x99AC32: mov     edi, eax
0x99AC34: push    78h ; 'x'; cchData
0x99AC36: lea     eax, [ebp+LCData]
0x99AC39: push    eax; lpLCData
0x99AC3A: mov     eax, [esi+14h]
0x99AC3D: neg     eax
0x99AC3F: sbb     eax, eax
0x99AC41: and     eax, 0FFFFF005h
0x99AC46: add     eax, 1002h
0x99AC4B: push    eax; LCType
0x99AC4C: push    edi; Locale
0x99AC4D: call    ds:GetLocaleInfoA
0x99AC53: test    eax, eax
0x99AC55: jnz     short loc_99AC5D
0x99AC57: and     [esi+8], eax
0x99AC5A: inc     eax
0x99AC5B: jmp     short loc_99AC8F
0x99AC5D: lea     eax, [ebp+LCData]
0x99AC60: push    eax; Str2
0x99AC61: push    dword ptr [esi+4]; Str1
0x99AC64: call    __strcmp
0x99AC69: test    eax, eax
0x99AC6B: pop     ecx
0x99AC6C: pop     ecx
0x99AC6D: jnz     short loc_99AC84
0x99AC6F: push    edi
0x99AC70: call    _TestDefaultCountry
0x99AC75: test    eax, eax
0x99AC77: pop     ecx
0x99AC78: jz      short loc_99AC84
0x99AC7A: or      dword ptr [esi+8], 4
0x99AC7E: mov     [esi+1Ch], edi
0x99AC81: mov     [esi+18h], edi
0x99AC84: mov     eax, [esi+8]
0x99AC87: shr     eax, 2
0x99AC8A: not     eax
0x99AC8C: and     eax, 1
0x99AC8F: mov     ecx, [ebp+var_4]
0x99AC92: pop     edi
0x99AC93: xor     ecx, ebp
0x99AC95: pop     esi
0x99AC96: call    @__security_check_cookie@4
0x99AC9B: leave
0x99AC9C: retn    4
