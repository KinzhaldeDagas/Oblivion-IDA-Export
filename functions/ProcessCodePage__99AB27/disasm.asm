0x99AB27: push    ebp
0x99AB28: mov     ebp, esp
0x99AB2A: sub     esp, 0Ch
0x99AB2D: mov     eax, ___security_cookie
0x99AB32: xor     eax, ebp
0x99AB34: mov     [ebp+var_4], eax
0x99AB37: push    esi
0x99AB38: mov     esi, ecx
0x99AB3A: test    esi, esi
0x99AB3C: jz      short loc_99AB6F
0x99AB3E: cmp     byte ptr [esi], 0
0x99AB41: jz      short loc_99AB6F
0x99AB43: push    offset off_AB07C0; Str2
0x99AB48: push    esi; Str1
0x99AB49: call    _strcmp
0x99AB4E: test    eax, eax
0x99AB50: pop     ecx
0x99AB51: pop     ecx
0x99AB52: jz      short loc_99AB6F
0x99AB54: push    offset off_AB07BC; Str2
0x99AB59: push    esi; Str1
0x99AB5A: call    _strcmp
0x99AB5F: test    eax, eax
0x99AB61: pop     ecx
0x99AB62: pop     ecx
0x99AB63: jnz     short loc_99AB8A
0x99AB65: push    8
0x99AB67: lea     eax, [ebp+LCData]
0x99AB6A: push    eax
0x99AB6B: push    0Bh
0x99AB6D: jmp     short loc_99AB7A
0x99AB6F: push    8; cchData
0x99AB71: lea     eax, [ebp+LCData]
0x99AB74: push    eax; lpLCData
0x99AB75: push    1004h; LCType
0x99AB7A: push    dword ptr [edi+1Ch]; Locale
0x99AB7D: call    ds:GetLocaleInfoA
0x99AB83: test    eax, eax
0x99AB85: jz      short loc_99AB91
0x99AB87: lea     esi, [ebp+LCData]
0x99AB8A: push    esi; Str
0x99AB8B: call    _atol
0x99AB90: pop     ecx
0x99AB91: mov     ecx, [ebp+var_4]
0x99AB94: xor     ecx, ebp
0x99AB96: pop     esi
0x99AB97: call    @__security_check_cookie@4
0x99AB9C: leave
0x99AB9D: retn
