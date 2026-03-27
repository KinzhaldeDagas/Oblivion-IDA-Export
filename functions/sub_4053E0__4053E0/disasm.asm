0x4053E0: mov     eax, [esp+arg_0]
0x4053E4: push    ebx
0x4053E5: xor     bl, bl
0x4053E7: test    eax, eax
0x4053E9: jz      short loc_405436
0x4053EB: mov     eax, [eax+34h]
0x4053EE: test    eax, eax
0x4053F0: jz      short loc_405436
0x4053F2: push    esi
0x4053F3: push    5Ch ; '\'; Val
0x4053F5: push    eax; Str
0x4053F6: call    _strchr
0x4053FB: mov     esi, eax
0x4053FD: add     esp, 8
0x405400: test    esi, esi
0x405402: jz      short loc_40542C
0x405404: push    6; MaxCount
0x405406: push    offset aMenus; "\\menus"
0x40540B: push    esi; Str1
0x40540C: call    __strnicmp
0x405411: add     esp, 0Ch
0x405414: test    eax, eax
0x405416: jz      short loc_405431
0x405418: push    5Ch ; '\'; Val
0x40541A: add     esi, 1
0x40541D: push    esi; Str
0x40541E: call    _strchr
0x405423: mov     esi, eax
0x405425: add     esp, 8
0x405428: test    esi, esi
0x40542A: jnz     short loc_405404
0x40542C: pop     esi
0x40542D: mov     al, bl
0x40542F: pop     ebx
0x405430: retn
0x405431: pop     esi
0x405432: mov     al, 1
0x405434: pop     ebx
0x405435: retn
0x405436: mov     al, bl
0x405438: pop     ebx
0x405439: retn
