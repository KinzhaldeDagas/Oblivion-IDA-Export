0x412F40: mov     eax, ecx
0x412F42: mov     ecx, [esp+Str2]
0x412F46: test    ecx, ecx
0x412F48: jz      short loc_412F8D
0x412F4A: mov     eax, [eax]
0x412F4C: test    eax, eax
0x412F4E: jz      short loc_412F8D
0x412F50: cmp     [esp+arg_4], 0
0x412F55: jz      short loc_412F64
0x412F57: push    ecx; Str2
0x412F58: push    eax; Str1
0x412F59: call    __strcmp
0x412F5E: add     esp, 8
0x412F61: retn    8
0x412F64: mov     dl, [eax]
0x412F66: cmp     dl, [ecx]
0x412F68: jnz     short loc_412F85
0x412F6A: test    dl, dl
0x412F6C: jz      short loc_412F80
0x412F6E: mov     dl, [eax+1]
0x412F71: cmp     dl, [ecx+1]
0x412F74: jnz     short loc_412F85
0x412F76: add     eax, 2
0x412F79: add     ecx, 2
0x412F7C: test    dl, dl
0x412F7E: jnz     short loc_412F64
0x412F80: xor     eax, eax
0x412F82: retn    8
0x412F85: sbb     eax, eax
0x412F87: sbb     eax, 0FFFFFFFFh
0x412F8A: retn    8
0x412F8D: xor     eax, eax
0x412F8F: test    ecx, ecx
0x412F91: setz    al
0x412F94: lea     eax, [eax+eax-1]
0x412F98: retn    8
