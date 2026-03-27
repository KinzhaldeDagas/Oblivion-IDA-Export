0x98262D: push    ebp
0x98262E: mov     ebp, esp
0x982630: push    esi
0x982631: xor     esi, esi
0x982633: cmp     ds:0BA9E10h, esi
0x982639: jnz     short loc_98266B
0x98263B: cmp     [ebp+Str1], esi
0x98263E: jnz     short loc_98265F
0x982640: call    __errno
0x982645: push    esi
0x982646: push    esi
0x982647: push    esi
0x982648: push    esi
0x982649: push    esi
0x98264A: mov     dword ptr [eax], 16h
0x982650: call    __invalid_parameter
0x982655: add     esp, 14h
0x982658: mov     eax, 7FFFFFFFh
0x98265D: jmp     short loc_98267A
0x98265F: cmp     [ebp+Str2], esi
0x982662: jz      short loc_982640
0x982664: pop     esi
0x982665: pop     ebp
0x982666: jmp     ___ascii_stricmp
0x98266B: push    esi; Locale
0x98266C: push    [ebp+Str2]; Str2
0x98266F: push    [ebp+Str1]; Str1
0x982672: call    __stricmp_l
0x982677: add     esp, 0Ch
0x98267A: pop     esi
0x98267B: pop     ebp
0x98267C: retn
