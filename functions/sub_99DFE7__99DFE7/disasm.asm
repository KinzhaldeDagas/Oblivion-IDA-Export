0x99DFE7: push    ebp
0x99DFE8: mov     ebp, esp
0x99DFEA: sub     esp, 28h
0x99DFED: mov     eax, ___security_cookie
0x99DFF2: xor     eax, ebp
0x99DFF4: mov     [ebp+var_4], eax
0x99DFF7: push    ebx
0x99DFF8: push    esi
0x99DFF9: mov     esi, [ebp+arg_0]
0x99DFFC: push    edi
0x99DFFD: push    [ebp+arg_8]; struct localeinfo_struct *
0x99E000: mov     edi, [ebp+arg_4]
0x99E003: lea     ecx, [ebp+var_24]; this
0x99E006: call    ??0_LocaleUpdate@@QAE@PAUlocaleinfo_struct@@@Z; _LocaleUpdate::_LocaleUpdate(localeinfo_struct *)
0x99E00B: lea     eax, [ebp+var_24]
0x99E00E: push    eax
0x99E00F: xor     ebx, ebx
0x99E011: push    ebx
0x99E012: push    ebx
0x99E013: push    ebx
0x99E014: push    ebx
0x99E015: push    edi
0x99E016: lea     eax, [ebp+var_28]
0x99E019: push    eax
0x99E01A: lea     eax, [ebp+var_10]
0x99E01D: push    eax
0x99E01E: call    ___strgtold12_l
0x99E023: mov     [ebp+var_14], eax
0x99E026: lea     eax, [ebp+var_10]
0x99E029: push    esi
0x99E02A: push    eax
0x99E02B: call    sub_99F66D
0x99E030: add     esp, 28h
0x99E033: test    byte ptr [ebp+var_14], 3
0x99E037: jnz     short loc_99E064
0x99E039: cmp     eax, 1
0x99E03C: jnz     short loc_99E04F
0x99E03E: cmp     [ebp+var_18], bl
0x99E041: jz      short loc_99E04A
0x99E043: mov     eax, [ebp+var_1C]
0x99E046: and     dword ptr [eax+70h], 0FFFFFFFDh
0x99E04A: push    3
0x99E04C: pop     eax
0x99E04D: jmp     short loc_99E07E
0x99E04F: cmp     eax, 2
0x99E052: jnz     short loc_99E070
0x99E054: cmp     [ebp+var_18], bl
0x99E057: jz      short loc_99E060
0x99E059: mov     eax, [ebp+var_1C]
0x99E05C: and     dword ptr [eax+70h], 0FFFFFFFDh
0x99E060: push    4
0x99E062: jmp     short loc_99E04C
0x99E064: test    byte ptr [ebp+var_14], 1
0x99E068: jnz     short loc_99E054
0x99E06A: test    byte ptr [ebp+var_14], 2
0x99E06E: jnz     short loc_99E03E
0x99E070: cmp     [ebp+var_18], bl
0x99E073: jz      short loc_99E07C
0x99E075: mov     eax, [ebp+var_1C]
0x99E078: and     dword ptr [eax+70h], 0FFFFFFFDh
0x99E07C: xor     eax, eax
0x99E07E: mov     ecx, [ebp+var_4]
0x99E081: pop     edi
0x99E082: pop     esi
0x99E083: xor     ecx, ebp
0x99E085: pop     ebx
0x99E086: call    @__security_check_cookie@4; __security_check_cookie(x)
0x99E08B: leave
0x99E08C: retn
