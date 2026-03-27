0x45B700: push    esi
0x45B701: push    edi
0x45B702: mov     edi, [esp+8+arg_0]
0x45B706: mov     eax, [edi+8]
0x45B709: shr     eax, 0Eh
0x45B70C: test    al, 1
0x45B70E: mov     esi, ecx
0x45B710: jnz     short loc_45B76E
0x45B712: mov     ecx, ds:0B33398h
0x45B718: push    ebx
0x45B719: mov     ebx, [ecx+10h]
0x45B71C: call    dword ptr ds:0A2808Ch
0x45B722: cmp     eax, ebx
0x45B724: pop     ebx
0x45B725: jnz     short loc_45B72C
0x45B727: mov     al, [esi+18h]
0x45B72A: jmp     short loc_45B732
0x45B72C: mov     eax, [esi+18h]
0x45B72F: shr     eax, 12h
0x45B732: and     al, 1
0x45B734: test    al, al
0x45B736: jz      short loc_45B761
0x45B738: mov     ecx, [esi+4]
0x45B73B: test    ecx, ecx
0x45B73D: jz      short loc_45B74F
0x45B73F: mov     edx, [esp+8+arg_4]
0x45B743: push    edx
0x45B744: push    edi
0x45B745: call    sub_452C20
0x45B74A: pop     edi
0x45B74B: pop     esi
0x45B74C: retn    8
0x45B74F: mov     eax, [esp+8+arg_4]
0x45B753: mov     ecx, [esi]
0x45B755: push    eax
0x45B756: push    edi
0x45B757: call    sub_452C20
0x45B75C: pop     edi
0x45B75D: pop     esi
0x45B75E: retn    8
0x45B761: mov     ecx, [esp+8+arg_4]
0x45B765: push    ecx
0x45B766: mov     ecx, [esi]
0x45B768: push    edi
0x45B769: call    sub_452C20
0x45B76E: pop     edi
0x45B76F: pop     esi
0x45B770: retn    8
