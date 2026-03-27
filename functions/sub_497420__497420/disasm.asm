0x497420: mov     eax, [esp+arg_0]
0x497424: push    esi
0x497425: push    eax
0x497426: call    sub_47FAC0
0x49742B: mov     esi, eax
0x49742D: add     esp, 4
0x497430: test    esi, esi
0x497432: jnz     short loc_497436
0x497434: pop     esi
0x497435: retn
0x497436: mov     edx, [esi]
0x497438: mov     eax, [edx+4]
0x49743B: mov     ecx, esi
0x49743D: call    eax
0x49743F: test    eax, eax
0x497441: jz      short loc_497451
0x497443: cmp     eax, offset dword_BA7A20
0x497448: jz      short loc_49745B
0x49744A: mov     eax, [eax+4]
0x49744D: test    eax, eax
0x49744F: jnz     short loc_497443
0x497451: xor     al, al
0x497453: neg     al
0x497455: sbb     eax, eax
0x497457: and     eax, esi
0x497459: pop     esi
0x49745A: retn
0x49745B: mov     al, 1
0x49745D: neg     al
0x49745F: sbb     eax, eax
0x497461: and     eax, esi
0x497463: pop     esi
0x497464: retn
