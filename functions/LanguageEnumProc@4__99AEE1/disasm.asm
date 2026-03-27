0x99AEE1: push    ebp
0x99AEE2: mov     ebp, esp
0x99AEE4: sub     esp, 7Ch
0x99AEE7: mov     eax, ___security_cookie
0x99AEEC: xor     eax, ebp
0x99AEEE: mov     [ebp+var_4], eax
0x99AEF1: push    esi
0x99AEF2: push    edi
0x99AEF3: mov     edi, [ebp+arg_0]
0x99AEF6: call    __getptd
0x99AEFB: mov     esi, eax
0x99AEFD: mov     edx, edi
0x99AEFF: add     esi, 9Ch ; 'œ'
0x99AF05: call    _LcidFromHexString
0x99AF0A: mov     edi, eax
0x99AF0C: push    78h ; 'x'; cchData
0x99AF0E: lea     eax, [ebp+LCData]
0x99AF11: push    eax; lpLCData
0x99AF12: mov     eax, [esi+10h]
0x99AF15: neg     eax
0x99AF17: sbb     eax, eax
0x99AF19: and     eax, 0FFFFF002h
0x99AF1E: add     eax, 1001h
0x99AF23: push    eax; LCType
0x99AF24: push    edi; Locale
0x99AF25: call    ds:GetLocaleInfoA
0x99AF2B: test    eax, eax
0x99AF2D: jnz     short loc_99AF35
0x99AF2F: and     [esi+8], eax
0x99AF32: inc     eax
0x99AF33: jmp     short loc_99AF90
0x99AF35: lea     eax, [ebp+LCData]
0x99AF38: push    eax; Str2
0x99AF39: push    dword ptr [esi]; Str1
0x99AF3B: call    __strcmp
0x99AF40: test    eax, eax
0x99AF42: pop     ecx
0x99AF43: pop     ecx
0x99AF44: jnz     short loc_99AF4F
0x99AF46: cmp     [esi+10h], eax
0x99AF49: jnz     short loc_99AF7B
0x99AF4B: push    1
0x99AF4D: jmp     short loc_99AF6D
0x99AF4F: cmp     dword ptr [esi+10h], 0
0x99AF53: jnz     short loc_99AF85
0x99AF55: cmp     dword ptr [esi+0Ch], 0
0x99AF59: jz      short loc_99AF85
0x99AF5B: lea     eax, [ebp+LCData]
0x99AF5E: push    eax; Str2
0x99AF5F: push    dword ptr [esi]; Str1
0x99AF61: call    __strcmp
0x99AF66: test    eax, eax
0x99AF68: pop     ecx
0x99AF69: pop     ecx
0x99AF6A: jnz     short loc_99AF85
0x99AF6C: push    eax
0x99AF6D: push    edi
0x99AF6E: mov     ecx, esi
0x99AF70: call    _TestDefaultLanguage
0x99AF75: test    eax, eax
0x99AF77: pop     ecx
0x99AF78: pop     ecx
0x99AF79: jz      short loc_99AF85
0x99AF7B: or      dword ptr [esi+8], 4
0x99AF7F: mov     [esi+18h], edi
0x99AF82: mov     [esi+1Ch], edi
0x99AF85: mov     eax, [esi+8]
0x99AF88: shr     eax, 2
0x99AF8B: not     eax
0x99AF8D: and     eax, 1
0x99AF90: mov     ecx, [ebp+var_4]
0x99AF93: pop     edi
0x99AF94: xor     ecx, ebp
0x99AF96: pop     esi
0x99AF97: call    @__security_check_cookie@4
0x99AF9C: leave
0x99AF9D: retn    4
