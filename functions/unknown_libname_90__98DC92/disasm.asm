0x98DC92: push    ebp
0x98DC93: lea     ebp, [esp-64h]
0x98DC97: sub     esp, 94h
0x98DC9D: mov     eax, ___security_cookie
0x98DCA2: xor     eax, ebp
0x98DCA4: mov     [ebp+64h+var_4], eax
0x98DCA7: mov     eax, [ebp+64h+arg_0]
0x98DCAA: push    ebx
0x98DCAB: push    esi
0x98DCAC: mov     esi, [ebp+64h+arg_10]
0x98DCAF: xor     ebx, ebx
0x98DCB1: cmp     [ebp+64h+arg_4], 1
0x98DCB5: push    edi; MaxCount
0x98DCB6: mov     [ebp+64h+var_8C], eax
0x98DCB9: mov     [ebp+64h+var_94], esi
0x98DCBC: jnz     loc_98DDA1
0x98DCC2: push    ebx; CodePage
0x98DCC3: push    80h ; '€'; cbMultiByte
0x98DCC8: lea     edi, [ebp+64h+Src]
0x98DCCB: mov     ecx, edi
0x98DCCD: push    ecx; lpMultiByteStr
0x98DCCE: push    [ebp+64h+LCType]; LCType
0x98DCD1: mov     [ebp+64h+var_88], ebx
0x98DCD4: push    [ebp+64h+Locale]; Locale
0x98DCD7: push    eax; struct localeinfo_struct *
0x98DCD8: call    sub_99CFE4
0x98DCDD: mov     esi, eax
0x98DCDF: add     esp, 18h
0x98DCE2: cmp     esi, ebx
0x98DCE4: jnz     short loc_98DD3D
0x98DCE6: call    ds:GetLastError
0x98DCEC: cmp     eax, 7Ah ; 'z'
0x98DCEF: jnz     short loc_98DD5C
0x98DCF1: push    ebx; CodePage
0x98DCF2: push    ebx; cbMultiByte
0x98DCF3: push    ebx; lpMultiByteStr
0x98DCF4: push    [ebp+64h+LCType]; LCType
0x98DCF7: push    [ebp+64h+Locale]; Locale
0x98DCFA: push    [ebp+64h+var_8C]; struct localeinfo_struct *
0x98DCFD: call    sub_99CFE4
0x98DD02: add     esp, 18h
0x98DD05: cmp     eax, ebx
0x98DD07: mov     [ebp+64h+cbMultiByte], eax
0x98DD0A: jz      short loc_98DD5C
0x98DD0C: xor     esi, esi
0x98DD0E: inc     esi
0x98DD0F: push    esi
0x98DD10: push    eax
0x98DD11: call    unknown_libname_74
0x98DD16: mov     edi, eax
0x98DD18: cmp     edi, ebx
0x98DD1A: pop     ecx
0x98DD1B: pop     ecx
0x98DD1C: jz      short loc_98DD5C
0x98DD1E: push    ebx; CodePage
0x98DD1F: push    [ebp+64h+cbMultiByte]; cbMultiByte
0x98DD22: mov     [ebp+64h+var_88], esi
0x98DD25: push    edi; lpMultiByteStr
0x98DD26: push    [ebp+64h+LCType]; LCType
0x98DD29: push    [ebp+64h+Locale]; Locale
0x98DD2C: push    [ebp+64h+var_8C]; struct localeinfo_struct *
0x98DD2F: call    sub_99CFE4
0x98DD34: mov     esi, eax
0x98DD36: add     esp, 18h
0x98DD39: cmp     esi, ebx
0x98DD3B: jz      short loc_98DD55
0x98DD3D: push    1
0x98DD3F: push    esi
0x98DD40: call    unknown_libname_74
0x98DD45: cmp     eax, ebx
0x98DD47: pop     ecx
0x98DD48: pop     ecx
0x98DD49: mov     ecx, [ebp+64h+var_94]
0x98DD4C: mov     [ecx], eax
0x98DD4E: jnz     short loc_98DD71
