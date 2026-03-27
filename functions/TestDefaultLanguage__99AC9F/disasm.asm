0x99AC9F: push    ebp
0x99ACA0: mov     ebp, esp
0x99ACA2: sub     esp, 7Ch
0x99ACA5: mov     eax, ___security_cookie
0x99ACAA: xor     eax, ebp
0x99ACAC: mov     [ebp+var_4], eax
0x99ACAF: push    esi
0x99ACB0: push    78h ; 'x'; cchData
0x99ACB2: lea     eax, [ebp+LCData]
0x99ACB5: push    eax; lpLCData
0x99ACB6: mov     eax, [ebp+arg_0]
0x99ACB9: and     eax, 3FFh
0x99ACBE: push    1; LCType
0x99ACC0: or      eax, 400h
0x99ACC5: push    eax; Locale
0x99ACC6: mov     esi, ecx
0x99ACC8: call    ds:GetLocaleInfoA
0x99ACCE: test    eax, eax
0x99ACD0: jnz     short loc_99ACD6
0x99ACD2: xor     eax, eax
0x99ACD4: jmp     short loc_99AD04
0x99ACD6: lea     edx, [ebp+LCData]
0x99ACD9: call    _LcidFromHexString
0x99ACDE: cmp     [ebp+arg_0], eax
0x99ACE1: jz      short loc_99AD01
0x99ACE3: cmp     [ebp+arg_4], 0
0x99ACE7: jz      short loc_99AD01
0x99ACE9: mov     esi, [esi]
0x99ACEB: push    edi
0x99ACEC: mov     edx, esi
0x99ACEE: call    _GetPrimaryLen
0x99ACF3: push    esi; Str
0x99ACF4: mov     edi, eax
0x99ACF6: call    _strlen
0x99ACFB: pop     ecx
0x99ACFC: cmp     edi, eax
0x99ACFE: pop     edi
0x99ACFF: jz      short loc_99ACD2
0x99AD01: xor     eax, eax
0x99AD03: inc     eax
0x99AD04: mov     ecx, [ebp+var_4]
0x99AD07: xor     ecx, ebp
0x99AD09: pop     esi
0x99AD0A: call    @__security_check_cookie@4
0x99AD0F: leave
0x99AD10: retn
