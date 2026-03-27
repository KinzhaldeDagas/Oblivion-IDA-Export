0x585220: push    esi
0x585221: push    edi
0x585222: mov     edi, [esp+8+Str]
0x585226: push    offset SubStr; SubStr
0x58522B: push    edi; Str
0x58522C: mov     esi, edi
0x58522E: call    _strstr
0x585233: add     esp, 8
0x585236: test    eax, eax
0x585238: jz      short loc_585257
0x58523A: lea     ebx, [ebx+0]
0x585240: add     eax, 1
0x585243: push    offset SubStr; SubStr
0x585248: push    eax; Str
0x585249: mov     esi, eax
0x58524B: call    _strstr
0x585250: add     esp, 8
0x585253: test    eax, eax
0x585255: jnz     short loc_585240
0x585257: lea     eax, [esp+8+Str]
0x58525B: push    eax
0x58525C: push    esi
0x58525D: mov     ecx, offset off_B13948
0x585262: mov     [esp+10h+Str], 0
0x58526A: call    NiTMap_GetAt
0x58526F: mov     eax, [esp+8+Str]
0x585273: test    eax, eax
0x585275: jnz     short loc_585298
0x585277: push    eax
0x585278: push    edi
0x585279: call    sub_584F10
0x58527E: add     esp, 8
0x585281: cmp     [esp+8+arg_4], 0
0x585286: mov     edi, eax
0x585288: jz      short loc_585296
0x58528A: push    edi
0x58528B: push    esi
0x58528C: mov     ecx, offset off_B13948
0x585291: call    sub_412D30
0x585296: mov     eax, edi
0x585298: pop     edi
0x585299: pop     esi
0x58529A: retn
