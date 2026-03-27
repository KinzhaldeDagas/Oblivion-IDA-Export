0x999A08: push    ebp
0x999A09: mov     ebp, esp
0x999A0B: sub     esp, 0Ch
0x999A0E: mov     eax, ___security_cookie
0x999A13: xor     eax, ebp
0x999A15: mov     [ebp+var_4], eax
0x999A18: push    6; cchData
0x999A1A: lea     eax, [ebp+LCData]
0x999A1D: push    eax; lpLCData
0x999A1E: push    1004h; LCType
0x999A23: push    [ebp+Locale]; Locale
0x999A26: mov     [ebp+var_6], 0
0x999A2A: call    ds:GetLocaleInfoA
0x999A30: test    eax, eax
0x999A32: jnz     short loc_999A39
0x999A34: or      eax, 0FFFFFFFFh
0x999A37: jmp     short loc_999A43
0x999A39: lea     eax, [ebp+LCData]
0x999A3C: push    eax; Str
0x999A3D: call    _atol
0x999A42: pop     ecx
0x999A43: mov     ecx, [ebp+var_4]
0x999A46: xor     ecx, ebp
0x999A48: call    @__security_check_cookie@4
0x999A4D: leave
0x999A4E: retn
